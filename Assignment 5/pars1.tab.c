/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "pars1.y" /* yacc.c:339  */
     /* pars1.y    Pascal Parser      Gordon S. Novak Jr.  ; 30 Jul 13   */

/* Copyright (c) 2013 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/* 
 Student: S. Ram Janarthana Raja
 UTEID  : rs53992
 */ 


/* 14 Feb 01; 01 Oct 04; 02 Mar 07; 27 Feb 08; 24 Jul 09; 02 Aug 12 */

/*
; This program is free software; you can redistribute it and/or modify
; it under the terms of the GNU General Public License as published by
; the Free Software Foundation; either version 2 of the License, or
; (at your option) any later version.

; This program is distributed in the hope that it will be useful,
; but WITHOUT ANY WARRANTY; without even the implied warranty of
; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
; GNU General Public License for more details.

; You should have received a copy of the GNU General Public License
; along with this program; if not, see <http://www.gnu.org/licenses/>.
  */


/* NOTE:   Copy your lexan.l lexical analyzer to this directory.      */

       /* To use:
                     make pars1y              has 1 shift/reduce conflict
                     pars1y                   execute the parser
                     i:=j .
                     ^D                       control-D to end input

                     pars1y                   execute the parser
                     begin i:=j; if i+j then x:=a+b*c else x:=a*b+c; k:=i end.
                     ^D

                     pars1y                   execute the parser
                     if x+y then if y+z then i:=j else k:=2.
                     ^D

           You may copy pars1.y to be parse.y and extend it for your
           assignment.  Then use   make parser   as above.
        */

        /* Yacc reports 1 shift/reduce conflict, due to the ELSE part of
           the IF statement, but Yacc's default resolves it in the right way.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "token.h"
#include "lexan.h"
#include "symtab.h"
#include "parse.h"

        /* define the type of the Yacc stack element to be TOKEN */

#define YYSTYPE TOKEN

TOKEN parseresult;


