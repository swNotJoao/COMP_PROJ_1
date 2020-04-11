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
   15,    2,    2,
};
static const YYINT yylen[] = {                            2,
    1,    1,    5,    4,    1,    3,    1,    5,    3,    2,
    2,    4,    3,    1,    1,    2,    3,    1,    1,    1,
    6,    7,    6,    5,    7,    6,    7,    6,    5,    7,
    5,    6,    5,    4,    6,    5,    6,    5,    4,    6,
    1,    1,    1,    3,    5,    2,    1,    1,    1,    3,
    2,    1,    1,    2,    8,    6,    5,    5,    4,    9,
    2,    2,    1,    1,    2,    1,    1,    2,    4,    1,
    3,    3,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    1,    2,    0,    0,   47,   49,   48,
    0,   41,   42,    0,    5,    7,    0,    0,    0,   73,
    0,    0,    0,    0,   63,   64,    0,    0,   53,    0,
   43,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   10,    0,    0,   72,    0,    0,    0,   65,   54,    4,
    0,   62,   61,    0,    0,    0,    0,    0,    0,    6,
    0,   18,   20,   19,    0,   15,    0,   71,    0,    0,
    0,   44,    0,    0,   39,    0,    0,    0,    0,   34,
    0,    3,    0,    0,   16,    0,    0,   59,    0,    0,
   67,    0,   38,    0,   36,    0,    0,   29,    0,    0,
   24,    0,   33,    0,   31,    0,   17,   45,    0,   57,
    0,   58,   68,    0,   37,   28,    0,   26,   23,    0,
   21,   32,    0,    0,   56,    0,   27,   22,    0,    0,
    0,   55,    0,   60,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,   14,   15,   28,   29,   30,   16,   17,   31,
   65,   66,   19,   32,   33,   90,   91,
};
static const YYINT yysindex[] = {                      -231,
  -74,   13,    0,    0,    0, -156, -195,    0,    0,    0,
 -174,    0,    0,  -50,    0,    0, -123, -279, -248,    0,
  -54,  -19, -222, -222,    0,    0, -222, -104,    0, -223,
    0,  -16,  -23, -242, -210,   30, -208, -156,   21, -195,
    0,   43,  -37,    0, -190, -197, -201,    0,    0,    0,
 -156,    0,    0,   43, -144, -180, -179, -106, -181,    0,
 -202,    0,    0,    0,  -43,    0, -167,    0, -143, -222,
 -104,    0,  -43, -156,    0,  -53,  -97,  -81, -156,    0,
  -48,    0,   43,   43,    0,    7, -222,    0, -126, -238,
    0, -177,    0, -156,    0, -195, -156,    0,  -46, -156,
    0,  -44,    0, -156,    0,  -43,    0,    0, -165,    0,
  -73,    0,    0, -222,    0,    0, -156,    0,    0, -156,
    0,    0, -104, -104,    0, -171,    0,    0, -104, -215,
 -104,    0, -118,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -57,    0,    0,
    0,  -33,    0,    0,    0,    0,  -10,  -52,    0,    0,
    0,    0,    0,  -45,    0,    0,    0,    0,    0,    0,
    0,    0,  -55,    0,    0,    0,    0,    0,    0,    0,
  -42,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   -8,    0,    0,    0,   -6,    0,    0,    0,    0,    0,
   -4,    0,   -2,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    6,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   28,    0,
    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,  113,   79,  -35,  -25,  -18,    0,  109,   20,
  -36,  -40,   12,   29,    5,   32,  -71,
};
#define YYTABLESIZE 305
static const YYINT yytable[] = {                         70,
   84,   14,   49,   46,   39,   96,   52,   42,   39,   53,
   96,   43,   96,   11,   96,   71,   51,   73,  113,   59,
   18,   18,   37,   45,   85,   70,   34,   46,   47,    1,
    2,   48,   85,   89,   22,   52,   41,   87,  112,  113,
   50,   22,   51,  107,   54,   49,  106,   57,   66,   55,
    9,   58,   13,   67,   50,   93,   12,   23,   18,   61,
  103,  132,   24,   49,    8,   85,   68,   25,   26,   27,
   72,    8,    9,   10,   92,  115,   69,   70,  116,   77,
   78,  119,   82,   76,   83,  122,   81,  129,  130,   86,
   35,  109,    8,    9,   10,  133,   12,   13,  127,  108,
   22,  128,  114,   49,   49,   99,  102,   49,  123,  131,
    8,    9,   10,   22,   21,   72,   23,   60,  126,   36,
  111,   24,    8,    9,   10,    0,   25,   26,   27,   23,
   22,    0,   87,   88,   24,    0,   74,   75,   22,   25,
   26,   27,   40,    8,    9,   10,   23,    0,    0,   87,
  110,   24,   22,    0,   23,    0,   25,   26,   27,   24,
    8,    9,   10,  134,   25,   26,   27,    0,   23,    8,
    9,   10,    0,   24,   79,   80,    0,    0,   25,   26,
   27,    0,    0,   97,   98,    8,    9,   10,    6,    0,
    0,    7,    8,    9,   10,   11,   12,   13,    0,  100,
  101,  124,   87,  125,    0,   14,   14,   46,   46,   44,
   52,   52,   38,   62,   63,   64,    0,   11,   11,    0,
   51,   51,    0,   70,    0,   46,   46,   94,   95,   70,
   70,   46,  104,  105,  117,  118,  120,  121,    0,   70,
   70,   70,   70,   70,   70,   70,   70,   70,   70,   70,
   70,   70,   66,   66,    9,    9,   13,   13,   50,   50,
   12,   12,   66,    0,   66,   66,   66,   66,    8,    8,
    0,   66,   66,   66,   66,    0,   20,    0,    7,    8,
    9,   10,   11,   12,   13,    0,    7,    8,    9,   10,
   11,   12,   13,    0,   56,    0,    8,    9,   10,   62,
   63,   64,   69,   69,   69,
};
static const YYINT yycheck[] = {                         33,
   44,   59,   28,   59,   59,   59,   59,  287,   59,   33,
   59,  260,   59,   59,   59,   51,   59,   54,   90,   38,
    1,    2,   11,   43,   65,   59,    7,   23,   24,  261,
  262,   27,   73,   69,  257,   59,   17,  276,  277,  111,
  264,  257,   59,   84,  287,   71,   83,   36,   59,  260,
   59,  260,   59,   91,   59,   74,   59,  273,   39,   40,
   79,  277,  278,   89,   59,  106,  257,  283,  284,  285,
   51,  267,  268,  269,   70,   94,  274,  279,   97,  260,
  260,  100,  264,   55,  287,  104,   58,  123,  124,  257,
  265,   87,  267,  268,  269,  131,  271,  272,  117,   93,
  257,  120,  280,  129,  130,   77,   78,  133,  274,  281,
  267,  268,  269,  257,    2,   96,  273,   39,  114,   11,
   89,  278,  267,  268,  269,   -1,  283,  284,  285,  273,
  257,   -1,  276,  277,  278,   -1,  281,  282,  257,  283,
  284,  285,  266,  267,  268,  269,  273,   -1,   -1,  276,
  277,  278,  257,   -1,  273,   -1,  283,  284,  285,  278,
  267,  268,  269,  282,  283,  284,  285,   -1,  273,  267,
  268,  269,   -1,  278,  281,  282,   -1,   -1,  283,  284,
  285,   -1,   -1,  281,  282,  267,  268,  269,  263,   -1,
   -1,  266,  267,  268,  269,  270,  271,  272,   -1,  281,
  282,  275,  276,  277,   -1,  263,  264,  263,  264,  264,
  263,  264,  263,  257,  258,  259,   -1,  263,  264,   -1,
  263,  264,   -1,  257,   -1,  281,  282,  281,  282,  263,
  264,  287,  281,  282,  281,  282,  281,  282,   -1,  273,
  274,  275,  276,  277,  278,  279,  280,  281,  282,  283,
  284,  285,  263,  264,  263,  264,  263,  264,  263,  264,
  263,  264,  273,   -1,  275,  276,  277,  278,  263,  264,
   -1,  282,  283,  284,  285,   -1,  264,   -1,  266,  267,
  268,  269,  270,  271,  272,   -1,  266,  267,  268,  269,
  270,  271,  272,   -1,  265,   -1,  267,  268,  269,  257,
  258,  259,  275,  276,  277,
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
"'!'",0,0,0,"'%'",0,0,0,0,"'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'",0,"'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"LITERAL_I","LITERAL_S","LITERAL_C","IDENTIFICADOR",
"PROGRAM","MODULE","START","END","VOID","CONST","NUMBER","ARRAY","STRING",
"FUNCTION","PUBLIC","FORWARD","IF","THEN","ELSE","ELIF","FI","FOR","UNTIL",
"STEP","DO","DONE","REPEAT","STOP","RETURN","IFX","ATTR","GE","LE","EQ","NE",
"UMINUS",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
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
"expression : LITERAL_I '+' LITERAL_I",
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
#line 158 "gram.y"

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
#line 411 "y.tab.c"

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
#line 153 "gram.y"
	{;}
break;
case 73:
#line 154 "gram.y"
	{;}
break;
#line 905 "y.tab.c"
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
