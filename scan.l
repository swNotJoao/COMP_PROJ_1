%{
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "y.tab.h"
char *dupstr(const char *s);
extern void yyerror(const char *msg);
%}

%%

\$\$.*			; /* explanatory comments */
\$([^\$]|\$\$)*\$	; /* operational comments */

 /*
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
 */

[A-Za-z][A-Za-z0-9_]*	{ yylval.s = dupstr(yytext); return VARIABLE; /* Identifier */}
\'[^']*\'		{ yytext[yyleng-1] = 0; yylval.s = dupstr(yytext+1); return STRING; /* String */}
[0-9]+			{ yylval.i = strtol(yytext, 0, 10); return INTEGER; /* Literal */}
[-()<>=+*/%;{}.]	return *yytext;

[ \t\n\r]+		; /* whitespace */

.			yyerror("Unknown character");
%%
int yywrap(void) { return 1; }
char *getyytext() { return yytext; }
