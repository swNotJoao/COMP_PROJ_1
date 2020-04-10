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

%token <s> IDENTIFICADOR

 /* Reserved words */
%token PROGRAM MODULE START END
%token VOID CONST NUMBER ARRAY STRING
%token FUNCTION PUBLIC FORWARD
%token IF THEN ELSE ELIF FI FOR UNTIL STEP DO DONE REPEAT STOP
%token RETURN

%nonassoc IFX
%nonassoc ELSE
%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/' '%'
%nonassoc UMINUS

%start program

%type <n> program instructs statement

%%

program : PROGRAM instructs END {;}
	;

instructs : statement {;}
	| instructs statement {;}
					;

statement : ';' {;}
	| IF {;}
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
