/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

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

	#define _RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define _RESET	"\x1b[0m"
	void yyerror(char* s);
	int yylex();
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void ins();
	void insV();
	int flag=0;
	FILE* fp;
	int T_cnt = 0, valtop = 0, lbltop = 0, L_cnt = 0;

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
	char get_identifier_type(char* );
	struct labl {
		char value[500];
		int id;
	} val_stack[100], labl_stack[100];
	void val_push(char* );
	void TAC();
	void reassign_TAC();
	void identifier_TAC();
	void constant_TAC();
	void if_not_goto();
	void if_end_goto();
	void if_end_label();
	// void assign_TAC();

#line 118 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    RETURN = 268,                  /* RETURN  */
    MAIN = 269,                    /* MAIN  */
    VOID = 270,                    /* VOID  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    DO = 273,                      /* DO  */
    BREAK = 274,                   /* BREAK  */
    ENDIF = 275,                   /* ENDIF  */
    AUTO = 276,                    /* AUTO  */
    SWITCH = 277,                  /* SWITCH  */
    CASE = 278,                    /* CASE  */
    ENUM = 279,                    /* ENUM  */
    REG = 280,                     /* REG  */
    TYPEDEF = 281,                 /* TYPEDEF  */
    EXTERN = 282,                  /* EXTERN  */
    UNION = 283,                   /* UNION  */
    CONTINUE = 284,                /* CONTINUE  */
    STATIC = 285,                  /* STATIC  */
    DEFAULT = 286,                 /* DEFAULT  */
    GOTO = 287,                    /* GOTO  */
    VOLATILE = 288,                /* VOLATILE  */
    CONST = 289,                   /* CONST  */
    IDENTIFIER = 290,              /* IDENTIFIER  */
    NUM_CONSTANT = 291,            /* NUM_CONSTANT  */
    CHAR_CONSTANT = 292,           /* CHAR_CONSTANT  */
    STRING_CONSTANT = 293,         /* STRING_CONSTANT  */
    ELSE = 294,                    /* ELSE  */
    leftshiftAssignment = 295,     /* leftshiftAssignment  */
    rightshiftAssignment = 296,    /* rightshiftAssignment  */
    xorAssignment = 297,           /* xorAssignment  */
    orAssignment = 298,            /* orAssignment  */
    andAssignment = 299,           /* andAssignment  */
    moduloAssignment = 300,        /* moduloAssignment  */
    multiplicationAssignment = 301, /* multiplicationAssignment  */
    divisionAssignment = 302,      /* divisionAssignment  */
    additionAssignment = 303,      /* additionAssignment  */
    subtractionAssignment = 304,   /* subtractionAssignment  */
    assignment = 305,              /* assignment  */
    or = 306,                      /* or  */
    and = 307,                     /* and  */
    bitOr = 308,                   /* bitOr  */
    xor = 309,                     /* xor  */
    bitAnd = 310,                  /* bitAnd  */
    equality = 311,                /* equality  */
    inequality = 312,              /* inequality  */
    lessthanAssignment = 313,      /* lessthanAssignment  */
    lessthan = 314,                /* lessthan  */
    greaterthanAssignment = 315,   /* greaterthanAssignment  */
    greaterthan = 316,             /* greaterthan  */
    leftshift = 317,               /* leftshift  */
    rightshift = 318,              /* rightshift  */
    add = 319,                     /* add  */
    subtract = 320,                /* subtract  */
    multiplication = 321,          /* multiplication  */
    divide = 322,                  /* divide  */
    modulo = 323,                  /* modulo  */
    SIZEOF = 324,                  /* SIZEOF  */
    negation = 325,                /* negation  */
    not = 326,                     /* not  */
    increment = 327,               /* increment  */
    decrement = 328                /* decrement  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_ENDIF = 20,                     /* ENDIF  */
  YYSYMBOL_AUTO = 21,                      /* AUTO  */
  YYSYMBOL_SWITCH = 22,                    /* SWITCH  */
  YYSYMBOL_CASE = 23,                      /* CASE  */
  YYSYMBOL_ENUM = 24,                      /* ENUM  */
  YYSYMBOL_REG = 25,                       /* REG  */
  YYSYMBOL_TYPEDEF = 26,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 27,                    /* EXTERN  */
  YYSYMBOL_UNION = 28,                     /* UNION  */
  YYSYMBOL_CONTINUE = 29,                  /* CONTINUE  */
  YYSYMBOL_STATIC = 30,                    /* STATIC  */
  YYSYMBOL_DEFAULT = 31,                   /* DEFAULT  */
  YYSYMBOL_GOTO = 32,                      /* GOTO  */
  YYSYMBOL_VOLATILE = 33,                  /* VOLATILE  */
  YYSYMBOL_CONST = 34,                     /* CONST  */
  YYSYMBOL_IDENTIFIER = 35,                /* IDENTIFIER  */
  YYSYMBOL_NUM_CONSTANT = 36,              /* NUM_CONSTANT  */
  YYSYMBOL_CHAR_CONSTANT = 37,             /* CHAR_CONSTANT  */
  YYSYMBOL_STRING_CONSTANT = 38,           /* STRING_CONSTANT  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_leftshiftAssignment = 40,       /* leftshiftAssignment  */
  YYSYMBOL_rightshiftAssignment = 41,      /* rightshiftAssignment  */
  YYSYMBOL_xorAssignment = 42,             /* xorAssignment  */
  YYSYMBOL_orAssignment = 43,              /* orAssignment  */
  YYSYMBOL_andAssignment = 44,             /* andAssignment  */
  YYSYMBOL_moduloAssignment = 45,          /* moduloAssignment  */
  YYSYMBOL_multiplicationAssignment = 46,  /* multiplicationAssignment  */
  YYSYMBOL_divisionAssignment = 47,        /* divisionAssignment  */
  YYSYMBOL_additionAssignment = 48,        /* additionAssignment  */
  YYSYMBOL_subtractionAssignment = 49,     /* subtractionAssignment  */
  YYSYMBOL_assignment = 50,                /* assignment  */
  YYSYMBOL_or = 51,                        /* or  */
  YYSYMBOL_and = 52,                       /* and  */
  YYSYMBOL_bitOr = 53,                     /* bitOr  */
  YYSYMBOL_xor = 54,                       /* xor  */
  YYSYMBOL_bitAnd = 55,                    /* bitAnd  */
  YYSYMBOL_equality = 56,                  /* equality  */
  YYSYMBOL_inequality = 57,                /* inequality  */
  YYSYMBOL_lessthanAssignment = 58,        /* lessthanAssignment  */
  YYSYMBOL_lessthan = 59,                  /* lessthan  */
  YYSYMBOL_greaterthanAssignment = 60,     /* greaterthanAssignment  */
  YYSYMBOL_greaterthan = 61,               /* greaterthan  */
  YYSYMBOL_leftshift = 62,                 /* leftshift  */
  YYSYMBOL_rightshift = 63,                /* rightshift  */
  YYSYMBOL_add = 64,                       /* add  */
  YYSYMBOL_subtract = 65,                  /* subtract  */
  YYSYMBOL_multiplication = 66,            /* multiplication  */
  YYSYMBOL_divide = 67,                    /* divide  */
  YYSYMBOL_modulo = 68,                    /* modulo  */
  YYSYMBOL_SIZEOF = 69,                    /* SIZEOF  */
  YYSYMBOL_negation = 70,                  /* negation  */
  YYSYMBOL_not = 71,                       /* not  */
  YYSYMBOL_increment = 72,                 /* increment  */
  YYSYMBOL_decrement = 73,                 /* decrement  */
  YYSYMBOL_74_ = 74,                       /* ';'  */
  YYSYMBOL_75_ = 75,                       /* ','  */
  YYSYMBOL_76_ = 76,                       /* '['  */
  YYSYMBOL_77_ = 77,                       /* ']'  */
  YYSYMBOL_78_ = 78,                       /* '{'  */
  YYSYMBOL_79_ = 79,                       /* '}'  */
  YYSYMBOL_80_ = 80,                       /* '('  */
  YYSYMBOL_81_ = 81,                       /* ')'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_program = 84,                   /* program  */
  YYSYMBOL_declaration_list = 85,          /* declaration_list  */
  YYSYMBOL_D = 86,                         /* D  */
  YYSYMBOL_declaration = 87,               /* declaration  */
  YYSYMBOL_variable_declaration = 88,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 89, /* variable_declaration_list  */
  YYSYMBOL_V = 90,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 91, /* variable_declaration_identifier  */
  YYSYMBOL_92_1 = 92,                      /* $@1  */
  YYSYMBOL_vdi = 93,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 94,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 95,      /* initilization_params  */
  YYSYMBOL_96_2 = 96,                      /* $@2  */
  YYSYMBOL_initilization = 97,             /* initilization  */
  YYSYMBOL_type_specifier = 98,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 99,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 100,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 101,             /* long_grammar  */
  YYSYMBOL_short_grammar = 102,            /* short_grammar  */
  YYSYMBOL_structure_definition = 103,     /* structure_definition  */
  YYSYMBOL_104_3 = 104,                    /* $@3  */
  YYSYMBOL_V1 = 105,                       /* V1  */
  YYSYMBOL_structure_declaration = 106,    /* structure_declaration  */
  YYSYMBOL_function_declaration = 107,     /* function_declaration  */
  YYSYMBOL_function_declaration_type = 108, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 109, /* function_declaration_param_statement  */
  YYSYMBOL_params = 110,                   /* params  */
  YYSYMBOL_parameters_list = 111,          /* parameters_list  */
  YYSYMBOL_112_4 = 112,                    /* $@4  */
  YYSYMBOL_parameters_identifier_list = 113, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 114, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 115,         /* param_identifier  */
  YYSYMBOL_116_5 = 116,                    /* $@5  */
  YYSYMBOL_param_identifier_breakup = 117, /* param_identifier_breakup  */
  YYSYMBOL_statement = 118,                /* statement  */
  YYSYMBOL_compound_statement = 119,       /* compound_statement  */
  YYSYMBOL_120_6 = 120,                    /* $@6  */
  YYSYMBOL_statment_list = 121,            /* statment_list  */
  YYSYMBOL_expression_statment = 122,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 123,   /* conditional_statements  */
  YYSYMBOL_124_7 = 124,                    /* $@7  */
  YYSYMBOL_125_8 = 125,                    /* $@8  */
  YYSYMBOL_conditional_statements_breakup = 126, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 127,     /* iterative_statements  */
  YYSYMBOL_return_statement = 128,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 129, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 130,          /* break_statement  */
  YYSYMBOL_string_initilization = 131,     /* string_initilization  */
  YYSYMBOL_array_initialization = 132,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 133,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 134, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 135,               /* expression  */
  YYSYMBOL_expression_breakup = 136,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 137,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 138, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 139,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 140,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 141, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 142,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 143, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 144,     /* relational_operators  */
  YYSYMBOL_sum_expression = 145,           /* sum_expression  */
  YYSYMBOL_sum_operators = 146,            /* sum_operators  */
  YYSYMBOL_term = 147,                     /* term  */
  YYSYMBOL_MULOP = 148,                    /* MULOP  */
  YYSYMBOL_factor = 149,                   /* factor  */
  YYSYMBOL_mutable = 150,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 151,          /* mutable_breakup  */
  YYSYMBOL_immutable = 152,                /* immutable  */
  YYSYMBOL_call = 153,                     /* call  */
  YYSYMBOL_154_9 = 154,                    /* $@9  */
  YYSYMBOL_arguments = 155,                /* arguments  */
  YYSYMBOL_arguments_list = 156,           /* arguments_list  */
  YYSYMBOL_157_10 = 157,                   /* $@10  */
  YYSYMBOL_158_11 = 158,                   /* $@11  */
  YYSYMBOL_A = 159,                        /* A  */
  YYSYMBOL_160_12 = 160,                   /* $@12  */
  YYSYMBOL_constant = 161                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    87,    87,    90,    93,    94,    97,    98,    99,   102,
     105,   108,   111,   114,   117,   117,   128,   128,   134,   135,
     138,   139,   139,   140,   143,   144,   145,   148,   148,   148,
     148,   149,   150,   151,   152,   153,   156,   156,   156,   156,
     159,   159,   159,   159,   162,   162,   165,   165,   168,   168,
     170,   170,   173,   177,   180,   183,   186,   186,   189,   189,
     192,   195,   196,   199,   199,   202,   203,   206,   206,   207,
     207,   208,   208,   209,   212,   212,   215,   216,   219,   220,
     223,   223,   223,   226,   227,   230,   231,   232,   235,   248,
     249,   252,   255,   258,   261,   264,   265,   268,   279,   285,
     292,   295,   298,   301,   304,   307,   310,   315,   320,   320,
     323,   328,   329,   332,   333,   338,   345,   348,   351,   351,
     351,   352,   352,   352,   355,   364,   367,   368,   371,   380,
     383,   383,   383,   386,   386,   389,   399,   408,   409,   412,
     415,   418,   423,   423,   436,   436,   439,   439,   439,   442,
     442,   443,   446,   447,   448
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "AUTO",
  "SWITCH", "CASE", "ENUM", "REG", "TYPEDEF", "EXTERN", "UNION",
  "CONTINUE", "STATIC", "DEFAULT", "GOTO", "VOLATILE", "CONST",
  "IDENTIFIER", "NUM_CONSTANT", "CHAR_CONSTANT", "STRING_CONSTANT", "ELSE",
  "leftshiftAssignment", "rightshiftAssignment", "xorAssignment",
  "orAssignment", "andAssignment", "moduloAssignment",
  "multiplicationAssignment", "divisionAssignment", "additionAssignment",
  "subtractionAssignment", "assignment", "or", "and", "bitOr", "xor",
  "bitAnd", "equality", "inequality", "lessthanAssignment", "lessthan",
  "greaterthanAssignment", "greaterthan", "leftshift", "rightshift", "add",
  "subtract", "multiplication", "divide", "modulo", "SIZEOF", "negation",
  "not", "increment", "decrement", "';'", "','", "'['", "']'", "'{'",
  "'}'", "'('", "')'", "'.'", "$accept", "program", "declaration_list",
  "D", "declaration", "variable_declaration", "variable_declaration_list",
  "V", "variable_declaration_identifier", "$@1", "vdi",
  "identifier_array_type", "initilization_params", "$@2", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "structure_definition", "$@3", "V1",
  "structure_declaration", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "params", "parameters_list", "$@4", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@5",
  "param_identifier_breakup", "statement", "compound_statement", "$@6",
  "statment_list", "expression_statment", "conditional_statements", "$@7",
  "$@8", "conditional_statements_breakup", "iterative_statements",
  "return_statement", "return_statement_breakup", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "expression_breakup",
  "simple_expression", "simple_expression_breakup", "and_expression",
  "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "$@9", "arguments", "arguments_list", "$@10", "$@11", "A", "$@12",
  "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-116)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-146)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     141,  -116,  -116,  -116,  -116,     5,    22,    38,    70,    -7,
    -116,    40,  -116,   141,  -116,    14,  -116,  -116,  -116,   102,
    -116,  -116,  -116,  -116,  -116,     5,    22,  -116,  -116,     5,
      22,  -116,    15,  -116,  -116,  -116,   -29,   -18,   -13,  -116,
    -116,   -23,  -116,  -116,  -116,  -116,  -116,  -116,  -116,    -6,
    -116,   -37,  -116,    15,  -116,    36,   214,   190,   -17,   -24,
    -116,  -116,  -116,  -116,  -116,     2,  -116,    48,    -4,    -5,
       6,   214,    10,     8,  -116,  -116,  -116,   -17,  -116,   -17,
    -116,    15,  -116,  -116,     7,  -116,  -116,  -116,  -116,  -116,
      24,  -116,    45,    63,  -116,   107,    -2,  -116,    54,  -116,
    -116,  -116,   190,    37,  -116,  -116,    82,    69,  -116,    44,
     102,  -116,    41,    15,  -116,  -116,    49,   -17,   -17,   106,
    -116,  -116,  -116,   -52,    47,   174,  -116,   -17,  -116,   -17,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
       0,     0,  -116,  -116,  -116,     0,   -17,   -17,   -17,   -17,
     -17,   -17,  -116,  -116,   -17,    94,  -116,  -116,  -116,    57,
      55,    56,    96,  -116,    58,  -116,  -116,   -17,  -116,    59,
      64,    61,    73,  -116,   174,    65,    45,    63,   -21,    -2,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,    60,  -116,  -116,
      92,    92,  -116,  -116,    76,   214,   -17,   -17,    77,  -116,
     -17,  -116,  -116,  -116,  -116,  -116,   -30,  -116,  -116,  -116,
    -116,   214,  -116,    85,    79,  -116,  -116,   125,  -116,   -17,
      95,    98,    99,   109,   136,   122,  -116,   -17,  -116,   125,
    -116,  -116,   214,  -116,  -116,  -116,  -116,  -116,    98,  -116
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
      15,    16,    12,    63,    59,    62,    80,     0,     0,     0,
       0,    74,     0,   135,   152,   154,   153,     0,    79,     0,
      73,     0,    55,    68,     0,    67,    69,    70,    71,    72,
       0,    98,   109,   112,   114,   117,   125,   129,   134,   133,
     140,   141,    51,     0,    17,    21,     0,     0,    18,    66,
       0,    60,     0,     0,    89,    88,     0,     0,     0,     0,
      91,   142,   113,   134,     0,    74,    78,     0,   107,     0,
     110,   122,   123,   119,   121,   118,   120,   126,   127,   115,
       0,     0,   130,   131,   132,     0,     0,     0,     0,     0,
       0,     0,   105,   106,     0,     0,    97,   136,    50,     0,
       0,     0,     0,    23,     0,    64,    61,     0,    90,     0,
       0,     0,   146,   139,    74,     0,   109,   112,   116,   124,
     128,   104,   102,   103,   100,   101,    99,     0,   138,    49,
      26,    26,    92,    65,     0,    74,     0,     0,     0,   144,
       0,    76,    75,   108,   111,   137,     0,    22,    24,    25,
      20,    74,    85,     0,     0,   143,   147,     0,    81,     0,
       0,   151,    96,     0,    84,     0,    87,     0,   148,     0,
      94,    93,    74,    82,    86,   149,    95,    83,   151,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,   191,  -116,  -116,     3,   -26,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,    16,     4,  -116,  -116,   -15,    -1,
    -116,  -116,   104,  -116,  -116,  -116,  -116,  -116,   103,  -116,
    -116,  -116,  -116,  -116,  -116,   -56,  -116,  -116,    34,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,   108,  -116,
       9,  -116,   -57,  -116,  -115,    52,    87,    39,   -70,  -116,
    -116,  -116,    97,  -116,    93,  -116,    90,   -72,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,     1,  -116,  -116
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    35,    13,    80,    37,    54,    38,    51,
      60,    61,   108,   160,   207,    81,    31,    27,    21,    23,
      16,    49,   103,    17,    18,    19,    40,    41,    42,    55,
      64,   111,    65,   109,   165,   174,    83,    84,   175,    85,
      86,   112,   224,   233,    87,    88,   115,    89,   208,   209,
     223,   230,    90,   156,    91,   128,    92,   130,    93,    94,
     139,   140,    95,   141,    96,   145,    97,    98,   157,    99,
     100,   172,   198,   199,   200,   221,   228,   238,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   104,   169,    14,    15,   123,    48,   122,   192,    20,
      43,   116,   105,    58,    45,   119,    14,    15,    73,    74,
      75,    76,   124,    39,   154,    44,    22,    62,    32,    46,
     155,    73,    74,    75,    76,    73,    74,    75,    76,    59,
      33,   106,    24,   137,   138,   123,    25,    26,   217,    36,
      47,    50,   194,   107,    77,   123,    52,   123,    56,   177,
     102,   170,    53,    79,   142,   143,   144,    77,   123,   123,
     114,    63,    57,   123,    28,   117,    79,   110,    29,    30,
      79,   213,   214,   113,   120,   125,   118,    48,   121,   181,
     182,   183,   184,   185,   186,   123,   127,   187,   126,   146,
     147,   148,   149,   150,   151,   102,     1,     2,     3,     4,
       5,     6,     7,     8,    39,   129,   159,    10,   161,   162,
     164,   167,   171,   168,   123,   123,   152,   153,   173,   188,
     154,   189,   190,   191,   192,   193,   155,   205,   196,   212,
     195,   197,   206,   216,   202,     1,     2,     3,     4,     5,
       6,     7,     8,     9,  -145,   218,    10,   211,   215,   219,
     220,   222,   225,   131,   132,   133,   134,   135,   136,   226,
     235,   137,   138,   227,   229,   232,   237,    66,     1,     2,
       3,     4,     5,     6,     7,     8,    67,    68,   231,    10,
      69,    70,    71,    72,     1,     2,     3,     4,     5,     6,
       7,     8,    67,   234,    34,    10,   158,   210,   201,    73,
      74,    75,    76,   166,   176,   163,   204,    66,     1,     2,
       3,     4,     5,     6,     7,     8,    67,    68,   203,    10,
      69,    70,    71,    72,   179,   180,     0,   178,   236,   239,
       0,     0,     0,     0,     0,    77,     0,     0,    78,    73,
      74,    75,    76,   -77,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,    78,     0,
       0,     0,     0,     0,    79
};

