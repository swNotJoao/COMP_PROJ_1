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
#line 15 "minor.y"
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
#line 46 "y.tab.c"

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

#define INTEGER 257
#define VARIABLE 258
#define STRING 259
#define WHILE 260
#define IF 261
#define PRINT 262
#define READ 263
#define PROGRAM 264
#define END 265
#define IFX 266
#define ELSE 267
#define GE 268
#define LE 269
#define EQ 270
#define NE 271
#define UMINUS 272
#define LABEL 273
#define JMP 274
#define JZ 275
#define JNZ 276
#define ETIQ 277
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    2,
};
static const YYINT yylen[] = {                            2,
    3,    1,    3,    3,    3,    4,    5,    5,    7,    3,
    1,    2,    1,    1,    2,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    2,    0,   11,
    0,    0,    0,    0,   13,   14,    0,    0,    0,    0,
    0,    0,    1,   12,    0,    0,    0,    3,   15,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    4,    5,   10,    6,    0,    0,   27,    0,    0,
    0,    0,    0,    0,    0,    0,   18,   19,   20,    7,
    0,    0,    9,
};
static const YYINT yydgoto[] = {                          2,
   10,   20,   11,
};
static const YYINT yysindex[] = {                      -263,
  -45,    0,  -58,  -22,  -21,  -36, -238,    0,  -45,    0,
  -57,  -29,  -29,  -29,    0,    0,  -38,  -29,  -29,  -37,
  -35,   -2,    0,    0,  -30,   -6,    1,    0,    0,    8,
  -29,  -29,  -29,  -29,  -29,  -29,  -29,  -29,  -29,  -29,
  -29,    0,    0,    0,    0,  -45,  -45,    0,  112,  112,
  112,  112,  112,  112,   89,   89,    0,    0,    0,    0,
 -241,  -45,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   30,   34,
   39,   44,   50,   54,   17,   24,    0,    0,    0,    0,
   68,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   86,  106,   18,
};
#define YYTABLESIZE 333
static const YYINT yytable[] = {                         41,
    1,    8,   12,   19,   39,   37,   41,   38,   18,   40,
   19,   39,   37,    8,   38,   18,   40,   13,   14,   21,
   28,   42,   36,   43,   35,   62,   22,    0,   45,   36,
   41,   35,    0,    0,   46,   39,   37,   41,   38,    0,
   40,   47,   39,   37,   41,   38,    0,   40,   48,   39,
   37,    0,   38,   36,   40,   35,    8,   16,    0,   16,
   36,   16,   35,    0,   17,    9,   17,   36,   17,   35,
   23,    0,    0,    0,   24,   16,   16,    9,   16,   26,
    0,    0,   17,   17,   25,   17,    0,    0,   23,   23,
   22,   23,   24,   24,   21,   24,   24,   26,   26,    0,
   26,    0,   25,   25,    0,   25,    0,   24,   22,   22,
    0,   22,   21,   21,    0,   21,    0,   25,   26,   27,
    9,    0,   44,   29,   30,   41,    8,    0,    0,    0,
   39,   60,   61,    0,    0,   40,   49,   50,   51,   52,
   53,   54,   55,   56,   57,   58,   59,   63,   41,    0,
    0,    0,    0,   39,   37,    0,   38,    0,   40,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    8,    0,    8,    0,    0,    0,    0,    0,    0,    0,
    3,    0,    4,    5,    6,    7,    0,   23,    0,    0,
    0,    0,    3,    0,    4,    5,    6,    7,    0,    0,
   15,   16,   17,    0,    0,    0,    0,   15,   16,    0,
   31,   32,   33,   34,    0,    0,    0,   31,   32,   33,
   34,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    3,    0,    4,    5,    6,
    7,   31,   32,   33,   34,    0,    0,    0,   31,   32,
   33,   34,    0,    0,    0,   31,   32,   33,   34,    0,
    0,    0,    0,    0,   16,   16,   16,   16,    0,    0,
    0,   17,   17,   17,   17,    0,    0,   23,   23,   23,
   23,   24,   24,   24,   24,    0,   26,   26,   26,   26,
    0,   25,   25,   25,   25,    0,    0,   22,   22,   22,
   22,   21,   21,   21,   21,    8,    0,    8,    8,    8,
    8,    0,    8,
};
static const YYINT yycheck[] = {                         37,
  264,   59,   61,   40,   42,   43,   37,   45,   45,   47,
   40,   42,   43,   59,   45,   45,   47,   40,   40,  258,
   59,   59,   60,   59,   62,  267,    9,   -1,   59,   60,
   37,   62,   -1,   -1,   41,   42,   43,   37,   45,   -1,
   47,   41,   42,   43,   37,   45,   -1,   47,   41,   42,
   43,   -1,   45,   60,   47,   62,   59,   41,   -1,   43,
   60,   45,   62,   -1,   41,  123,   43,   60,   45,   62,
   41,   -1,   -1,   -1,   41,   59,   60,  123,   62,   41,
   -1,   -1,   59,   60,   41,   62,   -1,   -1,   59,   60,
   41,   62,   59,   60,   41,   62,   11,   59,   60,   -1,
   62,   -1,   59,   60,   -1,   62,   -1,   22,   59,   60,
   -1,   62,   59,   60,   -1,   62,   -1,   12,   13,   14,
  123,   -1,  125,   18,   19,   37,   59,   -1,   -1,   -1,
   42,   46,   47,   -1,   -1,   47,   31,   32,   33,   34,
   35,   36,   37,   38,   39,   40,   41,   62,   37,   -1,
   -1,   -1,   -1,   42,   43,   -1,   45,   -1,   47,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  123,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  258,   -1,  260,  261,  262,  263,   -1,  265,   -1,   -1,
   -1,   -1,  258,   -1,  260,  261,  262,  263,   -1,   -1,
  257,  258,  259,   -1,   -1,   -1,   -1,  257,  258,   -1,
  268,  269,  270,  271,   -1,   -1,   -1,  268,  269,  270,
  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  258,   -1,  260,  261,  262,
  263,  268,  269,  270,  271,   -1,   -1,   -1,  268,  269,
  270,  271,   -1,   -1,   -1,  268,  269,  270,  271,   -1,
   -1,   -1,   -1,   -1,  268,  269,  270,  271,   -1,   -1,
   -1,  268,  269,  270,  271,   -1,   -1,  268,  269,  270,
  271,  268,  269,  270,  271,   -1,  268,  269,  270,  271,
   -1,  268,  269,  270,  271,   -1,   -1,  268,  269,  270,
  271,  268,  269,  270,  271,  258,   -1,  260,  261,  262,
  263,   -1,  265,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 277
#define YYUNDFTOKEN 283
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"INTEGER","VARIABLE","STRING","WHILE","IF","PRINT","READ",
"PROGRAM","END","IFX","ELSE","GE","LE","EQ","NE","UMINUS","LABEL","JMP","JZ",
"JNZ","ETIQ",0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : PROGRAM list END",
"stmt : ';'",
"stmt : PRINT STRING ';'",
"stmt : PRINT expr ';'",
"stmt : READ VARIABLE ';'",
"stmt : VARIABLE '=' expr ';'",
"stmt : WHILE '(' expr ')' stmt",
"stmt : IF '(' expr ')' stmt",
"stmt : IF '(' expr ')' stmt ELSE stmt",
"stmt : '{' list '}'",
"list : stmt",
"list : list stmt",
"expr : INTEGER",
"expr : VARIABLE",
"expr : '-' expr",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : expr '%' expr",
"expr : expr '<' expr",
"expr : expr '>' expr",
"expr : expr GE expr",
"expr : expr LE expr",
"expr : expr NE expr",
"expr : expr EQ expr",
"expr : '(' expr ')'",

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
#line 98 "minor.y"

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
#line 319 "y.tab.c"

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
#line 38 "minor.y"
	{ evaluate(yystack.l_mark[-1].n); freeNode(yystack.l_mark[-1].n); }
break;
case 2:
#line 41 "minor.y"
	{ yyval.n = 0; }
break;
case 3:
#line 42 "minor.y"
	{ yyval.n = strNode(STRING, yystack.l_mark[-1].s); }
break;
case 4:
#line 43 "minor.y"
	{ yyval.n = uniNode(PRINT, yystack.l_mark[-1].n); }
break;
case 5:
#line 44 "minor.y"
	{ if (IDfind(yystack.l_mark[-1].s, 0) < 0) yyval.n = 0; else yyval.n = strNode(READ, yystack.l_mark[-1].s); }
break;
case 6:
#line 45 "minor.y"
	{ IDnew(0, yystack.l_mark[-3].s, (void*)IDtest);
					    yyval.n = binNode('=', strNode(VARIABLE, yystack.l_mark[-3].s), yystack.l_mark[-1].n); }
break;
case 7:
#line 47 "minor.y"
	{ int lbl1 = ++lbl, lbl2 = ++lbl;
					    yyval.n = seqNode(';', 5,
							strNode(JMP, mklbl(lbl1)),
							strNode(LABEL, mklbl(lbl2)),
							yystack.l_mark[0].n /* instr */,
							strNode(LABEL, mklbl(lbl1)),
							binNode(JNZ, yystack.l_mark[-2].n /* cond */,
								strNode(ETIQ, mklbl(lbl2))));
					  }
break;
case 8:
#line 56 "minor.y"
	{ int lbl1 = ++lbl;
					    yyval.n = seqNode(';', 3,
							binNode(JZ, yystack.l_mark[-2].n /* cond */,
								strNode(ETIQ, mklbl(lbl1))),
							yystack.l_mark[0].n /* instr */,
							strNode(LABEL, mklbl(lbl1)));
					  }
break;
case 9:
#line 63 "minor.y"
	{ int lbl1 = ++lbl, lbl2 = ++lbl;
					    yyval.n = seqNode(';', 6,
							binNode(JZ, yystack.l_mark[-4].n /* cond */,
								strNode(ETIQ, mklbl(lbl1))),
							yystack.l_mark[-2].n /* instr */,
							strNode(JMP, mklbl(lbl2)),
							strNode(LABEL, mklbl(lbl1)),
							yystack.l_mark[0].n /* else */,
							strNode(LABEL, mklbl(lbl2)));
					  }
break;
case 10:
#line 73 "minor.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
case 11:
#line 76 "minor.y"
	{ yyval.n = yystack.l_mark[0].n; }
break;
case 12:
#line 77 "minor.y"
	{ yyval.n = binNode(';', yystack.l_mark[-1].n, yystack.l_mark[0].n); }
break;
case 13:
#line 80 "minor.y"
	{ yyval.n = intNode(INTEGER, yystack.l_mark[0].i); }
break;
case 14:
#line 81 "minor.y"
	{ if (IDfind(yystack.l_mark[0].s, 0) < 0) yyval.n = 0; else yyval.n = strNode(VARIABLE, yystack.l_mark[0].s); }
break;
case 15:
#line 82 "minor.y"
	{ yyval.n = uniNode(UMINUS, yystack.l_mark[0].n); }
break;
case 16:
#line 83 "minor.y"
	{ yyval.n = binNode('+', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 17:
#line 84 "minor.y"
	{ yyval.n = binNode('-', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 18:
#line 85 "minor.y"
	{ yyval.n = binNode('*', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 19:
#line 86 "minor.y"
	{ yyval.n = binNode('/', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 20:
#line 87 "minor.y"
	{ yyval.n = binNode('%', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 21:
#line 88 "minor.y"
	{ yyval.n = binNode('<', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 22:
#line 89 "minor.y"
	{ yyval.n = binNode('>', yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 23:
#line 90 "minor.y"
	{ yyval.n = binNode(GE, yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 24:
#line 91 "minor.y"
	{ yyval.n = binNode(LE, yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 25:
#line 92 "minor.y"
	{ yyval.n = binNode(NE, yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 26:
#line 93 "minor.y"
	{ yyval.n = binNode(EQ, yystack.l_mark[-2].n, yystack.l_mark[0].n); }
break;
case 27:
#line 94 "minor.y"
	{ yyval.n = yystack.l_mark[-1].n; }
break;
#line 653 "y.tab.c"
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
