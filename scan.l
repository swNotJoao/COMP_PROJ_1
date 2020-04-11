%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "y.tab.h"

char *dupstr(const char *s);
extern void yyerror(const char *msg);

%}

%%

\$\$.*			;
\$([^\$]|\$\$)*\$	;

"program" return PROGRAM;
"module" return MODULE;
"start" return START;
"end" return END;
"void" return VOID;
"const" return CONST;
"number" return NUMBER;
"array" return ARRAY;
"string" return STRING;
"function" return FUNCTION;
"public" return PUBLIC;
"forward" return FORWARD;
"if" return IF;
"then" return THEN;
"else" return ELSE;
"elif" return ELIF;
"fi" return FI;
"for" return FOR;
"until" return UNTIL;
"step" return STEP;
"do" return DO;
"done" return DONE;
"repeat" return REPEAT;
"stop" return STOP;
"return" return RETURN;
":=" return ATTR;

[A-Za-z][A-Za-z0-9_]*	return IDENTIFICADOR;
\"([^"]|\\\")*\"		{yytext[yyleng-1] = 0; yylval.s = dupstr(yytext+1); return LITERAL_S;}
\'([^']|\\\')*\'		{if (yyleng - 2 == 1) return LITERAL_C; yytext[yyleng-1] = 0; yylval.s = dupstr(yytext+1); return LITERAL_S;}
[0-9]+			{yylval.i = strtol(yytext, 0, 10); return LITERAL_I;}
[-()<>=+*/%^;{}.,!?|&~]	return *yytext;

[ \t\n\r]+		;

.			yyerror("Unknown Character");
%%
int yywrap(void) { return 1; }
char *getyytext() { return yytext; }
