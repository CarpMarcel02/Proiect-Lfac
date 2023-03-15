/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 132 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
