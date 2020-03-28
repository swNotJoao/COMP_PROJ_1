#define joao 257
#define INTEGER 258
#define VARIABLE 259
#define STRING 260
#define WHILE 261
#define IF 262
#define PRINT 263
#define READ 264
#define PROGRAM 265
#define END 266
#define IFX 267
#define ELSE 268
#define GE 269
#define LE 270
#define EQ 271
#define NE 272
#define UMINUS 273
#define LABEL 274
#define JMP 275
#define JZ 276
#define JNZ 277
#define ETIQ 278
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
extern YYSTYPE yylval;
