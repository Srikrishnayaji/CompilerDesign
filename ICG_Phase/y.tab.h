/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
