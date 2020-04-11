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

#line 2 "gram.y"
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

#line 17 "gram.y"
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
#define IFX 286
#define ATTR 287
#define GE 288
#define LE 289
#define EQ 290
#define NE 291
#define UMINUS 292
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    3,    3,    4,    4,    4,    4,
    4,    4,    4,    4,   11,   11,   11,   12,   12,   12,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    9,    9,   14,   14,   10,   10,   13,   13,   13,    7,
    7,    7,    5,    5,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,    6,   16,   16,   17,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,    2,    2,
};
static const YYINT yylen[] = {                            2,
    1,    1,    5,    4,    1,    3,    1,    5,    3,    2,
    2,    4,    3,    1,    1,    2,    3,    1,    1,    1,
    6,    7,    6,    5,    7,    6,    7,    6,    5,    7,
    5,    6,    5,    4,    6,    5,    6,    5,    4,    6,
    1,    1,    1,    3,    5,    2,    1,    1,    1,    3,
    2,    1,    1,    2,    8,    6,    5,    5,    4,    9,
    2,    2,    1,    1,    2,    1,    1,    2,    4,    1,
    1,    2,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    1,    2,    0,    0,   47,   49,   48,
    0,   41,   42,    0,    5,    7,    0,    0,    0,   90,
    0,   70,   71,    0,    0,   63,   64,    0,    0,    0,
    0,   53,    0,   43,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   10,    0,    0,   89,    0,    0,    0,
    0,    0,   54,    4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   62,   61,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    6,    0,
   18,   20,   19,    0,   15,    0,    0,    0,   88,    0,
   44,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   39,    0,
    0,    0,    0,   34,    0,    3,    0,    0,   16,    0,
    0,   59,    0,    0,   67,    0,   38,    0,   36,    0,
    0,   29,    0,    0,   24,    0,   33,    0,   31,    0,
   17,   45,    0,   57,    0,   58,   68,    0,   37,   28,
    0,   26,   23,    0,   21,   32,    0,    0,   56,    0,
   27,   22,    0,    0,    0,   55,    0,   60,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,   14,   15,   31,   32,   33,   16,   17,   34,
   84,   85,   19,   35,   36,  124,  125,
};
static const YYINT yysindex[] = {                      -240,
  -69,  208,    0,    0,    0,  717, -154,    0,    0,    0,
  369,    0,    0,  -10,    0,    0, -132, -274, -244,    0,
  -41,    0,    0,  -25,  -25,    0,    0,  -25,  -25,  -25,
  344,    0, -239,    0,  -18,  495, -242, -212, -160, -209,
  717,   86, -154,    0,  -67,  -39,    0,  521,  532,  827,
  -14,  571,    0,    0,  717,  -25,  -25,  -25,  -25,  -25,
  -25,  -25,  -25,  -25,  -25,    0,    0,  -25,  -25,  -25,
  -25,  -25,  -67, -186, -206, -199, -128, -202,    0, -216,
    0,    0,    0,  -43,    0, -182,  562,  -25,    0,  344,
    0,  635,  635,  635,  635,  635,  867,  867,  -14,  -14,
  -14,  827,  827,  827,  827,  827,  -43,  717,    0,  -56,
  -97,  -86,  717,    0,  -53,    0,  -67,  -67,    0,   -8,
  -25,    0,  816, -241,    0,  606,    0,  717,    0, -154,
  717,    0,  -48,  717,    0,  -16,    0,  717,    0,  -43,
    0,    0,  754,    0,  -64,    0,    0,  -25,    0,    0,
  717,    0,    0,  717,    0,    0,  344,  344,    0,  789,
    0,    0,  344,  977,  344,    0,  224,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -42,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  993,    0,    0,
   -1,    0,    0,    0,    0,    0,    4,    0,    0,    0,
    0,    0,    0,    0,    0,  254,    0,    0,    0,  748,
  -33,    0,    0,    0,   29,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   32,
    0,    0,    0,   34,    0,    0,    0,    0,    0,   59,
    0,  147,  177,  430,  460,  490,   87,  117,   -3,   27,
   57,  784,  860,  889,  919,  948,   62,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   64,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  110,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,   75,   37,  -32,  -12,   35,    0,   81,  544,
  -71,  -34,   -6,  -46, 1223,  -22,  -92,
};
#define YYTABLESIZE 1371
static const YYINT yytable[] = {                         72,
  118,  107,  130,   72,   40,  130,   72,   72,   72,   72,
  130,   72,   45,   72,   30,   46,   14,   42,   53,   29,
    1,    2,   90,   70,   54,   72,   72,  110,   72,   79,
  115,  147,   76,   79,  121,  146,   79,   79,   79,   79,
   55,   79,  130,   79,   73,  140,   72,   74,   42,  119,
   77,   86,  147,  111,  123,   79,   79,   52,   79,   80,
  112,  116,   11,   80,  133,  136,   80,   80,   80,   80,
  117,   80,  119,   80,  120,   78,   21,   53,   79,   68,
    8,    9,   10,  141,  142,   80,   80,   51,   80,   81,
    9,   39,   13,   81,  108,  109,   81,   81,   81,   81,
  145,   81,    0,   81,   75,  119,    8,    9,   10,   71,
   53,   69,    8,    9,   10,   81,   81,   50,   81,   77,
   12,    0,    8,    0,  163,  164,   77,   77,    0,   77,
    0,   77,  167,   43,    8,    9,   10,    0,    8,    9,
   10,    0,  127,    0,    0,   77,   77,  137,   77,   78,
   53,   53,  113,  114,   53,    0,   78,   78,    0,   78,
    0,   78,  149,    0,    0,  150,    0,    0,  153,    8,
    9,   10,  156,    0,    0,   78,   78,    0,   78,   84,
    8,    9,   10,  131,  132,  161,   84,   84,  162,   81,
   82,   83,    0,    6,  134,  135,    7,    8,    9,   10,
   11,   12,   13,    0,    0,   84,   84,    0,   84,   85,
  158,  121,  159,   81,   82,   83,   85,   85,    0,    0,
   14,   14,   47,   72,  128,  129,   72,  138,  139,   72,
   72,   22,  151,  152,   23,   85,   85,    0,   85,   72,
   72,   72,   72,   72,   72,   72,   72,   72,   72,   72,
   72,   72,   41,   79,   72,   72,   79,   72,    0,   79,
   79,   52,   52,   30,  154,  155,   11,   11,   29,   79,
   79,   79,   79,   79,   79,   79,   79,   79,   79,   79,
   79,   79,    0,   80,   79,   79,   80,   79,    0,   80,
   80,   51,   51,    0,    9,    9,   13,   13,    0,   80,
   80,   80,   80,   80,   80,   80,   80,   80,   80,   80,
   80,   80,   46,   81,   80,   80,   81,   80,    0,   81,
   81,   50,   50,    0,   12,   12,    8,    8,    0,   81,
   81,   81,   81,   81,   81,   81,   81,   81,   81,   81,
   81,   81,    0,   77,   81,   81,   77,   81,    0,   77,
   77,    7,    8,    9,   10,   11,   12,   13,    0,   77,
   77,   77,   77,   77,   77,   77,   77,   77,   77,   77,
   77,   77,    0,   78,   77,   77,   78,   77,    0,   78,
   78,    0,    0,   30,   69,   69,   69,    0,   29,   78,
   78,   78,   78,   78,   78,   78,   78,   78,   78,   78,
   78,   78,    0,   84,   78,   78,   84,   78,    0,   84,
   84,    0,    0,    0,    0,    0,    0,    0,    0,   84,
   84,   84,   84,   84,   84,   84,   84,   84,   84,   84,
   84,   84,    0,   85,   84,   84,   85,   84,    0,   85,
   85,    0,    0,    0,    0,    0,    0,    0,    0,   85,
   85,   85,   85,   85,   85,   85,   85,   85,   85,   85,
   85,   85,   86,    0,   85,   85,    0,   85,    0,   86,
   86,   20,    0,    7,    8,    9,   10,   11,   12,   13,
   22,    0,    0,   23,    0,    0,    0,    0,   86,   86,
    0,   86,   83,    0,    0,    0,   24,    0,    0,   83,
   83,   25,    0,    0,    0,  168,   26,   27,   28,    0,
    0,    0,    0,    0,    0,    0,   46,   46,   83,   83,
    0,   83,   82,    0,    0,    0,    0,   67,    0,   82,
   82,   65,   70,    0,   46,   46,   63,   61,    0,   62,
   46,   64,    0,    0,   18,   18,    0,    0,   82,   82,
   37,   82,    0,   66,   60,   72,   59,   65,   70,    0,
   44,    0,   63,   61,    0,   62,    0,   64,   65,   70,
    0,    0,    0,   63,   61,    0,   62,    0,   64,    0,
   60,   72,   59,    0,    0,   18,   80,    0,   68,    0,
    0,   60,   72,   59,    0,    0,    0,    0,   91,    0,
   22,   30,    0,   23,    0,    0,   29,   65,   70,    0,
    0,   89,   63,   61,   68,   62,   24,   64,   71,    0,
   69,   25,    0,    0,    0,   68,   26,   27,   28,    0,
   60,   72,   59,   38,    0,    8,    9,   10,    0,   12,
   13,    0,   65,   70,   71,    0,   69,   63,   61,    0,
   62,    0,   64,    0,    0,   71,    0,   69,    0,    0,
    0,    0,    0,    0,   68,   60,   72,   59,    0,    0,
    0,   65,   70,   91,    0,    0,   63,   61,    0,   62,
    0,   64,    0,    0,    0,    0,   86,    0,    0,   86,
    0,    0,   86,   86,   71,   72,   69,    0,    0,   68,
    0,    0,   86,   86,   86,   86,   86,   86,   86,   86,
   86,   86,   86,   86,   86,    0,   83,   86,   86,   83,
   86,    0,   83,   83,    0,    0,    0,    0,   68,   71,
    0,   69,   83,   83,   83,   83,   83,   83,   83,   83,
   83,   83,   83,   83,   83,    0,   82,   83,   83,   82,
   83,    0,   82,   82,    0,    0,   30,    0,   71,    0,
   69,   29,   82,   82,   82,   82,   82,   82,   82,   82,
   82,   82,   82,   82,   82,    0,    0,   82,   82,    0,
   82,    0,   56,   57,    0,   58,    0,   65,    0,    0,
   65,   70,    0,    0,   87,   63,   61,    0,   62,    0,
   64,    0,    0,    0,    0,    0,   65,    0,   56,   57,
   88,   58,    0,   60,   72,   59,   73,    0,   22,   56,
   57,   23,   58,   73,   73,   65,   70,    0,    0,    0,
   63,   61,    0,   62,   24,   64,    0,  121,  122,   25,
    0,    0,   73,    0,   26,   27,   28,   68,   60,   72,
   59,    0,    0,    0,    0,   30,    0,    0,   56,   57,
   29,   58,    0,   65,   70,    0,    0,    0,   63,   61,
    0,   62,    0,   64,    0,    0,    0,   71,    0,   69,
    0,    0,   68,    0,    0,  148,   60,   72,   59,    0,
    0,    0,   74,   56,   57,    0,   58,    0,    0,   74,
   74,    0,    0,   65,   70,    0,    0,    0,   63,    0,
    0,    0,   71,   64,   69,    0,    0,    0,   74,    0,
   68,   75,    0,    0,    0,    0,    0,   72,   75,   75,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   75,    0,    0,
   71,   76,   69,    0,    0,    0,    0,    0,   76,   76,
   68,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   22,    0,    0,   23,   76,    0,    0,
   87,    0,    0,    8,    9,   10,    0,   87,   87,   24,
   71,    0,   69,    0,   25,    0,    0,    0,    0,   26,
   27,   28,    0,    0,   65,    0,   87,   65,    0,    0,
   65,   65,    0,    0,    0,    0,   30,    0,    0,    0,
   65,   29,   65,   65,   65,   65,    0,  157,    0,   65,
   65,   65,   65,    0,    0,    0,    0,    0,    0,    0,
   73,   56,   57,   73,   58,    0,   73,   73,    0,    0,
    0,   66,    0,    0,    0,    0,   73,   73,   73,   73,
   73,   73,   73,   73,   73,   73,   73,   73,   73,  165,
    0,    0,   22,    0,    0,   23,   56,   57,    0,   58,
    0,    0,    0,    0,    0,    0,    0,    0,   24,    0,
    0,  121,  144,   25,    0,    0,    0,    0,   26,   27,
   28,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   56,   57,   74,   58,    0,   74,
    0,    0,   74,   74,    0,    0,    0,    0,    0,    0,
    0,    0,   74,   74,   74,   74,   74,   74,   74,   74,
   74,   74,   74,   74,   74,   75,    0,    0,   75,    0,
    0,   75,   75,    0,    0,    0,    0,    0,    0,    0,
    0,   75,   75,   75,   75,   75,   75,   75,   75,   75,
   75,   75,   75,   75,    0,   76,    0,    0,   76,    0,
    0,   76,   76,    0,    0,    0,    0,    0,    0,    0,
    0,   76,   76,   76,   76,   76,   76,   76,   76,   76,
   76,   76,   76,   76,   87,    0,    0,   87,    0,    0,
   87,   87,    0,    0,    0,    0,    0,    0,    0,    0,
   87,   87,   87,   87,   87,   87,   87,   87,   87,   87,
   87,   87,   87,   22,    0,    0,   23,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   48,   49,    0,   24,
   50,   51,   52,  166,   25,   66,   66,    0,    0,   26,
   27,   28,    0,    0,    0,   66,    0,   66,   66,   66,
   66,    0,    0,    0,   66,   66,   66,   66,   92,   93,
   94,   95,   96,   97,   98,   99,  100,  101,    0,    0,
  102,  103,  104,  105,  106,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  126,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  143,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  160,
};
static const YYINT yycheck[] = {                         33,
   44,   73,   59,   37,   11,   59,   40,   41,   42,   43,
   59,   45,  287,   47,   40,  260,   59,   59,   31,   45,
  261,  262,   55,   38,  264,   59,   60,   74,   62,   33,
   77,  124,   39,   37,  276,  277,   40,   41,   42,   43,
   59,   45,   59,   47,  287,  117,   61,  260,   59,   84,
  260,   91,  145,  260,   87,   59,   60,   59,   62,   33,
  260,  264,   59,   37,  111,  112,   40,   41,   42,   43,
  287,   45,  107,   47,  257,   41,    2,   90,   42,   94,
  267,  268,  269,  118,   93,   59,   60,   59,   62,   33,
   59,   11,   59,   37,  281,  282,   40,   41,   42,   43,
  123,   45,   -1,   47,  265,  140,  267,  268,  269,  124,
  123,  126,  267,  268,  269,   59,   60,   59,   62,   33,
   59,   -1,   59,   -1,  157,  158,   40,   41,   -1,   43,
   -1,   45,  165,  266,  267,  268,  269,   -1,  267,  268,
  269,   -1,  108,   -1,   -1,   59,   60,  113,   62,   33,
  163,  164,  281,  282,  167,   -1,   40,   41,   -1,   43,
   -1,   45,  128,   -1,   -1,  131,   -1,   -1,  134,  267,
  268,  269,  138,   -1,   -1,   59,   60,   -1,   62,   33,
  267,  268,  269,  281,  282,  151,   40,   41,  154,  257,
  258,  259,   -1,  263,  281,  282,  266,  267,  268,  269,
  270,  271,  272,   -1,   -1,   59,   60,   -1,   62,   33,
  275,  276,  277,  257,  258,  259,   40,   41,   -1,   -1,
  263,  264,  264,  257,  281,  282,  260,  281,  282,  263,
  264,  257,  281,  282,  260,   59,   60,   -1,   62,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  263,  257,  288,  289,  260,  291,   -1,  263,
  264,  263,  264,   40,  281,  282,  263,  264,   45,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  257,  288,  289,  260,  291,   -1,  263,
  264,  263,  264,   -1,  263,  264,  263,  264,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   59,  257,  288,  289,  260,  291,   -1,  263,
  264,  263,  264,   -1,  263,  264,  263,  264,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  257,  288,  289,  260,  291,   -1,  263,
  264,  266,  267,  268,  269,  270,  271,  272,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  257,  288,  289,  260,  291,   -1,  263,
  264,   -1,   -1,   40,  275,  276,  277,   -1,   45,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  257,  288,  289,  260,  291,   -1,  263,
  264,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  257,  288,  289,  260,  291,   -1,  263,
  264,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   33,   -1,  288,  289,   -1,  291,   -1,   40,
   41,  264,   -1,  266,  267,  268,  269,  270,  271,  272,
  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,   59,   60,
   -1,   62,   33,   -1,   -1,   -1,  273,   -1,   -1,   40,
   41,  278,   -1,   -1,   -1,  282,  283,  284,  285,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  263,  264,   59,   60,
   -1,   62,   33,   -1,   -1,   -1,   -1,   33,   -1,   40,
   41,   37,   38,   -1,  281,  282,   42,   43,   -1,   45,
  287,   47,   -1,   -1,    1,    2,   -1,   -1,   59,   60,
    7,   62,   -1,   59,   60,   61,   62,   37,   38,   -1,
   17,   -1,   42,   43,   -1,   45,   -1,   47,   37,   38,
   -1,   -1,   -1,   42,   43,   -1,   45,   -1,   47,   -1,
   60,   61,   62,   -1,   -1,   42,   43,   -1,   94,   -1,
   -1,   60,   61,   62,   -1,   -1,   -1,   -1,   55,   -1,
  257,   40,   -1,  260,   -1,   -1,   45,   37,   38,   -1,
   -1,   41,   42,   43,   94,   45,  273,   47,  124,   -1,
  126,  278,   -1,   -1,   -1,   94,  283,  284,  285,   -1,
   60,   61,   62,  265,   -1,  267,  268,  269,   -1,  271,
  272,   -1,   37,   38,  124,   -1,  126,   42,   43,   -1,
   45,   -1,   47,   -1,   -1,  124,   -1,  126,   -1,   -1,
   -1,   -1,   -1,   -1,   94,   60,   61,   62,   -1,   -1,
   -1,   37,   38,  130,   -1,   -1,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,  257,   -1,   -1,  260,
   -1,   -1,  263,  264,  124,   61,  126,   -1,   -1,   94,
   -1,   -1,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  283,  284,  285,   -1,  257,  288,  289,  260,
  291,   -1,  263,  264,   -1,   -1,   -1,   -1,   94,  124,
   -1,  126,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  283,  284,  285,   -1,  257,  288,  289,  260,
  291,   -1,  263,  264,   -1,   -1,   40,   -1,  124,   -1,
  126,   45,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  283,  284,  285,   -1,   -1,  288,  289,   -1,
  291,   -1,  288,  289,   -1,  291,   -1,   40,   -1,   -1,
   37,   38,   -1,   -1,  274,   42,   43,   -1,   45,   -1,
   47,   -1,   -1,   -1,   -1,   -1,   59,   -1,  288,  289,
  279,  291,   -1,   60,   61,   62,   33,   -1,  257,  288,
  289,  260,  291,   40,   41,   37,   38,   -1,   -1,   -1,
   42,   43,   -1,   45,  273,   47,   -1,  276,  277,  278,
   -1,   -1,   59,   -1,  283,  284,  285,   94,   60,   61,
   62,   -1,   -1,   -1,   -1,   40,   -1,   -1,  288,  289,
   45,  291,   -1,   37,   38,   -1,   -1,   -1,   42,   43,
   -1,   45,   -1,   47,   -1,   -1,   -1,  124,   -1,  126,
   -1,   -1,   94,   -1,   -1,  280,   60,   61,   62,   -1,
   -1,   -1,   33,  288,  289,   -1,  291,   -1,   -1,   40,
   41,   -1,   -1,   37,   38,   -1,   -1,   -1,   42,   -1,
   -1,   -1,  124,   47,  126,   -1,   -1,   -1,   59,   -1,
   94,   33,   -1,   -1,   -1,   -1,   -1,   61,   40,   41,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   59,   -1,   -1,
  124,   33,  126,   -1,   -1,   -1,   -1,   -1,   40,   41,
   94,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,   -1,   -1,  260,   59,   -1,   -1,
   33,   -1,   -1,  267,  268,  269,   -1,   40,   41,  273,
  124,   -1,  126,   -1,  278,   -1,   -1,   -1,   -1,  283,
  284,  285,   -1,   -1,  257,   -1,   59,  260,   -1,   -1,
  263,  264,   -1,   -1,   -1,   -1,   40,   -1,   -1,   -1,
  273,   45,  275,  276,  277,  278,   -1,  274,   -1,  282,
  283,  284,  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  288,  289,  260,  291,   -1,  263,  264,   -1,   -1,
   -1,   59,   -1,   -1,   -1,   -1,  273,  274,  275,  276,
  277,  278,  279,  280,  281,  282,  283,  284,  285,  281,
   -1,   -1,  257,   -1,   -1,  260,  288,  289,   -1,  291,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,   -1,
   -1,  276,  277,  278,   -1,   -1,   -1,   -1,  283,  284,
  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  288,  289,  257,  291,   -1,  260,
   -1,   -1,  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  273,  274,  275,  276,  277,  278,  279,  280,
  281,  282,  283,  284,  285,  257,   -1,   -1,  260,   -1,
   -1,  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  273,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,  285,   -1,  257,   -1,   -1,  260,   -1,
   -1,  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  273,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,  285,  257,   -1,   -1,  260,   -1,   -1,
  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  273,  274,  275,  276,  277,  278,  279,  280,  281,  282,
  283,  284,  285,  257,   -1,   -1,  260,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   24,   25,   -1,  273,
   28,   29,   30,  277,  278,  263,  264,   -1,   -1,  283,
  284,  285,   -1,   -1,   -1,  273,   -1,  275,  276,  277,
  278,   -1,   -1,   -1,  282,  283,  284,  285,   56,   57,
   58,   59,   60,   61,   62,   63,   64,   65,   -1,   -1,
   68,   69,   70,   71,   72,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   88,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  121,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  148,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 292
#define YYUNDFTOKEN 312
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,
0,0,0,0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"'|'",0,"'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"LITERAL_I","LITERAL_S","LITERAL_C",
"IDENTIFICADOR","PROGRAM","MODULE","START","END","VOID","CONST","NUMBER",
"ARRAY","STRING","FUNCTION","PUBLIC","FORWARD","IF","THEN","ELSE","ELIF","FI",
"FOR","UNTIL","STEP","DO","DONE","REPEAT","STOP","RETURN","IFX","ATTR","GE",
"LE","EQ","NE","UMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : file",
"file : program",
"file : module",
"program : PROGRAM declarations START body END",
"program : PROGRAM START body END",
"declarations : declaration",
"declarations : declarations ';' declaration",
"declaration : function",
"declaration : qualifier CONST variable ATTR literals",
"declaration : qualifier CONST variable",
"declaration : qualifier variable",
"declaration : CONST variable",
"declaration : CONST variable ATTR literals",
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
"function : FUNCTION qualifier type IDENTIFICADOR variables DO body",
"function : FUNCTION qualifier VOID IDENTIFICADOR variables DONE",
"function : FUNCTION qualifier VOID IDENTIFICADOR variables DO body",
"function : FUNCTION qualifier VOID IDENTIFICADOR DO body",
"function : FUNCTION qualifier VOID IDENTIFICADOR DONE",
"function : FUNCTION qualifier VOID IDENTIFICADOR variables DO body",
"function : FUNCTION type IDENTIFICADOR variables DONE",
"function : FUNCTION type IDENTIFICADOR variables DO body",
"function : FUNCTION type IDENTIFICADOR DO body",
"function : FUNCTION type IDENTIFICADOR DONE",
"function : FUNCTION type IDENTIFICADOR variables DO body",
"function : FUNCTION VOID IDENTIFICADOR variables DONE",
"function : FUNCTION VOID IDENTIFICADOR variables DO body",
"function : FUNCTION VOID IDENTIFICADOR DO body",
"function : FUNCTION VOID IDENTIFICADOR DONE",
"function : FUNCTION VOID IDENTIFICADOR variables DO body",
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
"elifs : elif",
"elifs : elifs elif",
"elif : ELIF expression THEN instructs",
"expression : LITERAL_I",
"expression : IDENTIFICADOR",
"expression : '-' expression",
"expression : expression '^' expression",
"expression : expression '~' expression",
"expression : expression '&' expression",
"expression : expression '|' expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : expression '<' expression",
"expression : expression '>' expression",
"expression : expression GE expression",
"expression : expression LE expression",
"expression : expression NE expression",
"expression : expression '=' expression",
"expression : '(' expression ')'",
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
#line 176 "gram.y"

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
#line 653 "y.tab.c"

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
#line 48 "gram.y"
	{;}
break;
case 2:
#line 49 "gram.y"
	{;}
break;
case 3:
#line 52 "gram.y"
	{;}
break;
case 4:
#line 53 "gram.y"
	{;}
break;
case 5:
#line 56 "gram.y"
	{;}
break;
case 6:
#line 57 "gram.y"
	{;}
break;
case 7:
#line 60 "gram.y"
	{;}
break;
case 8:
#line 61 "gram.y"
	{;}
break;
case 9:
#line 62 "gram.y"
	{;}
break;
case 10:
#line 63 "gram.y"
	{;}
break;
case 11:
#line 64 "gram.y"
	{;}
break;
case 12:
#line 65 "gram.y"
	{;}
break;
case 13:
#line 66 "gram.y"
	{;}
break;
case 14:
#line 67 "gram.y"
	{;}
break;
case 15:
#line 70 "gram.y"
	{;}
break;
case 16:
#line 71 "gram.y"
	{;}
break;
case 17:
#line 72 "gram.y"
	{;}
break;
case 18:
#line 75 "gram.y"
	{;}
break;
case 19:
#line 76 "gram.y"
	{;}
break;
case 20:
#line 77 "gram.y"
	{;}
break;
case 21:
#line 80 "gram.y"
	{;}
break;
case 22:
#line 81 "gram.y"
	{;}
break;
case 23:
#line 82 "gram.y"
	{;}
break;
case 24:
#line 83 "gram.y"
	{;}
break;
case 25:
#line 84 "gram.y"
	{;}
break;
case 26:
#line 85 "gram.y"
	{;}
break;
case 27:
#line 86 "gram.y"
	{;}
break;
case 28:
#line 87 "gram.y"
	{;}
break;
case 29:
#line 88 "gram.y"
	{;}
break;
case 30:
#line 89 "gram.y"
	{;}
break;
case 31:
#line 90 "gram.y"
	{;}
break;
case 32:
#line 91 "gram.y"
	{;}
break;
case 33:
#line 92 "gram.y"
	{;}
break;
case 34:
#line 93 "gram.y"
	{;}
break;
case 35:
#line 94 "gram.y"
	{;}
break;
case 36:
#line 95 "gram.y"
	{;}
break;
case 37:
#line 96 "gram.y"
	{;}
break;
case 38:
#line 97 "gram.y"
	{;}
break;
case 39:
#line 98 "gram.y"
	{;}
break;
case 40:
#line 99 "gram.y"
	{;}
break;
case 41:
#line 102 "gram.y"
	{;}
break;
case 42:
#line 103 "gram.y"
	{;}
break;
case 43:
#line 106 "gram.y"
	{;}
break;
case 44:
#line 107 "gram.y"
	{;}
break;
case 45:
#line 110 "gram.y"
	{;}
break;
case 46:
#line 111 "gram.y"
	{;}
break;
case 47:
#line 114 "gram.y"
	{;}
break;
case 48:
#line 115 "gram.y"
	{;}
break;
case 49:
#line 116 "gram.y"
	{;}
break;
case 50:
#line 119 "gram.y"
	{;}
break;
case 51:
#line 120 "gram.y"
	{;}
break;
case 52:
#line 121 "gram.y"
	{;}
break;
case 53:
#line 124 "gram.y"
	{;}
break;
case 54:
#line 125 "gram.y"
	{;}
break;
case 55:
#line 128 "gram.y"
	{;}
break;
case 56:
#line 129 "gram.y"
	{;}
break;
case 57:
#line 130 "gram.y"
	{;}
break;
case 58:
#line 131 "gram.y"
	{;}
break;
case 59:
#line 132 "gram.y"
	{;}
break;
case 60:
#line 133 "gram.y"
	{;}
break;
case 61:
#line 134 "gram.y"
	{;}
break;
case 62:
#line 135 "gram.y"
	{;}
break;
case 63:
#line 136 "gram.y"
	{;}
break;
case 64:
#line 137 "gram.y"
	{;}
break;
case 65:
#line 138 "gram.y"
	{;}
break;
case 66:
#line 139 "gram.y"
	{;}
break;
case 67:
#line 142 "gram.y"
	{;}
break;
case 68:
#line 143 "gram.y"
	{;}
break;
case 69:
#line 146 "gram.y"
	{;}
break;
case 70:
#line 149 "gram.y"
	{;}
break;
case 71:
#line 150 "gram.y"
	{;}
break;
case 72:
#line 151 "gram.y"
	{;}
break;
case 73:
#line 152 "gram.y"
	{;}
break;
case 74:
#line 153 "gram.y"
	{;}
break;
case 75:
#line 154 "gram.y"
	{;}
break;
case 76:
#line 155 "gram.y"
	{;}
break;
case 77:
#line 156 "gram.y"
	{;}
break;
case 78:
#line 157 "gram.y"
	{;}
break;
case 79:
#line 158 "gram.y"
	{;}
break;
case 80:
#line 159 "gram.y"
	{;}
break;
case 81:
#line 160 "gram.y"
	{;}
break;
case 82:
#line 161 "gram.y"
	{;}
break;
case 83:
#line 162 "gram.y"
	{;}
break;
case 84:
#line 163 "gram.y"
	{;}
break;
case 85:
#line 164 "gram.y"
	{;}
break;
case 86:
#line 165 "gram.y"
	{;}
break;
case 87:
#line 166 "gram.y"
	{;}
break;
case 88:
#line 167 "gram.y"
	{;}
break;
case 89:
#line 171 "gram.y"
	{;}
break;
case 90:
#line 172 "gram.y"
	{;}
break;
#line 1215 "y.tab.c"
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
