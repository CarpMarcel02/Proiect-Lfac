/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tema.y"

#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
#include "functii.h"
int yylex();
int yyerror();


#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SIR = 258,
    INT = 259,
    CHARV = 260,
    BOOLV = 261,
    FLOATV = 262,
    PRINT = 263,
    EVAL = 264,
    CLASS = 265,
    CONST = 266,
    ASSIGN = 267,
    OPERATOR = 268,
    LOPERATOR = 269,
    BGIN = 270,
    IF = 271,
    ELSE = 272,
    THEN = 273,
    ENDIF = 274,
    FOR = 275,
    WHILE = 276,
    OVER = 277,
    DO = 278,
    START_CLASA = 279,
    END_CLASA = 280,
    END = 281,
    ID = 282,
    NR = 283,
    FLOAT = 284,
    BOOL = 285,
    CHAR = 286,
    STRING = 287,
    FUNCTIE = 288,
    VECTOR = 289,
    PTR = 290,
    TYPEOF = 291
  };
#endif
/* Tokens.  */
#define SIR 258
#define INT 259
#define CHARV 260
#define BOOLV 261
#define FLOATV 262
#define PRINT 263
#define EVAL 264
#define CLASS 265
#define CONST 266
#define ASSIGN 267
#define OPERATOR 268
#define LOPERATOR 269
#define BGIN 270
#define IF 271
#define ELSE 272
#define THEN 273
#define ENDIF 274
#define FOR 275
#define WHILE 276
#define OVER 277
#define DO 278
#define START_CLASA 279
#define END_CLASA 280
#define END 281
#define ID 282
#define NR 283
#define FLOAT 284
#define BOOL 285
#define CHAR 286
#define STRING 287
#define FUNCTIE 288
#define VECTOR 289
#define PTR 290
#define TYPEOF 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "tema.y"
 char * nume; int valoare; float f_valoare; char * bool_valoare; char  caracter; char * string;

#line 208 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  86
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    41,     2,     2,
      44,    45,    39,    37,    43,    38,     2,    40,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    26,    27,    28,    29,    32,    33,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    65,    66,    67,    68,    71,
      72,    75,    76,    77,    78,    81,    84,    85,    86,    87,
      90,   113,   114,   115,   116,   119,   122,   123,   126,   128,
     129,   130,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   151,   152,   153,   154,   155,
     159,   163,   164,   165,   166,   170,   171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SIR", "INT", "CHARV", "BOOLV", "FLOATV",
  "PRINT", "EVAL", "CLASS", "CONST", "ASSIGN", "OPERATOR", "LOPERATOR",
  "BGIN", "IF", "ELSE", "THEN", "ENDIF", "FOR", "WHILE", "OVER", "DO",
  "START_CLASA", "END_CLASA", "END", "ID", "NR", "FLOAT", "BOOL", "CHAR",
  "STRING", "FUNCTIE", "VECTOR", "PTR", "TYPEOF", "'+'", "'-'", "'*'",
  "'/'", "'%'", "';'", "','", "'('", "')'", "'['", "']'", "$accept",
  "progr", "declaratii", "declaratie", "variabila", "functie",
  "lista_parametri", "parametru", "main_program", "instructiuni",
  "instructiune", "expresii", "expresie", "right", "apeluri", "operatie",
  "continuare_if", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    43,    45,    42,
      47,    37,    59,    44,    40,    41,    91,    93
};
# endif

