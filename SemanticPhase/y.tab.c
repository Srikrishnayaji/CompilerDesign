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
#line 1 "Parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "string.h"
	void ins();
	void insV();
	char get_identifier_type(char*);
	int flag=0;

	extern char Match_str[20];
	extern char Match_type[20];
	extern char curval[20];
	extern char cur_identifier[20];
	extern char cur_function[20];
	extern int cur_scope;
	extern int params_cnt;
	extern int funccall_params_cnt;
	void insert_symbol_table_scope(char*, int);
	void insert_symbol_table_params_cnt(char*, int);
	void remove_scope(int);
	int verify_funccall_cnt(char*, int);
	int check_arg_type(int , char* , int);
	void insert_arg_type(char*, char*, int);
	void insert_func_table(char* );

#line 98 "y.tab.c"

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
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    RETURN = 268,
    MAIN = 269,
    VOID = 270,
    WHILE = 271,
    FOR = 272,
    DO = 273,
    BREAK = 274,
    ENDIF = 275,
    AUTO = 276,
    SWITCH = 277,
    CASE = 278,
    ENUM = 279,
    REG = 280,
    TYPEDEF = 281,
    EXTERN = 282,
    UNION = 283,
    CONTINUE = 284,
    STATIC = 285,
    DEFAULT = 286,
    GOTO = 287,
    VOLATILE = 288,
    CONST = 289,
    IDENTIFIER = 290,
    NUM_CONSTANT = 291,
    CHAR_CONSTANT = 292,
    STRING_CONSTANT = 293,
    ELSE = 294,
    leftshiftAssignment = 295,
    rightshiftAssignment = 296,
    xorAssignment = 297,
    orAssignment = 298,
    andAssignment = 299,
    moduloAssignment = 300,
    multiplicationAssignment = 301,
    divisionAssignment = 302,
    additionAssignment = 303,
    subtractionAssignment = 304,
    assignment = 305,
    or = 306,
    and = 307,
    bitOr = 308,
    xor = 309,
    bitAnd = 310,
    equality = 311,
    inequality = 312,
    lessthanAssignment = 313,
    lessthan = 314,
    greaterthanAssignment = 315,
    greaterthan = 316,
    leftshift = 317,
    rightshift = 318,
    add = 319,
    subtract = 320,
    multiplication = 321,
    divide = 322,
    modulo = 323,
    SIZEOF = 324,
    negation = 325,
    not = 326,
    increment = 327,
    decrement = 328
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define AUTO 276
#define SWITCH 277
#define CASE 278
#define ENUM 279
#define REG 280
#define TYPEDEF 281
#define EXTERN 282
#define UNION 283
#define CONTINUE 284
#define STATIC 285
#define DEFAULT 286
#define GOTO 287
#define VOLATILE 288
#define CONST 289
#define IDENTIFIER 290
#define NUM_CONSTANT 291
#define CHAR_CONSTANT 292
#define STRING_CONSTANT 293
#define ELSE 294
#define leftshiftAssignment 295
#define rightshiftAssignment 296
#define xorAssignment 297
#define orAssignment 298
#define andAssignment 299
#define moduloAssignment 300
#define multiplicationAssignment 301
#define divisionAssignment 302
#define additionAssignment 303
#define subtractionAssignment 304
#define assignment 305
#define or 306
#define and 307
#define bitOr 308
#define xor 309
#define bitAnd 310
#define equality 311
#define inequality 312
#define lessthanAssignment 313
#define lessthan 314
#define greaterthanAssignment 315
#define greaterthan 316
#define leftshift 317
#define rightshift 318
#define add 319
#define subtract 320
#define multiplication 321
#define divide 322
#define modulo 323
#define SIZEOF 324
#define negation 325
#define not 326
#define increment 327
#define decrement 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

