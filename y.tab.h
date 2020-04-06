#define INTEGER 257
#define IDENTIFICADOR 258
#define PROGRAM 259
#define MODULE 260
#define START 261
#define END 262
#define VOID 263
#define CONST 264
#define NUMBER 265
#define ARRAY 266
#define STRING 267
#define FUNCTION 268
#define PUBLIC 269
#define FORWARD 270
#define IF 271
#define THEN 272
#define ELSE 273
#define ELIF 274
#define FI 275
#define FOR 276
#define UNTIL 277
#define STEP 278
#define DO 279
#define DONE 280
#define REPEAT 281
#define STOP 282
#define RETURN 283
#define IFX 284
#define GE 285
#define LE 286
#define EQ 287
#define NE 288
#define UMINUS 289
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
