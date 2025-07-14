
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "symbol_table.cpp"
#include "quad.cpp"

void yyerror(const char *s);
int yylex(void);
extern int yylineno;

char* strdup(const char* s) {
    char* d = malloc(strlen(s) + 1);
    if (d) strcpy(d, s);
    return d;
}


/* Line 189 of yacc.c  */
#line 93 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     CONTINUE = 275,
     PRINT = 276,
     IDENTIFIER = 277,
     FUNCTION_KEY = 278,
     INT_VALUE = 279,
     FLOAT_VALUE = 280,
     STRING_VALUE = 281,
     BOOL_VALUE = 282,
     CHAR_VALUE = 283,
     LOGICAL_AND = 284,
     LOGICAL_OR = 285,
     LOGICAL_NOT = 286,
     EQUAL = 287,
     NOT_EQUAL = 288,
     GT = 289,
     LT = 290,
     GTE = 291,
     LTE = 292,
     EQ = 293,
     LPAREN = 294,
     RPAREN = 295,
     LBRACE = 296,
     RBRACE = 297,
     SEMICOLON = 298,
     ADD = 299,
     SUB = 300,
     MUL = 301,
     DIV = 302,
     MOD = 303,
     POW = 304,
     INC = 305,
     DEC = 306,
     BITWISE_OR = 307,
     BITWISE_AND = 308,
     SHL = 309,
     SHR = 310,
     ASSIGN_ADD = 311,
     ASSIGN_SUB = 312,
     ASSIGN_MUL = 313,
     ASSIGN_DIV = 314,
     ASSIGN_MOD = 315,
     ASSIGN_POW = 316,
     ASSIGN_AND = 317,
     ASSIGN_OR = 318,
     ASSIGN_NOT = 319,
     ASSIGN_SHR = 320,
     ASSIGN_SHL = 321,
     LOWER_THAN_IF = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 20 ".\\parser.y"

    int int_value;
    float float_value;
    char* string_value;
    int bool_value;

    struct nodeType *nodeptr;