#line 134 "pars1.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING = 259,
    NUMBER = 260,
    PLUS = 261,
    MINUS = 262,
    TIMES = 263,
    DIVIDE = 264,
    ASSIGN = 265,
    EQ = 266,
    NE = 267,
    LT = 268,
    LE = 269,
    GE = 270,
    GT = 271,
    POINT = 272,
    DOT = 273,
    AND = 274,
    OR = 275,
    NOT = 276,
    DIV = 277,
    MOD = 278,
    IN = 279,
    COMMA = 280,
    SEMICOLON = 281,
    COLON = 282,
    LPAREN = 283,
    RPAREN = 284,
    LBRACKET = 285,
    RBRACKET = 286,
    DOTDOT = 287,
    ARRAY = 288,
    BEGINBEGIN = 289,
    CASE = 290,
    CONST = 291,
    DO = 292,
    DOWNTO = 293,
    ELSE = 294,
    END = 295,
    FILEFILE = 296,
    FOR = 297,
    FUNCTION = 298,
    GOTO = 299,
    IF = 300,
    LABEL = 301,
    NIL = 302,
    OF = 303,
    PACKED = 304,
    PROCEDURE = 305,
    PROGRAM = 306,
    RECORD = 307,
    REPEAT = 308,
    SET = 309,
    THEN = 310,
    TO = 311,
    TYPE = 312,
    UNTIL = 313,
    VAR = 314,
    WHILE = 315,
    WITH = 316
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING 259
#define NUMBER 260
#define PLUS 261
#define MINUS 262
#define TIMES 263
#define DIVIDE 264
#define ASSIGN 265
#define EQ 266
#define NE 267
#define LT 268
#define LE 269
#define GE 270
#define GT 271
#define POINT 272
#define DOT 273
#define AND 274
#define OR 275
#define NOT 276
#define DIV 277
#define MOD 278
#define IN 279
#define COMMA 280
#define SEMICOLON 281
#define COLON 282
#define LPAREN 283
#define RPAREN 284
#define LBRACKET 285
#define RBRACKET 286
#define DOTDOT 287
#define ARRAY 288
#define BEGINBEGIN 289
#define CASE 290
#define CONST 291
#define DO 292
#define DOWNTO 293
#define ELSE 294
#define END 295
#define FILEFILE 296
#define FOR 297
#define FUNCTION 298
#define GOTO 299
#define IF 300
#define LABEL 301
#define NIL 302
#define OF 303
#define PACKED 304
#define PROCEDURE 305
#define PROGRAM 306
#define RECORD 307
#define REPEAT 308
#define SET 309
#define THEN 310
#define TO 311
#define TYPE 312
#define UNTIL 313
#define VAR 314
#define WHILE 315
#define WITH 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 304 "pars1.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    89,    90,    91,    93,    94,    96,    97,
      98,    99,   100,   102,   103,   105,   106,   108,   110,   111,
     113,   115,   116,   118,   119,   121,   123,   124,   126,   128,
     129,   131,   132,   134,   135,   137,   138,   140,   141,   143,
     145,   146,   147,   148,   150,   151,   153,   154,   155,   157,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   169,
     171,   172,   174,   175,   177,   179,   180,   181,   182,   184,
     185,   186,   188,   189,   190,   191,   192,   193,   194,   196,
     197,   198,   199,   200,   202,   203,   204,   206,   207,   209,
     210,   212,   213,   215,   216,   217,   218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "NUMBER", "PLUS",
  "MINUS", "TIMES", "DIVIDE", "ASSIGN", "EQ", "NE", "LT", "LE", "GE", "GT",
  "POINT", "DOT", "AND", "OR", "NOT", "DIV", "MOD", "IN", "COMMA",
  "SEMICOLON", "COLON", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "DOTDOT", "ARRAY", "BEGINBEGIN", "CASE", "CONST", "DO", "DOWNTO", "ELSE",
  "END", "FILEFILE", "FOR", "FUNCTION", "GOTO", "IF", "LABEL", "NIL", "OF",
  "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "THEN",
  "TO", "TYPE", "UNTIL", "VAR", "WHILE", "WITH", "$accept", "program",
  "u_constant", "sign", "constant", "idlist", "numlist", "cdef", "clist",
  "tdef", "tlist", "s_list", "fields", "field_list", "label", "lblock",
  "cblock", "tblock", "vblock", "varspecs", "vargroup", "type",
  "stype_list", "simpletype", "block", "statement", "funcall", "endpart",
  "endif", "assignment", "variable", "plus_op", "compare_op", "times_op",
  "s_expr", "expr", "expr_list", "term", "factor", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -10

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,    18,    29,     4,  -141,    56,    37,    35,    56,    41,
    -141,    65,    36,    63,    67,    71,    56,    58,  -141,  -141,
    -141,  -141,    54,    59,    36,    80,    83,   114,    36,   114,
    -141,   -14,  -141,  -141,   172,    79,    69,    -4,    66,    87,
      94,    99,   -10,   102,    98,   105,  -141,   114,    36,   -14,
    -141,    77,  -141,  -141,  -141,  -141,  -141,    30,   114,  -141,
    -141,    30,  -141,    97,    78,   125,   143,  -141,    76,   124,
     132,    36,  -141,  -141,   114,  -141,   150,   114,   188,    63,
    -141,    67,    -9,    40,    71,  -141,    40,  -141,    56,   199,
     134,  -141,  -141,   114,  -141,   192,   143,  -141,  -141,  -141,
      30,  -141,  -141,  -141,  -141,  -141,  -141,  -141,    36,   114,
    -141,  -141,  -141,  -141,  -141,    30,   114,    36,    36,   -14,
     214,  -141,   133,  -141,  -141,  -141,    51,  -141,  -141,  -141,
    -141,   136,   173,    56,   147,    56,   146,  -141,  -141,  -141,
    -141,  -141,   114,  -141,   159,  -141,   143,   140,    78,  -141,
     214,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   152,   181,
     170,   174,   158,   188,  -141,    36,    36,  -141,  -141,   168,
     176,    40,    56,  -141,  -141,  -141,  -141,   169,   181,  -141,
    -141,    40,  -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    14,     0,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    30,    32,
      34,    36,    65,     0,     0,     0,     0,     0,     0,     0,
      58,     0,    53,    52,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
      65,     0,    57,     5,     3,     6,     7,     0,     0,     4,
      93,     0,    96,    94,    88,     0,    85,    92,     0,    24,
       0,     0,    61,    49,     0,    68,     0,     0,     0,    19,
      31,     0,     0,     0,    22,    33,     0,    35,    38,    90,
       0,    28,    50,     0,    97,     0,    84,    69,    70,    71,
       0,    72,    75,    73,    76,    77,    74,    78,     0,     0,
      79,    80,    83,    81,    82,     0,     0,     0,     0,     0,
      64,    67,     0,     9,    12,    11,     0,    17,    18,    15,
      29,    46,     0,     0,     0,     0,     0,    20,    40,    21,
      39,    37,     0,    59,     0,    95,    86,    63,    87,    91,
      56,    23,    54,    60,    66,     8,    10,    43,     0,     0,
       0,    27,     0,     0,    89,     0,     0,    51,    47,     0,
      45,     0,     0,    42,    48,    55,    62,     0,     0,    25,
      26,     0,    44,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,   -55,   -76,    -5,   137,  -141,   141,  -141,
     135,   115,  -141,    50,  -141,  -141,   149,   196,   193,   148,
    -141,   -78,    61,  -140,   190,    -6,    -8,   -40,  -141,   212,
     -11,  -141,  -141,  -141,   131,   -22,   -67,   -39,   -46
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    60,    61,   136,    43,    39,    36,    37,    41,
      42,    68,   161,   162,    30,    17,    18,    19,    20,    44,
      45,   137,   169,   138,    21,    69,    62,    73,   167,    33,
      63,   100,   109,   115,    64,    89,    90,    66,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    34,   127,    10,    32,    65,    31,    70,   140,    92,
     122,    94,    71,    34,    34,     1,    32,    34,    49,   170,
      32,     3,    96,   126,    12,    12,    72,    13,   126,     4,
      12,   126,     5,    22,    53,    54,    95,    34,   170,    22,
      32,    23,    91,   131,   124,   125,    55,    56,    15,    16,
      16,    57,   120,    15,   155,    16,   156,   132,    58,     6,
      34,   146,     8,    32,     9,   119,    35,    11,   133,   149,
      24,   144,    38,   134,    40,   164,    46,    59,    25,   153,
      26,    27,    47,    50,    97,    98,    48,   174,    52,    28,
      78,    81,   135,   179,   150,    79,    29,    34,    99,    12,
      32,    13,   147,   183,   126,    83,    34,    34,   126,    32,
      32,    14,   152,    82,    75,    76,   126,    22,    53,    54,
      55,    56,    15,   126,    16,    84,   126,    77,   158,    86,
     160,    88,    12,    93,   116,    57,   101,   102,   103,   104,
     105,   106,    58,   101,   102,   103,   104,   105,   106,   107,
     117,   110,   111,   121,    34,    34,   107,    32,    32,   175,
     176,    59,   112,   143,   154,   113,   114,   160,    -9,   118,
     101,   102,   103,   104,   105,   106,   157,   159,   163,   166,
     108,   168,    74,   107,   131,   124,   125,    55,    56,    75,
      76,   123,   124,   125,    55,    56,   165,   171,   173,   177,
     172,   178,    77,   101,   102,   103,   104,   105,   106,   133,
     101,   102,   103,   104,   105,   106,   107,   181,   129,   139,
     128,   145,   180,   107,   142,   101,   102,   103,   104,   105,
     106,   130,   151,    80,    87,    85,   141,    51,   107,   182,
     148
};

