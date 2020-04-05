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

[A-Za-z][A-Za-z0-9_]*	return IDENTIFICADOR;
\'[^']*\'		;
[0-9]+			;
[-()<>=+*/%;{}.]	return *yytext;

[ \t\n\r]+		ECHO; /* ignore whitespace */

.			yyerror("Unknown character");
%%
int yywrap(void) { return 1; }
char *getyytext() { return yytext; }