#define YYUNDEFTOK  2
#define YYMAXUTOK   328


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      80,    81,     2,     2,    75,     2,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    74,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,     2,    79,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    68,    68,    71,    74,    75,    78,    79,    80,    83,
      86,    89,    92,    95,    98,    98,   109,   109,   114,   115,
     118,   119,   119,   120,   123,   124,   125,   128,   128,   128,
     128,   129,   130,   131,   132,   133,   136,   136,   136,   136,
     139,   139,   139,   139,   142,   142,   145,   145,   148,   148,
     150,   150,   153,   157,   160,   163,   166,   166,   169,   169,
     172,   175,   176,   179,   179,   182,   183,   186,   186,   187,
     187,   188,   188,   189,   192,   192,   195,   196,   199,   200,
     203,   206,   207,   210,   211,   212,   215,   218,   219,   222,
     225,   228,   231,   234,   235,   238,   248,   253,   256,   259,
     262,   265,   268,   271,   272,   275,   280,   280,   283,   288,
     289,   292,   293,   298,   303,   306,   309,   309,   309,   310,
     310,   310,   313,   320,   323,   324,   327,   336,   339,   339,
     339,   342,   342,   345,   351,   360,   361,   364,   367,   370,
     375,   375,   388,   388,   391,   391,   391,   394,   394,   395,
     398,   399,   400
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "AUTO", "SWITCH", "CASE",
  "ENUM", "REG", "TYPEDEF", "EXTERN", "UNION", "CONTINUE", "STATIC",
  "DEFAULT", "GOTO", "VOLATILE", "CONST", "IDENTIFIER", "NUM_CONSTANT",
  "CHAR_CONSTANT", "STRING_CONSTANT", "ELSE", "leftshiftAssignment",
  "rightshiftAssignment", "xorAssignment", "orAssignment", "andAssignment",
  "moduloAssignment", "multiplicationAssignment", "divisionAssignment",
  "additionAssignment", "subtractionAssignment", "assignment", "or", "and",
  "bitOr", "xor", "bitAnd", "equality", "inequality", "lessthanAssignment",
  "lessthan", "greaterthanAssignment", "greaterthan", "leftshift",
  "rightshift", "add", "subtract", "multiplication", "divide", "modulo",
  "SIZEOF", "negation", "not", "increment", "decrement", "';'", "','",
  "'['", "']'", "'{'", "'}'", "'('", "')'", "'.'", "$accept", "program",
  "declaration_list", "D", "declaration", "variable_declaration",
  "variable_declaration_list", "V", "variable_declaration_identifier",
  "$@1", "vdi", "identifier_array_type", "initilization_params", "$@2",
  "initilization", "type_specifier", "unsigned_grammar", "signed_grammar",
  "long_grammar", "short_grammar", "structure_definition", "$@3", "V1",
  "structure_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "$@4", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@5",
  "param_identifier_breakup", "statement", "compound_statement", "$@6",
  "statment_list", "expression_statment", "conditional_statements",
  "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "$@7", "arguments", "arguments_list", "$@8", "$@9", "A", "$@10",
  "constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    59,    44,    91,    93,   123,   125,
      40,    41,    46
};
# endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     197,   -99,   -99,   -99,   -99,     7,     9,    18,    67,   -26,
     -99,    36,   -99,   197,   -99,   -10,   -99,   -99,   -99,   229,
     -99,   -99,   -99,   -99,   -99,     7,     9,   -99,   -99,     7,
       9,   -99,    10,   -99,   -99,   -99,   -32,   -24,   -22,   -99,
     -99,   -20,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -19,
     -99,   -30,   -99,    10,   -99,    22,   180,   217,    -3,   -21,
     -99,   -99,   -99,   -99,   -99,   -12,   -11,    37,    -7,    -6,
       6,   180,    11,    14,   -99,   -99,   -99,    -3,   -99,    -3,
     -99,    10,   -99,   -99,    19,   -99,   -99,   -99,   -99,   -99,
      13,   -99,    44,    54,   -99,    52,    12,   -99,    55,   -99,
     -99,   -99,   217,    39,   -99,   -99,    79,    69,   -99,    47,
     229,   -99,    -3,    10,   -99,   -99,    46,    -3,    -3,   108,
     -99,   -99,   -99,   -33,    45,   140,   -99,    -3,   -99,    -3,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
       3,     3,   -99,   -99,   -99,     3,    -3,    -3,    -3,    -3,
      -3,    -3,   -99,   -99,    -3,    90,   -99,   -99,   -99,    56,
      57,    58,    91,   -99,    59,   -99,   -99,    51,   -99,    60,
      64,    53,    73,   -99,   140,    81,    44,    54,    17,    12,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,    84,   -99,   -99,
     114,   114,   -99,   -99,   180,   180,    -3,    -3,    85,   -99,
      -3,   -99,   -99,   -99,   -99,   -99,   -31,   -99,   -99,   -99,
     -99,   126,   -99,    93,    87,   -99,   -99,   133,   180,   -99,
      -3,    97,    98,    99,   100,   -99,   101,   -99,    -3,   -99,
     133,   -99,   -99,   -99,   -99,   -99,    98,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    28,    29,    30,    45,    47,    43,    39,     0,
      35,     0,     2,     5,     6,     0,     8,    10,     7,    57,
      44,    31,    46,    32,    40,    45,    47,    34,    36,    45,
      47,    33,    48,     1,     4,     3,    14,     0,    13,    58,
      53,     0,    56,    41,    42,    37,    38,    14,    52,     0,
      54,    19,     9,     0,    11,     0,    74,    51,     0,     0,
      15,    16,    12,    63,    59,    62,     0,     0,     0,     0,
       0,    74,     0,   133,   150,   152,   151,     0,    79,     0,
      73,     0,    55,    68,     0,    67,    69,    70,    71,    72,
       0,    96,   107,   110,   112,   115,   123,   127,   132,   131,
     138,   139,    51,     0,    17,    21,     0,     0,    18,    66,
       0,    60,     0,     0,    87,    86,     0,     0,     0,     0,
      89,   140,   111,   132,     0,    74,    78,     0,   105,     0,
     108,   120,   121,   117,   119,   116,   118,   124,   125,   113,
       0,     0,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,   103,   104,     0,     0,    95,   134,    50,     0,
       0,     0,     0,    23,     0,    64,    61,     0,    88,     0,
       0,     0,   144,   137,    74,     0,   107,   110,   114,   122,
     126,   102,   100,   101,    98,    99,    97,     0,   136,    49,
      26,    26,    90,    65,    74,    74,     0,     0,     0,   142,
       0,    76,    75,   106,   109,   135,     0,    22,    24,    25,
      20,    82,    83,     0,     0,   141,   145,     0,    74,    80,
       0,     0,   149,    94,     0,    81,     0,    85,     0,   146,
       0,    92,    91,    84,   147,    93,   149,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   159,   -99,   -99,     5,   -29,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,    40,     4,   -99,   -99,   -17,    25,
     -99,   -99,    78,   -99,   -99,   -99,   -99,   -99,    71,   -99,
     -99,   -99,   -99,   -99,   -99,   -55,   -99,   -99,    20,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   103,   -99,     0,   -99,
     -58,   -99,   -98,    24,    86,    65,   -71,   -99,   -99,   -99,
     105,   -99,   102,   -99,    96,   -75,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,    16,   -99,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    35,    13,    80,    37,    54,    38,    51,
      60,    61,   108,   160,   207,    81,    31,    27,    21,    23,
      16,    49,   103,    17,    18,    19,    40,    41,    42,    55,
      64,   111,    65,   109,   165,   174,    83,    84,   175,    85,
      86,   219,    87,    88,   115,    89,   208,   209,   224,   231,
      90,   156,    91,   128,    92,   130,    93,    94,   139,   140,
      95,   141,    96,   145,    97,    98,   157,    99,   100,   172,
     198,   199,   200,   222,   229,   236,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     104,    82,   123,    48,    15,    14,   122,   192,    43,    32,
     116,    20,    45,    22,   167,   105,   119,    15,    14,   169,
      58,   124,    24,    39,    62,    36,    25,    26,    73,    74,
      75,    76,    73,    74,    75,    76,    33,   123,    73,    74,
      75,    76,   123,   154,   106,    47,    59,   217,    50,   155,
      52,    44,   123,    53,   123,    46,   107,    63,   177,    57,
     170,    56,   102,   110,    77,   123,   123,   114,    77,   112,
     123,    28,   113,    79,   117,    29,    30,    79,   142,   143,
     144,   137,   138,    79,    48,   120,   118,   126,   181,   182,
     183,   184,   185,   186,   121,   127,   187,   125,   213,   214,
     146,   147,   148,   149,   150,   151,   129,   102,   131,   132,
     133,   134,   135,   136,    39,   161,   137,   138,   159,   162,
     168,   123,   123,   164,   171,   188,   173,   152,   153,   192,
     189,   154,   194,   197,   190,   191,   193,   155,   196,   211,
     212,   195,   216,    66,     1,     2,     3,     4,     5,     6,
       7,     8,    67,    68,  -143,    10,    69,    70,    71,    72,
     202,   205,   226,   225,   206,   218,   215,   220,   221,   223,
     234,   227,    34,   228,   230,    73,    74,    75,    76,   232,
     158,   166,   233,    66,     1,     2,     3,     4,     5,     6,
       7,     8,    67,    68,   201,    10,    69,    70,    71,    72,
     203,     1,     2,     3,     4,     5,     6,     7,     8,     9,
     163,    77,    10,   176,    78,    73,    74,    75,    76,   -77,
      79,     1,     2,     3,     4,     5,     6,     7,     8,    67,
     235,   210,    10,     1,     2,     3,     4,     5,     6,     7,
       8,   180,   204,   179,    10,   178,     0,     0,     0,     0,
       0,    77,   237,     0,    78,     0,     0,     0,     0,     0,
      79
};