/* Line 214 of yacc.c  */
#line 207 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   666

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    28,    31,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    53,    60,    61,    66,
      67,    74,    75,    81,    86,    87,    88,    98,    99,   100,
     108,   110,   111,   115,   121,   126,   129,   132,   133,   134,
     135,   144,   145,   146,   147,   148,   160,   161,   170,   171,
     179,   183,   185,   188,   193,   198,   202,   204,   206,   207,
     212,   214,   217,   218,   223,   224,   225,   233,   234,   235,
     245,   249,   253,   257,   261,   264,   267,   268,   273,   277,
     281,   285,   289,   293,   297,   301,   305,   309,   313,   317,
     321,   325,   329,   333,   337,   341,   345,   348,   350,   352,
     354,   356,   358,   360,   362,   366
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    71,    73,    -1,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    19,    -1,    74,
      -1,    78,    -1,    87,    -1,   118,    43,    -1,    17,    43,
      -1,    20,    43,    -1,    89,    -1,    92,    -1,   109,    -1,
     112,    -1,   115,    -1,   116,    -1,    80,    -1,   107,    -1,
      97,    -1,    -1,    72,    22,    75,    38,   118,    43,    -1,
      -1,    72,    22,    76,    43,    -1,    -1,    72,     8,    77,
      38,   118,    43,    -1,    -1,    22,    38,    79,   118,    43,
      -1,     8,    38,   118,    43,    -1,    -1,    -1,    14,    81,
      39,    22,    82,    40,    41,    83,    42,    -1,    -1,    -1,
      15,   118,    84,    68,   116,    85,    83,    -1,    86,    -1,
      -1,    16,    68,   116,    -1,    21,    39,   118,    40,    43,
      -1,    21,    39,    40,    43,    -1,    10,   116,    -1,    10,
      89,    -1,    -1,    -1,    -1,     9,    39,   118,    40,    90,
     116,    91,    88,    -1,    -1,    -1,    -1,    -1,    11,    39,
      93,    73,    94,    73,    73,    40,    95,   116,    96,    -1,
      -1,    72,    23,    22,    39,   100,    40,    98,   116,    -1,
      -1,    72,    23,    22,    39,    40,    99,   116,    -1,   101,
      69,   100,    -1,   101,    -1,    72,    22,    -1,    72,    22,
      38,   118,    -1,    22,    39,   105,    40,    -1,    22,    39,
      40,    -1,   102,    -1,   103,    -1,    -1,   118,   106,    69,
     105,    -1,   118,    -1,    18,    43,    -1,    -1,    18,   108,
     118,    43,    -1,    -1,    -1,    12,   110,    39,   118,   111,
      40,   116,    -1,    -1,    -1,    13,   113,   116,    12,    39,
     118,   114,    40,    43,    -1,    22,    50,    43,    -1,    51,
      22,    43,    -1,    50,    22,    43,    -1,    22,    51,    43,
      -1,    22,    50,    -1,    22,    51,    -1,    -1,    41,   117,
      71,    42,    -1,   118,    30,   118,    -1,   118,    29,   118,
      -1,   118,    32,   118,    -1,   118,    33,   118,    -1,   118,
      34,   118,    -1,   118,    36,   118,    -1,   118,    37,   118,
      -1,   118,    35,   118,    -1,   118,    44,   118,    -1,   118,
      45,   118,    -1,   118,    46,   118,    -1,   118,    47,   118,
      -1,   118,    48,   118,    -1,   118,    49,   118,    -1,   118,
      54,   118,    -1,   118,    55,   118,    -1,   118,    52,   118,
      -1,   118,    53,   118,    -1,    31,   118,    -1,    22,    -1,
       8,    -1,    24,    -1,    25,    -1,    26,    -1,    28,    -1,
      27,    -1,    39,   118,    40,    -1,   104,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    80,    81,    82,    83,    84,    85,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   107,   107,   115,   115,   117,
     117,   131,   131,   141,   147,   147,   147,   151,   151,   151,
     152,   153,   157,   163,   164,   168,   169,   170,   174,   174,
     174,   177,   179,   181,   183,   177,   191,   191,   193,   193,
     197,   198,   201,   202,   207,   215,   223,   224,   229,   229,
     230,   234,   235,   235,   241,   243,   241,   247,   247,   247,
     252,   269,   286,   303,   320,   337,   356,   356,   362,   371,
     380,   389,   398,   409,   418,   427,   436,   446,   455,   463,
     472,   480,   488,   496,   504,   509,   515,   523,   524,   525,
     532,   533,   534,   535,   536,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "STRING", "CHAR", "BOOL",
  "CONSTANT", "IF", "ELSE", "FOR", "WHILE", "DO", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "RETURN", "VOID", "CONTINUE", "PRINT", "IDENTIFIER",
  "FUNCTION_KEY", "INT_VALUE", "FLOAT_VALUE", "STRING_VALUE", "BOOL_VALUE",
  "CHAR_VALUE", "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "EQUAL",
  "NOT_EQUAL", "GT", "LT", "GTE", "LTE", "EQ", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "ADD", "SUB", "MUL", "DIV", "MOD",
  "POW", "INC", "DEC", "BITWISE_OR", "BITWISE_AND", "SHL", "SHR",
  "ASSIGN_ADD", "ASSIGN_SUB", "ASSIGN_MUL", "ASSIGN_DIV", "ASSIGN_MOD",
  "ASSIGN_POW", "ASSIGN_AND", "ASSIGN_OR", "ASSIGN_NOT", "ASSIGN_SHR",
  "ASSIGN_SHL", "LOWER_THAN_IF", "':'", "','", "$accept", "program",
  "type", "statement", "declaration_statement", "$@1", "$@2", "$@3",
  "assignment_statement", "$@4", "switch_statement", "$@5", "$@6", "cases",
  "$@7", "$@8", "default_case", "print_statement", "if_tail",
  "if_statement", "$@9", "$@10", "for_statement", "$@11", "$@12", "$@13",
  "$@14", "function_statment", "$@15", "$@16", "args_statment", "args_dec",
  "fun_call_with_args", "fun_call_no_args", "fun_call", "fun_arg_call",
  "$@17", "return_statment", "$@18", "while_statement", "$@19", "$@20",
  "do_while_statement", "$@21", "$@22", "inc_dec_statement", "block",
  "$@23", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    75,    74,    76,    74,    77,
      74,    79,    78,    78,    81,    82,    80,    84,    85,    83,
      83,    83,    86,    87,    87,    88,    88,    88,    90,    91,
      89,    93,    94,    95,    96,    92,    98,    97,    99,    97,
     100,   100,   101,   101,   102,   103,   104,   104,   106,   105,
     105,   107,   108,   107,   110,   111,   109,   113,   114,   112,
     115,   115,   115,   115,   115,   115,   117,   116,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     0,     4,     0,
       6,     0,     5,     4,     0,     0,     9,     0,     0,     7,
       1,     0,     3,     5,     4,     2,     2,     0,     0,     0,
       8,     0,     0,     0,     0,    11,     0,     8,     0,     7,
       3,     1,     2,     4,     4,     3,     1,     1,     0,     4,
       1,     2,     0,     4,     0,     0,     7,     0,     0,     9,
       3,     3,     3,     3,     2,     2,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     4,     5,     6,     8,     7,   108,     0,
       0,    74,    77,    34,     0,    72,     9,     0,     0,   107,
     109,   110,   111,   113,   112,     0,     0,    86,     0,     0,
       0,     2,    10,    11,    22,    12,    16,    17,    24,    66,
      67,   115,    23,    18,    19,    20,    21,     0,     0,     0,
      51,     0,     0,     0,    14,    71,     0,    15,     0,    31,
       0,    84,    85,   108,   107,   106,     0,     3,     0,     0,
      29,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    68,    80,    83,   114,     0,    82,
      81,     0,     0,     0,     0,    89,    88,    90,    91,    92,
      95,    93,    94,    96,    97,    98,    99,   100,   101,   104,
     105,   102,   103,    33,    48,    52,    75,     0,    35,    73,
      44,     0,     0,    64,     0,    87,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    43,    32,     0,     0,     0,
      58,     0,     0,    61,    49,     0,     0,    78,     0,    69,
      30,    26,     0,    62,    56,     0,    47,     0,    76,     0,
      41,    59,     0,     0,    60,     0,    50,    53,     0,     0,
       0,     0,    40,    63,    57,    46,    45,     0,    79,    37,
       0,    36,    54,     0,    42,    55,     0,    38,    41,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    30,    31,    32,   112,   113,   111,    33,   101,
      34,    53,   154,   191,   203,   208,   192,    35,   186,    36,
     150,   176,    37,    94,   151,   197,   205,    38,   183,   172,
     162,   163,    39,    40,    41,   103,   144,    42,    56,    43,
      51,   152,    44,    52,   179,    45,    46,    67,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
    -147,   162,  -147,  -147,  -147,  -147,  -147,  -147,   -20,   -19,
     -14,  -147,  -147,  -147,   -24,   -17,  -147,   -15,    -9,    65,
    -147,  -147,  -147,  -147,  -147,   117,   117,  -147,    10,    21,
      14,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,   283,   117,   117,
    -147,    17,    30,    38,  -147,  -147,   117,  -147,    60,  -147,
      70,    36,    37,  -147,    44,    20,   310,  -147,    46,    47,
    -147,    50,    83,   117,   117,   117,   117,   117,   117,   117,
     117,  -147,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   337,   364,   260,   117,    94,    85,   391,    68,
     418,   117,  -147,    72,   445,  -147,  -147,  -147,   211,  -147,
    -147,    75,    76,    74,    69,   577,   577,   599,   599,   611,
     611,   611,   611,    -8,    -8,    20,    20,    20,    20,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   553,    80,  -147,  -147,
    -147,    77,   472,  -147,    54,  -147,   117,   117,  -147,     2,
      30,   260,    86,   117,    87,  -147,  -147,   117,   499,   526,
    -147,   107,    90,    62,  -147,   260,    30,   553,    92,  -147,
    -147,  -147,    30,    96,  -147,     8,   126,    98,  -147,   100,
       1,  -147,   117,    30,  -147,    -7,  -147,  -147,   103,   117,
      79,   108,  -147,   553,  -147,  -147,  -147,    30,  -147,   553,
      30,  -147,  -147,    91,  -147,  -147,    30,  -147,     1,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,    84,  -146,   -84,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   -55,  -147,  -147,  -147,  -147,  -147,   -31,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
     -12,  -147,  -147,  -147,  -147,    -2,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,   -48,  -147,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -71
