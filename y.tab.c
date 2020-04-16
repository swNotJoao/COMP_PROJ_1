/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "minor.y"
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

#line 17 "minor.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int i;			/* integer value */
	char *s;		/* symbol name or string literal */
	Node *n;		/* node pointer */
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define LITERAL_I 257
#define LITERAL_S 258
#define LITERAL_C 259
#define IDENTIFICADOR 260
#define PROGRAM 261
#define MODULE 262
#define START 263
#define END 264
#define VOID 265
#define CONST 266
#define NUMBER 267
#define ARRAY 268
#define STRING 269
#define FUNCTION 270
#define PUBLIC 271
#define FORWARD 272
#define IF 273
#define THEN 274
#define ELSE 275
#define ELIF 276
#define FI 277
#define FOR 278
#define UNTIL 279
#define STEP 280
#define DO 281
#define DONE 282
#define REPEAT 283
#define STOP 284
#define RETURN 285
#define ATTR 286
#define GE 287
#define LE 288
#define EQ 289
#define NE 290
#define UMINUS 291
#define UINPUT 292
#define UNEG 293
#define UAND 294
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    1,    3,    3,    4,    4,
    4,    4,    4,    4,    4,    4,   11,   11,   11,   12,
   12,   12,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    9,    9,
   14,   14,   10,   10,   13,   13,   13,    7,    7,    7,
    5,    5,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,    6,   16,   16,   17,   18,
   18,   19,   19,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,    2,
    2,
};
static const YYINT yylen[] = {                            2,
    1,    1,    5,    4,    4,    3,    1,    3,    1,    5,
    3,    2,    4,    2,    3,    1,    1,    2,    3,    1,
    1,    1,    6,    7,    6,    5,    7,    6,    6,    5,
    6,    5,    5,    4,    6,    5,    5,    4,    1,    1,
    1,    3,    5,    2,    1,    1,    1,    3,    2,    1,
    1,    2,    8,    7,    6,    5,    5,    4,    9,    2,
    2,    1,    1,    2,    1,    4,    1,    2,    4,    1,
    3,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    2,    2,
    2,    2,    1,    3,    3,    4,    2,    4,    3,    3,
    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    1,    2,    0,    0,   45,   47,   46,
    0,   39,   40,    0,    7,    9,    0,    0,    0,  101,
    0,   20,   22,   21,    0,    6,    0,    0,   62,   63,
    0,    0,    0,    0,    0,    0,    0,    0,   51,    0,
   41,   88,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   12,    0,    0,  100,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   52,    5,    0,   86,   72,
   83,   84,   85,   81,   80,   75,   76,   77,   78,   79,
   73,   74,   61,    0,   60,    0,   82,   97,    0,    0,
    0,    0,    0,    0,    4,    0,    8,    0,    0,   17,
    0,    0,    0,    0,    0,   95,   94,    0,   42,    0,
    0,    0,    0,    0,   38,    0,    0,    0,    0,   34,
    0,    3,    0,    0,   18,    0,    0,   96,    0,   58,
    0,    0,   67,    0,   98,   66,   37,    0,   36,    0,
    0,   30,    0,    0,   26,    0,   33,    0,   32,    0,
   19,   43,    0,    0,    0,   56,    0,   57,   68,    0,
   35,   29,    0,   28,   25,    0,   23,   31,    0,    0,
    0,   55,    0,   27,   24,    0,   54,    0,    0,   53,
    0,   59,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,   14,   15,   38,   39,   40,   16,   17,   41,
   99,   42,   19,   43,   44,  132,  133,  103,   89,
};
static const YYINT yysindex[] = {                      -136,
  280,  334,    0,    0,    0,  760, -180,    0,    0,    0,
  186,    0,    0,  -40,    0,    0, -127, -264, -227,    0,
  -58,    0,    0,    0,   -5,    0,  500,  500,    0,    0,
  500,  500,  500,  500,  500,  500,  500, 1205,    0, -211,
    0,    0,   -2,  403, -208, -201, -244, -185,  906,  433,
 -180,    0, -153,   -6,    0,  500,  438,  464,  881,   84,
   84,  475,   84,   84,  534,    0,    0,  939,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  500,    0,  500,    0,    0,  500, -153,
  -91, -151, -149,  -86,    0, -150,    0, -158,  -41,    0,
 -121,  881,  -10, 1109,  500,    0,    0, 1205,    0,  574,
  735,  881,  -41,  939,    0,  -43,   63,  138,  939,    0,
  -22,    0, -153, -153,    0,   37,  500,    0,  500,    0,
 1068, -110,    0,  805,    0,    0,    0,  939,    0, -180,
  939,    0,  -20,  939,    0,  -17,    0,  939,    0,  -41,
    0,    0,  881,  831, 1205,    0, -116,    0,    0,  500,
    0,    0,  939,    0,    0,  939,    0,    0, 1205, 1138,
 1205,    0,  842,    0,    0, 1205,    0, 1147, 1205,    0,
 1176,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -44,    0,    0,
    0,    0,    0,    0,  -33,    0,    0,    0,    0,    0,
  400,    0,    0,    0,  367,    0,    0,  -42,    0,    0,
    0,    0,    0,    0,    5,    0,    0,    0,    0,    0,
    0,    0,    0,  -53,    0,    0,    0,    0, 1221,    3,
   39,    0,   75,  111,    0,    0,    0,    8,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   10,   31,    0,
    0,   11,    0,    0,    0,    0,    0,   33,    0,    0,
    0,  795,   41,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   44,
    0,    0,   29,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -88,    0,    0,    0,    0,
    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,  141,  100,  -48,   16,  330,    0,  146,  365,
  -72, 1473,    2,  -23, 1439,   48, -125,    0,    0,
};
#define YYTABLESIZE 1646
static const YYINT yytable[] = {                         87,
   50,   87,  124,   87,   87,   44,  159,   87,   87,   87,
   87,   87,   48,   87,   16,  140,   50,  113,   50,  108,
   92,   53,    8,    9,   10,   87,   87,   87,   87,   87,
  128,  159,   54,  127,   56,   90,  140,   90,  140,   90,
   90,  140,   90,   90,   90,   90,   90,   90,   93,   90,
  150,   70,   67,   66,   70,  131,   68,   87,   91,   87,
   87,   90,   90,   14,   90,   90,   49,  116,   11,   71,
  121,   91,   71,   91,   94,   91,   91,   90,   91,   91,
   91,   91,   91,   91,  101,   91,    8,    9,   10,   15,
   87,   48,   87,  143,  146,   90,   90,   91,   91,   13,
   91,   91,   10,   22,   23,   24,  170,   89,  117,   89,
  118,   89,   89,  122,   89,   89,   89,   89,   89,   89,
  176,   89,  178,   66,    1,    2,   90,  123,   90,  152,
  181,   91,   91,   89,   89,  126,   89,   89,   51,    8,
    9,   10,   21,   92,   87,   92,   66,   92,   92,   97,
   92,   92,   92,   92,   92,   92,   47,   92,  171,  129,
  172,    0,   91,    0,   91,  129,  158,   89,   89,   92,
   92,    0,   92,   92,   84,    8,    9,   10,  157,    0,
    8,    9,   10,    0,    0,   66,   69,   69,   69,  114,
  115,   66,    0,   66,  119,  120,   66,    0,   89,    0,
   89,    0,    0,   92,   92,   55,    0,    0,    0,   44,
   44,    0,    0,    0,    0,   22,   23,   24,   16,   16,
   50,   50,   49,   87,   87,   87,   87,   44,   44,   87,
   87,    0,   44,    0,   92,    0,   92,  138,  139,   87,
   87,   87,   87,   87,   87,   87,   87,   87,   87,   87,
   87,   87,   87,   87,   87,    0,   87,    0,  148,  149,
  163,  164,   90,  166,  167,   90,   90,   14,   14,    0,
   49,   49,   11,   11,    0,   90,   90,   90,   90,   90,
   90,   90,   90,   90,   90,   90,   90,   90,   90,   90,
   90,    0,   90,   15,   15,   48,   48,    0,   91,    0,
    0,   91,   91,   13,   13,    0,   10,   10,    0,    0,
    0,   91,   91,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   91,   91,   91,    0,   91,    8,
    9,   10,    0,    0,   89,    0,    0,   89,   89,    0,
   22,   23,   24,  141,  142,    0,    0,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
   89,   89,   89,    0,   89,   18,   18,    0,    0,    0,
   92,   45,    0,   92,   92,    0,    0,    0,   96,    0,
    0,   52,    0,   92,   92,   92,   92,   92,   92,   92,
   92,   92,   92,   92,   92,   92,   92,   92,   92,   93,
   92,   93,    0,   93,    8,    9,   10,   93,   93,   93,
   93,    0,    0,   93,   18,   98,    0,    0,  144,  145,
    0,    0,    0,    0,    0,   93,   93,   93,   93,    0,
    0,    0,  109,    0,    0,   85,    0,   86,    0,   80,
   81,    0,    0,  137,   78,   76,    0,   77,  147,   79,
   46,    0,    8,    9,   10,    0,   12,   13,   65,   93,
   93,   83,   75,   87,   74,    0,    0,  161,    0,    0,
  162,    0,    0,  165,   80,   81,    0,  168,    0,   78,
   76,    0,   77,    0,   79,    0,    0,    0,    0,    0,
   93,    0,  174,   84,    0,  175,   70,   75,   87,   74,
   80,   81,    0,    0,  109,   78,   76,    0,   77,    0,
   79,   80,   81,    0,    0,    0,   78,   76,    0,   77,
    0,   79,    0,   75,   87,   74,   82,    0,   84,    0,
    0,   70,    0,    0,   75,   87,   74,   33,    0,   37,
    0,    0,    6,    0,   32,    7,    8,    9,   10,   11,
   12,   13,    0,    0,   84,    0,    0,   70,    0,    0,
    0,   82,   35,    0,    0,   84,    0,  106,   70,    0,
   80,   81,    0,    0,  107,   78,   76,    0,   77,    0,
   79,    0,    0,    0,    0,    0,    0,   82,    0,    0,
   34,    0,    0,   75,   87,   74,    0,   20,   82,    7,
    8,    9,   10,   11,   12,   13,    0,    0,    0,    0,
   80,   81,    0,    0,    0,   78,   76,    0,   77,    0,
   79,    0,    0,    0,   84,   36,    0,   70,    0,   93,
   93,    0,    0,   75,   87,   74,    0,    0,    0,   93,
   93,   93,   93,   93,   93,   93,   93,   93,   93,   93,
   93,   93,   93,   93,   93,    0,   93,   82,    0,   22,
   23,   24,   65,   65,   84,    0,  135,   70,    0,    0,
    0,    0,   65,    0,   65,   65,   65,   65,    0,    0,
    0,   65,   65,   65,   65,    0,    0,    0,   69,   71,
   72,    0,   73,    0,   22,   23,   24,   82,    7,    8,
    9,   10,   11,   12,   13,    0,    0,    0,    0,    0,
    0,  104,    0,    0,    0,    0,    0,    0,    0,    0,
   22,   23,   24,   69,   71,   72,    0,   73,    0,    0,
    0,   22,   23,   24,    0,    0,    0,    0,    0,    0,
    0,    0,  105,    0,    0,    0,    0,    0,    0,   69,
   71,   72,    0,   73,    0,    0,   22,   23,   24,   25,
   69,   71,   72,    0,   73,    0,    0,    0,    0,    0,
    0,   80,   81,    0,    0,    0,   78,   76,    0,   77,
    0,   79,    0,    0,    0,    0,    0,    0,    0,    0,
   22,   23,   24,  136,   75,   87,   74,   33,    0,   37,
    0,    0,    0,    0,   32,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   69,
   71,   72,   35,   73,    0,   84,    0,   99,   70,   99,
   22,   23,   24,    0,   99,   99,    0,    0,   99,    0,
    0,   80,   81,    0,    0,    0,   78,   76,    0,   77,
   34,   79,    0,   99,    0,    0,    0,   99,   82,   69,
   71,   72,    0,   73,   75,   87,   74,   80,   81,    0,
    0,    0,   78,   76,    0,   77,    0,   79,   80,   81,
    0,    0,    0,   78,   76,   36,   77,   99,   79,    0,
   75,   87,   74,    0,    0,   84,    0,    0,   70,    0,
    0,   75,   87,   74,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   80,   81,    0,
   99,   84,   78,   76,   70,   77,    0,   79,   82,    0,
    0,    0,   84,    0,    0,   70,    0,    0,    0,    0,
   75,   87,   74,   33,    0,   37,    0,    0,    0,    0,
   32,    0,    0,    0,   82,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   82,    0,    0,   35,    0,
    0,   84,    0,    0,   70,    0,   33,    0,   37,    0,
    0,    0,    0,   32,    0,    0,    0,    0,    0,    0,
    0,   22,   23,   24,    0,    0,   34,    0,    0,    0,
    0,   35,    0,    0,   82,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   22,   23,   24,   25,
   69,   71,   72,   26,   73,    0,    8,    9,   10,   34,
    0,   36,   27,    0,    0,    0,    0,   28,    0,    0,
    0,    0,   29,   30,   31,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   99,    0,    0,   99,   99,    0,
    0,   22,   23,   24,   36,    0,    0,   99,   99,   99,
   99,   99,   99,   99,   99,   99,   99,   99,   99,   99,
    0,    0,    0,    0,  160,    0,    0,   22,   23,   24,
   69,   71,   72,    0,   73,    0,    0,    0,   22,   23,
   24,    0,    0,    0,  169,   33,    0,   37,    0,    0,
    0,    0,   32,    0,    0,    0,   69,   71,   72,    0,
   73,    0,  179,    0,    0,    0,    0,   69,   71,   72,
   35,   73,    0,    0,    0,    0,    0,   22,   23,   24,
    0,    0,    0,    0,    0,    0,   33,    0,   37,    0,
    0,    0,    0,   32,    0,    0,    0,    0,   34,    0,
    0,    0,   22,   23,   24,   25,   69,   71,   72,   95,
   73,   35,    8,    9,   10,   33,    0,   37,   27,    0,
    0,    0,   32,   28,   33,    0,   37,    0,   29,   30,
   31,   32,    0,   36,    0,   22,   23,   24,   25,   34,
   35,    0,    0,    0,    0,    8,    9,   10,    0,   35,
    0,   27,    0,   33,    0,   37,   28,    0,    0,    0,
   32,   29,   30,   31,    0,    0,    0,    0,   34,    0,
    0,    0,    0,    0,   36,    0,    0,   34,   35,    0,
    0,    0,   33,    0,   37,    0,    0,    0,    0,   32,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   64,    0,    0,   36,    0,    0,   34,   35,    0,    0,
    0,    0,   36,    0,    0,    0,    0,    0,    0,   64,
    0,    0,    0,   64,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   34,    0,    0,    0,    0,
    0,   36,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   22,   23,   24,   25,    0,    0,
   36,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   27,    0,  155,  129,  156,   28,   64,    0,    0,    0,
   29,   30,   31,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   22,   23,   24,   25,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   27,    0,    0,  129,  130,   28,    0,    0,    0,
    0,   29,   30,   31,   22,   23,   24,   25,    0,    0,
    0,    0,    0,   22,   23,   24,   25,    0,    0,    0,
   27,    0,    0,    0,  177,   28,    0,    0,    0,   27,
   29,   30,   31,  180,   28,    0,    0,    0,    0,   29,
   30,   31,   22,   23,   24,   25,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   27,    0,
    0,    0,    0,   28,    0,    0,    0,  182,   29,   30,
   31,   22,   23,   24,   25,   57,   58,    0,    0,   59,
   60,   61,   62,   63,   64,   65,    0,   27,    0,    0,
   64,    0,   28,   64,   64,    0,    0,   29,   30,   31,
    0,    0,    0,   64,  102,   64,   64,   64,   64,    0,
    0,    0,   64,   64,   64,   64,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   88,    0,    0,    0,
    0,    0,  110,    0,  111,  100,    0,  112,    0,   88,
   88,   88,   88,   88,   88,   88,   88,   88,    0,    0,
    0,    0,    0,  134,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  100,    0,    0,  153,    0,  154,    0,    0,
    0,  125,    0,    0,   88,    0,    0,    0,    0,    0,
    0,    0,   88,   88,   88,  125,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  100,  151,    0,  173,    0,
    0,    0,    0,    0,    0,    0,   88,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  125,    0,    0,   88,   88,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   88,
};
static const YYINT yycheck[] = {                         33,
   59,   35,   44,   37,   38,   59,  132,   41,   42,   43,
   44,   45,   11,   47,   59,   59,   59,   90,   59,   68,
  265,  286,  267,  268,  269,   59,   60,   61,   62,   63,
   41,  157,  260,   44,   40,   33,   59,   35,   59,   37,
   38,   59,   40,   41,   42,   43,   44,   45,   47,   47,
  123,   41,  264,   38,   44,  104,   59,   91,  260,   93,
   94,   59,   60,   59,   62,   63,   59,   91,   59,   41,
   94,   33,   44,   35,  260,   37,   38,  286,   40,   41,
   42,   43,   44,   45,   91,   47,  267,  268,  269,   59,
  124,   59,  126,  117,  118,   93,   94,   59,   60,   59,
   62,   63,   59,  257,  258,  259,  155,   33,  260,   35,
  260,   37,   38,  264,   40,   41,   42,   43,   44,   45,
  169,   47,  171,  108,  261,  262,  124,  286,  126,   93,
  179,   93,   94,   59,   60,  257,   62,   63,  266,  267,
  268,  269,    2,   33,   61,   35,  131,   37,   38,   50,
   40,   41,   42,   43,   44,   45,   11,   47,  275,  276,
  277,   -1,  124,   -1,  126,  276,  277,   93,   94,   59,
   60,   -1,   62,   63,   91,  267,  268,  269,  131,   -1,
  267,  268,  269,   -1,   -1,  170,  275,  276,  277,  281,
  282,  176,   -1,  178,  281,  282,  181,   -1,  124,   -1,
  126,   -1,   -1,   93,   94,  264,   -1,   -1,   -1,  263,
  264,   -1,   -1,   -1,   -1,  257,  258,  259,  263,  264,
  263,  264,  263,  257,  258,  259,  260,  281,  282,  263,
  264,   -1,  286,   -1,  124,   -1,  126,  281,  282,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,  290,   -1,  281,  282,
  281,  282,  260,  281,  282,  263,  264,  263,  264,   -1,
  263,  264,  263,  264,   -1,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,  285,  286,  287,
  288,   -1,  290,  263,  264,  263,  264,   -1,  260,   -1,
   -1,  263,  264,  263,  264,   -1,  263,  264,   -1,   -1,
   -1,  273,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,  285,  286,  287,  288,   -1,  290,  267,
  268,  269,   -1,   -1,  260,   -1,   -1,  263,  264,   -1,
  257,  258,  259,  281,  282,   -1,   -1,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  285,
  286,  287,  288,   -1,  290,    1,    2,   -1,   -1,   -1,
  260,    7,   -1,  263,  264,   -1,   -1,   -1,   49,   -1,
   -1,   17,   -1,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  285,  286,  287,  288,   33,
  290,   35,   -1,   37,  267,  268,  269,   41,   42,   43,
   44,   -1,   -1,   47,   50,   51,   -1,   -1,  281,  282,
   -1,   -1,   -1,   -1,   -1,   59,   60,   61,   62,   -1,
   -1,   -1,   68,   -1,   -1,   33,   -1,   35,   -1,   37,
   38,   -1,   -1,  114,   42,   43,   -1,   45,  119,   47,
  265,   -1,  267,  268,  269,   -1,  271,  272,   59,   93,
   94,   59,   60,   61,   62,   -1,   -1,  138,   -1,   -1,
  141,   -1,   -1,  144,   37,   38,   -1,  148,   -1,   42,
   43,   -1,   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,
  124,   -1,  163,   91,   -1,  166,   94,   60,   61,   62,
   37,   38,   -1,   -1,  140,   42,   43,   -1,   45,   -1,
   47,   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,
   -1,   47,   -1,   60,   61,   62,  124,   -1,   91,   -1,
   -1,   94,   -1,   -1,   60,   61,   62,   38,   -1,   40,
   -1,   -1,  263,   -1,   45,  266,  267,  268,  269,  270,
  271,  272,   -1,   -1,   91,   -1,   -1,   94,   -1,   -1,
   -1,  124,   63,   -1,   -1,   91,   -1,   93,   94,   -1,
   37,   38,   -1,   -1,   41,   42,   43,   -1,   45,   -1,
   47,   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,   -1,
   91,   -1,   -1,   60,   61,   62,   -1,  264,  124,  266,
  267,  268,  269,  270,  271,  272,   -1,   -1,   -1,   -1,
   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,   -1,
   47,   -1,   -1,   -1,   91,  126,   -1,   94,   -1,  263,
  264,   -1,   -1,   60,   61,   62,   -1,   -1,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  286,  287,  288,   -1,  290,  124,   -1,  257,
  258,  259,  263,  264,   91,   -1,   93,   94,   -1,   -1,
   -1,   -1,  273,   -1,  275,  276,  277,  278,   -1,   -1,
   -1,  282,  283,  284,  285,   -1,   -1,   -1,  286,  287,
  288,   -1,  290,   -1,  257,  258,  259,  124,  266,  267,
  268,  269,  270,  271,  272,   -1,   -1,   -1,   -1,   -1,
   -1,  274,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  258,  259,  286,  287,  288,   -1,  290,   -1,   -1,
   -1,  257,  258,  259,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  279,   -1,   -1,   -1,   -1,   -1,   -1,  286,
  287,  288,   -1,  290,   -1,   -1,  257,  258,  259,  260,
  286,  287,  288,   -1,  290,   -1,   -1,   -1,   -1,   -1,
   -1,   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  258,  259,   59,   60,   61,   62,   38,   -1,   40,
   -1,   -1,   -1,   -1,   45,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  286,
  287,  288,   63,  290,   -1,   91,   -1,   33,   94,   35,
  257,  258,  259,   -1,   40,   41,   -1,   -1,   44,   -1,
   -1,   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,
   91,   47,   -1,   59,   -1,   -1,   -1,   63,  124,  286,
  287,  288,   -1,  290,   60,   61,   62,   37,   38,   -1,
   -1,   -1,   42,   43,   -1,   45,   -1,   47,   37,   38,
   -1,   -1,   -1,   42,   43,  126,   45,   93,   47,   -1,
   60,   61,   62,   -1,   -1,   91,   -1,   -1,   94,   -1,
   -1,   60,   61,   62,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   37,   38,   -1,
  126,   91,   42,   43,   94,   45,   -1,   47,  124,   -1,
   -1,   -1,   91,   -1,   -1,   94,   -1,   -1,   -1,   -1,
   60,   61,   62,   38,   -1,   40,   -1,   -1,   -1,   -1,
   45,   -1,   -1,   -1,  124,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  124,   -1,   -1,   63,   -1,
   -1,   91,   -1,   -1,   94,   -1,   38,   -1,   40,   -1,
   -1,   -1,   -1,   45,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,  258,  259,   -1,   -1,   91,   -1,   -1,   -1,
   -1,   63,   -1,   -1,  124,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,
  286,  287,  288,  264,  290,   -1,  267,  268,  269,   91,
   -1,  126,  273,   -1,   -1,   -1,   -1,  278,   -1,   -1,
   -1,   -1,  283,  284,  285,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  260,   -1,   -1,  263,  264,   -1,
   -1,  257,  258,  259,  126,   -1,   -1,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,   -1,  280,   -1,   -1,  257,  258,  259,
  286,  287,  288,   -1,  290,   -1,   -1,   -1,  257,  258,
  259,   -1,   -1,   -1,  274,   38,   -1,   40,   -1,   -1,
   -1,   -1,   45,   -1,   -1,   -1,  286,  287,  288,   -1,
  290,   -1,  281,   -1,   -1,   -1,   -1,  286,  287,  288,
   63,  290,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
   -1,   -1,   -1,   -1,   -1,   -1,   38,   -1,   40,   -1,
   -1,   -1,   -1,   45,   -1,   -1,   -1,   -1,   91,   -1,
   -1,   -1,  257,  258,  259,  260,  286,  287,  288,  264,
  290,   63,  267,  268,  269,   38,   -1,   40,  273,   -1,
   -1,   -1,   45,  278,   38,   -1,   40,   -1,  283,  284,
  285,   45,   -1,  126,   -1,  257,  258,  259,  260,   91,
   63,   -1,   -1,   -1,   -1,  267,  268,  269,   -1,   63,
   -1,  273,   -1,   38,   -1,   40,  278,   -1,   -1,   -1,
   45,  283,  284,  285,   -1,   -1,   -1,   -1,   91,   -1,
   -1,   -1,   -1,   -1,  126,   -1,   -1,   91,   63,   -1,
   -1,   -1,   38,   -1,   40,   -1,   -1,   -1,   -1,   45,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   40,   -1,   -1,  126,   -1,   -1,   91,   63,   -1,   -1,
   -1,   -1,  126,   -1,   -1,   -1,   -1,   -1,   -1,   59,
   -1,   -1,   -1,   63,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   91,   -1,   -1,   -1,   -1,
   -1,  126,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,   -1,
  126,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  273,   -1,  275,  276,  277,  278,  126,   -1,   -1,   -1,
  283,  284,  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  273,   -1,   -1,  276,  277,  278,   -1,   -1,   -1,
   -1,  283,  284,  285,  257,  258,  259,  260,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,   -1,   -1,   -1,
  273,   -1,   -1,   -1,  277,  278,   -1,   -1,   -1,  273,
  283,  284,  285,  277,  278,   -1,   -1,   -1,   -1,  283,
  284,  285,  257,  258,  259,  260,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,   -1,
   -1,   -1,   -1,  278,   -1,   -1,   -1,  282,  283,  284,
  285,  257,  258,  259,  260,   27,   28,   -1,   -1,   31,
   32,   33,   34,   35,   36,   37,   -1,  273,   -1,   -1,
  260,   -1,  278,  263,  264,   -1,   -1,  283,  284,  285,
   -1,   -1,   -1,  273,   56,  275,  276,  277,  278,   -1,
   -1,   -1,  282,  283,  284,  285,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   44,   -1,   -1,   -1,
   -1,   -1,   84,   -1,   86,   53,   -1,   89,   -1,   57,
   58,   59,   60,   61,   62,   63,   64,   65,   -1,   -1,
   -1,   -1,   -1,  105,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   90,   -1,   -1,  127,   -1,  129,   -1,   -1,
   -1,   99,   -1,   -1,  102,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  110,  111,  112,  113,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  123,  124,   -1,  160,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  134,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  150,   -1,   -1,  153,  154,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  173,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 294
#define YYUNDFTOKEN 316
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,"'#'",0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,
0,0,0,0,0,0,0,0,"';'","'<'","'='","'>'","'?'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"'|'",0,"'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"LITERAL_I","LITERAL_S",
"LITERAL_C","IDENTIFICADOR","PROGRAM","MODULE","START","END","VOID","CONST",
"NUMBER","ARRAY","STRING","FUNCTION","PUBLIC","FORWARD","IF","THEN","ELSE",
"ELIF","FI","FOR","UNTIL","STEP","DO","DONE","REPEAT","STOP","RETURN","ATTR",
"GE","LE","EQ","NE","UMINUS","UINPUT","UNEG","UAND",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : file",
"file : program",
"file : module",
"program : PROGRAM declarations START body END",
"program : PROGRAM declarations START END",
"program : PROGRAM START body END",
"program : PROGRAM START END",
"declarations : declaration",
"declarations : declarations ';' declaration",
"declaration : function",
"declaration : qualifier CONST variable ATTR literals",
"declaration : qualifier CONST variable",
"declaration : qualifier variable",
"declaration : CONST variable ATTR literals",
"declaration : CONST variable",
"declaration : variable ATTR literals",
"declaration : variable",
"literals : literal",
"literals : literals literal",
"literals : literals ',' literal",
"literal : LITERAL_I",
"literal : LITERAL_C",
"literal : LITERAL_S",
"function : FUNCTION qualifier type IDENTIFICADOR variables DONE",
"function : FUNCTION qualifier type IDENTIFICADOR variables DO body",
"function : FUNCTION qualifier type IDENTIFICADOR DO body",
"function : FUNCTION qualifier type IDENTIFICADOR DONE",
"function : FUNCTION qualifier VOID IDENTIFICADOR variables DO body",
"function : FUNCTION qualifier VOID IDENTIFICADOR variables DONE",
"function : FUNCTION qualifier VOID IDENTIFICADOR DO body",
"function : FUNCTION qualifier VOID IDENTIFICADOR DONE",
"function : FUNCTION type IDENTIFICADOR variables DO body",
"function : FUNCTION type IDENTIFICADOR variables DONE",
"function : FUNCTION type IDENTIFICADOR DO body",
"function : FUNCTION type IDENTIFICADOR DONE",
"function : FUNCTION VOID IDENTIFICADOR variables DO body",
"function : FUNCTION VOID IDENTIFICADOR variables DONE",
"function : FUNCTION VOID IDENTIFICADOR DO body",
"function : FUNCTION VOID IDENTIFICADOR DONE",
"qualifier : PUBLIC",
"qualifier : FORWARD",
"variables : variable",
"variables : variables ';' variable",
"variable : type IDENTIFICADOR '[' LITERAL_I ']'",
"variable : type IDENTIFICADOR",
"type : NUMBER",
"type : STRING",
"type : ARRAY",
"body : variables ';' instructs",
"body : variables ';'",
"body : instructs",
"instructs : instruct",
"instructs : instructs instruct",
"instruct : IF expression THEN instructs elifs ELSE instructs FI",
"instruct : IF expression THEN instructs ELSE instructs FI",
"instruct : IF expression THEN instructs elifs FI",
"instruct : IF expression THEN instructs FI",
"instruct : IF expression THEN elifs FI",
"instruct : IF expression THEN FI",
"instruct : FOR expression UNTIL expression STEP expression DO instructs DONE",
"instruct : expression '!'",
"instruct : expression ';'",
"instruct : REPEAT",
"instruct : STOP",
"instruct : RETURN expression",
"instruct : RETURN",
"instruct : expression '#' expression ';'",
"elifs : elif",
"elifs : elifs elif",
"elif : ELIF expression THEN instructs",
"args : expression",
"args : args ',' expression",
"operator : '^'",
"operator : '&'",
"operator : '|'",
"operator : '+'",
"operator : '-'",
"operator : '*'",
"operator : '/'",
"operator : '%'",
"operator : '<'",
"operator : '>'",
"operator : '='",
"operator : GE",
"operator : LE",
"operator : NE",
"operator : ATTR",
"expression : IDENTIFICADOR",
"expression : literal",
"expression : '?' expression",
"expression : '-' expression",
"expression : '&' expression",
"expression : '~' expression",
"expression : '?'",
"expression : '(' expression ')'",
"expression : '[' expression ']'",
"expression : IDENTIFICADOR '(' args ')'",
"expression : expression literal",
"expression : expression '[' expression ']'",
"expression : expression operator expression",
"module : MODULE declarations END",
"module : MODULE END",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 189 "minor.y"

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
#line 731 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 47 "minor.y"
	{;}
break;
case 2:
#line 48 "minor.y"
	{;}
break;
case 3:
#line 51 "minor.y"
	{;}
break;
case 4:
#line 52 "minor.y"
	{;}
break;
case 5:
#line 53 "minor.y"
	{;}
break;
case 6:
#line 54 "minor.y"
	{;}
break;
case 7:
#line 57 "minor.y"
	{;}
break;
case 8:
#line 58 "minor.y"
	{;}
break;
case 9:
#line 61 "minor.y"
	{;}
break;
case 10:
#line 62 "minor.y"
	{;}
break;
case 11:
#line 63 "minor.y"
	{;}
break;
case 12:
#line 64 "minor.y"
	{;}
break;
case 13:
#line 65 "minor.y"
	{;}
break;
case 14:
#line 66 "minor.y"
	{;}
break;
case 15:
#line 67 "minor.y"
	{;}
break;
case 16:
#line 68 "minor.y"
	{;}
break;
case 17:
#line 71 "minor.y"
	{;}
break;
case 18:
#line 72 "minor.y"
	{;}
break;
case 19:
#line 73 "minor.y"
	{;}
break;
case 20:
#line 76 "minor.y"
	{;}
break;
case 21:
#line 77 "minor.y"
	{/*$$ = yylval.s[0])*/;}
break;
case 22:
#line 78 "minor.y"
	{;}
break;
case 23:
#line 81 "minor.y"
	{;}
break;
case 24:
#line 82 "minor.y"
	{;}
break;
case 25:
#line 83 "minor.y"
	{;}
break;
case 26:
#line 84 "minor.y"
	{;}
break;
case 27:
#line 85 "minor.y"
	{;}
break;
case 28:
#line 86 "minor.y"
	{;}
break;
case 29:
#line 87 "minor.y"
	{;}
break;
case 30:
#line 88 "minor.y"
	{;}
break;
case 31:
#line 89 "minor.y"
	{;}
break;
case 32:
#line 90 "minor.y"
	{;}
break;
case 33:
#line 91 "minor.y"
	{;}
break;
case 34:
#line 92 "minor.y"
	{;}
break;
case 35:
#line 93 "minor.y"
	{;}
break;
case 36:
#line 94 "minor.y"
	{;}
break;
case 37:
#line 95 "minor.y"
	{;}
break;
case 38:
#line 96 "minor.y"
	{;}
break;
case 39:
#line 99 "minor.y"
	{;}
break;
case 40:
#line 100 "minor.y"
	{;}
break;
case 41:
#line 103 "minor.y"
	{;}
break;
case 42:
#line 104 "minor.y"
	{;}
break;
case 43:
#line 107 "minor.y"
	{;}
break;
case 44:
#line 108 "minor.y"
	{;}
break;
case 45:
#line 111 "minor.y"
	{;}
break;
case 46:
#line 112 "minor.y"
	{;}
break;
case 47:
#line 113 "minor.y"
	{;}
break;
case 48:
#line 116 "minor.y"
	{;}
break;
case 49:
#line 117 "minor.y"
	{;}
break;
case 50:
#line 118 "minor.y"
	{;}
break;
case 51:
#line 121 "minor.y"
	{;}
break;
case 52:
#line 122 "minor.y"
	{;}
break;
case 53:
#line 125 "minor.y"
	{;}
break;
case 54:
#line 126 "minor.y"
	{;}
break;
case 55:
#line 127 "minor.y"
	{;}
break;
case 56:
#line 128 "minor.y"
	{;}
break;
case 57:
#line 129 "minor.y"
	{;}
break;
case 58:
#line 130 "minor.y"
	{;}
break;
case 59:
#line 131 "minor.y"
	{;}
break;
case 60:
#line 132 "minor.y"
	{;}
break;
case 61:
#line 133 "minor.y"
	{;}
break;
case 62:
#line 134 "minor.y"
	{;}
break;
case 63:
#line 135 "minor.y"
	{;}
break;
case 64:
#line 136 "minor.y"
	{;}
break;
case 65:
#line 137 "minor.y"
	{;}
break;
case 66:
#line 138 "minor.y"
	{;}
break;
case 67:
#line 141 "minor.y"
	{;}
break;
case 68:
#line 142 "minor.y"
	{;}
break;
case 69:
#line 145 "minor.y"
	{;}
break;
case 70:
#line 148 "minor.y"
	{;}
break;
case 71:
#line 149 "minor.y"
	{;}
break;
case 72:
#line 152 "minor.y"
	{;}
break;
case 73:
#line 153 "minor.y"
	{;}
break;
case 74:
#line 154 "minor.y"
	{;}
break;
case 75:
#line 155 "minor.y"
	{;}
break;
case 76:
#line 156 "minor.y"
	{;}
break;
case 77:
#line 157 "minor.y"
	{;}
break;
case 78:
#line 158 "minor.y"
	{;}
break;
case 79:
#line 159 "minor.y"
	{;}
break;
case 80:
#line 160 "minor.y"
	{;}
break;
case 81:
#line 161 "minor.y"
	{;}
break;
case 82:
#line 162 "minor.y"
	{;}
break;
case 83:
#line 163 "minor.y"
	{;}
break;
case 84:
#line 164 "minor.y"
	{;}
break;
case 85:
#line 165 "minor.y"
	{;}
break;
case 86:
#line 166 "minor.y"
	{;}
break;
case 87:
#line 168 "minor.y"
	{;}
break;
case 88:
#line 169 "minor.y"
	{;}
break;
case 89:
#line 170 "minor.y"
	{;}
break;
case 90:
#line 171 "minor.y"
	{;}
break;
case 91:
#line 172 "minor.y"
	{;}
break;
case 92:
#line 173 "minor.y"
	{;}
break;
case 93:
#line 174 "minor.y"
	{;}
break;
case 94:
#line 175 "minor.y"
	{;}
break;
case 95:
#line 176 "minor.y"
	{;}
break;
case 96:
#line 177 "minor.y"
	{;}
break;
case 97:
#line 178 "minor.y"
	{;}
break;
case 98:
#line 179 "minor.y"
	{;}
break;
case 99:
#line 180 "minor.y"
	{;}
break;
case 100:
#line 184 "minor.y"
	{;}
break;
case 101:
#line 185 "minor.y"
	{;}
break;
#line 1337 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
