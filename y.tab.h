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