#define YYPACT_NINF (-178)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-39)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     259,    10,    32,    50,    60,    73,    25,   279,    24,   245,
      39,  -178,    18,    45,    51,    41,    74,    92,     2,    80,
     122,    84,   138,   163,   144,   153,   179,   190,   197,   200,
     210,   253,  -178,   202,   116,   264,  -178,  -178,   268,   202,
     174,   267,   107,  -178,   269,   287,   107,  -178,   271,   107,
    -178,   273,   107,  -178,   259,   291,   292,   293,   294,   295,
    -178,   206,   281,   282,   283,   299,   270,   272,    89,   275,
    -178,  -178,   202,    96,   135,   137,   182,  -178,   140,  -178,
    -178,   285,   286,   288,   296,     5,  -178,  -178,   289,    27,
    -178,    56,  -178,    81,   236,   290,   297,   298,   300,   302,
     301,  -178,   231,   304,   305,   108,    63,   203,  -178,   278,
    -178,  -178,   169,   280,     7,   303,   306,  -178,  -178,  -178,
    -178,  -178,   107,    -3,  -178,   308,   309,   310,  -178,  -178,
    -178,  -178,  -178,  -178,   307,   108,   108,   108,   108,   311,
    -178,  -178,  -178,  -178,  -178,   312,   313,   108,   254,  -178,
    -178,   314,    88,  -178,  -178,  -178,   315,     4,  -178,  -178,
    -178,   107,   107,   107,   107,  -178,   202,  -178,   240,   263,
      -7,    48,  -178,    63,   317,   284,   108,   108,    63,   193,
    -178,    63,   203,  -178,   102,   141,   152,   214,    11,   202,
     202,   316,   202,   244,   318,   108,   108,   254,   254,   247,
    -178,  -178,   320,   248,  -178,   319,  -178,  -178,  -178,  -178,
      59,    59,   322,   171,  -178,  -178,    -4,    15,  -178,    63,
    -178,   202,  -178,  -178,  -178,   108,  -178,  -178,  -178,   251,
      59,    26,  -178,  -178,   321,   324,   326,   323,   202,   192,
    -178
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     9,    12,     0,     0,    10,     0,     0,
      13,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     2,     3,     0,     0,
       0,     0,     0,    24,     0,     0,     0,    26,     0,     0,
      27,     0,     0,    25,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     4,     0,     0,     0,     0,     0,     8,     0,    14,
      20,     0,     0,     0,     0,     0,    39,    22,     0,     0,
      23,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    45,     0,
      49,    46,     0,     0,     0,     0,     0,     5,    43,    42,
      44,    41,     0,    29,    28,    31,    33,    32,    34,    15,
      16,    19,    17,    18,     0,     0,     0,     0,     0,    66,
      69,    71,    72,    67,    70,     0,     0,     0,    50,    76,
      75,     0,     0,    58,    59,    60,     0,     0,    57,    47,
       6,     0,     0,     0,     0,    40,     0,    52,     0,     0,
       0,     0,    73,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,     0,
      78,    77,     0,     0,    56,    29,    31,    33,    32,    30,
       0,     0,     0,     0,    68,    74,     0,     0,    79,     0,
      61,     0,    86,    82,    81,     0,    83,    65,    64,     0,
       0,     0,    80,    85,     0,     0,     0,     0,     0,     0,
      84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,   274,    -6,   328,    -5,   -44,   204,  -178,   -39,
     -67,  -178,   145,  -122,  -155,   -56,  -177
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    85,    86,    36,    68,
      69,   157,   158,   148,   152,    70,   223
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,   109,    89,    34,    35,    91,   176,   177,    93,   176,
     177,   109,   110,   168,   169,   170,   171,   182,   193,    60,
      61,   -35,   110,   199,    32,   175,   203,    62,   176,   177,
      45,    63,    64,   112,   224,    45,   191,    13,    65,   176,
     177,   227,    39,   166,    66,   109,    46,    67,   122,   183,
     123,   162,    26,   233,   197,   198,   110,    40,   209,    14,
     228,   176,   177,    41,   229,    15,    16,    60,    61,   234,
     122,   192,   125,   216,   217,    62,   221,    17,   222,    63,
      64,    37,    38,    18,    19,    42,    65,    20,    34,    35,
     149,   150,    66,    21,    22,    67,   151,    60,    61,   122,
      23,   126,    43,   231,    44,    62,    24,    25,    47,    63,
      64,    81,    82,    83,    84,   108,    65,   184,   185,   186,
     187,   109,    66,    14,   122,    67,   127,   188,    49,   113,
      16,   179,   110,   180,    48,   139,   140,   141,   142,   143,
     144,   145,   146,   109,   109,   122,   109,   205,    60,    61,
     210,   211,   147,   213,   110,   110,    62,   110,    71,    38,
      63,    64,    17,   109,    20,   117,    50,    65,   114,    19,
     115,    22,   109,    66,   110,    51,    67,    60,    61,    60,
      61,    53,   230,   110,   122,    62,   206,    62,    52,    63,
      64,    63,    64,   226,   160,   122,    65,   207,    65,   239,
      60,    61,    66,    54,    66,    67,    79,    67,    62,    23,
      60,    61,    63,    64,   240,   116,    25,    55,    62,    65,
     200,   201,    63,    64,    56,    66,   202,    57,    67,    65,
     153,   154,   155,   100,   101,    66,   156,    58,    67,     1,
       2,     3,     4,     5,   135,   136,     6,     7,     1,     2,
       3,     4,     5,   176,   177,     6,     7,   122,   189,   208,
      33,   128,     1,     2,     3,     4,     5,   176,   177,     6,
       7,     1,    73,    74,    75,    76,   176,   177,     6,     7,
      59,   190,    27,    28,    29,    30,    31,   179,    72,   214,
     179,   179,   218,   220,   179,    80,   232,   195,   196,    88,
      87,    90,    92,    95,    96,    97,    98,    99,   102,   103,
     104,   105,   118,   119,   106,   120,   107,   111,   137,   138,
     159,   124,   129,   121,   161,   130,   165,   204,    94,   131,
     132,   133,   -36,   -38,   -37,   167,   225,   236,   134,   237,
       0,     0,     0,   212,   172,   194,   238,   163,   235,     0,
     164,     0,     0,     0,     0,     0,   173,   174,   178,   181,
       0,     0,     0,   215,   219,   166,    77
};

