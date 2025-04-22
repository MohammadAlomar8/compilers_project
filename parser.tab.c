
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

void yyerror(const char *s);
int yylex(void);
extern int yylineno;

char* strdup(const char* s) {
    char* d = malloc(strlen(s) + 1);
    if (d) strcpy(d, s);
    return d;
}


/* Line 189 of yacc.c  */
#line 92 "parser.tab.c"

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

/* Line 214 of yacc.c  */
#line 19 ".\\parser.y"

    int int_value;
    float float_value;
    char* string_value;
    int bool_value;



/* Line 214 of yacc.c  */
#line 191 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 203 "parser.tab.c"

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
#define YYLAST   748

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    26,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    53,    57,    63,    67,    72,    77,
      85,    91,    93,    94,    98,   104,   109,   115,   123,   131,
     139,   147,   154,   161,   165,   167,   170,   175,   180,   184,
     188,   190,   193,   197,   203,   211,   215,   219,   222,   225,
     229,   233,   237,   241,   245,   249,   253,   257,   261,   265,
     268,   272,   275,   279,   283,   287,   291,   295,   299,   302,
     304,   306,   308,   310,   312,   314,   316,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    58,    60,    -1,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    61,    -1,    62,
      -1,    66,    -1,    79,    42,    -1,    17,    42,    -1,    67,
      -1,    68,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    63,    -1,    74,    -1,    69,    -1,    59,    21,    37,
      79,    42,    -1,    59,    21,    42,    -1,    59,     8,    37,
      79,    42,    -1,    59,     8,    42,    -1,    21,    37,    79,
      42,    -1,     8,    37,    79,    42,    -1,    14,    38,    21,
      39,    40,    64,    41,    -1,    15,    79,    55,    78,    64,
      -1,    65,    -1,    -1,    16,    55,    78,    -1,    20,    38,
      79,    39,    42,    -1,    20,    38,    39,    42,    -1,     9,
      38,    79,    39,    78,    -1,     9,    38,    79,    39,    78,
      10,    78,    -1,    11,    38,    60,    60,    60,    39,    78,
      -1,    59,    22,    21,    38,    70,    39,    78,    -1,    19,
      22,    21,    38,    70,    39,    78,    -1,    59,    22,    21,
      38,    39,    78,    -1,    19,    22,    21,    38,    39,    78,
      -1,    71,    56,    70,    -1,    71,    -1,    59,    21,    -1,
      59,    21,    37,    79,    -1,    21,    38,    73,    39,    -1,
      21,    38,    39,    -1,    79,    56,    73,    -1,    79,    -1,
      18,    42,    -1,    18,    79,    42,    -1,    12,    38,    79,
      39,    78,    -1,    13,    78,    12,    38,    79,    39,    42,
      -1,    21,    49,    42,    -1,    21,    50,    42,    -1,    21,
      49,    -1,    21,    50,    -1,    40,    58,    41,    -1,    79,
      29,    79,    -1,    79,    28,    79,    -1,    79,    31,    79,
      -1,    79,    32,    79,    -1,    79,    33,    79,    -1,    79,
      34,    79,    -1,    79,    35,    79,    -1,    79,    36,    79,
      -1,    79,    43,    79,    -1,    43,    79,    -1,    79,    44,
      79,    -1,    44,    79,    -1,    79,    45,    79,    -1,    79,
      46,    79,    -1,    79,    47,    79,    -1,    79,    48,    79,
      -1,    79,    53,    79,    -1,    79,    54,    79,    -1,    30,
      79,    -1,    21,    -1,     8,    -1,    23,    -1,    24,    -1,
      25,    -1,    27,    -1,    26,    -1,    38,    79,    39,    -1,
      72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    64,    65,    66,    67,    68,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    89,    96,   101,   107,   116,   127,   145,
     149,   150,   151,   155,   161,   162,   166,   167,   171,   176,
     177,   178,   179,   183,   184,   187,   188,   191,   192,   196,
     197,   201,   202,   208,   212,   217,   218,   219,   220,   224,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "STRING", "CHAR", "BOOL",
  "CONSTANT", "IF", "ELSE", "FOR", "WHILE", "DO", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "RETURN", "VOID", "PRINT", "IDENTIFIER",
  "FUNCTION_KEY", "INT_VALUE", "FLOAT_VALUE", "STRING_VALUE", "BOOL_VALUE",
  "CHAR_VALUE", "LOGICAL_AND", "LOGICAL_OR", "LOGICAL_NOT", "EQUAL",
  "NOT_EQUAL", "GT", "LT", "GTE", "LTE", "EQ", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "SEMICOLON", "ADD", "SUB", "MUL", "DIV", "MOD",
  "POW", "INC", "DEC", "BITWISE_OR", "BITWISE_AND", "SHL", "SHR", "':'",
  "','", "$accept", "program", "type", "statement",
  "declaration_statement", "assignment_statement", "switch_statement",
  "cases", "default_case", "print_statement", "if_statement",
  "for_statement", "function_statment", "args_statment", "args_dec",
  "fun_call", "fun_arg_call", "return_statment", "while_statement",
  "do_while_statement", "inc_dec_statement", "block", "expression", 0
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
     305,   306,   307,   308,   309,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    61,    62,    62,    63,
      64,    64,    64,    65,    66,    66,    67,    67,    68,    69,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    76,    77,    77,    77,    77,    78,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     5,     3,     4,     4,     7,
       5,     1,     0,     3,     5,     4,     5,     7,     7,     7,
       7,     6,     6,     3,     1,     2,     4,     4,     3,     3,
       1,     2,     3,     5,     7,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     4,     5,     6,     8,     7,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    81,
      82,    83,    85,    84,     0,     0,     3,     0,     0,     0,
       2,     9,    10,    20,    11,    14,    15,    22,    87,    21,
      16,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,    13,    80,    79,    51,     0,     0,     0,     0,     0,
      57,    58,    78,     0,     0,    69,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,    48,     0,
      50,    55,    56,    86,    59,     0,    26,     0,    24,     0,
      61,    60,    62,    63,    64,    65,    66,    67,    68,    70,
      72,    73,    74,    75,    76,    77,    28,     0,     0,     0,
       0,     0,     0,    35,     0,    27,    47,     0,     0,     0,
       0,    36,     0,    53,     0,    32,     0,     0,     0,    44,
      34,    49,    25,    23,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    42,    45,     0,     0,    41,     0,    37,
      38,    54,     0,     0,    29,     0,    40,    43,    39,     0,
      33,    46,    32,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    29,    30,    31,    32,    33,   161,   162,    34,
      35,    36,    37,   148,   149,    38,    99,    39,    40,    41,
      42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
    -138,   165,  -138,  -138,  -138,  -138,  -138,  -138,   -32,    -8,
       7,    29,    40,    41,    42,    -2,    59,    45,    39,  -138,
    -138,  -138,  -138,  -138,   283,   283,  -138,   283,   283,    10,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   357,   283,   283,   249,   283,    75,
      69,  -138,  -138,    53,  -138,   384,    72,    84,   283,   273,
      55,    56,   -15,   411,   207,   104,   104,   -35,   -22,    74,
     283,   283,   283,   283,   283,   283,   283,   283,  -138,   283,
     283,   283,   283,   283,   283,   283,   283,   438,   465,   249,
     492,    61,    62,  -138,    64,    58,   519,   546,  -138,    65,
     300,  -138,  -138,  -138,  -138,   283,  -138,   283,  -138,    68,
     678,   678,   694,   694,    93,    93,    93,    93,   104,   104,
     -15,   -15,   -15,   -15,  -138,  -138,  -138,    40,   249,    40,
     283,    63,     5,  -138,    71,  -138,  -138,   283,   573,   600,
      46,   106,    79,  -138,   627,    11,    40,    99,    82,    73,
    -138,  -138,  -138,  -138,    40,    85,    40,    40,    83,   283,
      76,    89,  -138,  -138,    95,    40,    51,  -138,    40,  -138,
    -138,  -138,   329,    40,  -138,   283,  -138,  -138,  -138,    40,
    -138,   654,    11,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,   107,   -54,   -46,  -138,  -138,  -138,   -47,  -138,  -138,
    -138,  -138,  -138,  -137,  -138,  -138,     6,  -138,  -138,  -138,
    -138,   -12,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      49,    89,   105,   155,    55,    45,    52,   106,     3,     4,
       5,     6,     7,    62,    63,   107,    65,    66,    67,    53,
     108,    19,    20,    21,    22,    23,   159,   160,    24,   177,
      46,    68,    69,    84,    87,    88,    25,    90,    85,    86,
      54,    27,    28,   128,   146,    47,    96,    97,   100,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,   110,
     111,   112,   113,   114,   115,   116,   117,    48,   118,   119,
     120,   121,   122,   123,   124,   125,    58,    59,   147,    50,
      26,    56,   142,    57,    51,   154,   147,    91,    60,    61,
      92,    59,    52,    94,   138,   109,   139,   101,   102,   130,
     133,   131,   132,   145,   136,    53,   140,    19,    20,    21,
      22,    23,   147,   150,    24,   141,   156,   143,   157,   144,
     164,   165,    25,    95,   168,   171,   100,    27,    28,   166,
     174,   173,   175,    64,   163,   183,    79,    80,    81,    82,
      83,    84,   167,   151,   169,   170,    85,    86,   172,    81,
      82,    83,    84,   176,     0,     0,   178,    85,    86,     0,
       0,   180,     0,     0,   181,     2,     0,   182,     3,     4,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    13,
       0,     0,    14,    15,    16,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    26,     0,     0,    27,    28,
       3,     4,     5,     6,     7,     8,     9,     0,    10,    11,
      12,    13,     0,     0,    14,    15,    16,    17,    18,     0,
      19,    20,    21,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    26,   104,     0,
      27,    28,     3,     4,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,     0,    19,    20,    21,    22,    23,     0,     0,    24,
       0,    52,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    52,    27,    28,    53,     0,    19,    20,    21,    22,
      23,     0,     0,    24,    53,     0,    19,    20,    21,    22,
      23,    25,    98,    24,     0,     0,    27,    28,     0,     0,
       0,    25,     0,     0,     0,     0,    27,    28,    70,    71,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,    85,    86,     0,   137,    70,    71,     0,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,    85,    86,   179,    70,    71,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
      85,    86,    70,    71,     0,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    93,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,    85,    86,    70,
      71,     0,    72,    73,    74,    75,    76,    77,     0,     0,
     103,     0,     0,     0,    79,    80,    81,    82,    83,    84,
       0,     0,     0,     0,    85,    86,    70,    71,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
     126,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,    85,    86,    70,    71,     0,    72,    73,    74,    75,
      76,    77,     0,     0,   127,     0,     0,     0,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,    85,    86,
      70,    71,     0,    72,    73,    74,    75,    76,    77,     0,
       0,   129,     0,     0,     0,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,    85,    86,    70,    71,     0,
      72,    73,    74,    75,    76,    77,     0,     0,   134,     0,
       0,     0,    79,    80,    81,    82,    83,    84,     0,     0,
       0,     0,    85,    86,    70,    71,     0,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   135,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,    85,
      86,    70,    71,     0,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   152,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,    85,    86,    70,    71,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   153,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,    85,    86,    70,    71,     0,    72,    73,
      74,    75,    76,    77,     0,     0,   158,     0,     0,     0,
      79,    80,    81,    82,    83,    84,     0,     0,     0,     0,
      85,    86,    70,    71,     0,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,    85,    86,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    74,    75,    76,
      77,    85,    86,     0,     0,     0,     0,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,    85,    86
};

