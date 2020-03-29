%{
#include <stdlib.h>
#include <string.h>
#include "node.h"

char *dupstr(const char *s);
/*extern void yyerror(const char *msg);*/

%}

%%
\$\$.*			ECHO; /* explanatory comments */
\$([^\$]|\$\$)*\$	ECHO; /* operational comments */

[A-Za-z][A-Za-z0-9_]*	{}
\'[^']*\'		{ }
[0-9]+			{}
[-()<>=+*/%;{}.]	return *yytext;

[ \t\n\r]+		; /* ignore whitespace */

.			;/*yyerror("Unknown character");*/
%%
int yywrap(void) { return 1; }
char *getyytext() { return yytext; }