static const yytype_int16 yycheck[] =
{
      39,    68,    46,     9,     9,    49,    13,    14,    52,    13,
      14,    78,    68,   135,   136,   137,   138,    13,   173,     8,
       9,    24,    78,   178,     0,   147,   181,    16,    13,    14,
      28,    20,    21,    72,   211,    28,    43,    27,    27,    13,
      14,    45,    24,    46,    33,   112,    44,    36,    43,    45,
      45,    44,    27,   230,   176,   177,   112,    12,    47,    27,
      45,    13,    14,    12,   219,    33,    34,     8,     9,    43,
      43,    23,    45,   195,   196,    16,    17,    27,    19,    20,
      21,    42,    43,    33,    34,    44,    27,    27,    94,    94,
      27,    28,    33,    33,    34,    36,    33,     8,     9,    43,
      27,    45,    28,   225,    12,    16,    33,    34,    28,    20,
      21,     4,     5,     6,     7,    26,    27,   161,   162,   163,
     164,   188,    33,    27,    43,    36,    45,   166,    44,    33,
      34,    43,   188,    45,    12,    27,    28,    29,    30,    31,
      32,    33,    34,   210,   211,    43,   213,    45,     8,     9,
     189,   190,    44,   192,   210,   211,    16,   213,    42,    43,
      20,    21,    27,   230,    27,    25,    28,    27,    33,    34,
      33,    34,   239,    33,   230,    12,    36,     8,     9,     8,
       9,    28,   221,   239,    43,    16,    45,    16,    44,    20,
      21,    20,    21,    22,    25,    43,    27,    45,    27,   238,
       8,     9,    33,    24,    33,    36,    32,    36,    16,    27,
       8,     9,    20,    21,    22,    33,    34,    27,    16,    27,
      27,    28,    20,    21,    27,    33,    33,    27,    36,    27,
      27,    28,    29,    27,    28,    33,    33,    27,    36,     3,
       4,     5,     6,     7,    13,    14,    10,    11,     3,     4,
       5,     6,     7,    13,    14,    10,    11,    43,    18,    45,
      15,    25,     3,     4,     5,     6,     7,    13,    14,    10,
      11,     3,     4,     5,     6,     7,    13,    14,    10,    11,
      27,    18,     3,     4,     5,     6,     7,    43,    24,    45,
      43,    43,    45,    45,    43,    28,    45,    13,    14,    12,
      31,    30,    29,    12,    12,    12,    12,    12,    27,    27,
      27,    12,    27,    27,    44,    27,    44,    42,    14,    14,
      42,    32,    32,    27,    44,    28,   122,   182,    54,    31,
      30,    29,    24,    24,    24,    28,    14,    13,    37,    13,
      -1,    -1,    -1,    27,    33,    28,    23,    44,    27,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    44,    44,    44,    44,
      -1,    -1,    -1,    45,    44,    46,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    10,    11,    49,    50,
      51,    52,    53,    27,    27,    33,    34,    27,    33,    34,
      27,    33,    34,    27,    33,    34,    27,     3,     4,     5,
       6,     7,     0,    15,    51,    53,    56,    42,    43,    24,
      12,    12,    44,    28,    12,    28,    44,    28,    12,    44,
      28,    12,    44,    28,    24,    27,    27,    27,    27,    27,
       8,     9,    16,    20,    21,    27,    33,    36,    57,    58,
      63,    42,    24,     4,     5,     6,     7,    52,    57,    32,
      28,     4,     5,     6,     7,    54,    55,    31,    12,    54,
      30,    54,    29,    54,    50,    12,    12,    12,    12,    12,
      27,    28,    27,    27,    27,    12,    44,    44,    26,    58,
      63,    42,    57,    33,    33,    33,    33,    25,    27,    27,
      27,    27,    43,    45,    32,    45,    45,    45,    25,    32,
      28,    31,    30,    29,    37,    13,    14,    14,    14,    27,
      28,    29,    30,    31,    32,    33,    34,    44,    61,    27,
      28,    33,    62,    27,    28,    29,    33,    59,    60,    42,
      25,    44,    44,    44,    44,    55,    46,    28,    61,    61,
      61,    61,    33,    44,    44,    61,    13,    14,    44,    43,
      45,    44,    13,    45,    54,    54,    54,    54,    57,    18,
      18,    43,    23,    62,    28,    13,    14,    61,    61,    62,
      27,    28,    33,    62,    60,    45,    45,    45,    45,    47,
      57,    57,    27,    57,    45,    45,    61,    61,    45,    44,
      45,    17,    19,    64,    64,    14,    22,    45,    45,    62,
      57,    61,    45,    64,    43,    27,    13,    13,    23,    57,
      22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    51,    51,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    59,    59,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     3,     4,     5,     1,     3,     2,
       2,     2,     2,     2,     4,     5,     5,     5,     5,     5,
       4,     4,     4,     4,     3,     3,     3,     3,     5,     5,
       8,     5,     5,     5,     5,     5,     5,     5,     5,     1,
       3,     2,     2,     2,     2,     3,     2,     3,     1,     2,
       3,     2,     4,     1,     4,     4,     3,     1,     1,     1,
       1,     4,     3,     3,     5,     5,     1,     1,     4,     1,
       1,     1,     1,     2,     4,     1,     1,     3,     3,     4,
       6,     7,     7,     7,    15,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 24 "tema.y"
                               {printf("Program corect sintactic!\n");}
#line 1556 "y.tab.c"
    break;

  case 9:
#line 37 "tema.y"
                   {if(va_string_EsteDeclarata((yyvsp[0].nume))==-1) variabila_string_declarare_only((yyvsp[0].nume));else{yyerror();printf("Redefinit variabila\n");YYABORT;}}
#line 1562 "y.tab.c"
    break;

  case 10:
#line 38 "tema.y"
                     {if(va_char_EsteDeclarata((yyvsp[0].nume))==-1) variabila_char_declarare_only((yyvsp[0].nume));else {yyerror();printf("Redefiniti variabila\n");YYABORT;}}
#line 1568 "y.tab.c"
    break;

  case 11:
#line 39 "tema.y"
                      {if(va_float_EsteDeclarata((yyvsp[0].nume))==-1) variabila_float_declarare_only((yyvsp[0].nume));else {yyerror();printf("Redefiniti variabila\n");YYABORT;}}
#line 1574 "y.tab.c"
    break;

  case 12:
#line 40 "tema.y"
                   {if(va_EsteDeclarata((yyvsp[0].nume))==-1) variabila_int_declare_only((yyvsp[0].nume));else { yyerror();printf("Redefiniti variabila\n");YYABORT;}}
#line 1580 "y.tab.c"
    break;

  case 13:
#line 41 "tema.y"
                     {if(va_bool_EsteDeclarata((yyvsp[0].nume))==-1) variabila_bool_declare_only((yyvsp[0].nume));else { yyerror();printf("Redefiniti variabila\n");YYABORT;}}
#line 1586 "y.tab.c"
    break;

  case 14:
#line 42 "tema.y"
                                 {  if(va_string_EsteDeclarata((yyvsp[-2].nume))==-1) variabila_string_declarare_only((yyvsp[-2].nume));else{yyerror();printf("Redefinit variabila\n");YYABORT;}}
#line 1592 "y.tab.c"
    break;

  case 15:
#line 43 "tema.y"
                                       { if(va_string_EsteDeclarata((yyvsp[-2].nume))==-1) { variabila_string_declarare_init((yyvsp[-2].nume),(yyvsp[0].string));  Facemconst((yyvsp[-2].nume)); } else {yyerror();printf("Redefiniti variabila");YYABORT;}}
#line 1598 "y.tab.c"
    break;

  case 16:
#line 44 "tema.y"
                                   {if(va_EsteDeclarata((yyvsp[-2].nume))==-1) { variabila_int_declare_init((yyvsp[-2].nume),(yyvsp[0].valoare)); Facemconst((yyvsp[-2].nume));}    else { yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1604 "y.tab.c"
    break;

  case 17:
#line 45 "tema.y"
                                       {if(va_EsteDeclarata((yyvsp[-2].nume))==-1) { variabila_bool_declarare_init((yyvsp[-2].nume),(yyvsp[0].bool_valoare));  Facemconst((yyvsp[-2].nume)); }else {yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1610 "y.tab.c"
    break;

  case 18:
#line 46 "tema.y"
                                         {if(va_float_EsteDeclarata((yyvsp[-2].nume))==-1) {variabila_float_declarare_init((yyvsp[-2].nume),(yyvsp[0].f_valoare)); Facemconst((yyvsp[-2].nume)); }else {yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1616 "y.tab.c"
    break;

  case 19:
#line 47 "tema.y"
                                       {if(va_char_EsteDeclarata((yyvsp[-2].nume))==-1) {variabila_char_declarare_init((yyvsp[-2].nume),(yyvsp[0].caracter));  Facemconst((yyvsp[-2].nume)); } else {yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1622 "y.tab.c"
    break;

  case 20:
#line 48 "tema.y"
                             {if(va_EsteDeclarata((yyvsp[-2].nume))==-1) variabila_int_declare_init((yyvsp[-2].nume),(yyvsp[0].valoare));else{ yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1628 "y.tab.c"
    break;

  case 21:
#line 49 "tema.y"
                                   {if(va_float_EsteDeclarata((yyvsp[-2].nume))==-1) variabila_float_declarare_init((yyvsp[-2].nume),(yyvsp[0].f_valoare));else{yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1634 "y.tab.c"
    break;

  case 22:
#line 50 "tema.y"
                                 {if(va_char_EsteDeclarata((yyvsp[-2].nume))==-1) variabila_char_declarare_init((yyvsp[-2].nume),(yyvsp[0].caracter));else{ yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1640 "y.tab.c"
    break;

  case 23:
#line 51 "tema.y"
                                 {if(va_bool_EsteDeclarata((yyvsp[-2].nume))==-1) variabila_bool_declarare_init((yyvsp[-2].nume),(yyvsp[0].bool_valoare));else {yyerror(); printf("Redefiniti variabila\n");YYABORT;}}
#line 1646 "y.tab.c"
    break;

  case 24:
#line 52 "tema.y"
                          {if(v_EsteDeclarata((yyvsp[-1].nume))==-1) v_Declarare_definitie((yyvsp[-1].nume),'i',(yyvsp[0].valoare));else {yyerror(); printf("Redefiniti structura\n");YYABORT;}}
#line 1652 "y.tab.c"
    break;

  case 25:
#line 53 "tema.y"
                             {if(v_EsteDeclarata((yyvsp[-1].nume))==-1) v_Declarare_definitie((yyvsp[-1].nume),'f',(yyvsp[0].valoare));else {yyerror(); printf("Redefiniti structura\n");YYABORT;}}
#line 1658 "y.tab.c"
    break;

  case 26:
#line 54 "tema.y"
                            {if(v_EsteDeclarata((yyvsp[-1].nume))==-1) v_Declarare_definitie((yyvsp[-1].nume),'c',(yyvsp[0].valoare));else {yyerror(); printf("Redefiniti structura\n");YYABORT;}}
#line 1664 "y.tab.c"
    break;

  case 27:
#line 55 "tema.y"
                            {if(v_EsteDeclarata((yyvsp[-1].nume))==-1) v_Declarare_definitie((yyvsp[-1].nume),'b',(yyvsp[0].valoare));else {yyerror(); printf("Redefiniti structura\n");YYABORT;}}
#line 1670 "y.tab.c"
    break;

  case 28:
#line 56 "tema.y"
                                           {if(v_EsteDeclarata((yyvsp[-3].nume))==-1) {if(vs_decl((yyvsp[-3].nume),(yyvsp[-2].valoare),(yyvsp[0].string))==-1){yyerror(); printf("Depaseste dimensiune vectorului");}} else {yyerror(); printf("Redefiniti functia \n");YYABORT;}}
#line 1676 "y.tab.c"
    break;

  case 29:
#line 57 "tema.y"
                                                { if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"int"); else{yyerror(); printf("Redefiniti functia\n"); YYABORT;} }
#line 1682 "y.tab.c"
    break;

  case 30:
#line 58 "tema.y"
                                                                     { if(f_EsteDeclarata((yyvsp[-6].nume))==-1) f_Declarare_definitie((yyvsp[-6].nume),"int"); else{yyerror(); printf("Redefiniti functia\n"); YYABORT;} }
#line 1688 "y.tab.c"
    break;

  case 31:
#line 59 "tema.y"
                                                  {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"char"); else{yyerror(); printf("Redefiniti functia\n"); YYABORT;}}
#line 1694 "y.tab.c"
    break;

  case 32:
#line 60 "tema.y"
                                                   {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"float"); else{yyerror(); printf("Redefiniti functia\n"); YYABORT;}}
#line 1700 "y.tab.c"
    break;

  case 33:
#line 61 "tema.y"
                                                  {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"bool"); else{yyerror(); printf("Redefiniti functia\n"); YYABORT;}}
#line 1706 "y.tab.c"
    break;

  case 34:
#line 62 "tema.y"
                                                      {if(cl_EsteDeclarata((yyvsp[-3].nume))==-1) cl_Declarare_definitie((yyvsp[-3].nume)); else {yyerror();printf("Redefiniti clasa\n");YYABORT;}}
#line 1712 "y.tab.c"
    break;

  case 35:
#line 65 "tema.y"
                                              {  if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"int");}
#line 1718 "y.tab.c"
    break;

  case 36:
#line 66 "tema.y"
                                                {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"char");}
#line 1724 "y.tab.c"
    break;

  case 37:
#line 67 "tema.y"
                                                 {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"float");}
#line 1730 "y.tab.c"
    break;

  case 38:
#line 68 "tema.y"
                                                {if(f_EsteDeclarata((yyvsp[-3].nume))==-1) f_Declarare_definitie((yyvsp[-3].nume),"bool");}
#line 1736 "y.tab.c"
    break;

  case 41:
#line 75 "tema.y"
                      { Parametru1((yyvsp[0].nume)); }
#line 1742 "y.tab.c"
    break;

  case 42:
#line 76 "tema.y"
                     { Parametru2((yyvsp[0].nume)); }
#line 1748 "y.tab.c"
    break;

  case 43:
#line 77 "tema.y"
                   { Parametrii((yyvsp[0].nume)); }
#line 1754 "y.tab.c"
    break;

  case 44:
#line 78 "tema.y"
                      { Parametru3((yyvsp[0].nume)); }
#line 1760 "y.tab.c"
    break;

  case 50:
#line 90 "tema.y"
                               { if(va_EsteDeclarata((yyvsp[-2].nume))==-1) 
                                        {
                                        yyerror(); 
                                        printf("Variabila nu a fost declarata\n"); 
                                        YYABORT;} 
                                else  
                                        {
                                        if(EsteConst((yyvsp[-2].nume))==1)
                                                {  
                                                yyerror(); 
                                                printf("Variabila %s este de tip const \n", (yyvsp[-2].nume)); 
                                                YYABORT; 
                                                } 
                                        else 
                                                if(FacemNegativ((yyvsp[-2].nume))==0)
                                                        { 
                                                         yyerror(); 
                                                         printf("Asignarea nu a avut loc peentru variabila %s \n", (yyvsp[-2].nume));
                                                          YYABORT;
                                                        }
                                                         
                                        } 
                                }
#line 1788 "y.tab.c"
    break;

  case 51:
#line 113 "tema.y"
                       { Eval((yyvsp[0].valoare)); }
#line 1794 "y.tab.c"
    break;

  case 52:
#line 114 "tema.y"
                              { if(strcmp((type((yyvsp[-2].nume))),"int")==0) Eval(valoare((yyvsp[-2].nume))+(yyvsp[0].valoare)); else {yyerror();printf("Variabila nu este de tipul dorit\n");YYABORT;}}
#line 1800 "y.tab.c"
    break;

  case 53:
#line 115 "tema.y"
                     {print_symbol();}
#line 1806 "y.tab.c"
    break;

  case 54:
#line 116 "tema.y"
                                       { if(f_EsteDeclarata((yyvsp[-3].nume))==-1) {yyerror(); printf("Functia nu a fost declarata\n");YYABORT;} 
                        else {if (VerificareFunctie((yyvsp[-3].nume))==1) { yyerror();    printf("Tipul parametrilor nu corespund \n"); YYABORT; } 
                                else if (VerificareFunctie((yyvsp[-3].nume))==2) { yyerror();    printf("Numarul de parametrii nu corespund \n"); YYABORT; }   }}
#line 1814 "y.tab.c"
    break;

  case 55:
#line 119 "tema.y"
                                       {  if(Afisare()==0) printf("Tipul expresiei este int \n"); else  if(Afisare()==1) printf("Tipul expresiei este float \n");}
#line 1820 "y.tab.c"
    break;

  case 57:
#line 123 "tema.y"
                     {}
#line 1826 "y.tab.c"
    break;

  case 58:
#line 126 "tema.y"
              {  if(AdaugVector((yyvsp[0].nume))==0) {yyerror();  printf("elementele sunt de tip diferit \n");  YYABORT;} }
#line 1832 "y.tab.c"
    break;

  case 59:
#line 128 "tema.y"
              { if(AdaugareVector((yyvsp[0].valoare))==0) {yyerror(); printf("Nu se poate determina tipul expresiei\n");  YYABORT;}}
#line 1838 "y.tab.c"
    break;

  case 60:
#line 129 "tema.y"
                 { if(AdaugareeVector((yyvsp[0].f_valoare))==0) {yyerror(); printf("Nu se poate determina tipul expresiei\n");  YYABORT;}}
#line 1844 "y.tab.c"
    break;

  case 66:
#line 140 "tema.y"
           {  if(va_EsteDeclarata((yyvsp[0].nume))==-1) { yyerror(); printf("Variabila nu a fost declarata\n"); YYABORT; } else IdprimesteId((yyvsp[0].nume));  }
#line 1850 "y.tab.c"
    break;

  case 68:
#line 142 "tema.y"
                                {  if(f_EsteDeclarata((yyvsp[-3].nume))==-1){   yyerror(); printf("Functia nu a fost declarata\n");YYABORT;} else  inlocuireFunctie((yyvsp[-3].nume));  FunctieInFunctie3(); }
#line 1856 "y.tab.c"
    break;

  case 69:
#line 143 "tema.y"
            {   inlocuireaInt((yyvsp[0].valoare)); }
#line 1862 "y.tab.c"
    break;

  case 70:
#line 144 "tema.y"
               {  inlocuireaString((yyvsp[0].string));}
#line 1868 "y.tab.c"
    break;

  case 71:
#line 145 "tema.y"
              {  inlocuireaFloat((yyvsp[0].f_valoare)); }
#line 1874 "y.tab.c"
    break;

  case 72:
#line 146 "tema.y"
             { inlocuireaBool((yyvsp[0].bool_valoare));}
#line 1880 "y.tab.c"
    break;

  case 73:
#line 147 "tema.y"
                   {if(cl_EsteDeclarata((yyvsp[-1].nume))==-1){yyerror();printf("Clasa nu a fost declarata");}}
#line 1886 "y.tab.c"
    break;

  case 74:
#line 148 "tema.y"
                          { if(v_EsteDeclarata((yyvsp[-3].nume))==-1) { yyerror(); printf("Vectorul nu a fost declarat\n"); YYABORT; } else AsignareDeVector((yyvsp[-3].nume)); }
#line 1892 "y.tab.c"
    break;

  case 76:
#line 152 "tema.y"
             {   VerificareParametru((yyvsp[0].nume));  FunctieInFunctie(); }
#line 1898 "y.tab.c"
    break;

  case 78:
#line 154 "tema.y"
                         { printf ("yny seby %s \n",(yyvsp[0].nume)); VerificareParametru((yyvsp[0].nume)); }
#line 1904 "y.tab.c"
    break;

  case 79:
#line 155 "tema.y"
                                  {   if(f_EsteDeclarata((yyvsp[-3].nume))==-1)
                                        {  yyerror(); printf("Functia nu a fost declarata\n");YYABORT;}  
                                          if(VerificaParametruFIF((yyvsp[-3].nume))==1)  { yyerror();    printf("Tipul parametrilor nu corespund \n"); YYABORT; } 
                                                else if (VerificareFunctie((yyvsp[-3].nume))==2) { yyerror();    printf("Numarul de parametrii nu corespund \n"); YYABORT; }      FunctieInFunctie2(); }
#line 1913 "y.tab.c"
    break;

  case 81:
#line 163 "tema.y"
                                                                 {if(va_EsteDeclarata((yyvsp[-5].nume))==-1){yyerror();printf("Variabila nu a fost declarata\n");YYABORT;}}
#line 1919 "y.tab.c"
    break;

  case 82:
#line 164 "tema.y"
                                                                {if(va_EsteDeclarata((yyvsp[-5].nume))==-1){yyerror();printf("Variabila nu a fost declarata\n");YYABORT;}}
#line 1925 "y.tab.c"
    break;

  case 83:
#line 165 "tema.y"
                                                         {if(va_EsteDeclarata((yyvsp[-5].nume))==-1){yyerror();printf("Variabila nu a fost declarata\n");YYABORT;}}
#line 1931 "y.tab.c"
    break;

  case 84:
#line 166 "tema.y"
                                                                                                      {if(va_EsteDeclarata((yyvsp[-13].nume))==-1){yyerror();printf("Variabila nu a fost declarata\n");YYABORT;}}
#line 1937 "y.tab.c"
    break;


#line 1941 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 173 "tema.y"


int yyerror(char * s){
printf("_err: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
int ok=0;
yyin=fopen(argv[1],"r");
yyparse();
print_symbol();
print_table();
}
