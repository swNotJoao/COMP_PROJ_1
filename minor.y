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

%token DECLARATIONS DECLARATION BODY NIL VAR LITERAL

%nonassoc ELSE
%right ATTR '^'
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/' '%' '&' '|' ULOCATION
%nonassoc UMINUS UINPUT UNEG UAND

%type <n> file program module declarations declaration instructs instruct expression
%type <n> literals int_vec literal function qualifier type variable variables
%type <n> elif elifs args body

%%

file : program {;}
	| module {;}
	;

program : PROGRAM declarations START body END {$$ = binNode(PROGRAM, $2, $4);}
	| PROGRAM declarations START END {printNode(uniNode(PROGRAM, $2), 0, (char**)yyname);}
	| PROGRAM START body END {uniNode(PROGRAM, $3);}
	;

module : MODULE declarations END {printNode(uniNode(MODULE, $2), 0, (char**)yyname);}
	| MODULE END {printNode(nilNode(NIL), 0, (char**)yyname);}
	;

declarations : declaration {$$ = uniNode(DECLARATION, $1);}
	| declarations ';' declaration {$$ = binNode(DECLARATIONS, $1, $3);}
	;

declaration : function {$$ = uniNode(FUNCTION, $1);}
	| qualifier CONST variable ATTR literals {$$ = binNode(CONST, $3, $5);}
	| qualifier CONST variable ATTR int_vec {$$ = binNode(CONST, $3, $5);}
	| qualifier CONST variable {$$ = uniNode(CONST, $3);}
	| qualifier variable {$$ = uniNode(VAR, $2);}
	| CONST variable ATTR literals {$$ = binNode(CONST, $2, $4);}
	| CONST variable ATTR int_vec {$$ = binNode(CONST, $2, $4);}
	| CONST variable {$$ = uniNode(CONST, $2);}
	| variable ATTR literals {$$ = binNode(ATTR, $1, $3);}
	| variable ATTR int_vec {$$ = binNode(ATTR, $1, $3);}
	| variable {$$ = uniNode(VAR, $1);}
	;

literals : literal {$$ = uniNode(LITERAL, $1);}
	| literals literal {$$ = binNode(LITERAL, $1, $2);}
	;

int_vec : LITERAL_I {$$ = intNode(LITERAL_I, $1);}
	| int_vec ',' LITERAL_I {$$ = binNode(',', $1, intNode(LITERAL_I, $3));}
	;

literal : LITERAL_I {$$ = intNode(LITERAL_I, $1);}
	| LITERAL_C {$$ = intNode(LITERAL_C, $1);}
	| LITERAL_S {$$ = strNode(LITERAL_S, $1);}
	;

function: FUNCTION qualifier type IDENTIFICADOR variables	DONE {;}
	| FUNCTION qualifier type IDENTIFICADOR variables	DO body {;}
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

qualifier : PUBLIC {$$ = nilNode(NIL);}
	| FORWARD {$$ = nilNode(NIL);}
	;

variables : variable {$$ = uniNode(VAR, $1);}
	| variables ';' variable {$$ = binNode(';', $1, $3);}
	;

variable : type IDENTIFICADOR '[' LITERAL_I ']' {$$ = triNode('[', $1, strNode(IDENTIFICADOR, $2), intNode(LITERAL_I, $4));}
	| type IDENTIFICADOR {$$ = binNode(IDENTIFICADOR, $1, strNode(IDENTIFICADOR, $2));}
	;

type : NUMBER {$$ = nilNode(NUMBER);}
	| STRING {$$ = nilNode(STRING);}
	| ARRAY {$$ = nilNode(ARRAY);}
	;

body : variables ';' instructs {$$ = binNode(';', $1, $3);}
	| variables ';' {$$ = uniNode(';', $1);}
	| instructs {$$ = uniNode(';', $1);}
	;

instructs : instruct {$$ = uniNode(';', $1);}
	| instructs instruct {$$ = binNode(';', $1, $2);}
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
	| literals '!' {;}
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

args : expression {$$ = $1;}
	| args ',' expression {$$ = binNode(',', $1, $3);}
	;

expression	: '?'  {$$ = nilNode(UINPUT);}
	| '~' expression %prec UNEG {$$ = uniNode(UNEG, $2);}
	|	IDENTIFICADOR '(' args ')' {;}
	| IDENTIFICADOR {$$ = strNode(IDENTIFICADOR, $1);}
	|	literal {$$ = $1;}
	| '(' expression ')' {$$ = $2;}
	| expression '[' expression ']' {;}
	| expression '+' expression {$$ = binNode('+', $1, $3);}
	| expression '-' expression {$$ = binNode('-', $1, $3);}
	| '-' expression %prec UMINUS {$$ = uniNode(UMINUS, $2);}
	| expression '*' expression {$$ = binNode('*', $1, $3);}
	| expression '/' expression {$$ = binNode('/', $1, $3);}
	| expression '%' expression {$$ = binNode('%', $1, $3);}
	| expression '^' expression {$$ = binNode('^', $1, $3);}
	| expression '>' expression {$$ = binNode('>', $1, $3);}
	| expression '<' expression {$$ = binNode('<', $1, $3);}
	| expression '=' expression {$$ = binNode('=', $1, $3);}
	| expression '|' expression {$$ = binNode('|', $1, $3);}
	| expression '&' expression {$$ = binNode('&', $1, $3);}
	| '&' expression %prec ULOCATION {$$ = uniNode(ULOCATION, $2);}
	| expression GE expression {$$ = binNode(GE, $1, $3);}
	| expression LE expression {$$ = binNode(LE, $1, $3);}
	| expression NE expression {$$ = binNode(NE, $1, $3);}
	| expression ATTR expression {$$ = binNode(ATTR, $1, $3);}
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
