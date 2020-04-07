#define LITERAL_I 257
#define LITERAL_S 258
#define IDENTIFICADOR 259
#define PROGRAM 260
#define MODULE 261
#define START 262
#define END 263
#define VOID 264
#define CONST 265
#define NUMBER 266
#define ARRAY 267
#define STRING 268
#define FUNCTION 269
#define PUBLIC 270
#define FORWARD 271
#define IF 272
#define THEN 273
#define ELSE 274
#define ELIF 275
#define FI 276
#define FOR 277
#define UNTIL 278
#define STEP 279
#define DO 280
#define DONE 281
#define REPEAT 282
#define STOP 283
#define RETURN 284
#define IFX 285
#define GE 286
#define LE 287
#define EQ 288
#define NE 289
#define UMINUS 290
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