static const yytype_uint8 yycheck[] =
{
       5,    12,    78,     8,    12,    27,    12,    29,    86,    49,
      77,    57,    26,    24,    25,    51,    24,    28,    24,   159,
      28,     3,    61,    78,    34,    34,    40,    36,    83,     0,
      34,    86,    28,     3,     4,     5,    58,    48,   178,     3,
      48,     5,    48,     3,     4,     5,     6,     7,    57,    59,
      59,    21,    74,    57,     3,    59,     5,    17,    28,     3,
      71,   100,    25,    71,    29,    71,     3,    26,    28,   115,
      34,    93,     5,    33,     3,   142,    18,    47,    42,   119,
      44,    45,    28,     3,     6,     7,    27,   163,     5,    53,
      11,    25,    52,   171,   116,    26,    60,   108,    20,    34,
     108,    36,   108,   181,   159,    11,   117,   118,   163,   117,
     118,    46,   118,    26,    17,    18,   171,     3,     4,     5,
       6,     7,    57,   178,    59,    26,   181,    30,   133,    27,
     135,    26,    34,    56,    58,    21,    11,    12,    13,    14,
      15,    16,    28,    11,    12,    13,    14,    15,    16,    24,
      26,     8,     9,     3,   165,   166,    24,   165,   166,   165,
     166,    47,    19,    29,    31,    22,    23,   172,    32,    37,
      11,    12,    13,    14,    15,    16,     3,    30,    32,    39,
      55,    29,    10,    24,     3,     4,     5,     6,     7,    17,
      18,     3,     4,     5,     6,     7,    37,    27,    40,    31,
      26,    25,    30,    11,    12,    13,    14,    15,    16,    28,
      11,    12,    13,    14,    15,    16,    24,    48,    81,    84,
      79,    29,   172,    24,    25,    11,    12,    13,    14,    15,
      16,    82,   117,    37,    44,    42,    88,    25,    24,   178,
     109
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,    63,     3,     0,    28,     3,    67,    25,    29,
      67,    26,    34,    36,    46,    57,    59,    77,    78,    79,
      80,    86,     3,     5,    34,    42,    44,    45,    53,    60,
      76,    87,    88,    91,    92,     3,    69,    70,     5,    68,
       3,    71,    72,    67,    81,    82,    18,    28,    27,    87,
       3,    91,     5,     4,     5,     6,     7,    21,    28,    47,
      64,    65,    88,    92,    96,    97,    99,   100,    73,    87,
      97,    26,    40,    89,    10,    17,    18,    30,    11,    26,
      79,    25,    26,    11,    26,    80,    27,    86,    26,    97,
      98,    87,    89,    56,   100,    97,    99,     6,     7,    20,
      93,    11,    12,    13,    14,    15,    16,    24,    55,    94,
       8,     9,    19,    22,    23,    95,    58,    26,    37,    87,
      97,     3,    98,     3,     4,     5,    65,    66,    70,    68,
      78,     3,    17,    28,    33,    52,    66,    83,    85,    72,
      83,    81,    25,    29,    97,    29,    99,    87,    96,   100,
      97,    73,    87,    89,    31,     3,     5,     3,    67,    30,
      67,    74,    75,    32,    98,    37,    39,    90,    29,    84,
      85,    27,    26,    40,    66,    87,    87,    31,    25,    83,
      75,    48,    84,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      71,    72,    72,    73,    73,    74,    75,    75,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      89,    89,    90,    90,    91,    92,    92,    92,    92,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    96,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     8,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     3,     3,     2,
       3,     3,     2,     3,     1,     3,     3,     1,     3,     4,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     3,
       1,     6,     3,     2,     3,     1,     1,     3,     3,     3,
       3,     5,     1,     1,     4,     6,     4,     2,     1,     4,
       3,     1,     2,     0,     3,     1,     4,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 87 "pars1.y" /* yacc.c:1646  */
    { parseresult = makeprogram((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-1])); }
#line 1528 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "pars1.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0])); }
#line 1534 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "pars1.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0])); }
#line 1540 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 102 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1546 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1552 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "pars1.y" /* yacc.c:1646  */
    { instlabel((yyvsp[-2])); }
#line 1558 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "pars1.y" /* yacc.c:1646  */
    { instlabel((yyvsp[0])); }
#line 1564 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "pars1.y" /* yacc.c:1646  */
    { instconst((yyvsp[-2]), (yyvsp[0])); }
#line 1570 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "pars1.y" /* yacc.c:1646  */
    { insttype((yyvsp[-2]), (yyvsp[0])); }
#line 1576 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 118 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1582 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1588 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 121 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instfields((yyvsp[-2]), (yyvsp[0])); }
#line 1594 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 123 "pars1.y" /* yacc.c:1646  */
    { (yyval) = nconc((yyvsp[-2]), (yyvsp[0])); }