static const yytype_int16 yycheck[] =
{
      12,    47,    37,   140,    15,    37,     8,    42,     3,     4,
       5,     6,     7,    24,    25,    37,    27,    28,     8,    21,
      42,    23,    24,    25,    26,    27,    15,    16,    30,   166,
      38,    21,    22,    48,    45,    46,    38,    48,    53,    54,
      42,    43,    44,    89,    39,    38,    57,    58,    59,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,    70,
      71,    72,    73,    74,    75,    76,    77,    38,    79,    80,
      81,    82,    83,    84,    85,    86,    37,    38,   132,    38,
      40,    22,   128,    38,    42,    39,   140,    12,    49,    50,
      21,    38,     8,    21,   105,    21,   107,    42,    42,    38,
      42,    39,    38,    40,    39,    21,    38,    23,    24,    25,
      26,    27,   166,    42,    30,   127,    10,   129,    39,   130,
      21,    39,    38,    39,    39,    42,   137,    43,    44,    56,
      41,    55,    37,    26,   146,   182,    43,    44,    45,    46,
      47,    48,   154,   137,   156,   157,    53,    54,   159,    45,
      46,    47,    48,   165,    -1,    -1,   168,    53,    54,    -1,
      -1,   173,    -1,    -1,   175,     0,    -1,   179,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    20,    21,    -1,    23,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    43,    44,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    -1,
      23,    24,    25,    26,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    41,    -1,
      43,    44,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    -1,    23,    24,    25,    26,    27,    -1,    -1,    30,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,
      -1,     8,    43,    44,    21,    -1,    23,    24,    25,    26,
      27,    -1,    -1,    30,    21,    -1,    23,    24,    25,    26,
      27,    38,    39,    30,    -1,    -1,    43,    44,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    43,    44,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    -1,    56,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    55,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    54,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    54,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    53,    54,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,    54,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    53,    54,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      53,    54,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    33,    34,    35,
      36,    53,    54,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    58,     0,     3,     4,     5,     6,     7,     8,     9,
      11,    12,    13,    14,    17,    18,    19,    20,    21,    23,
      24,    25,    26,    27,    30,    38,    40,    43,    44,    59,
      60,    61,    62,    63,    66,    67,    68,    69,    72,    74,
      75,    76,    77,    78,    79,    37,    38,    38,    38,    78,
      38,    42,     8,    21,    42,    79,    22,    38,    37,    38,
      49,    50,    79,    79,    58,    79,    79,     8,    21,    22,
      28,    29,    31,    32,    33,    34,    35,    36,    42,    43,
      44,    45,    46,    47,    48,    53,    54,    79,    79,    60,
      79,    12,    21,    42,    21,    39,    79,    79,    39,    73,
      79,    42,    42,    39,    41,    37,    42,    37,    42,    21,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    42,    39,    60,    39,
      38,    39,    38,    42,    39,    42,    39,    56,    79,    79,
      38,    78,    60,    78,    79,    40,    39,    59,    70,    71,
      42,    73,    42,    42,    39,    70,    10,    39,    39,    15,
      16,    64,    65,    78,    21,    39,    56,    78,    39,    78,
      78,    42,    79,    55,    41,    37,    78,    70,    78,    55,
      78,    79,    78,    64
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
#line 64 ".\\parser.y"
    { (yyval.string_value) = strdup("int"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 65 ".\\parser.y"
    { (yyval.string_value) = strdup("float"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 ".\\parser.y"
    { (yyval.string_value) = strdup("string"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 67 ".\\parser.y"
    { (yyval.string_value) = strdup("bool"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 68 ".\\parser.y"
    { (yyval.string_value) = strdup("char"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 90 ".\\parser.y"
    {
        insertSymbol((yyvsp[(2) - (5)].string_value), (yyvsp[(1) - (5)].string_value), 0);
        markInitialized((yyvsp[(2) - (5)].string_value));
        markUsed((yyvsp[(2) - (5)].string_value));
        printf("Declared and initialized variable: %s of type %s\n", (yyvsp[(2) - (5)].string_value), (yyvsp[(1) - (5)].string_value));
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 97 ".\\parser.y"
    {
        insertSymbol((yyvsp[(2) - (3)].string_value), (yyvsp[(1) - (3)].string_value), 0);
        printf("Declared variable: %s of type %s\n", (yyvsp[(2) - (3)].string_value), (yyvsp[(1) - (3)].string_value));
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 ".\\parser.y"
    {
        insertSymbol((yyvsp[(2) - (5)].string_value), (yyvsp[(1) - (5)].string_value), 1); // Treat constant like a variable, but optionally tag it (advanced)
        markInitialized((yyvsp[(2) - (5)].string_value));
        printf("Declared and initialized constant: %s of type %s\n", (yyvsp[(2) - (5)].string_value), (yyvsp[(1) - (5)].string_value));
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 108 ".\\parser.y"
    {
        insertSymbol((yyvsp[(2) - (3)].string_value), (yyvsp[(1) - (3)].string_value), 1);
        printf("Declared constant: %s of type %s (Not initialized!)\n", (yyvsp[(2) - (3)].string_value), (yyvsp[(1) - (3)].string_value));
        // printSymbolTable();
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 117 ".\\parser.y"
    {
        Symbol* sym = lookupSymbol((yyvsp[(1) - (4)].string_value));
        if (!sym) {
            printf("Semantic Error: Variable '%s' used before declaration (line %d).\n", (yyvsp[(1) - (4)].string_value), yylineno);
        } else {
            markInitialized((yyvsp[(1) - (4)].string_value));
            markUsed((yyvsp[(1) - (4)].string_value));
            printf("Assigned to variable: %s\n", (yyvsp[(1) - (4)].string_value));
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 128 ".\\parser.y"
    {
        // printf("hi from const \n");
        Symbol* sym = lookupSymbol((yyvsp[(1) - (4)].string_value));
        if (!sym) {
            printf("Semantic Error: Constant '%s' used before declaration (line %d).\n", (yyvsp[(1) - (4)].string_value), yylineno);
        } else if (!sym->isConstant) {
            printf("Semantic Error: '%s' is not declared as a constant (line %d).\n", (yyvsp[(1) - (4)].string_value), yylineno);
        } else {
            markInitialized((yyvsp[(1) - (4)].string_value));
            printf("Assigned to constant: %s\n", (yyvsp[(1) - (4)].string_value));
        }
        // printSymbolTable();
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 149 ".\\parser.y"
    {printf("parsing case \n");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 155 ".\\parser.y"
    {printf("parsing default \n");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 161 ".\\parser.y"
    {printf("parsing print 1\n");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 162 ".\\parser.y"
    {printf("parsing print 2\n");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 166 ".\\parser.y"
    {printf("parsing if_statement \n");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 167 ".\\parser.y"
    {printf("parsing if_statement \n");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 171 ".\\parser.y"
    {printf("parsing for_statement \n");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 191 ".\\parser.y"
    {printf("parsing fun call 1 \n");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 192 ".\\parser.y"
    {printf("parsing fun call 2 \n");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 196 ".\\parser.y"
    {printf("parsing fun arg call  \n");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 208 ".\\parser.y"
    {printf("parsing while statment \n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 212 ".\\parser.y"
    {printf("parsing do while statment \n");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 224 ".\\parser.y"
    {printf("parsing block \n");}
    break;



/* Line 1455 of yacc.c  */
#line 1877 "parser.tab.c"
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
#line 263 ".\\parser.y"


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

    extern FILE* yyin;
    yyin = inputFile;

    printf("Starting parsing of %s...\n", argv[1]);
    int parse_result = yyparse();
    
    if (parse_result == 0) {
        printf("\nParsing completed successfully!\n");
    } else {
        fprintf(stderr, "\nParsing failed with %d errors.\n", parse_result);
    }

    fclose(inputFile);
    return parse_result;
}
