
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     FLOAT = 259,
     STRING = 260,
     CHAR = 261,
     BOOL = 262,
     CONSTANT = 263,
     IF = 264,
     ELSE = 265,
     FOR = 266,
     WHILE = 267,
     DO = 268,
     SWITCH = 269,
     CASE = 270,
     DEFAULT = 271,
     BREAK = 272,
     RETURN = 273,
     VOID = 274,
     PRINT = 275,
     IDENTIFIER = 276,
     FUNCTION_KEY = 277,
     INT_VALUE = 278,
     FLOAT_VALUE = 279,
     STRING_VALUE = 280,
     BOOL_VALUE = 281,
     CHAR_VALUE = 282,
     LOGICAL_AND = 283,
     LOGICAL_OR = 284,
     LOGICAL_NOT = 285,
     EQUAL = 286,
     NOT_EQUAL = 287,
     GT = 288,
     LT = 289,
     GTE = 290,
     LTE = 291,
     EQ = 292,
     LPAREN = 293,
     RPAREN = 294,
     LBRACE = 295,
     RBRACE = 296,
     SEMICOLON = 297,
     ADD = 298,
     SUB = 299,
     MUL = 300,
     DIV = 301,
     MOD = 302,
     POW = 303,
     INC = 304,
     DEC = 305,
     BITWISE_OR = 306,
     BITWISE_AND = 307,
     SHL = 308,
     SHR = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 19 ".\\parser.y"

    int int_value;
    float float_value;
    char* string_value;
    int bool_value;
    struct nodeType *nodeptr;



/* Line 1676 of yacc.c  */
#line 116 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