#line 1600 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 126 "pars1.y" /* yacc.c:1646  */
    { (yyval) = dolabel((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1606 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1612 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 131 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1618 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 134 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1624 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1630 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 143 "pars1.y" /* yacc.c:1646  */
    { instvars((yyvsp[-2]), (yyvsp[0])); }
#line 1636 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instarray((yyvsp[-3]), (yyvsp[0])); }
#line 1642 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instrec((yyvsp[-2]), (yyvsp[-1])); }
#line 1648 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instpoint((yyvsp[-1]), (yyvsp[0])); }
#line 1654 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1660 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 151 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1666 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 153 "pars1.y" /* yacc.c:1646  */
    { (yyval) = findtype((yyvsp[0])); }
#line 1672 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 154 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instenum((yyvsp[-1])); }
#line 1678 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 155 "pars1.y" /* yacc.c:1646  */
    { (yyval) = instdotdot((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1684 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 157 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makeprogn((yyvsp[-2]),cons((yyvsp[-1]), (yyvsp[0]))); }
#line 1690 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 159 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makeprogn((yyvsp[-2]),cons((yyvsp[-1]), (yyvsp[0]))); }
#line 1696 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makeif((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0])); }
#line 1702 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makewhile((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1708 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 164 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makefor(1, (yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1714 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 165 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makerepeat((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1720 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 166 "pars1.y" /* yacc.c:1646  */
    { (yyval) = dogoto((yyvsp[-1]), (yyvsp[0])); }
#line 1726 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 169 "pars1.y" /* yacc.c:1646  */
    { (yyval) = makefuncall((yyvsp[-2]), (yyvsp[-3]), (yyvsp[-1])); }
#line 1732 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-1]), (yyvsp[0])); }
#line 1738 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "pars1.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1744 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1750 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 175 "pars1.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 1756 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 177 "pars1.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1762 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 179 "pars1.y" /* yacc.c:1646  */
    { (yyval) = findid((yyvsp[0])); }
#line 1768 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 180 "pars1.y" /* yacc.c:1646  */
    { (yyval) = arrayref((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1774 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 181 "pars1.y" /* yacc.c:1646  */
    { (yyval) = reducedot((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0])); }
#line 1780 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 182 "pars1.y" /* yacc.c:1646  */
    { (yyval) = dopoint((yyvsp[-1]), (yyvsp[0])); }
#line 1786 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 202 "pars1.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0])); }
#line 1792 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 204 "pars1.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1798 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 206 "pars1.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1804 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 209 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[-2]), (yyvsp[0])); }
#line 1810 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 210 "pars1.y" /* yacc.c:1646  */
    { (yyval) = cons((yyvsp[0]), NULL); }
#line 1816 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 212 "pars1.y" /* yacc.c:1646  */
    { (yyval) = binop((yyvsp[-1]), (yyvsp[-2]), (yyvsp[0])); }
#line 1822 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 217 "pars1.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1828 "pars1.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 219 "pars1.y" /* yacc.c:1646  */
    { (yyval) = unaryop((yyvsp[-1]), (yyvsp[0])); }
#line 1834 "pars1.tab.c" /* yacc.c:1646  */
    break;


#line 1838 "pars1.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 222 "pars1.y" /* yacc.c:1906  */


/* You should add your own debugging flags below, and add debugging
   printouts to your programs.

   You will want to change DEBUG to turn off printouts once things
   are working.
  */

#define DEBUG           31             /* set bits here for debugging, 0 = off  */
#define DB_CONS         0             /* bit to trace cons */
#define DB_BINOP        0             /* bit to trace binop */
#define DB_MAKEIF       0             /* bit to trace makeif */
#define DB_MAKEPROGN    0             /* bit to trace makeprogn */
#define DB_PARSERES     0             /* bit to trace parseresult */
#define DB_MAKEPROGRAM  0
#define DB_MAKEINTC     0
#define DB_MAKELABEL    0
#define DB_MAKEOP       0
#define DB_MAKECOPY     0
#define DB_MAKEGOTO     0
#define DB_MAKEFOR      0
#define DB_MAKEWHILE    0
#define DB_MAKEFUNCALL  0
#define DB_UNOP         0
#define DB_FINDID       0  
#define DB_INSTCONST    0  
#define DB_INSTLABEL    0   
#define DB_FINDLABEL    0 
#define DB_FINDTYPE     0 
#define DB_REDUCEDOT    1
#define DB_ARRAYREF     1
#define DB_MAKEREPEAT   0
#define DB_MAKESUB      0
#define DB_MAKEAREF     1
#define DB_DOLABEL      0
#define DB_DOGOTO       0
#define DB_DOPOINT      0
#define DB_INSTTYPE     0
#define DB_INSTENUM     0
#define DB_INSTDOTDOT   0
#define DB_INSTARRAY    0
#define DB_INSTFIELD    0
#define DB_NCONC        0
#define DB_INSTREC      0
#define DB_INSTPOINT    0

 int labelnumber = 0;  /* sequential counter for internal label numbers */
 int labeltable[50];

   /*  Note: you should add to the above values and insert debugging
       printouts in your routines similar to those that are shown here.     */

TOKEN cons(TOKEN item, TOKEN list)            /* add item to front of list */
  { item->link = list;
    if (DEBUG & DB_CONS)
       { printf("cons\n");
         dbugprinttok(item);
         dbugprinttok(list);
       };
    return item;
  }


/* nconc concatenates two token lists, destructively, by making the last link
   of lista point to listb.
   (nconc '(a b) '(c d e))  =  (a b c d e)  */
/* nconc is useful for putting together two fieldlist groups to
   make them into a single list in a record declaration. */
TOKEN nconc(TOKEN lista, TOKEN listb) {
  TOKEN temp = lista;
  while(temp->link) {
    temp = temp->link;
  }
  temp->link = listb;
  if (DEBUG & DB_NCONC) {
   printf("nconc\n");
   dbugprinttok(temp);
  };
  return temp;
}

int isReal(TOKEN tok) {
  if(tok->datatype == REAL)
    return 1;
  else 
    return 0;
}

int isInt(TOKEN tok) {
  if(tok->datatype == INTEGER)
    return 1;
  else 
    return 0;
}

/* unaryop links a unary operator op to one operand, lhs */
TOKEN unaryop(TOKEN op, TOKEN lhs) {
  op->operands = lhs;
  lhs->link = NULL;
  if (DEBUG & DB_UNOP)
     { printf("unaryop\n");
       dbugprinttok(op);
       dbugprinttok(lhs);
     };
  return op;  
}

TOKEN binop(TOKEN op, TOKEN lhs, TOKEN rhs)        /* reduce binary operator */
  {     
    if (rhs->whichval == (NIL - RESERVED_BIAS)) {
      rhs = makeintc(0);
    }

    op->operands = lhs;          /* link operands to operator       */
    lhs->link = rhs;             /* link second operand to first    */
    rhs->link = NULL;            /* terminate operand list          */



    if (isReal(lhs) && isReal(rhs)) {
      op->datatype = REAL;     
    } else if (isReal(lhs) && isInt(rhs)) {
      op->datatype = REAL;
      TOKEN ftok = makefloat(rhs);
      lhs->link = ftok;
    } else if (isInt(lhs) && isReal(rhs)) {
      if (op->whichval == ASSIGNOP) {
        op->datatype = INTEGER;
        TOKEN fixtok = makefix(rhs);
        lhs->link = fixtok;
      } else {
        op->datatype = REAL;
        TOKEN ftok = makefloat(lhs);
        ftok->link = rhs;
      }
    } 


    if (DEBUG & DB_BINOP)
       { printf("binop\n"); 
         dbugprinttok(op);
         dbugprinttok(lhs);
         dbugprinttok(rhs); 
       };
    return op;
  }


/* makefloat forces the item tok to be floating, by floating a constant
   or by inserting a FLOATOP operator */
TOKEN makefloat(TOKEN tok) {
  if(tok->tokentype == NUMBERTOK) {
    tok->datatype = REAL;
    tok->realval = (double) tok->intval;
    return tok;
  } else {
    TOKEN floatop = makeop(FLOATOP);
    floatop->operands = tok;
    return floatop;
  }
  
}


/* makefix forces the item tok to be integer, by truncating a constant
   or by inserting a FIXOP operator */
TOKEN makefix(TOKEN tok) {
  if(tok->tokentype == NUMBERTOK) {
    tok->datatype = INTEGER;
    tok->intval = (int) tok->realval;
    return tok;
  } else { 
    TOKEN fixop = makeop(FIXOP);
    fixop->operands = tok;
    return fixop;
  }
}



/* makeop makes a new operator token with operator number opnum.
   Example:  makeop(FLOATOP)  */
TOKEN makeop(int op){
    TOKEN tok = talloc();
    tok->tokentype = OPERATOR;
    tok->whichval = op;
    if (DEBUG & DB_MAKEOP) {
      printf("makeop\n");
      dbugprinttok(tok);
    }
    return tok;
}

/* copytok makes a new token that is a copy of origtok */
TOKEN copytok(TOKEN target) {
  TOKEN copy = talloc();
  copy->tokentype = target->tokentype;
  copy->datatype = target->datatype;
  copy->symtype = target->symtype;
  copy->symentry = target->symentry;
  copy->link = target->link;
  copy->whichval = target->whichval;
  copy->intval = target->intval;
  copy->realval = target->realval;
  if (DEBUG & DB_MAKECOPY) {
    printf("copytok\n");
    dbugprinttok(copy);
  }
  return copy;
}

TOKEN makeif(TOKEN tok, TOKEN exp, TOKEN thenpart, TOKEN elsepart)
  {  tok->tokentype = OPERATOR;  /* Make it look like an operator   */
     tok->whichval = IFOP;
     if (elsepart != NULL) elsepart->link = NULL;
     thenpart->link = elsepart;
     exp->link = thenpart;
     tok->operands = exp;
     if (DEBUG & DB_MAKEIF)
        { printf("makeif\n");
          dbugprinttok(tok);
          dbugprinttok(exp);
          dbugprinttok(thenpart);
          dbugprinttok(elsepart);
        };
     return tok;
   }

/* makeintc makes a new token with num as its value */
TOKEN makeintc(int number) {
  TOKEN tok = talloc();
  tok->tokentype = NUMBERTOK;
  tok->datatype = INTEGER;
  tok->intval = number;
  if (DEBUG & DB_MAKEINTC) {
      printf("makeintc\n");
      dbugprinttok(tok);
  }
  return tok;
}

/* makelabel makes a new label, using labelnumber++ */
TOKEN makelabel() {
  TOKEN tok = talloc();
  tok->tokentype = OPERATOR;
  tok->whichval = LABELOP;
  tok->operands = makeintc(labelnumber++);
  if (DEBUG & DB_MAKELABEL) {
      printf("makelabel\n");
      dbugprinttok(tok);
  }
  return tok;
}

/* makegoto makes a GOTO operator to go to the specified label.
   The label number is put into a number token. */
TOKEN makegoto(int num){
  TOKEN tok = talloc();
  tok->tokentype = OPERATOR;
  tok->whichval = GOTOOP;
  tok->operands = makeintc(num);
  if (DEBUG && DB_MAKEGOTO) {
      printf("makegoto\n");
      dbugprinttok(tok);
  }
  return tok;
}


/* makearef makes an array reference operation.
   off is be an integer constant token
   tok (if not NULL) is a (now) unused token that is recycled. */
TOKEN makearef(TOKEN var, TOKEN off, TOKEN tok){
  if (var->whichval == AREFOP && off->datatype == INTEGER) {
    
    TOKEN off1 = var->operands->link;
    if (off1->whichval == PLUSOP) {
      int num = off1->operands->intval;  
      int num2 = off->intval;
      TOKEN newoff = makeintc(num + num2);
      newoff->link = off1->operands->link;
      off1->operands = newoff;
    }
  }

  TOKEN areftok = makeop(AREFOP);
  var->link = off;
  areftok->operands = var;
  areftok->symentry = var->symentry;   

  if (DEBUG && DB_MAKEAREF) {
      printf("makearef\n");
      printf("symentry: %s", var->symentry->namestring);
      dbugprinttok(areftok);
      dbugprinttok(var);
  }

  return areftok;
}


/* makefor makes structures for a for statement.
   sign is 1 for normal loop, -1 for downto.
   asg is an assignment statement, e.g. (:= i 1)
   endexpr is the end expression
   tok, tokb and tokc are (now) unused tokens that are recycled. */
TOKEN makefor(int sign, TOKEN tok, TOKEN assign, TOKEN tokb, TOKEN expr, TOKEN tokc, TOKEN statements) {
    tok = makeprogn(tok, assign);
    TOKEN label = makelabel();
    int current = labelnumber - 1;
    assign->link = label;

    TOKEN ifs = tokb;
    TOKEN body = tokc;
    body = makeprogn(body, statements);

    TOKEN leoper = makeop(LEOP);
    ifs = makeif(ifs, leoper, body, NULL);
    TOKEN iden = copytok(assign->operands);
    TOKEN iden2 = copytok(iden);
    TOKEN iden3 = copytok(iden);
    iden->link = expr;
    leoper->operands = iden;

    TOKEN assgn = makeop(ASSIGNOP);
    TOKEN increment = makeop(PLUSOP);

    iden3->link=makeintc(1);
    increment->operands=iden3;
    iden2->link=increment;
    assgn->operands=iden2;

    TOKEN gototok = makegoto(current);
    assgn->link = gototok;
    statements->link = assgn;

    leoper->link = body;
    ifs->operands = leoper;
    label->link = ifs;
    if (DEBUG && DB_MAKEFOR) {
         printf("makefor\n");
         dbugprinttok(tok);
    }
    return tok;
}

/* makewhile makes structures for a while statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makewhile(TOKEN tok, TOKEN expr, TOKEN tokb, TOKEN statement) {
  
  TOKEN label = makelabel();
  int current = labelnumber - 1;
  tok = makeprogn(tok, label);

  TOKEN gototok = makegoto(current);
  statement->link = gototok;
  TOKEN body = makeprogn(tokb, statement);

  TOKEN ifs = talloc();
  ifs = makeif(ifs, expr, body, NULL);
  label->link = ifs;

  if (DEBUG && DB_MAKEWHILE) {
     printf("makewhile\n");
     dbugprinttok(tok);
  }
  return tok;
  
}

/* makefuncall makes a FUNCALL operator and links it to the fn and args.
   tok is a (now) unused token that is recycled. */
TOKEN makefuncall(TOKEN tok, TOKEN fn, TOKEN args) {
  if (strcmp(fn->stringval, "new") == 0) {
    tok = makeop(ASSIGNOP);
    tok->operands = args;

    SYMBOL typsym = args->symtype;
    typsym = typsym->datatype;

    TOKEN funcal = talloc();
    funcal->tokentype = OPERATOR;
    funcal->whichval = FUNCALLOP;
    funcal->operands = fn;
    fn->link = makeintc(typsym->size);
    args->link = funcal;

  } else {
    tok->tokentype = OPERATOR;
    tok->whichval = FUNCALLOP;
    tok->operands = fn;
    fn->link=args;
  }
  if (DEBUG && DB_MAKEFUNCALL) {
         printf("makefuncall\n");
         dbugprinttok(tok);
  }
  return tok;
}

/* makerepeat makes structures for a repeat statement.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN makerepeat(TOKEN tok, TOKEN statements, TOKEN tokb, TOKEN expr) {

   TOKEN label = makelabel();
   int current = labelnumber - 1;
   tok = makeprogn(tok, label);

   TOKEN body = tokb;
   body = makeprogn(body, statements);
   label->link = body;

   TOKEN gototok = makegoto(current);
   TOKEN emptytok = makeprogn((TOKEN) talloc(), NULL);
   emptytok->link = gototok;

   TOKEN ifs = talloc();
   ifs = makeif(ifs, expr, emptytok, gototok);
   body->link = ifs;

   if (DEBUG && DB_MAKEREPEAT) {
         printf("make repeat\n");
         dbugprinttok(tok);
   }

   return tok;  
}

/* makesubrange makes a SUBRANGE symbol table entry, puts the pointer to it
   into tok, and returns tok. */
TOKEN makesubrange(TOKEN tok, int low, int high) {

  SYMBOL subrange = symalloc();
  subrange->kind = SUBRANGE;
  subrange->basicdt = INTEGER;
  subrange->lowbound = low;
  subrange->highbound = high;
  subrange->size = basicsizes[INTEGER];
  tok->symtype = subrange;

  if (DEBUG & DB_MAKESUB) {
    printf("making subrange\n");
    dbugprinttok(tok);
  }

  return tok;
}


TOKEN makeprogn(TOKEN tok, TOKEN statements)
  {  tok->tokentype = OPERATOR;
     tok->whichval = PROGNOP;
     tok->operands = statements;
     if (DEBUG & DB_MAKEPROGN)
       { printf("makeprogn\n");
         dbugprinttok(tok);
         dbugprinttok(statements);
       };
     return tok;
   }

/* makeprogram makes the tree structures for the top-level program */
TOKEN makeprogram(TOKEN name, TOKEN args, TOKEN statements) {
    TOKEN tok = talloc();
    TOKEN nameToArgs = talloc();
    tok->tokentype = OPERATOR;
    tok->whichval = PROGRAMOP;
    tok->operands = name;
    nameToArgs = makeprogn(nameToArgs, args);
    name->link = nameToArgs;
    nameToArgs->link = statements;
    if (DEBUG & DB_MAKEPROGRAM) { 
      printf("makeprogram\n");
      dbugprinttok(tok);
      dbugprinttok(nameToArgs);
    };
    return tok;
  }



/* finds label number in label table for user defined labels */
int findlabelnumber(int label) {
  if (DEBUG & DB_FINDLABEL) {
    printf("finding label\n");
  }
  for(int i = 0; i < labelnumber; i ++) {
    if (labeltable[i] == label) {
      if (DEBUG & DB_FINDLABEL) {
       printf("found label : ");
       printf("%d\n", i);
      }
      return i;
    }
  }
  return -1;
}

/* findid finds an identifier in the symbol table, sets up symbol table
   pointers, changes a constant to its number equivalent */
TOKEN findid(TOKEN tok) { /* the ID token */
    SYMBOL sym, typ;
    sym = searchst(tok->stringval);
    tok->symentry = sym;
    
    if (sym->kind == CONSTSYM) {
      if (sym->basicdt == REAL) {
        tok->tokentype = NUMBERTOK;
        tok->datatype = REAL;
        tok->realval = sym->constval.realnum;
      }
      else if (sym->basicdt == INTEGER) {
        tok->tokentype = NUMBERTOK;
        tok->datatype = INTEGER;
        tok->intval = sym->constval.intnum;
      }

      if (DEBUG & DB_FINDID) { 
        printf("hit constant\n");
        dbugprinttok(sym);
        dbugprinttok(tok);
      };
      return tok;
    }

    typ = sym->datatype;
    tok->symtype = typ;
    if ( typ->kind == BASICTYPE ||
         typ->kind == POINTERSYM)
        tok->datatype = typ->basicdt;

    if (DEBUG & DB_FINDID) { 
      printf("hit identifier\n");
      dbugprinttok(sym);
      dbugprinttok(tok);
    };

    return tok;
  }

/* findtype looks up a type name in the symbol table, puts the pointer
   to its type into tok->symtype, returns tok. */

TOKEN findtype(TOKEN tok) {
    SYMBOL sym = searchst(tok->stringval);
    if (sym->kind == TYPESYM) {
      sym = sym->datatype;
   }
    tok->symtype = sym;
    if (DEBUG & DB_FINDTYPE) {
      printf("finding type\n");
      dbugprinttok(tok);
    }
    return tok;
  }

/* reducedot handles a record reference.
   dot is a (now) unused token that is recycled. */
TOKEN reducedot(TOKEN var, TOKEN dot, TOKEN field) {

  SYMBOL recsym = var->symentry;
  SYMBOL curfield = recsym->datatype->datatype;
  int offset = 0;
  while(curfield) {
    if (strcmp(curfield->namestring, field->stringval) == 0) {
      offset = curfield->offset;
      var->symentry = curfield;
      break;
    } else {
      curfield = curfield->link;
    }
  }

  dot = makearef(var, makeintc(offset), dot);

  if (DEBUG & DB_REDUCEDOT) {
    printf("reducedot\n");
    //printf("-- %s ** %s", curfield->namestring, field->stringval);
    dbugprinttok(var);
    dbugprinttok(dot);
    dbugprinttok(field);
  }
  return dot;
 
}


/* arrayref processes an array reference a[i]
   subs is a list of subscript expressions.
   tok and tokb are (now) unused tokens that are recycled. */
TOKEN arrayref(TOKEN arr, TOKEN tok, TOKEN subs, TOKEN tokb) {
  if (subs->link) {
    TOKEN timesop = makeop(TIMESOP);
    int low = arr->symtype->lowbound;
    int high = arr->symtype->highbound;
    int size = (arr->symtype->size / (high + low - 1));

    TOKEN s = copytok(subs);
    s->link = NULL;
    TOKEN elesize = makeintc(size);
    elesize->link = s;
    timesop->operands = elesize;

    TOKEN nsize = makeintc(-1 * size);
    nsize->link = timesop;
    TOKEN plusop = makeop(PLUSOP);
    plusop->operands = nsize;

    TOKEN subarref = makearef(arr, plusop, tokb);
    
    subarref->symtype = arr->symtype->datatype;

    return arrayref(subarref, tok, subs->link, tokb);


  } else {
    TOKEN timesop = makeop(TIMESOP);
    int low = arr->symtype->lowbound;
    int high = arr->symtype->highbound;
    int size = (arr->symtype->size / (high + low - 1));

    TOKEN elesize = makeintc(size);
    elesize->link = subs;
    timesop->operands = elesize;

    TOKEN nsize = makeintc(-1 * size);
    nsize->link = timesop;
    TOKEN plusop = makeop(PLUSOP);
    plusop->operands = nsize;


    if (DEBUG & DB_ARRAYREF) {
        printf("arrayref\n");
        //printf("low : %d, high : %d, total size : %d, size of ele %d", low, high, arr->symtype->size, size);
        dbugprinttok(arr);
        dbugprinttok(subs);
        dbugprinttok(plusop);
    }
    return makearef(arr, plusop, tokb);
  }

  
}


/* dolabel is the action for a label of the form   <number>: <statement>
   tok is a (now) unused token that is recycled. */
TOKEN dolabel(TOKEN labeltok, TOKEN tok, TOKEN statement) {
    int real_label = findlabelnumber(labeltok->intval);
    if (real_label == -1) {
      printf("Error: user defined label not found");
    }

    labeltok = makeop(LABELOP);
    TOKEN tokb = makeintc(real_label);
    labeltok->operands=tokb;
    labeltok->link = statement;
    tok = makeprogn(tok, labeltok);

    if (DEBUG & DB_DOLABEL) {
      printf("dolabel\n");
      dbugprinttok(tok);
    }

    return tok;
}

/* dogoto is the action for a goto statement.
   tok is a (now) unused token that is recycled. */
TOKEN dogoto(TOKEN tok, TOKEN labeltok) {
    int real_label = findlabelnumber(labeltok->intval);
    if (real_label == -1) {
      printf("Error: user defined label not found");
    }  

    tok = makegoto(real_label);
    if (DEBUG & DB_DOGOTO) {
      printf("dogoto\n");
      dbugprinttok(tok);
    }

    return tok;
}


/* dopoint handles a ^ operator.
   tok is a (now) unused token that is recycled. */
TOKEN dopoint(TOKEN var, TOKEN tok) {
  tok->symentry = var->symentry->datatype->datatype;
  tok->operands = var;

  if (DEBUG & DB_DOPOINT) {
    printf("dopoint\n");
    dbugprinttok(tok);
  }

  return tok;
}

/* install variables in symbol table */
void instvars(TOKEN idlist, TOKEN typetok)
  {  SYMBOL sym, typesym; int align;
     typesym = typetok->symtype;
     align = alignsize(typesym);
     while ( idlist != NULL )   /* for each id */
       {  sym = insertsym(idlist->stringval);
          sym->kind = VARSYM;
          sym->offset =
              wordaddress(blockoffs[blocknumber],
                          align);
          sym->size = typesym->size;
          blockoffs[blocknumber] =
                         sym->offset + sym->size;
          sym->datatype = typesym;
          sym->basicdt = typesym->basicdt;
          idlist = idlist->link;
        };
  }

/* instconst installs a constant in the symbol table */
void  instconst(TOKEN idtok, TOKEN consttok) {
  SYMBOL sym;
  sym = insertsym(idtok->stringval);
  sym->kind = CONSTSYM;
  sym->basicdt = consttok->datatype;
  if(sym->basicdt == REAL) {
      sym->constval.realnum = consttok->realval;
  }

  if(sym->basicdt == INTEGER) 
  {
      sym->constval.intnum = consttok->intval;
  }
  if (DEBUG & DB_INSTCONST) {
    printf("install const\n");
    dbugprinttok(sym);
  }
}

/* instlabel installs a user label into the label table */
void  instlabel (TOKEN num) {
  labeltable[labelnumber++] = num->intval;  

  if (DEBUG & DB_INSTLABEL) {
    printf("install label\n");
    printf("current table\n");
    for (int i = 0; i < labelnumber; i ++) {
      printf("label ");
      printf("%d", i);
      printf(" : ");
      printf("%d\n", labeltable[i]);
    }
  }
}

/* instenum installs an enumerated subrange in the symbol table,
   e.g., type color = (red, white, blue)
   by calling makesubrange and returning the token it returns. */
TOKEN instenum(TOKEN idlist) {
  int count = 0;

  TOKEN list = copytok(idlist);
  while (list) {
    instconst(list, makeintc(count));
    count ++;
    list = list->link;
  }

  TOKEN tok = makesubrange(idlist, 0, count - 1);
  if (DEBUG & DB_INSTENUM) {
    printf("install enum\n");
    dbugprinttok(idlist);
  }

  return tok;
}

/* instdotdot installs a .. subrange in the symbol table.
   dottok is a (now) unused token that is recycled. */
TOKEN instdotdot(TOKEN lowtok, TOKEN dottok, TOKEN hightok) {
  int low = lowtok->intval;
  int high = hightok->intval;

  if (DEBUG & DB_INSTDOTDOT) {
    printf("install dot dot\n");
    dbugprinttok(lowtok);
    dbugprinttok(hightok);
  }

  return makesubrange(dottok, low, high);
}

/* instarray installs an array declaration into the symbol table.
   bounds points to a SUBRANGE symbol table entry.
   The symbol table pointer is returned in token typetok. */
TOKEN instarray(TOKEN bounds, TOKEN typetok) {
  if (bounds->link) {
    typetok = instarray(bounds->link, typetok);

    SYMBOL subrange = bounds->symtype;
    SYMBOL typesym = typetok->symtype;
    SYMBOL arraysym = symalloc();

    arraysym->kind = ARRAYSYM;
    arraysym->datatype = typesym;
    arraysym->lowbound = subrange->lowbound;
    arraysym->highbound = subrange->highbound;
    arraysym->size = (arraysym->lowbound + arraysym->highbound - 1) * (typesym->size);
    typetok->symtype = arraysym;
    if (DEBUG & DB_INSTARRAY) {
        printf("install array\n");
        dbugprinttok(typetok);
    }

  return typetok;


  } else {

    SYMBOL subrange = bounds->symtype;
    SYMBOL typesym = typetok->symtype;
    SYMBOL arraysym = symalloc();
    arraysym->kind = ARRAYSYM;
    arraysym->datatype = typesym;
    arraysym->lowbound = subrange->lowbound;
    arraysym->highbound = subrange->highbound;
    arraysym->size = (arraysym->highbound - arraysym->lowbound +  1) * (typesym->size);
    typetok->symtype = arraysym;
    if (DEBUG & DB_INSTARRAY) {
      printf("install array base\n");
      dbugprinttok(typetok);
    }

    return typetok;
  }
}

/* instfields will install type in a list idlist of field name tokens:
   re, im: real    put the pointer to REAL in the RE, IM tokens.
   typetok is a token whose symtype is a symbol table pointer.
   Note that nconc() can be used to combine these lists after instrec() */
TOKEN instfields(TOKEN idlist, TOKEN typetok) {
  SYMBOL typesym = typetok->symtype;
  TOKEN temp = idlist;
  while(temp) {
    temp->symtype = typesym;     
    temp = temp->link;
  }


  if (DEBUG & DB_INSTFIELD) {
      printf("install fields\n");
      dbugprinttok(idlist);
  }

  return idlist;
}

/* instrec will install a record definition.  Each token in the linked list
   argstok has a pointer its type.  rectok is just a trash token to be
   used to return the result in its symtype */
TOKEN instrec(TOKEN rectok, TOKEN argstok) {
  //Do storage allocation algorithm
  SYMBOL recsym = symalloc();
  recsym->kind = RECORDSYM;
  int count = 0, next = 0, align;

  SYMBOL prev = NULL;
  while (argstok) {
    align = alignsize(argstok->symtype);
    SYMBOL recfield = makesym(argstok->stringval);
    recfield->datatype = argstok->symtype;
    recfield->offset = wordaddress(next, align);
    recfield->size = argstok->symtype->size;
    next = recfield->offset + recfield->size;
    if (count == 0) {
      recsym->datatype = recfield;
      prev = recfield;
    } else {
      prev->link = recfield;
      prev = recfield;
    }
    recfield->link = NULL;
    count ++;
    argstok = argstok->link;
  }

  recsym->size = wordaddress(next, 16); 
  rectok->symtype = recsym;

  if (DEBUG & DB_INSTREC) {
      printf("install rec\n");
      printf("total size %d\n", recsym->size);
      dbugprinttok(rectok);

  }
  return rectok;
}

/* instpoint will install a pointer type in symbol table */
TOKEN instpoint(TOKEN tok, TOKEN typename) {

  SYMBOL typesym = searchins(typename->stringval);


  SYMBOL pointsym = symalloc();
  pointsym->datatype = typesym;
  pointsym->kind = POINTERSYM;
  pointsym->size = basicsizes[POINTER];
  pointsym->basicdt = POINTER;

  tok->symtype = pointsym;

  if (DEBUG & DB_INSTPOINT) {
      printf("install point\n");
      dbugprinttok(tok);
  }

  return tok;
}


/* insttype will install a type name in symbol table.
   typetok is a token containing symbol table pointers. */
void  insttype(TOKEN typename, TOKEN typetok) {
  SYMBOL typesym = searchins(typename->stringval);
  typesym->kind = TYPESYM;
  typesym->datatype = typetok->symtype;
  typesym->size = typetok->symtype->size;

  if (DEBUG & DB_INSTTYPE) {
    printf("install type\n");
    dbugprinttok(typename);
    dbugprinttok(typetok);
  }
}


int wordaddress(int n, int wordsize)
  { return ((n + wordsize - 1) / wordsize) * wordsize; }
 
yyerror(s)
  char * s;
  { 
  fputs(s,stderr); putc('\n',stderr);
  }

main()
  { int res;
    initsyms();
    res = yyparse();
    printst();
    printf("yyparse result = %8d\n", res);
    if (DEBUG & DB_PARSERES) dbugprinttok(parseresult);
    ppexpr(parseresult);           /* Pretty-print the result tree */
  }