static const yytype_int16 yycheck[] =
{
      56,    58,   117,     0,     0,    77,    32,    77,    38,     4,
      25,    68,    36,    50,    29,    71,    13,    13,    35,    36,
      37,    38,    79,    19,    76,    26,     4,    53,    35,    30,
      82,    35,    36,    37,    38,    35,    36,    37,    38,    76,
       0,    65,     4,    64,    65,   117,     8,     9,    78,    35,
      35,    80,   167,    77,    71,   127,    74,   129,    81,   129,
      57,   118,    75,    80,    66,    67,    68,    71,   140,   141,
      74,    35,    78,   145,     4,    80,    80,    75,     8,     9,
      80,   196,   197,    35,    74,    78,    80,   113,    80,   146,
     147,   148,   149,   150,   151,   167,    51,   154,    74,    45,
      46,    47,    48,    49,    50,   102,     4,     5,     6,     7,
       8,     9,    10,    11,   110,    52,    79,    15,    36,    50,
      76,    80,    16,    74,   196,   197,    72,    73,    81,    35,
      76,    74,    77,    77,    38,    77,    82,    77,    74,   195,
      81,    80,    50,   200,    79,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    81,   211,    15,    81,    81,    74,
      81,    36,   219,    56,    57,    58,    59,    60,    61,    74,
     227,    64,    65,    75,    75,    39,   232,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    79,    15,
      16,    17,    18,    19,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    81,    13,    15,   102,   191,   174,    35,
      36,    37,    38,   110,   127,   107,   177,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   176,    15,
      16,    17,    18,    19,   141,   145,    -1,   140,   229,   238,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    35,
      36,    37,    38,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    80
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
      88,    98,   118,   119,   120,   122,   123,   127,   128,   130,
     135,   137,   139,   141,   142,   145,   147,   149,   150,   152,
     153,   161,    88,   105,   135,    36,    65,    77,    95,   116,
      75,   114,   124,    35,    74,   129,   135,    80,    80,   118,
      74,    80,   141,   150,   135,    78,    74,    51,   138,    52,
     140,    56,    57,    58,    59,    60,    61,    64,    65,   143,
     144,   146,    66,    67,    68,   148,    45,    46,    47,    48,
      49,    50,    72,    73,    76,    82,   136,   151,   105,    79,
      96,    36,    50,   131,    76,   117,   111,    80,    74,   137,
     135,    16,   154,    81,   118,   121,   139,   141,   145,   147,
     149,   135,   135,   135,   135,   135,   135,   135,    35,    74,
      77,    77,    38,    77,   137,    81,    74,    80,   155,   156,
     157,   121,    79,   138,   140,    77,    50,    97,   131,   132,
      97,    81,   118,   137,   137,    81,   135,    78,   118,    74,
      81,   158,    36,   133,   125,   135,    74,    75,   159,    75,
     134,    79,    39,   126,    81,   135,   133,   118,   160,   159
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
     124,   125,   123,   126,   126,   127,   127,   127,   128,   129,
     129,   130,   131,   132,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   137,   138,   138,
     139,   140,   140,   141,   141,   142,   143,   143,   144,   144,
     144,   144,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   154,   153,   155,   155,   157,   158,   156,   160,
     159,   159,   161,   161,   161
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
       0,     0,     8,     2,     0,     5,     8,     7,     2,     1,
       2,     2,     2,     4,     2,     2,     0,     2,     1,     2,
       2,     2,     2,     2,     2,     1,     1,     2,     3,     0,
       2,     3,     0,     2,     1,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     3,
       1,     1,     0,     5,     1,     0,     0,     0,     4,     0,
       4,     0,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 9: /* variable_declaration: type_specifier variable_declaration_list ';'  */
#line 102 "Parser.y"
                                                                       {
				
			}
#line 1668 "y.tab.c"
    break;

  case 12: /* V: ',' variable_declaration_list  */
#line 111 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1676 "y.tab.c"
    break;

  case 14: /* $@1: %empty  */
#line 117 "Parser.y"
                                     {ins(), insert_symbol_table_scope(cur_identifier, cur_scope);}
#line 1682 "y.tab.c"
    break;

  case 15: /* variable_declaration_identifier: IDENTIFIER $@1 vdi  */
#line 117 "Parser.y"
                                                                                                        {
				// identifier_TAC();
				char type = get_identifier_type(cur_identifier);
				if(type == 'i' && yyvsp[0] == 5) yyval = 5;
				else if(type == 'c' && yyvsp[0] == 6) yyval = 6;
				else if(yyvsp[0] != 127) {
					puts("ERROR:  Declaration type Mismatch.\n");
					yyerror("");
				}
			}
#line 1697 "y.tab.c"
    break;

  case 16: /* vdi: identifier_array_type  */
#line 128 "Parser.y"
                            {yyval = 127;}
#line 1703 "y.tab.c"
    break;

  case 17: /* vdi: assignment expression  */
#line 128 "Parser.y"
                                                                {
	// identifier_TAC();
	yyval = yyvsp[0];	
}
#line 1712 "y.tab.c"
    break;

  case 20: /* initilization_params: subtract NUM_CONSTANT ']' initilization  */
#line 138 "Parser.y"
                                                                  {puts("ERROR: Array size negative!!"); yyerror("");}
#line 1718 "y.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 139 "Parser.y"
                                       {if(atoi(curval) == 0) {puts("ERROR: Array Size is 0!!"); yyerror("");}}
#line 1724 "y.tab.c"
    break;

  case 27: /* type_specifier: INT  */
#line 148 "Parser.y"
                              {yyval = 5;}
#line 1730 "y.tab.c"
    break;

  case 28: /* type_specifier: CHAR  */
#line 148 "Parser.y"
                                              {yyval = 6;}
#line 1736 "y.tab.c"
    break;

  case 29: /* type_specifier: FLOAT  */
#line 148 "Parser.y"
                                                               {yyval = 5;}
#line 1742 "y.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 168 "Parser.y"
                                            { ins(); }
#line 1748 "y.tab.c"
    break;

  case 54: /* function_declaration_type: type_specifier IDENTIFIER '('  */
#line 180 "Parser.y"
                                                         { params_cnt = 0; ins(); strcpy(cur_function, cur_identifier); insert_symbol_table_scope(cur_identifier, cur_scope); insert_func_table(cur_function);}
#line 1754 "y.tab.c"
    break;

  case 58: /* $@4: %empty  */
#line 189 "Parser.y"
                                         {insert_arg_type(Match_type, cur_function, params_cnt);}
#line 1760 "y.tab.c"
    break;

  case 59: /* parameters_list: type_specifier $@4 parameters_identifier_list  */
#line 189 "Parser.y"
                                                                                                                             {insert_symbol_table_params_cnt(cur_function, params_cnt);}
#line 1766 "y.tab.c"
    break;

  case 63: /* $@5: %empty  */
#line 199 "Parser.y"
                                     { ins(); insert_symbol_table_scope(cur_identifier, cur_scope+1); params_cnt++;}
#line 1772 "y.tab.c"
    break;

  case 74: /* $@6: %empty  */
#line 212 "Parser.y"
                          {cur_scope++;}
#line 1778 "y.tab.c"
    break;

  case 75: /* compound_statement: $@6 '{' statment_list '}'  */
#line 212 "Parser.y"
                                                               {remove_scope(cur_scope); cur_scope--;}
#line 1784 "y.tab.c"
    break;

  case 80: /* $@7: %empty  */
#line 223 "Parser.y"
                             {if_not_goto();}
#line 1790 "y.tab.c"
    break;

  case 81: /* $@8: %empty  */
#line 223 "Parser.y"
                                                                                  {if_end_goto();}
#line 1796 "y.tab.c"
    break;

  case 83: /* conditional_statements_breakup: ELSE statement  */
#line 226 "Parser.y"
                                         {}
#line 1802 "y.tab.c"
    break;

  case 84: /* conditional_statements_breakup: %empty  */
#line 227 "Parser.y"
                          {}
#line 1808 "y.tab.c"
    break;

  case 88: /* return_statement: RETURN return_statement_breakup  */
#line 235 "Parser.y"
                                                          {
				// printf(get_ideni)
				if(yyvsp[0] == 5 && get_identifier_type(cur_function) == 'i') {

				} else if(yyvsp[0] == 6 && get_identifier_type(cur_function) == 'c') {

				} else if(!(yyvsp[0] == 127 && get_identifier_type(cur_function) == 'v')){
					puts("ERROR: RETURN Type mismatch!");
					yyerror(cur_function);
				}
			}
#line 1824 "y.tab.c"
    break;

  case 89: /* return_statement_breakup: ';'  */
#line 248 "Parser.y"
                              {yyval = 127;}
#line 1830 "y.tab.c"
    break;

  case 90: /* return_statement_breakup: expression ';'  */
#line 249 "Parser.y"
                                         {yyval = yyvsp[-1];}
#line 1836 "y.tab.c"
    break;

  case 92: /* string_initilization: assignment STRING_CONSTANT  */
#line 255 "Parser.y"
                                                     { insV(); }
#line 1842 "y.tab.c"
    break;

  case 97: /* expression: mutable expression_breakup  */
#line 268 "Parser.y"
                                                     {
				// reassign_TAC();
				if(yyvsp[-1] != yyvsp[0]) {
					printf("ERROR: Type Mismatch.\n");
					yyerror("");
				} else if(yyvsp[-1] == 5) {
					yyval = 5;
				} else if(yyvsp[-1] == 6) {
					yyval = 6;
				}
			}
#line 1858 "y.tab.c"
    break;

  case 98: /* expression: simple_expression  */
#line 279 "Parser.y"
                                            {
				// reassign_TAC();
				yyval = yyvsp[0];
			}
#line 1867 "y.tab.c"
    break;

  case 99: /* expression_breakup: assignment expression  */
#line 285 "Parser.y"
                                                {
				for(int i = 0; i < 8; i++) {
					printf("%s ***** \n", val_stack[i].value);
				}
				reassign_TAC();
				yyval = yyvsp[0];
			}
#line 1879 "y.tab.c"
    break;

  case 100: /* expression_breakup: additionAssignment expression  */
#line 292 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1887 "y.tab.c"
    break;

  case 101: /* expression_breakup: subtractionAssignment expression  */
#line 295 "Parser.y"
                                                           {
				yyval = yyvsp[0];
			}
#line 1895 "y.tab.c"
    break;

  case 102: /* expression_breakup: multiplicationAssignment expression  */
#line 298 "Parser.y"
                                                              {
				yyval = yyvsp[0];
			}
#line 1903 "y.tab.c"
    break;

  case 103: /* expression_breakup: divisionAssignment expression  */
#line 301 "Parser.y"
                                                        {
				yyval = yyvsp[0];
			}
#line 1911 "y.tab.c"
    break;

  case 104: /* expression_breakup: moduloAssignment expression  */
#line 304 "Parser.y"
                                                      {
				yyval = yyvsp[0];
			}
#line 1919 "y.tab.c"
    break;

  case 105: /* expression_breakup: increment  */
#line 307 "Parser.y"
                                    {
				yyval = 5;
			}
#line 1927 "y.tab.c"
    break;

  case 106: /* expression_breakup: decrement  */
#line 310 "Parser.y"
                                    {
				yyval  = 5;
			}
#line 1935 "y.tab.c"
    break;

  case 107: /* simple_expression: and_expression simple_expression_breakup  */
#line 315 "Parser.y"
                                                                   {
				yyval = yyvsp[-1];
			}
#line 1943 "y.tab.c"
    break;

  case 110: /* and_expression: unary_relation_expression and_expression_breakup  */
#line 323 "Parser.y"
                                                                           {
				yyval = yyvsp[-1];
			}
#line 1951 "y.tab.c"
    break;

  case 114: /* unary_relation_expression: regular_expression  */
#line 333 "Parser.y"
                                             {
				yyval = yyvsp[0];
			}
#line 1959 "y.tab.c"
    break;

  case 115: /* regular_expression: sum_expression regular_expression_breakup  */
#line 338 "Parser.y"
                                                                    {
				if(yyvsp[-1] == yyvsp[0]) {
					yyval = yyvsp[-1];
				}
			}
#line 1969 "y.tab.c"
    break;

  case 116: /* regular_expression_breakup: relational_operators sum_expression  */
#line 345 "Parser.y"
                                                              {
				yyval = yyvsp[0];
			}
#line 1977 "y.tab.c"
    break;

  case 124: /* sum_expression: sum_expression sum_operators term  */
#line 355 "Parser.y"
                                                            {
				TAC();
				if(yyvsp[-2] == yyvsp[0])
					yyval = yyvsp[-2];
				else {
					printf("ERROR: Type mismatch.\n");
					yyerror("");
				}
			}
#line 1991 "y.tab.c"
    break;

  case 125: /* sum_expression: term  */
#line 364 "Parser.y"
                               {yyval = yyvsp[0];}
#line 1997 "y.tab.c"
    break;

  case 126: /* sum_operators: add  */
#line 367 "Parser.y"
                              {val_push("+");}
#line 2003 "y.tab.c"
    break;

  case 127: /* sum_operators: subtract  */
#line 368 "Parser.y"
                                   {val_push("-");}
#line 2009 "y.tab.c"
    break;

  case 128: /* term: term MULOP factor  */
#line 371 "Parser.y"
                                            {
				TAC();
				if(yyvsp[-2] == yyvsp[0])
					yyval = yyvsp[-2];
				else {
					printf("ERROR: Type mismatch");
					yyerror("");
				};
			}
#line 2023 "y.tab.c"
    break;

  case 129: /* term: factor  */
#line 380 "Parser.y"
                                 {yyval = yyvsp[0];}
#line 2029 "y.tab.c"
    break;

  case 130: /* MULOP: multiplication  */
#line 383 "Parser.y"
                                         {val_push("*");}
#line 2035 "y.tab.c"
    break;

  case 131: /* MULOP: divide  */
#line 383 "Parser.y"
                                                                  {val_push("/");}
#line 2041 "y.tab.c"
    break;

  case 132: /* MULOP: modulo  */
#line 383 "Parser.y"
                                                                                            {val_push("%");}
#line 2047 "y.tab.c"
    break;

  case 133: /* factor: immutable  */
#line 386 "Parser.y"
                                    {yyval = yyvsp[0];}
#line 2053 "y.tab.c"
    break;

  case 135: /* mutable: IDENTIFIER  */
#line 389 "Parser.y"
                                     {
				// check identifire type and return;
				// identifier_TAC();
				val_push(cur_identifier);
				puts(cur_identifier);
				
				char type = get_identifier_type(cur_identifier);
				if(type == 'i') yyval = 5;
				if(type == 'c') yyval = 6;
			}
#line 2068 "y.tab.c"
    break;

  case 136: /* mutable: mutable mutable_breakup  */
#line 399 "Parser.y"
                                                  {
				if(yyvsp[0] == 5 || yyvsp[-1] == 5) 
					yyval = 5;
				else 
					printf("ERROR: Type Mismatch");
					yyerror("");
			}
#line 2080 "y.tab.c"
    break;

  case 138: /* mutable_breakup: '.' IDENTIFIER  */
#line 409 "Parser.y"
                                         {if( yyvsp[0] == 5) yyval = 5;}
#line 2086 "y.tab.c"
    break;

  case 139: /* immutable: '(' expression ')'  */
#line 412 "Parser.y"
                                             {
				if(yyvsp[-1] == 5) yyval = 5;
			}
#line 2094 "y.tab.c"
    break;

  case 140: /* immutable: call  */
#line 415 "Parser.y"
                               {
				if(yyvsp[0] == 5) yyval = 5;
			}
#line 2102 "y.tab.c"
    break;

  case 141: /* immutable: constant  */
#line 418 "Parser.y"
                                   {
				if(yyvsp[0] == 5) yyval = 5;
			}
#line 2110 "y.tab.c"
    break;

  case 142: /* $@9: %empty  */
#line 423 "Parser.y"
                                         {strcpy(cur_function, cur_identifier);}
#line 2116 "y.tab.c"
    break;

  case 143: /* call: IDENTIFIER '(' $@9 arguments ')'  */
#line 423 "Parser.y"
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
#line 2132 "y.tab.c"
    break;

  case 146: /* $@10: %empty  */
#line 439 "Parser.y"
                          {funccall_params_cnt = 0;}
#line 2138 "y.tab.c"
    break;

  case 147: /* $@11: %empty  */
#line 439 "Parser.y"
                                                                {fprintf(fp, "arg %s\n", val_stack[valtop].value); check_arg_type(yyvsp[0], cur_function, funccall_params_cnt);funccall_params_cnt++;}
#line 2144 "y.tab.c"
    break;

  case 149: /* $@12: %empty  */
#line 442 "Parser.y"
                                         {fprintf(fp, "param %s\n", val_stack[valtop].value); check_arg_type(yyvsp[0], cur_function, funccall_params_cnt);;funccall_params_cnt++;}
#line 2150 "y.tab.c"
    break;

  case 152: /* constant: NUM_CONSTANT  */
#line 446 "Parser.y"
                                        { insV(); constant_TAC(); yyval=5;}
#line 2156 "y.tab.c"
    break;

  case 153: /* constant: STRING_CONSTANT  */
#line 447 "Parser.y"
                                                { insV(); constant_TAC();}
#line 2162 "y.tab.c"
    break;

  case 154: /* constant: CHAR_CONSTANT  */
#line 448 "Parser.y"
                                       { insV(); constant_TAC(); yyval=6;}
#line 2168 "y.tab.c"
    break;


#line 2172 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 450 "Parser.y"


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
void print_func_table();
void val_push(char* str) {
	strcpy(val_stack[++valtop].value, str);
}

void if_end_label() {
	char code[100] = {0};
	strcpy(code, "L");
	sprintf(code + 1, "%d", labl_stack[lbltop].id);
	printf(_RED "%s: \n" _RESET, code);
	fprintf(fp, "%s: \n", code);
	lbltop--;
}

void if_not_goto() {
	char code[100] = {0};
	strcpy(code, "L");
	sprintf(code + 1, "%d", L_cnt);
	printf(_RED "if not %s goto %s\n" _RESET, val_stack[valtop].value, code);
	fprintf(fp, "if not %s goto %s\n", val_stack[valtop].value, code);
	labl_stack[++lbltop].id = L_cnt++;
}

void if_end_goto() {
	char code[100] = {0};
	strcpy(code, "L");
	sprintf(code + 1, "%d", L_cnt);
	printf(_RED "goto %s\n" _RESET, code);
	fprintf(fp,  "goto %s\n" , code);
	code[0] = 'L';
	sprintf(code + 1, "%d", labl_stack[lbltop].id);
	printf(_RED "%s: \n" _RESET, code);
	fprintf(fp, "%s: \n", code);
	labl_stack[lbltop].id = L_cnt++;
}

void identifier_TAC()  {
	char code[100] = {0};
	strcpy(code, "T");
	sprintf(code + 1, "%d", T_cnt);
	printf(_RED "%s = %s\n" _RESET , code, cur_identifier);	
	fprintf(fp, "%s = %s\n" , code, cur_identifier);
	T_cnt++;
	val_push(code);	
}
void constant_TAC() {
	char code[100] = {0};
	strcpy(code, "T");
	sprintf(code + 1, "%d", T_cnt);
	printf(_RED "%s = %s\n" _RESET , code, curval);	
	fprintf(fp,  "%s = %s\n"  , code, curval);
	T_cnt++;
	val_push(curval);	
}

void reassign_TAC() {
	puts("HI");
	printf(_RED "%s = %s\n" _RESET, val_stack[valtop-1].value, val_stack[valtop].value);
	fprintf(fp, "%s = %s\n", val_stack[valtop-1].value, val_stack[valtop].value);
	valtop -= 2;
}

void TAC() {
	char code[100] = {0};
	strcpy(code, "T");

	sprintf(code + 1, "%d", T_cnt);
	printf(_RED "%s = %s %s %s\n" _RESET, code, val_stack[valtop-2].value, val_stack[valtop-1].value, val_stack[valtop].value);
	fprintf(fp, "%s = %s %s %s\n", code, val_stack[valtop-2].value, val_stack[valtop-1].value, val_stack[valtop].value);
	valtop -= 2;
	strcpy(val_stack[valtop].value, code);
	T_cnt++;
}

int main(int argc , char **argv)
{
	fp = fopen("TAC.txt", "w");
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
		printf("%30s %s\n", " ", "--------------");
		print_func_table();
	}
	fclose(fp);
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