static const yytype_int16 yytable[] =
{
      65,    66,     9,   161,    96,     3,     4,     5,     6,     7,
     135,     3,     4,     5,     6,     7,   189,   190,    48,    54,
      49,    16,    70,    92,    93,    50,    55,    16,    57,   161,
      58,    98,    68,   100,    27,   104,    71,    72,    84,    85,
      86,    87,   160,    69,    88,    89,    90,    91,   115,   116,
     117,   118,   119,   120,   121,   122,    95,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   165,    63,    87,
     136,    27,    88,    89,    90,    91,   142,    97,    63,   105,
     106,   177,    64,    60,    20,    21,    22,    23,    24,   109,
     110,    25,    64,   -27,    20,    21,    22,    23,    24,    26,
      99,    25,   164,    59,    60,   114,   137,   138,   149,    26,
     102,   140,   143,   146,   147,    61,    62,   148,   178,   153,
     155,   158,   159,   157,   181,    63,   166,   168,   167,   173,
     174,   175,   104,   180,   182,   194,   185,   196,   187,    64,
     188,    20,    21,    22,    23,    24,   198,   200,    25,   202,
     201,   108,   204,   209,   195,   169,    26,   193,   207,   206,
       0,     0,     2,   184,   199,     3,     4,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,     0,     0,    14,
      15,    16,    17,    18,    19,     0,    20,    21,    22,    23,
      24,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    29,     3,     4,     5,     6,     7,     8,
       9,     0,    10,    11,    12,    13,     0,     0,    14,    15,
      16,    17,    18,    19,     0,    20,    21,    22,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,   145,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     3,     4,     5,     6,     7,     8,     9,
       0,    10,    11,    12,    13,     0,     0,    14,    15,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    73,    74,     0,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    87,     0,     0,    88,    89,    90,    91,    73,
      74,     0,    75,    76,    77,    78,    79,    80,     0,     0,
     107,     0,     0,     0,    82,    83,    84,    85,    86,    87,
       0,     0,    88,    89,    90,    91,    73,    74,     0,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
     133,    82,    83,    84,    85,    86,    87,     0,     0,    88,
      89,    90,    91,    73,    74,     0,    75,    76,    77,    78,
      79,    80,     0,     0,   134,     0,     0,     0,    82,    83,
      84,    85,    86,    87,     0,     0,    88,    89,    90,    91,
      73,    74,     0,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,   139,    82,    83,    84,    85,    86,
      87,     0,     0,    88,    89,    90,    91,    73,    74,     0,
      75,    76,    77,    78,    79,    80,     0,     0,   141,     0,
       0,     0,    82,    83,    84,    85,    86,    87,     0,     0,
      88,    89,    90,    91,    73,    74,     0,    75,    76,    77,
      78,    79,    80,     0,     0,   -70,     0,     0,     0,    82,
      83,    84,    85,    86,    87,     0,     0,    88,    89,    90,
      91,    73,    74,     0,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,   156,    82,    83,    84,    85,
      86,    87,     0,     0,    88,    89,    90,    91,    73,    74,
       0,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,   170,    82,    83,    84,    85,    86,    87,     0,
       0,    88,    89,    90,    91,    73,    74,     0,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,   171,
      82,    83,    84,    85,    86,    87,     0,     0,    88,    89,
      90,    91,    73,    74,     0,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,     0,     0,    88,    89,    90,    91,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
       0,    82,    83,    84,    85,    86,    87,     0,     0,    88,
      89,    90,    91,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,     0,
       0,    88,    89,    90,    91,    82,    83,    84,    85,    86,
      87,     0,     0,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      25,    26,     9,   149,    52,     3,     4,     5,     6,     7,
      94,     3,     4,     5,     6,     7,    15,    16,    38,    43,
      39,    19,     8,    48,    49,    39,    43,    19,    43,   175,
      39,    56,    22,    58,    41,    60,    22,    23,    46,    47,
      48,    49,    40,    22,    52,    53,    54,    55,    73,    74,
      75,    76,    77,    78,    79,    80,    39,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,   151,     8,    49,
      95,    41,    52,    53,    54,    55,   101,    39,     8,    43,
      43,   165,    22,    39,    24,    25,    26,    27,    28,    43,
      43,    31,    22,    43,    24,    25,    26,    27,    28,    39,
      40,    31,   150,    38,    39,    22,    12,    22,    39,    39,
      40,    43,    40,    38,    38,    50,    51,    43,   166,    39,
      43,   146,   147,    69,   172,     8,    40,    40,   153,    22,
      40,    69,   157,    41,    38,   183,    10,   185,    40,    22,
      40,    24,    25,    26,    27,    28,    43,    68,    31,   197,
      42,    67,   200,   208,   185,   157,    39,   182,   206,    68,
      -1,    -1,     0,   175,   189,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    52,    53,    54,    55,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      53,    54,    55,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    53,    54,    55,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    53,    54,    55,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    54,
      55,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    55,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    54,    55,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    52,    53,
      54,    55,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      53,    54,    55,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    54,    55,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,     0,     3,     4,     5,     6,     7,     8,     9,
      11,    12,    13,    14,    17,    18,    19,    20,    21,    22,
      24,    25,    26,    27,    28,    31,    39,    41,    50,    51,
      72,    73,    74,    78,    80,    87,    89,    92,    97,   102,
     103,   104,   107,   109,   112,   115,   116,   118,    38,    39,
      39,   110,   113,    81,    43,    43,   108,    43,    39,    38,
      39,    50,    51,     8,    22,   118,   118,   117,    22,    22,
       8,    22,    23,    29,    30,    32,    33,    34,    35,    36,
      37,    43,    44,    45,    46,    47,    48,    49,    52,    53,
      54,    55,   118,   118,    93,    39,   116,    39,   118,    40,
     118,    79,    40,   105,   118,    43,    43,    40,    71,    43,
      43,    77,    75,    76,    22,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,    43,    40,    73,   118,    12,    22,    43,
      43,    40,   118,    40,   106,    42,    38,    38,    43,    39,
      90,    94,   111,    39,    82,    43,    43,    69,   118,   118,
      40,    72,   100,   101,   116,    73,    40,   118,    40,   105,
      43,    43,    99,    22,    40,    69,    91,    73,   116,   114,
      41,   116,    38,    98,   100,    10,    88,    40,    40,    15,
      16,    83,    86,   118,   116,    89,   116,    95,    43,   118,
      68,    42,   116,    84,   116,    96,    68,   116,    85,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 80 ".\\parser.y"
    { (yyval.string_value) = strdup("int"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 81 ".\\parser.y"
    { (yyval.string_value) = strdup("float"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 82 ".\\parser.y"
    { (yyval.string_value) = strdup("string"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 83 ".\\parser.y"
    { (yyval.string_value) = strdup("bool"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 84 ".\\parser.y"
    { (yyval.string_value) = strdup("char"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 85 ".\\parser.y"
    { (yyval.string_value) = strdup("void"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 ".\\parser.y"
    {checkBreak(yylineno); writeQuadruple(quad_file, "JUMP","--","--", exit_loop_label);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 94 ".\\parser.y"
    {checkContinue(yylineno);writeQuadruple(quad_file, "JUMP","--","--", loop_label);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"variable",(yyvsp[(1) - (2)].string_value),yylineno,0 ); markInitialized(workingSymbolID);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 107 ".\\parser.y"
    {workingSymbolID = -1;
        printf("\nstart declaration_statement in parser\n");
        char* temp1 = strdup((yyvsp[(2) - (6)].string_value));
        char* temp2 = (yyvsp[(5) - (6)].nodeptr)->name ? strdup((yyvsp[(5) - (6)].nodeptr)->name) : NULL;
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        printf("\nfinish declaration_statement in parser\n");
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 115 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"variable",(yyvsp[(1) - (2)].string_value),yylineno,0 );;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 115 ".\\parser.y"
    {workingSymbolID = -1; (yyval.nodeptr) = NULL;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 117 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"constant",(yyvsp[(1) - (2)].string_value),yylineno,0 );;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 117 ".\\parser.y"
    {workingSymbolID = -1;
        char* temp1 = strdup((yyvsp[(2) - (6)].string_value));
        char* temp2 = strdup((yyvsp[(4) - (6)].nodeptr)->name);
        printf("$2->name: %s\n", temp1);
        printf("$4->name: %s\n", temp2);
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 131 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 133 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 141 ".\\parser.y"
    {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);workingSymbolID = -1;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 147 ".\\parser.y"
    {inSwitch = true;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 147 ".\\parser.y"
    {lookupSymbol((yyvsp[(4) - (4)].string_value), 0, yylineno);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 147 ".\\parser.y"
    {inSwitch = false;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 151 ".\\parser.y"
    {writeIfConditionQuadruples(quad_file, (yyvsp[(2) - (2)].nodeptr)->type, first_operand, second_operand, "JUMPIF"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 ".\\parser.y"
    {writeIfEndLabel(quad_file, "JUMPIF");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 163 ".\\parser.y"
    {processExpression(quad_file,(yyvsp[(3) - (5)].nodeptr)->name ,"--","--","PRINT");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 164 ".\\parser.y"
    {processExpression(quad_file,"--" ,"--","--","PRINT");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 174 ".\\parser.y"
    {writeIfConditionQuadruples(quad_file, (yyvsp[(3) - (4)].nodeptr)->type, first_operand, second_operand, "JUMPIF"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 174 ".\\parser.y"
    {writeIfEndLabel(quad_file, "JUMPIF");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 177 ".\\parser.y"
    {enterScope();
     ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 179 ".\\parser.y"
    { sprintf(loop_label, "L%d", loop_counter++);
     writeQuadruple(quad_file, "LABEL","--","--", loop_label);
     ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 181 ".\\parser.y"
    {inLoop = true;  sprintf(exit_loop_label, "EXITLOOP%d", exit_loop_counter++); 
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 183 ".\\parser.y"
    {inLoop = false; exitScope(yylineno); 
    writeQuadruple(quad_file, "JUMP FALSE CONDITION","--","--", exit_loop_label);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 184 ".\\parser.y"
    {inLoop = false;  
    writeQuadruple(quad_file, "JUMP","--","--", loop_label);
    writeQuadruple(quad_file, "LABEL","--","--", exit_loop_label);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 191 ".\\parser.y"
    {funIndex = insertSymbol((yyvsp[(3) - (6)].string_value),"function", (yyvsp[(1) - (6)].string_value), yylineno, 0); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 193 ".\\parser.y"
    {funIndex = insertSymbol((yyvsp[(3) - (5)].string_value),"function", (yyvsp[(1) - (5)].string_value), yylineno, 0);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 201 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value), "variable", (yyvsp[(1) - (2)].string_value), yylineno, 1);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 202 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (4)].string_value), "variable", (yyvsp[(1) - (4)].string_value), yylineno, 1);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 207 ".\\parser.y"
    {
        calledFuncIndex = lookupSymbol((yyvsp[(1) - (4)].string_value), 0, yylineno);
        (yyval.nodeptr) = set_type(getSymbolById(calledFuncIndex)->dType);
        isParameter = 0;
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 215 ".\\parser.y"
    {
        calledFuncIndex = lookupSymbol((yyvsp[(1) - (3)].string_value), 0, yylineno);
        (yyval.nodeptr) = set_type(getSymbolById(calledFuncIndex)->dType);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 229 ".\\parser.y"
    {funcArgCount++; isParameter = 1; ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 229 ".\\parser.y"
    {printf("parsing fun arg call  \n");}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 230 ".\\parser.y"
    {funcArgCount++; printf("\ncalledFuncIdex: %d\n", calledFuncIndex);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 235 ".\\parser.y"
    {workingSymbolID = funIndex;;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 235 ".\\parser.y"
    {returnInFunction = true;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 241 ".\\parser.y"
    {inLoop = true; sprintf(loop_label, "L%d", loop_counter++); sprintf(exit_loop_label, "EXITLOOP%d", exit_loop_counter++); 
    writeQuadruple(quad_file, "LABEL","--","--", loop_label);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 243 ".\\parser.y"
    { writeQuadruple(quad_file, "JUMP FALSE CONDITION",(yyvsp[(4) - (4)].nodeptr)->name,"--", exit_loop_label);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 243 ".\\parser.y"
    {inLoop = false; writeQuadruple(quad_file, "JUMP","--","--", loop_label); writeQuadruple(quad_file, "LABEL","--","--", exit_loop_label);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 247 ".\\parser.y"
    {inLoop = true; sprintf(loop_label, "L%d", loop_counter++);sprintf(exit_loop_label, "EXITLOOP%d", exit_loop_counter++);writeQuadruple(quad_file, "LABEL","--","--", loop_label) ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 247 ".\\parser.y"
    { writeQuadruple(quad_file, "JUMP FALSE CONDITION",(yyvsp[(6) - (6)].nodeptr)->name,"--", exit_loop_label);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 247 ".\\parser.y"
    {inLoop = false;  writeQuadruple(quad_file, "JUMP","--","--", loop_label);writeQuadruple(quad_file, "LABEL","--","--", exit_loop_label);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 253 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(1) - (3)].string_value), false, yylineno);
        nodeType * temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for increment operation
        char* temp1 = strdup(getSymbolById(id)->name);
        char* temp2 = strdup("1");
        char* temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "ADD");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 270 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(2) - (3)].string_value), false, yylineno);
        nodeType *temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for decrement operation
        char *temp1 = strdup(getSymbolById(id)->name);
        char *temp2 = strdup("1");
        char *temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "SUB");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 287 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(2) - (3)].string_value), false, yylineno);
        nodeType *temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for increment operation
        char* temp1 = strdup(getSymbolById(id)->name);
        char* temp2 = strdup("1");
        char* temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "ADD");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 304 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(1) - (3)].string_value), false, yylineno);
        nodeType *temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for decrement operation
        char* temp1 = strdup(getSymbolById(id)->name);
        char* temp2 = strdup("1");
        char* temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "SUB");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 321 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(1) - (2)].string_value), false, yylineno);
        nodeType *temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for increment operation
        char* temp1 = strdup(getSymbolById(id)->name);
        char* temp2 = strdup("1");
        char* temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "ADD");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 338 ".\\parser.y"
    {
        int id = lookupSymbol((yyvsp[(1) - (2)].string_value), false, yylineno);
        nodeType *temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name);
        (yyval.nodeptr) = inc_dec_checker(temp, yylineno);

        // Generate quadruples for decrement operation
        char* temp1 = strdup(getSymbolById(id)->name);
        char* temp2 = strdup("1");
        char* temp_result = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp_result, "SUB");
        processExpression(quad_file, temp_result, "--", temp1, "ASSIGN");

        free(temp1);
        free(temp2);
        free(temp_result);
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 356 ".\\parser.y"
    {enterScope();;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 356 ".\\parser.y"
    { exitScope(yylineno); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 362 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "LOGICAL_OR");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "LOGICAL_OR";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 371 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "LOGICAL_AND");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "LOGICAL_AND";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 380 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "EQUAL");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "EQUAL";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 389 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "NOT_EQUAL");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "NOT_EQUAL";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 398 ".\\parser.y"
    {
        (yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "GT");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "GT";
        first_operand = temp1;
        second_operand = temp2;
    ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 409 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "GTE");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "GTE";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 418 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "LTE");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "LTE";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 427 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "LT");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = "LT";
        first_operand = temp1;
        second_operand = temp2;;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 436 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file,temp1, temp2, temp, "ADD");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 446 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SUB");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 455 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MUL");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 463 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "DIV");
        (yyval.nodeptr)->name = temp;
        (yyval.nodeptr)->type = (yyvsp[(1) - (3)].nodeptr)->type;
    ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 472 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MOD");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 480 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "POW");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 488 ".\\parser.y"
    {
        (yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHL");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 496 ".\\parser.y"
    {
        (yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHR");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 504 ".\\parser.y"
    {(yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno); char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "BITWISE_OR");
        (yyval.nodeptr)->name = temp;;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 509 ".\\parser.y"
    {(yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
    char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "BITWISE_AND");
        (yyval.nodeptr)->name = temp;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 516 ".\\parser.y"
    {
        (yyval.nodeptr) = boolean_operator_checker((yyvsp[(2) - (2)].nodeptr), NULL, yylineno);
            char* temp = strdup(createTemp());
            char* temp1 = (yyvsp[(2) - (2)].nodeptr)->name ? strdup((yyvsp[(2) - (2)].nodeptr)->name) : NULL;
            processExpression(quad_file, temp1, "--", temp, "NOT");
            (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 523 ".\\parser.y"
    {int i = lookupSymbol((yyvsp[(1) - (1)].string_value), false, yylineno); checkVariableType(i, yylineno); (yyval.nodeptr) = create_node(getSymbolById(i)->dType,(yyvsp[(1) - (1)].string_value));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 524 ".\\parser.y"
    {int i = lookupSymbol((yyvsp[(1) - (1)].string_value), false, yylineno); checkVariableType(i, yylineno); (yyval.nodeptr) = create_node(getSymbolById(i)->dType,(yyvsp[(1) - (1)].string_value));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 525 ".\\parser.y"
    { 
        char stri[32];
        sprintf(stri, "%d", (yyvsp[(1) - (1)].int_value));
        (yyval.nodeptr) = create_node("int", strdup(stri));
        checkParameterType("int", yylineno);
        checkIntAssigning(workingSymbolID, (yyvsp[(1) - (1)].int_value), yylineno); 
    ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 532 ".\\parser.y"
    { char buffer[50]; sprintf(buffer, "%f", (yyvsp[(1) - (1)].float_value)); (yyval.nodeptr) = create_node("float", buffer) ;printf("buffer:%s \n", buffer); checkParameterType("float", yylineno); checkFloatAssigning(workingSymbolID, (yyvsp[(1) - (1)].float_value), yylineno); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 533 ".\\parser.y"
    { (yyval.nodeptr) = create_node("string", (yyvsp[(1) - (1)].string_value)); checkParameterType("string", yylineno); checkStringAssigning(workingSymbolID, (yyvsp[(1) - (1)].string_value), yylineno); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 534 ".\\parser.y"
    { char buffer[10]; sprintf(buffer, "%c", (yyvsp[(1) - (1)].string_value)); (yyval.nodeptr) = create_node("char", (yyvsp[(1) - (1)].string_value)); checkParameterType("char", yylineno); checkCharAssigning(workingSymbolID, (yyvsp[(1) - (1)].string_value), yylineno); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 535 ".\\parser.y"
    { char buffer[6]; sprintf(buffer, "%s", (yyvsp[(1) - (1)].bool_value) ? "true" : "false"); (yyval.nodeptr) = create_node("bool", buffer); checkParameterType("bool", yylineno); checkBoolAssigning(workingSymbolID, (yyvsp[(1) - (1)].bool_value), yylineno); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 536 ".\\parser.y"
    {(yyval.nodeptr) = (yyvsp[(2) - (3)].nodeptr);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 537 ".\\parser.y"
    {
        printf("\nstart fun_call in parser\n");

    char* funName = getSymbolById(calledFuncIndex)->name;
    char* funType = getSymbolById(calledFuncIndex)->dType;

    // Create a temp to store return value, if any
    char* temp = NULL;
    if (strcmp(funType, "void") != 0) {
        printf("\nany thing 1 \n");
        temp = strdup(createTemp());
        processExpression(quad_file, funName, "--", temp, "CALL");
        printf("\nany thing 2 \n");
    } else {
        printf("\nany thing \n");
        processExpression(quad_file, funName, "--", "--", "CALL");
    }

    printf("\nany thing 3 \n");
    checkFunctionReturnType(calledFuncIndex, funType, yylineno);
    printf("\nany thing 4 \n");
   // markInitialized(workingSymbolID); // TODO: 
    printf("\nany thing 5 \n");

    // Create and return a node to hold the return value (if any)
    (yyval.nodeptr) = create_node("function_call", funName);
    (yyval.nodeptr)->name = temp;

    printf("\nfinish fun_call in parser\n");
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2593 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 571 ".\\parser.y"


void yyerror(const char *s) {
    extern char *yytext;
    fprintf(stderr, "\nError at line %d: %s\n", yylineno, s);
    fprintf(stderr, "Near token: '%s'\n", yytext);
    
}

int yywrap() {
    return 1;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE* inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        perror("Failed to open file");
        return 1;
    }
    quad_file = fopen("quadruples.txt", "w");

    extern FILE* yyin;
    yyin = inputFile;

    printf("Starting parsing of %s...\n", argv[1]);
    int parse_result = yyparse();
    //quad_file = create_file("quadruples.txt");
    // set_file_path("quadruples.txt", quad_file);
    if (parse_result == 0) {
        printf("\nParsing completed successfully!\n");
        DisplayTheSymbolTable();
        displayUnusedVariables();
    } else {
        fprintf(stderr, "\nParsing failed with %d errors.\n", parse_result);
    }
    
    fclose(inputFile);
    return parse_result;
}
