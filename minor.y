%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "node.h"
#include "tabid.h"

int yylex();
void evaluate(Node *p);
void yyerror(char *s);
int lbl;
/*int yydebug=1;*/

%}

%union {
	int i;			/* integer value */
	char *s;		/* symbol name or string literal */
	Node *n;		/* node pointer */
};

%token <i> LITERAL_I
%token <s> LITERAL_S
%token <i> LITERAL_C

%token <s> IDENTIFICADOR

 /* Reserved words */
%token PROGRAM MODULE START END
%token VOID CONST NUMBER ARRAY STRING
%token FUNCTION PUBLIC FORWARD
%token IF THEN ELSE ELIF FI FOR UNTIL STEP DO DONE REPEAT STOP
%token RETURN

%nonassoc IFX
%nonassoc ELSE
%right ATTR '^'
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/' '%' '&' '|'
%nonassoc UMINUS  '?' '~' UAND

%type <n> file program module declarations declaration instructs instruct

%%

file : program {;}
	| module {;}
	;

program : PROGRAM declarations START body END {;}
	| PROGRAM declarations START END {;}
	| PROGRAM START body END {;}
	;

declarations : declaration {;}
	| declarations ';' declaration {;}
	;

declaration : function {;}
	| qualifier CONST variable ATTR literals {;}
	| qualifier CONST variable {;}
	| qualifier variable{;}
	| CONST variable {;}
	| CONST variable ATTR literals {;}
	| variable ATTR literals {;}
	| variable {;}
	;

literals : literal {;}
	| literals literal {;}
	| literals ',' literal {;}
	;

literal : LITERAL_I {;}
	| LITERAL_C {/*$$ = yylval.s[0])*/;}
	| LITERAL_S {;}
	;

function: FUNCTION qualifier type IDENTIFICADOR variables	DONE {;}
	| FUNCTION qualifier type IDENTIFICADOR variables	DO body {;}
	| FUNCTION qualifier type IDENTIFICADOR variables	DONE {;}
	| FUNCTION qualifier type IDENTIFICADOR	DO body {;}
	| FUNCTION qualifier type IDENTIFICADOR	DONE {;}
	| FUNCTION qualifier VOID IDENTIFICADOR variables	DO body {;}
	| FUNCTION qualifier VOID IDENTIFICADOR variables	DONE {;}
	| FUNCTION qualifier VOID IDENTIFICADOR	DO body {;}
	| FUNCTION qualifier VOID IDENTIFICADOR	DONE {;}
	| FUNCTION type IDENTIFICADOR variables	DO body {;}
	| FUNCTION type IDENTIFICADOR variables	DONE {;}
	| FUNCTION type IDENTIFICADOR	DO body {;}
	| FUNCTION type IDENTIFICADOR	DONE {;}
	| FUNCTION VOID IDENTIFICADOR variables	DO body {;}
	| FUNCTION VOID IDENTIFICADOR variables	DONE {;}
	| FUNCTION VOID IDENTIFICADOR	DO body {;}
	| FUNCTION VOID IDENTIFICADOR	DONE {;}
	;

qualifier : PUBLIC {;}
	| FORWARD {;}
	;

variables : variable {;}
	| variables ';' variable {;}
	;

variable : type IDENTIFICADOR '[' LITERAL_I ']' {;}
	| type IDENTIFICADOR {;}
	;

type : NUMBER {;}
	| STRING {;}
	| ARRAY {;}
	;

body : variables ';' instructs {;}
	| variables ';' {;}
	| instructs {;}
	;

instructs : instruct {;}
	| instructs instruct {;}
	;

instruct : IF expression THEN instructs elifs ELSE instructs FI {;}
	| IF expression THEN instructs ELSE instructs FI {;}
	| IF expression THEN instructs elifs FI {;}
	| IF expression THEN instructs FI {;}
	| IF expression THEN elifs FI {;}
	| IF expression THEN FI {;}
	| FOR expression UNTIL expression STEP expression DO instructs DONE {;}
	| expression '!' {;}
	| expression ';' {;}
	| REPEAT {;}
	| STOP {;}
	| RETURN expression {;}
	| RETURN {;}
	| expression '#' expression ';' {;}
	;

elifs : elif {;}
	| elifs elif {;}
	;

elif : ELIF expression THEN instructs {;}
	;

args : expression {;}
	| args ',' expression {;}
	;

expression	: '?' expression %prec '?' {;}
	| '-' expression %prec UMINUS		  {;}
	| '&' expression %prec UAND	{;}
	| '~' expression %prec '~' {;}
	| '?' {;}
	| expression '^' expression			  {;}
	| expression '&' expression			  {;}
	| expression '|' expression			  {;}
	| expression '+' expression			  {;}
	| expression '-' expression			  {;}
	| expression '*' expression			  {;}
	| expression '/' expression			  {;}
	| expression '%' expression			  {;}
	| expression '<' expression			  {;}
	| expression '>' expression			  {;}
	| expression '=' expression			  {;}
	| expression GE expression			  {;}
	| expression LE expression			  {;}
	| expression NE expression			  {;}
	| '(' expression ')'			  {;}
	| '[' expression ']' {;}
	| LITERAL_I			  {;}
	| LITERAL_C {;}
	| LITERAL_S {;}
	| IDENTIFICADOR			  {;}
	| IDENTIFICADOR '(' args ')' {;}
	| expression '[' expression ']' ATTR expression {;}
	| IDENTIFICADOR ATTR expression {;}
	| expression '[' expression ']'
	;


module : MODULE declarations END {;}
	| MODULE END {;}
	;

%%

char *mklbl(int n) {
  static char buf[20];
  sprintf(buf, "_i%d", n);
  return strdup(buf);
}

char **yynames =
#if YYDEBUG > 0
		 (char**)yyname;
#else
		 0;
#endif
