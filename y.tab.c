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
#define IFX 286
#define ATTR 287
#define GE 288
#define LE 289
#define EQ 290
#define NE 291
#define UMINUS 292
#define UINPUT 293
#define UNEG 294
#define UAND 295
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    1,    1,    1,    3,    3,    4,    4,    4,
    4,    4,    4,    4,    4,   11,   11,   11,   12,   12,
   12,    8,    8,    8,    8,    8,    8,    8,    8,    8,
    8,    8,    8,    8,    8,    8,    8,    9,    9,   14,
   14,   10,   10,   13,   13,   13,    7,    7,    7,    5,
    5,    6,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,   16,   16,   17,   18,   18,
   19,   19,   19,   19,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,    2,    2,
};
static const YYINT yylen[] = {                            2,
    1,    1,    5,    4,    4,    1,    3,    1,    5,    3,
    2,    2,    4,    3,    1,    1,    2,    3,    1,    1,
    1,    6,    7,    6,    5,    7,    6,    6,    5,    6,
    5,    5,    4,    6,    5,    5,    4,    1,    1,    1,
    3,    5,    2,    1,    1,    1,    3,    2,    1,    1,
    2,    8,    7,    6,    5,    5,    4,    9,    2,    2,
    1,    1,    2,    1,    4,    1,    2,    4,    1,    3,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    2,    2,
    2,    1,    3,    3,    4,    3,    4,    3,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    1,    2,    0,    0,   44,   46,   45,
    0,   38,   39,    0,    6,    8,    0,    0,    0,   99,
    0,   19,   21,   20,    0,    0,    0,   61,   62,    0,
    0,    0,    0,    0,    0,    0,    0,   50,    0,   40,
   87,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   11,    0,    0,   98,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   51,    5,    0,   85,   71,   82,
   83,   84,   80,   79,   74,   75,   76,   77,   78,   72,
   73,   60,    0,   59,    0,   81,    0,    0,    0,    0,
    0,    0,    4,    0,    7,    0,    0,   16,    0,    0,
    0,    0,    0,   94,   93,    0,   41,    0,    0,    0,
    0,    0,   37,    0,    0,    0,    0,   33,    0,    3,
    0,    0,   17,    0,    0,   95,    0,   57,    0,    0,
   66,    0,   97,   65,   36,    0,   35,    0,    0,   29,
    0,    0,   25,    0,   32,    0,   31,    0,   18,   42,
    0,    0,    0,   55,    0,   56,   67,    0,   34,   28,
    0,   27,   24,    0,   22,   30,    0,    0,    0,   54,
    0,   26,   23,    0,   53,    0,    0,   52,    0,   58,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,   14,   15,   37,   38,   39,   16,   17,   40,
   97,   41,   19,   42,   43,  130,  131,  101,   87,
};
static const YYINT yysindex[] = {                      -136,
  344,  353,    0,    0,    0,  838,  -89,    0,    0,    0,
  407,    0,    0,  -40,    0,    0, -107, -274, -240,    0,
  -58,    0,    0,    0,   -7,  935,  935,    0,    0,  935,
  935,  935,  935,  935,  935,  935, 1111,    0, -241,    0,
    0,  -28,  404, -248, -208, -180, -206,  733,  430,  -89,
    0,  -50,  -22,    0,  935,  439,  465,  813,  -54,  -54,
  476,  -54,  -54,  504,    0,    0,  838,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  935,    0,  935,    0,  935,  -50,  -92, -187,
 -185,  -86,    0, -186,    0, -197,  -41,    0, -165,  813,
  -19,  931,  935,    0,    0, 1111,    0,  515,  543,  813,
  -41,  838,    0,  -43,  150,  153,  838,    0,  -17,    0,
  -50,  -50,    0,   11,  935,    0,  935,    0,  877, -134,
    0,  623,    0,    0,    0,  838,    0,  -89,  838,    0,
  -10,  838,    0,   -8,    0,  838,    0,  -41,    0,    0,
  813,  775, 1111,    0,  -63,    0,    0,  935,    0,    0,
  838,    0,    0,  838,    0,    0, 1111,  967, 1111,    0,
  801,    0,    0, 1111,    0,  989, 1111,    0, 1079,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -44,    0,    0,
    0,    0,    0,    0,  -33,    0,    0,    0,    0,  604,
    0,    0,    0,  368,    0,    0,  -42,    0,    0,    0,
    0,    0,    0,    5,    0,    0,    0,    0,    0,    0,
    0,    0,  -53,    0,    0,    0,    0, 1020,    3,   39,
    0,   75,  111,    0,    0,    0,   41,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   44,   46,    0,    0,   -9,
    0,    0,    0,    0,    0,   77,    0,    0,    0,  675,
   80,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   82,    0,    0,
   26,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  101,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,  104,   60,  -46,   18,  333,    0,  100,  406,
  -64,  583,    7,  -21, 1289,  -15,  -96,    0,    0,
};
#define YYTABLESIZE 1447
static const YYINT yytable[] = {                         86,
   49,   86,  122,   86,   86,   43,   86,   86,   86,   86,
   86,   86,   52,   86,   15,  138,   49,   47,   49,   53,
  106,  126,   66,  111,  125,   86,   86,   86,   86,   86,
   67,   69,   55,  157,   69,   89,   83,   89,   88,   89,
   89,  138,   89,   89,   89,   89,   89,   89,  138,   89,
  138,   89,   91,   92,   65,  129,  148,   86,  157,   86,
   86,   89,   89,   12,   89,   89,   70,  114,   99,   70,
  119,   90,  115,   90,  116,   90,   90,  120,   90,   90,
   90,   90,   90,   90,   90,   90,    8,    9,   10,  121,
   86,  124,   86,  141,  144,   89,   89,   90,   90,   48,
   90,   90,   10,  150,   14,   21,  168,   88,   95,   88,
   46,   88,   88,  155,   88,   88,   88,   88,   88,   88,
  174,   88,  176,   65,    1,    2,   89,    0,   89,    0,
  179,   90,   90,   88,   88,   47,   88,   88,   13,    0,
    9,  127,  156,   91,    0,   91,   65,   91,   91,    0,
   91,   91,   91,   91,   91,   91,    0,   91,   50,    8,
    9,   10,   90,    0,   90,    0,    0,   88,   88,   91,
   91,    0,   91,   91,    8,    9,   10,    8,    9,   10,
    8,    9,   10,    0,    0,   65,    0,    0,  112,  113,
    0,   65,    0,   65,  117,  118,   65,    0,   88,    0,
   88,    0,    0,   91,   91,   54,   22,   23,   24,   43,
   43,  169,  127,  170,    0,   22,   23,   24,   15,   15,
   49,   49,   48,   86,   86,   86,   86,   43,   43,   86,
   86,    0,    0,   43,   91,    0,   91,  136,  137,   86,
   86,   86,   86,   86,   86,   86,   86,   86,   86,   86,
   86,   86,    0,   86,   86,   86,    0,   86,    0,   89,
   89,   89,   89,  146,  147,   89,   89,   12,   12,    0,
  161,  162,  164,  165,    0,   89,   89,   89,   89,   89,
   89,   89,   89,   89,   89,   89,   89,   89,    0,   89,
   89,   89,    0,   89,    0,   90,   90,   90,   90,    0,
    0,   90,   90,   48,   48,    0,   10,   10,   14,   14,
    0,   90,   90,   90,   90,   90,   90,   90,   90,   90,
   90,   90,   90,   90,    0,   90,   90,   90,    0,   90,
    0,   88,   88,   88,   88,    0,    0,   88,   88,   47,
   47,    0,   13,   13,    9,    9,    0,   88,   88,   88,
   88,   88,   88,   88,   88,   88,   88,   88,   88,   88,
    0,   88,   88,   88,    0,   88,    0,   91,   91,   91,
   91,    0,    0,   91,   91,   68,   68,   68,    0,    0,
   94,    0,    0,   91,   91,   91,   91,   91,   91,   91,
   91,   91,   91,   91,   91,   91,    0,   91,   91,   91,
   92,   91,   92,    0,   92,    0,   18,   18,   92,   92,
   92,   92,   44,    0,   92,    0,    8,    9,   10,    8,
    9,   10,   51,    0,    0,    0,   92,   92,   92,   92,
  139,  140,    0,  142,  143,    0,   84,    0,   85,    0,
   79,   80,    0,    0,  135,   77,   75,    0,   76,  145,
   78,    0,    0,    0,   18,   96,    0,    0,    0,    0,
   92,   92,   82,   74,   86,   73,    0,    0,  159,    0,
    0,  160,  107,    0,  163,   79,   80,    0,  166,    0,
   77,   75,    0,   76,    0,   78,    0,    0,    0,    0,
    0,   92,    0,  172,   83,    0,  173,   69,   74,   86,
   73,   79,   80,    0,    0,    0,   77,   75,    0,   76,
    0,   78,   79,   80,    0,    0,    0,   77,   75,    0,
   76,    0,   78,    0,   74,   86,   73,   81,    0,   83,
    0,    0,   69,    0,    0,   74,   86,   73,    0,    0,
   79,   80,    0,  107,  105,   77,   75,    0,   76,    0,
   78,   79,   80,    0,    0,   83,   77,   75,   69,   76,
    0,   78,   81,   74,   86,   73,   83,    0,  104,   69,
    0,    0,    0,    0,   74,   86,   73,    0,    0,   79,
   80,    0,    0,    0,   77,   75,    0,   76,   81,   78,
    0,    0,    0,    0,   83,    0,    0,   69,    0,   81,
    0,  134,   74,   86,   73,   83,    6,  133,   69,    7,
    8,    9,   10,   11,   12,   13,   20,    0,    7,    8,
    9,   10,   11,   12,   13,    0,    0,   81,    0,    0,
   92,   92,    0,   83,   98,    0,   69,    0,   81,    0,
   92,   92,   92,   92,   92,   92,   92,   92,   92,   92,
   92,   92,   92,    0,   92,   92,   92,    0,   92,   79,
   80,    0,   64,    0,   77,   75,   81,   76,    0,   78,
   98,   45,    0,    8,    9,   10,    0,   12,   13,  123,
    0,    0,   74,   86,   73,    0,    0,    0,    0,    0,
   68,   70,   71,  123,   72,    7,    8,    9,   10,   11,
   12,   13,    0,   98,  149,    0,    0,   96,    0,   96,
    0,    0,  102,   83,   96,   96,   69,    0,   96,    0,
    0,    0,    0,    0,    0,   68,   70,   71,    0,   72,
  123,    0,    0,   96,    0,    0,    0,   96,    0,    0,
    0,    0,    0,  103,    0,    0,   81,    0,    0,    0,
    0,   68,   70,   71,    0,   72,    0,    0,    0,    0,
    0,    0,   68,   70,   71,    0,   72,   96,    0,    0,
   32,    0,   36,    0,    0,    0,    0,   31,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   68,   70,   71,    0,   72,   34,    0,    0,    0,    0,
   96,   68,   70,   71,    0,   72,    0,    0,    0,    0,
    0,   79,   80,    0,    0,    0,   77,   75,    0,   76,
    0,   78,    0,   33,    0,    0,    0,    0,    0,   68,
   70,   71,    0,   72,   74,   86,   73,   79,   80,    0,
    0,    0,   77,   75,    0,   76,    0,   78,    0,   79,
   80,    0,    0,    0,   77,   75,    0,   76,   35,   78,
   74,   86,   73,    0,    0,   83,   64,   64,   69,    0,
    0,    0,   74,   86,   73,   32,   64,   36,   64,   64,
   64,   64,   31,    0,    0,   64,   64,   64,   64,    0,
    0,   83,    0,    0,   69,    0,    0,    0,   81,    0,
   34,    0,  158,   83,    0,    0,   69,    0,    0,   68,
   70,   71,    0,   72,   32,    0,   36,    0,    0,    0,
    0,   31,    0,    0,   81,    0,    0,    0,   33,    0,
    0,   96,   96,   96,   96,    0,   81,   96,   96,   34,
    0,    0,    0,    0,    0,    0,    0,   96,   96,   96,
   96,   96,   96,   96,   96,   96,   96,   96,   96,   96,
    0,    0,    0,   35,    0,    0,    0,   33,   32,    0,
   36,    0,   32,    0,   36,   31,    0,    0,    0,   31,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   22,
   23,   24,   25,   34,    0,    0,   93,   34,    0,    8,
    9,   10,   35,    0,   32,   26,   36,    0,    0,    0,
   27,   31,    0,    0,    0,   28,   29,   30,    0,    0,
    0,   33,    0,    0,    0,   33,   32,    0,   36,   34,
    0,    0,    0,   31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  167,    0,
    0,   34,    0,    0,    0,    0,   35,   33,    0,   63,
   35,   68,   70,   71,    0,   72,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   63,   33,
    0,  177,   63,    0,    0,    0,    0,   68,   70,   71,
    0,   72,   35,    0,   22,   23,   24,   25,    0,   68,
   70,   71,    0,   72,    8,    9,   10,    0,    0,    0,
   26,    0,    0,    0,   35,   27,   32,    0,   36,    0,
   28,   29,   30,   31,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   22,   23,   24,   25,    0,    0,    0,
    0,   34,    0,    0,    0,   63,    0,    0,   32,   26,
   36,  153,  127,  154,   27,   31,    0,    0,    0,   28,
   29,   30,    0,    0,    0,    0,    0,    0,    0,   33,
    0,    0,    0,   34,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   22,   23,   24,
   25,   22,   23,   24,   25,    0,    0,    0,    0,    0,
    0,   33,    0,   26,   35,    0,  127,  128,   27,    0,
    0,    0,    0,   28,   29,   30,    0,    0,    0,    0,
    0,    0,    0,   22,   23,   24,   25,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   35,    0,    0,   26,
    0,    0,    0,  175,   27,   22,   23,   24,   25,   28,
   29,   30,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   26,    0,    0,    0,  178,   27,    0,    0,    0,
    0,   28,   29,   30,    0,    0,   63,   63,   63,   63,
    0,    0,   63,   63,    0,    0,    0,    0,    0,    0,
    0,    0,   63,    0,   63,   63,   63,   63,    0,    0,
    0,   63,   63,   63,   63,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   56,   57,    0,    0,   58,   59,
   60,   61,   62,   63,   64,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   22,   23,   24,   25,    0,
    0,    0,    0,  100,    0,    0,    0,    0,    0,    0,
    0,   26,    0,    0,    0,    0,   27,    0,    0,    0,
  180,   28,   29,   30,    0,    0,    0,   22,   23,   24,
   25,  108,    0,  109,    0,  110,    0,    0,    0,    0,
    0,    0,    0,   26,    0,    0,    0,    0,   27,    0,
    0,  132,    0,   28,   29,   30,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  151,    0,  152,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  171,
};
static const YYINT yycheck[] = {                         33,
   59,   35,   44,   37,   38,   59,   61,   41,   42,   43,
   44,   45,  287,   47,   59,   59,   59,   11,   59,  260,
   67,   41,  264,   88,   44,   59,   60,   61,   62,   63,
   59,   41,   40,  130,   44,   33,   91,   35,  287,   37,
   38,   59,   40,   41,   42,   43,   44,   45,   59,   47,
   59,  260,   46,  260,   37,  102,  121,   91,  155,   93,
   94,   59,   60,   59,   62,   63,   41,   89,   91,   44,
   92,   33,  260,   35,  260,   37,   38,  264,   40,   41,
   42,   43,   44,   45,  265,   47,  267,  268,  269,  287,
  124,  257,  126,  115,  116,   93,   94,   59,   60,   59,
   62,   63,   59,   93,   59,    2,  153,   33,   49,   35,
   11,   37,   38,  129,   40,   41,   42,   43,   44,   45,
  167,   47,  169,  106,  261,  262,  124,   -1,  126,   -1,
  177,   93,   94,   59,   60,   59,   62,   63,   59,   -1,
   59,  276,  277,   33,   -1,   35,  129,   37,   38,   -1,
   40,   41,   42,   43,   44,   45,   -1,   47,  266,  267,
  268,  269,  124,   -1,  126,   -1,   -1,   93,   94,   59,
   60,   -1,   62,   63,  267,  268,  269,  267,  268,  269,
  267,  268,  269,   -1,   -1,  168,   -1,   -1,  281,  282,
   -1,  174,   -1,  176,  281,  282,  179,   -1,  124,   -1,
  126,   -1,   -1,   93,   94,  264,  257,  258,  259,  263,
  264,  275,  276,  277,   -1,  257,  258,  259,  263,  264,
  263,  264,  263,  257,  258,  259,  260,  281,  282,  263,
  264,   -1,   -1,  287,  124,   -1,  126,  281,  282,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,   -1,  287,  288,  289,   -1,  291,   -1,  257,
  258,  259,  260,  281,  282,  263,  264,  263,  264,   -1,
  281,  282,  281,  282,   -1,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,  285,   -1,  287,
  288,  289,   -1,  291,   -1,  257,  258,  259,  260,   -1,
   -1,  263,  264,  263,  264,   -1,  263,  264,  263,  264,
   -1,  273,  274,  275,  276,  277,  278,  279,  280,  281,
  282,  283,  284,  285,   -1,  287,  288,  289,   -1,  291,
   -1,  257,  258,  259,  260,   -1,   -1,  263,  264,  263,
  264,   -1,  263,  264,  263,  264,   -1,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  285,
   -1,  287,  288,  289,   -1,  291,   -1,  257,  258,  259,
  260,   -1,   -1,  263,  264,  275,  276,  277,   -1,   -1,
   48,   -1,   -1,  273,  274,  275,  276,  277,  278,  279,
  280,  281,  282,  283,  284,  285,   -1,  287,  288,  289,
   33,  291,   35,   -1,   37,   -1,    1,    2,   41,   42,
   43,   44,    7,   -1,   47,   -1,  267,  268,  269,  267,
  268,  269,   17,   -1,   -1,   -1,   59,   60,   61,   62,
  281,  282,   -1,  281,  282,   -1,   33,   -1,   35,   -1,
   37,   38,   -1,   -1,  112,   42,   43,   -1,   45,  117,
   47,   -1,   -1,   -1,   49,   50,   -1,   -1,   -1,   -1,
   93,   94,   59,   60,   61,   62,   -1,   -1,  136,   -1,
   -1,  139,   67,   -1,  142,   37,   38,   -1,  146,   -1,
   42,   43,   -1,   45,   -1,   47,   -1,   -1,   -1,   -1,
   -1,  124,   -1,  161,   91,   -1,  164,   94,   60,   61,
   62,   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,
   -1,   47,   37,   38,   -1,   -1,   -1,   42,   43,   -1,
   45,   -1,   47,   -1,   60,   61,   62,  124,   -1,   91,
   -1,   -1,   94,   -1,   -1,   60,   61,   62,   -1,   -1,
   37,   38,   -1,  138,   41,   42,   43,   -1,   45,   -1,
   47,   37,   38,   -1,   -1,   91,   42,   43,   94,   45,
   -1,   47,  124,   60,   61,   62,   91,   -1,   93,   94,
   -1,   -1,   -1,   -1,   60,   61,   62,   -1,   -1,   37,
   38,   -1,   -1,   -1,   42,   43,   -1,   45,  124,   47,
   -1,   -1,   -1,   -1,   91,   -1,   -1,   94,   -1,  124,
   -1,   59,   60,   61,   62,   91,  263,   93,   94,  266,
  267,  268,  269,  270,  271,  272,  264,   -1,  266,  267,
  268,  269,  270,  271,  272,   -1,   -1,  124,   -1,   -1,
  263,  264,   -1,   91,   52,   -1,   94,   -1,  124,   -1,
  273,  274,  275,  276,  277,  278,  279,  280,  281,  282,
  283,  284,  285,   -1,  287,  288,  289,   -1,  291,   37,
   38,   -1,   59,   -1,   42,   43,  124,   45,   -1,   47,
   88,  265,   -1,  267,  268,  269,   -1,  271,  272,   97,
   -1,   -1,   60,   61,   62,   -1,   -1,   -1,   -1,   -1,
  287,  288,  289,  111,  291,  266,  267,  268,  269,  270,
  271,  272,   -1,  121,  122,   -1,   -1,   33,   -1,   35,
   -1,   -1,  274,   91,   40,   41,   94,   -1,   44,   -1,
   -1,   -1,   -1,   -1,   -1,  287,  288,  289,   -1,  291,
  148,   -1,   -1,   59,   -1,   -1,   -1,   63,   -1,   -1,
   -1,   -1,   -1,  279,   -1,   -1,  124,   -1,   -1,   -1,
   -1,  287,  288,  289,   -1,  291,   -1,   -1,   -1,   -1,
   -1,   -1,  287,  288,  289,   -1,  291,   93,   -1,   -1,
   38,   -1,   40,   -1,   -1,   -1,   -1,   45,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  287,  288,  289,   -1,  291,   63,   -1,   -1,   -1,   -1,
  126,  287,  288,  289,   -1,  291,   -1,   -1,   -1,   -1,
   -1,   37,   38,   -1,   -1,   -1,   42,   43,   -1,   45,
   -1,   47,   -1,   91,   -1,   -1,   -1,   -1,   -1,  287,
  288,  289,   -1,  291,   60,   61,   62,   37,   38,   -1,
   -1,   -1,   42,   43,   -1,   45,   -1,   47,   -1,   37,
   38,   -1,   -1,   -1,   42,   43,   -1,   45,  126,   47,
   60,   61,   62,   -1,   -1,   91,  263,  264,   94,   -1,
   -1,   -1,   60,   61,   62,   38,  273,   40,  275,  276,
  277,  278,   45,   -1,   -1,  282,  283,  284,  285,   -1,
   -1,   91,   -1,   -1,   94,   -1,   -1,   -1,  124,   -1,
   63,   -1,  280,   91,   -1,   -1,   94,   -1,   -1,  287,
  288,  289,   -1,  291,   38,   -1,   40,   -1,   -1,   -1,
   -1,   45,   -1,   -1,  124,   -1,   -1,   -1,   91,   -1,
   -1,  257,  258,  259,  260,   -1,  124,  263,  264,   63,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  273,  274,  275,
  276,  277,  278,  279,  280,  281,  282,  283,  284,  285,
   -1,   -1,   -1,  126,   -1,   -1,   -1,   91,   38,   -1,
   40,   -1,   38,   -1,   40,   45,   -1,   -1,   -1,   45,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,
  258,  259,  260,   63,   -1,   -1,  264,   63,   -1,  267,
  268,  269,  126,   -1,   38,  273,   40,   -1,   -1,   -1,
  278,   45,   -1,   -1,   -1,  283,  284,  285,   -1,   -1,
   -1,   91,   -1,   -1,   -1,   91,   38,   -1,   40,   63,
   -1,   -1,   -1,   45,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  274,   -1,
   -1,   63,   -1,   -1,   -1,   -1,  126,   91,   -1,   40,
  126,  287,  288,  289,   -1,  291,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   59,   91,
   -1,  281,   63,   -1,   -1,   -1,   -1,  287,  288,  289,
   -1,  291,  126,   -1,  257,  258,  259,  260,   -1,  287,
  288,  289,   -1,  291,  267,  268,  269,   -1,   -1,   -1,
  273,   -1,   -1,   -1,  126,  278,   38,   -1,   40,   -1,
  283,  284,  285,   45,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,   63,   -1,   -1,   -1,  126,   -1,   -1,   38,  273,
   40,  275,  276,  277,  278,   45,   -1,   -1,   -1,  283,
  284,  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   91,
   -1,   -1,   -1,   63,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  257,  258,  259,  260,   -1,   -1,   -1,   -1,   -1,
   -1,   91,   -1,  273,  126,   -1,  276,  277,  278,   -1,
   -1,   -1,   -1,  283,  284,  285,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  126,   -1,   -1,  273,
   -1,   -1,   -1,  277,  278,  257,  258,  259,  260,  283,
  284,  285,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  273,   -1,   -1,   -1,  277,  278,   -1,   -1,   -1,
   -1,  283,  284,  285,   -1,   -1,  257,  258,  259,  260,
   -1,   -1,  263,  264,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  273,   -1,  275,  276,  277,  278,   -1,   -1,
   -1,  282,  283,  284,  285,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   26,   27,   -1,   -1,   30,   31,
   32,   33,   34,   35,   36,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
   -1,   -1,   -1,   55,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  273,   -1,   -1,   -1,   -1,  278,   -1,   -1,   -1,
  282,  283,  284,  285,   -1,   -1,   -1,  257,  258,  259,
  260,   83,   -1,   85,   -1,   87,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  273,   -1,   -1,   -1,   -1,  278,   -1,
   -1,  103,   -1,  283,  284,  285,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  125,   -1,  127,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  158,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 295
#define YYUNDFTOKEN 317
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
"ELIF","FI","FOR","UNTIL","STEP","DO","DONE","REPEAT","STOP","RETURN","IFX",
"ATTR","GE","LE","EQ","NE","UMINUS","UINPUT","UNEG","UAND",0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : file",
"file : program",
"file : module",
"program : PROGRAM declarations START body END",
"program : PROGRAM declarations START END",
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
"expression : expression operator expression",
"expression : expression '[' expression ']'",
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
#line 188 "minor.y"

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
#line 685 "y.tab.c"

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
#line 48 "minor.y"
	{;}
break;
case 2:
#line 49 "minor.y"
	{;}
break;
case 3:
#line 52 "minor.y"
	{;}
break;
case 4:
#line 53 "minor.y"
	{;}
break;
case 5:
#line 54 "minor.y"
	{;}
break;
case 6:
#line 57 "minor.y"
	{;}
break;
case 7:
#line 58 "minor.y"
	{;}
break;
case 8:
#line 61 "minor.y"
	{;}
break;
case 9:
#line 62 "minor.y"
	{;}
break;
case 10:
#line 63 "minor.y"
	{;}
break;
case 11:
#line 64 "minor.y"
	{;}
break;
case 12:
#line 65 "minor.y"
	{;}
break;
case 13:
#line 66 "minor.y"
	{;}
break;
case 14:
#line 67 "minor.y"
	{;}
break;
case 15:
#line 68 "minor.y"
	{;}
break;
case 16:
#line 71 "minor.y"
	{;}
break;
case 17:
#line 72 "minor.y"
	{;}
break;
case 18:
#line 73 "minor.y"
	{;}
break;
case 19:
#line 76 "minor.y"
	{;}
break;
case 20:
#line 77 "minor.y"
	{/*$$ = yylval.s[0])*/;}
break;
case 21:
#line 78 "minor.y"
	{;}
break;
case 22:
#line 81 "minor.y"
	{;}
break;
case 23:
#line 82 "minor.y"
	{;}
break;
case 24:
#line 83 "minor.y"
	{;}
break;
case 25:
#line 84 "minor.y"
	{;}
break;
case 26:
#line 85 "minor.y"
	{;}
break;
case 27:
#line 86 "minor.y"
	{;}
break;
case 28:
#line 87 "minor.y"
	{;}
break;
case 29:
#line 88 "minor.y"
	{;}
break;
case 30:
#line 89 "minor.y"
	{;}
break;
case 31:
#line 90 "minor.y"
	{;}
break;
case 32:
#line 91 "minor.y"
	{;}
break;
case 33:
#line 92 "minor.y"
	{;}
break;
case 34:
#line 93 "minor.y"
	{;}
break;
case 35:
#line 94 "minor.y"
	{;}
break;
case 36:
#line 95 "minor.y"
	{;}
break;
case 37:
#line 96 "minor.y"
	{;}
break;
case 38:
#line 99 "minor.y"
	{;}
break;
case 39:
#line 100 "minor.y"
	{;}
break;
case 40:
#line 103 "minor.y"
	{;}
break;
case 41:
#line 104 "minor.y"
	{;}
break;
case 42:
#line 107 "minor.y"
	{;}
break;
case 43:
#line 108 "minor.y"
	{;}
break;
case 44:
#line 111 "minor.y"
	{;}
break;
case 45:
#line 112 "minor.y"
	{;}
break;
case 46:
#line 113 "minor.y"
	{;}
break;
case 47:
#line 116 "minor.y"
	{;}
break;
case 48:
#line 117 "minor.y"
	{;}
break;
case 49:
#line 118 "minor.y"
	{;}
break;
case 50:
#line 121 "minor.y"
	{;}
break;
case 51:
#line 122 "minor.y"
	{;}
break;
case 52:
#line 125 "minor.y"
	{;}
break;
case 53:
#line 126 "minor.y"
	{;}
break;
case 54:
#line 127 "minor.y"
	{;}
break;
case 55:
#line 128 "minor.y"
	{;}
break;
case 56:
#line 129 "minor.y"
	{;}
break;
case 57:
#line 130 "minor.y"
	{;}
break;
case 58:
#line 131 "minor.y"
	{;}
break;
case 59:
#line 132 "minor.y"
	{;}
break;
case 60:
#line 133 "minor.y"
	{;}
break;
case 61:
#line 134 "minor.y"
	{;}
break;
case 62:
#line 135 "minor.y"
	{;}
break;
case 63:
#line 136 "minor.y"
	{;}
break;
case 64:
#line 137 "minor.y"
	{;}
break;
case 65:
#line 138 "minor.y"
	{;}
break;
case 66:
#line 141 "minor.y"
	{;}
break;
case 67:
#line 142 "minor.y"
	{;}
break;
case 68:
#line 145 "minor.y"
	{;}
break;
case 69:
#line 148 "minor.y"
	{;}
break;
case 70:
#line 149 "minor.y"
	{;}
break;
case 71:
#line 152 "minor.y"
	{;}
break;
case 72:
#line 153 "minor.y"
	{;}
break;
case 73:
#line 154 "minor.y"
	{;}
break;
case 74:
#line 155 "minor.y"
	{;}
break;
case 75:
#line 156 "minor.y"
	{;}
break;
case 76:
#line 157 "minor.y"
	{;}
break;
case 77:
#line 158 "minor.y"
	{;}
break;
case 78:
#line 159 "minor.y"
	{;}
break;
case 79:
#line 160 "minor.y"
	{;}
break;
case 80:
#line 161 "minor.y"
	{;}
break;
case 81:
#line 162 "minor.y"
	{;}
break;
case 82:
#line 163 "minor.y"
	{;}
break;
case 83:
#line 164 "minor.y"
	{;}
break;
case 84:
#line 165 "minor.y"
	{;}
break;
case 85:
#line 166 "minor.y"
	{;}
break;
case 86:
#line 168 "minor.y"
	{;}
break;
case 87:
#line 169 "minor.y"
	{;}
break;
case 88:
#line 170 "minor.y"
	{;}
break;
case 89:
#line 171 "minor.y"
	{;}
break;
case 90:
#line 172 "minor.y"
	{;}
break;
case 91:
#line 173 "minor.y"
	{;}
break;
case 92:
#line 174 "minor.y"
	{;}
break;
case 93:
#line 175 "minor.y"
	{;}
break;
case 94:
#line 176 "minor.y"
	{;}
break;
case 95:
#line 177 "minor.y"
	{;}
break;
case 96:
#line 178 "minor.y"
	{;}
break;
case 97:
#line 179 "minor.y"
	{;}
break;
case 98:
#line 183 "minor.y"
	{;}
break;
case 99:
#line 184 "minor.y"
	{;}
break;
#line 1283 "y.tab.c"
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
