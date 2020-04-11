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
int yydebug=1;

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
%right ATTR
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS

%type <n> file program module declarations declaration instructs instruct

%%

file : program {;}
	| module {;}
	;

program : PROGRAM declarations START body END {;}
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

literals : LITERAL_I {;}
	| LITERAL_C {;}
	| LITERAL_S {;}
	;

function: DO {;}
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
	| IF expression THEN instructs elifs FI {;}
	| IF expression THEN instructs FI {;}
	| IF expression THEN elifs FI {;}
	;

elifs : ELIF expression THEN instructs {;}
	;

expression : LITERAL_I '+' LITERAL_I {;}
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
