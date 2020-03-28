%{
#include <stdlib.h>
#include <string.h>
#include "node.h"
#include "y.tab.h"
char *dupstr(const char *s);
extern void yyerror(const char *msg);
%}

%%
"#".*			; /* comment */
">="			return GE;
"<="			return LE;
"=="			return EQ;
"!="			return NE;
"while"			return WHILE;
"if"			return IF;
"else"			return ELSE;
"print"			return PRINT;
"read"			return READ;
"program"		return PROGRAM;
"end"			return END;

[A-Za-z][A-Za-z0-9_]*	{}
\'[^']*\'		{ }
[0-9]+			{}
[-()<>=+*/%;{}.]	return *yytext;

[ \t\n\r]+		; /* ignore whitespace */

.			yyerror("Unknown character");
%%
int yywrap(void) { return 1; }
char *getyytext() { return yytext; }
