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