static const yytype_int16 yycheck[] =
{
      58,    56,    77,    32,     0,     0,    77,    38,    25,    35,
      68,     4,    29,     4,   112,    36,    71,    13,    13,   117,
      50,    79,     4,    19,    53,    35,     8,     9,    35,    36,
      37,    38,    35,    36,    37,    38,     0,   112,    35,    36,
      37,    38,   117,    76,    65,    35,    76,    78,    80,    82,
      74,    26,   127,    75,   129,    30,    77,    35,   129,    78,
     118,    81,    57,    75,    71,   140,   141,    74,    71,    80,
     145,     4,    35,    80,    80,     8,     9,    80,    66,    67,
      68,    64,    65,    80,   113,    74,    80,    74,   146,   147,
     148,   149,   150,   151,    80,    51,   154,    78,   196,   197,
      45,    46,    47,    48,    49,    50,    52,   102,    56,    57,
      58,    59,    60,    61,   110,    36,    64,    65,    79,    50,
      74,   196,   197,    76,    16,    35,    81,    72,    73,    38,
      74,    76,    81,    80,    77,    77,    77,    82,    74,   194,
     195,    81,   200,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    81,    15,    16,    17,    18,    19,
      79,    77,   220,   218,    50,    39,    81,    74,    81,    36,
     228,    74,    13,    75,    75,    35,    36,    37,    38,    79,
     102,   110,    81,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   174,    15,    16,    17,    18,    19,
     176,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     107,    71,    15,   127,    74,    35,    36,    37,    38,    79,
      80,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     230,   191,    15,     4,     5,     6,     7,     8,     9,    10,
      11,   145,   177,   141,    15,   140,    -1,    -1,    -1,    -1,
      -1,    71,   236,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    84,    85,    87,    88,    98,   103,   106,   107,   108,
       4,   101,     4,   102,     4,     8,     9,   100,     4,     8,
       9,    99,    35,     0,    85,    86,    35,    89,    91,    98,
     109,   110,   111,   101,   102,   101,   102,    35,    89,   104,
      80,    92,    74,    75,    90,   112,    81,    78,    50,    76,
      93,    94,    89,    35,   113,   115,     3,    12,    13,    16,
      17,    18,    19,    35,    36,    37,    38,    71,    74,    80,
      88,    98,   118,   119,   120,   122,   123,   125,   126,   128,
     133,   135,   137,   139,   140,   143,   145,   147,   148,   150,
     151,   159,    88,   105,   133,    36,    65,    77,    95,   116,
      75,   114,    80,    35,    74,   127,   133,    80,    80,   118,
      74,    80,   139,   148,   133,    78,    74,    51,   136,    52,
     138,    56,    57,    58,    59,    60,    61,    64,    65,   141,
     142,   144,    66,    67,    68,   146,    45,    46,    47,    48,
      49,    50,    72,    73,    76,    82,   134,   149,   105,    79,
      96,    36,    50,   129,    76,   117,   111,   135,    74,   135,
     133,    16,   152,    81,   118,   121,   137,   139,   143,   145,
     147,   133,   133,   133,   133,   133,   133,   133,    35,    74,
      77,    77,    38,    77,    81,    81,    74,    80,   153,   154,
     155,   121,    79,   136,   138,    77,    50,    97,   129,   130,
      97,   118,   118,   135,   135,    81,   133,    78,    39,   124,
      74,    81,   156,    36,   131,   118,   133,    74,    75,   157,
      75,   132,    79,    81,   133,   131,   158,   157
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    85,    86,    86,    87,    87,    87,    88,
      88,    89,    90,    90,    92,    91,    93,    93,    94,    94,
      95,    96,    95,    95,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   104,   103,
     105,   105,   106,   107,   108,   109,   110,   110,   112,   111,
     113,   114,   114,   116,   115,   117,   117,   118,   118,   118,
     118,   118,   118,   118,   120,   119,   121,   121,   122,   122,
     123,   124,   124,   125,   125,   125,   126,   127,   127,   128,
     129,   130,   131,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   136,   136,   137,   138,
     138,   139,   139,   140,   141,   141,   142,   142,   142,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   150,
     152,   151,   153,   153,   155,   156,   154,   158,   157,   157,
     159,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       4,     0,     4,     2,     1,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     2,     2,     0,
       1,     2,     2,     0,     1,     0,     1,     0,     0,     7,
       2,     0,     3,     2,     3,     3,     1,     0,     0,     3,
       2,     2,     0,     0,     3,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     2,     0,     2,     1,
       6,     2,     0,     5,     8,     7,     2,     1,     2,     2,
       2,     4,     2,     2,     0,     2,     1,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     3,     0,     2,     3,
       0,     2,     1,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     1,     1,
       0,     5,     1,     0,     0,     0,     4,     0,     4,     0,
       1,     1,     1
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
  case 9:
#line 83 "Parser.y"
                                                                       {
				
			}
#line 1684 "y.tab.c"
    break;

  case 12:
#line 92 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1692 "y.tab.c"
    break;

  case 14:
#line 98 "Parser.y"
                                     {ins(), insert_symbol_table_scope(cur_identifier, cur_scope);}
#line 1698 "y.tab.c"
    break;

  case 15:
#line 98 "Parser.y"
                                                                                                        {
				char type = get_identifier_type(cur_identifier);
				// printf("%d ->___$2\n", $3);
				if(type == 'i' && yyvsp[0] == 5) yyval = 5;
				else if(type == 'c' && yyvsp[0] == 6) yyval = 6;
				else if(yyvsp[0] != 127) {
					printf("ERROR:  Declaration type Mismatch.\n");
					yyerror("");
				}
			}
#line 1713 "y.tab.c"
    break;

  case 16:
#line 109 "Parser.y"
                            {yyval = 127;}
#line 1719 "y.tab.c"
    break;

  case 17:
#line 109 "Parser.y"
                                                                {
	yyval = yyvsp[0];	
}
#line 1727 "y.tab.c"
    break;

  case 20:
#line 118 "Parser.y"
                                                                  {puts("ERROR: Array size negative!!"); yyerror("");}
#line 1733 "y.tab.c"
    break;

  case 21:
#line 119 "Parser.y"
                                       {if(atoi(curval) == 0) {puts("ERROR: Array Size is 0!!"); yyerror("");}}
#line 1739 "y.tab.c"
    break;

  case 27:
#line 128 "Parser.y"
                              {yyval = 5;}
#line 1745 "y.tab.c"
    break;

  case 28:
#line 128 "Parser.y"
                                              {yyval = 6;}
#line 1751 "y.tab.c"
    break;

  case 29:
#line 128 "Parser.y"
                                                               {yyval = 5;}
#line 1757 "y.tab.c"
    break;

  case 48:
#line 148 "Parser.y"
                                            { ins(); }
#line 1763 "y.tab.c"
    break;

  case 54:
#line 160 "Parser.y"
                                                         { params_cnt = 0; ins(); strcpy(cur_function, cur_identifier); insert_symbol_table_scope(cur_identifier, cur_scope); insert_func_table(cur_function);}
#line 1769 "y.tab.c"
    break;

  case 58:
#line 169 "Parser.y"
                                         {insert_arg_type(Match_type, cur_function, params_cnt);}
#line 1775 "y.tab.c"
    break;

  case 59:
#line 169 "Parser.y"
                                                                                                                             {insert_symbol_table_params_cnt(cur_function, params_cnt);}
#line 1781 "y.tab.c"
    break;

  case 63:
#line 179 "Parser.y"
                                     { ins(); insert_symbol_table_scope(cur_identifier, cur_scope+1); params_cnt++;}
#line 1787 "y.tab.c"
    break;

  case 74:
#line 192 "Parser.y"
                          {cur_scope++;}
#line 1793 "y.tab.c"
    break;

  case 75:
#line 192 "Parser.y"
                                                               {remove_scope(cur_scope); cur_scope--;}
#line 1799 "y.tab.c"
    break;

  case 90:
#line 225 "Parser.y"
                                                     { insV(); }
#line 1805 "y.tab.c"
    break;

  case 95:
#line 238 "Parser.y"
                                                     {
				if(yyvsp[-1] != yyvsp[0]) {
					printf("ERROR: Type Mismatch.\n");
					yyerror("");
				} else if(yyvsp[-1] == 5) {
					yyval = 5;
				} else if(yyvsp[-1] == 6) {
					yyval = 6;
				}
			}
#line 1820 "y.tab.c"
    break;

  case 96:
#line 248 "Parser.y"
                                            {
				yyval = yyvsp[0];
			}
#line 1828 "y.tab.c"
    break;

  case 97:
#line 253 "Parser.y"
                                                {
				yyval = yyvsp[0];
			}
#line 1836 "y.tab.c"
    break;

  case 98:
#line 256 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1844 "y.tab.c"
    break;

  case 99:
#line 259 "Parser.y"
                                                           {
				yyval = yyvsp[0];
			}
#line 1852 "y.tab.c"
    break;

  case 100:
#line 262 "Parser.y"
                                                              {
				yyval = yyvsp[0];
			}
#line 1860 "y.tab.c"
    break;

  case 101:
#line 265 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1868 "y.tab.c"
    break;

  case 102:
#line 268 "Parser.y"
                                                      {
				yyval = yyvsp[0];
			}
#line 1876 "y.tab.c"
    break;

  case 105:
#line 275 "Parser.y"
                                                                   {
				yyval = yyvsp[-1];
			}
#line 1884 "y.tab.c"
    break;

  case 108:
#line 283 "Parser.y"
                                                                           {
				yyval = yyvsp[-1];
			}
#line 1892 "y.tab.c"
    break;

  case 112:
#line 293 "Parser.y"
                                             {
				yyval = yyvsp[0];
			}
#line 1900 "y.tab.c"
    break;

  case 113:
#line 298 "Parser.y"
                                                                    {
				yyval = yyvsp[-1];
			}
#line 1908 "y.tab.c"
    break;

  case 114:
#line 303 "Parser.y"
                                                              {
				yyval = yyvsp[0];
			}
#line 1916 "y.tab.c"
    break;

  case 122:
#line 313 "Parser.y"
                                                            {
				if(yyvsp[-2] == 5 && yyvsp[0] == 5)
					yyval = 5;
				else 
					printf("ERROR: Type mismatch.\n");
					yyerror("");
			}
#line 1928 "y.tab.c"
    break;

  case 123:
#line 320 "Parser.y"
                               {yyval = yyvsp[0];}
#line 1934 "y.tab.c"
    break;

  case 126:
#line 327 "Parser.y"
                                            {
				if(yyvsp[-2] == yyvsp[0])
					yyval = yyvsp[-2];
				else 
					{
						printf("ERROR: Type mismatch");
						yyerror("");
					};
			}
#line 1948 "y.tab.c"
    break;

  case 127:
#line 336 "Parser.y"
                                 {yyval = yyvsp[0];}
#line 1954 "y.tab.c"
    break;

  case 131:
#line 342 "Parser.y"
                                    {yyval = yyvsp[0];}
#line 1960 "y.tab.c"
    break;

  case 133:
#line 345 "Parser.y"
                                     {
				// check identifire type and return;
				char type = get_identifier_type(cur_identifier);
				if(type == 'i') yyval = 5;
				if(type == 'c') yyval = 6;
			}
#line 1971 "y.tab.c"
    break;

  case 134:
#line 351 "Parser.y"
                                                  {
				if(yyvsp[0] == 5 || yyvsp[-1] == 5) 
					yyval = 5;
				else 
					printf("ERROR: Type Mismatch");
					yyerror("");
			}
#line 1983 "y.tab.c"
    break;

  case 136:
#line 361 "Parser.y"
                                         {if( yyvsp[0] == 5) yyval = 5;}
#line 1989 "y.tab.c"
    break;

  case 137:
#line 364 "Parser.y"
                                             {
				if(yyvsp[-1] == 5) yyval = 5;
			}
#line 1997 "y.tab.c"
    break;

  case 138:
#line 367 "Parser.y"
                               {
				if(yyvsp[0] == 5) yyval = 5;
			}
#line 2005 "y.tab.c"
    break;

  case 139:
#line 370 "Parser.y"
                                   {
				if(yyvsp[0] == 5) yyval = 5;
			}
#line 2013 "y.tab.c"
    break;

  case 140:
#line 375 "Parser.y"
                                         {strcpy(cur_function, cur_identifier);}
#line 2019 "y.tab.c"
    break;

  case 141:
#line 375 "Parser.y"
                                                                                               {
				puts(cur_identifier);
				char type = get_identifier_type(cur_function);
				if(type == 'i') yyval = 5;
				if(type == 'c') yyval = 6;

				if(!verify_funccall_cnt(cur_function, funccall_params_cnt)) {
					puts("ERROR: Function Call arguments count mismatch");
					yyerror(cur_function);
				}
			}
#line 2035 "y.tab.c"
    break;

  case 144:
#line 391 "Parser.y"
                          {funccall_params_cnt = 0;}
#line 2041 "y.tab.c"
    break;

  case 145:
#line 391 "Parser.y"
                                                                {check_arg_type(yyvsp[0], cur_function, funccall_params_cnt);funccall_params_cnt++;}
#line 2047 "y.tab.c"
    break;

  case 147:
#line 394 "Parser.y"
                                         {check_arg_type(yyvsp[0], cur_function, funccall_params_cnt);;funccall_params_cnt++;}
#line 2053 "y.tab.c"
    break;

  case 150:
#line 398 "Parser.y"
                                        { insV(); yyval=5;}
#line 2059 "y.tab.c"
    break;

  case 151:
#line 399 "Parser.y"
                                                { insV(); }
#line 2065 "y.tab.c"
    break;

  case 152:
#line 400 "Parser.y"
                                       { insV(); yyval=6;}
#line 2071 "y.tab.c"
    break;


#line 2075 "y.tab.c"

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
#line 402 "Parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
extern int cbracketsopen;
extern int cbracketsclose;
extern int bbracketsopen;
extern int bbracketsclose;
extern int fbracketsopen;
extern int fbracketsclose;
void insert_symbol_table_type(char *,char *);
void insert_symbol_table_value(char *, char *);
void insert_constantsTable(char *, char *);
void print_constant_table();
void print_symbol_table();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();
	if((bbracketsopen-bbracketsclose)){
        printf("ERROR: brackets error [\n");
		// yyerror("ERROR: brackets error [\n");
		flag = 1;
    }
    if((fbracketsopen-fbracketsclose)){
        printf("ERROR: brackets error {\n");
		// yyerror("ERROR: brackets error {\n");
		flag = 1;
    }
    if((cbracketsopen-cbracketsclose)){
        printf("ERROR: brackets error (\n");
		// yyerror("ERROR: brackets error (\n");
		flag = 1;
    }


	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid\n");
		printf("SYMBOL TABLE\n");
		printf("%30s %s\n", " ", "------------");
		print_symbol_table();
		printf("\n\nCONSTANT TABLE\n");
		printf("%30s %s\n", " ", "--------------");
		print_constant_table();
	}
}


void yyerror(char *s)
{
	puts("=========================================================================");
	printf("Parsing Failed at line no: %d\n", yylineno);
	printf("Error: %s\n", yytext);
	exit(0);
	flag=1;
}

void ins()
{
	insert_symbol_table_type(Match_str,Match_type);
}

void insV()
{
	insert_symbol_table_value(Match_str,curval);
}	
