
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
     ASSIGN_SHL = 321
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
#line 206 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "parser.tab.c"

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
#define YYLAST   1080

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    28,    31,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    52,    53,    60,    61,    66,
      67,    74,    75,    81,    82,    88,    89,    95,    96,   102,
     103,   109,   110,   116,   117,   123,   124,   130,   131,   137,
     138,   144,   145,   151,   152,   158,   163,   164,   165,   175,
     181,   183,   184,   188,   194,   199,   205,   213,   215,   216,
     217,   229,   230,   239,   240,   248,   252,   254,   257,   262,
     267,   271,   273,   275,   276,   281,   283,   286,   287,   292,
     293,   294,   302,   303,   304,   314,   318,   322,   326,   330,
     333,   336,   337,   342,   346,   350,   354,   358,   362,   366,
     370,   374,   378,   381,   384,   388,   391,   395,   399,   403,
     407,   411,   415,   419,   423,   426,   428,   430,   432,   434,
     436,   438,   440,   444
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    70,    72,    -1,    -1,     3,    -1,     4,
      -1,     5,    -1,     7,    -1,     6,    -1,    19,    -1,    73,
      -1,    77,    -1,    95,    -1,   122,    43,    -1,    17,    43,
      -1,    20,    43,    -1,    96,    -1,    98,    -1,   113,    -1,
     116,    -1,   119,    -1,   120,    -1,    90,    -1,   111,    -1,
     101,    -1,    -1,    71,    22,    74,    38,   122,    43,    -1,
      -1,    71,    22,    75,    43,    -1,    -1,    71,     8,    76,
      38,   122,    43,    -1,    -1,    22,    38,    78,   122,    43,
      -1,    -1,    22,    56,    79,   122,    43,    -1,    -1,    22,
      57,    80,   122,    43,    -1,    -1,    22,    59,    81,   122,
      43,    -1,    -1,    22,    58,    82,   122,    43,    -1,    -1,
      22,    60,    83,   122,    43,    -1,    -1,    22,    61,    84,
     122,    43,    -1,    -1,    22,    62,    85,   122,    43,    -1,
      -1,    22,    63,    86,   122,    43,    -1,    -1,    22,    64,
      87,   122,    43,    -1,    -1,    22,    65,    88,   122,    43,
      -1,    -1,    22,    66,    89,   122,    43,    -1,     8,    38,
     122,    43,    -1,    -1,    -1,    14,    91,    39,    22,    92,
      40,    41,    93,    42,    -1,    15,   122,    67,   120,    93,
      -1,    94,    -1,    -1,    16,    67,   120,    -1,    21,    39,
     122,    40,    43,    -1,    21,    39,    40,    43,    -1,     9,
      39,   122,    40,   120,    -1,     9,    39,   122,    40,   120,
      10,   120,    -1,    70,    -1,    -1,    -1,    11,    39,    99,
      72,    72,    72,    40,   100,    41,    97,    42,    -1,    -1,
      71,    23,    22,    39,   104,    40,   102,   120,    -1,    -1,
      71,    23,    22,    39,    40,   103,   120,    -1,   105,    68,
     104,    -1,   105,    -1,    71,    22,    -1,    71,    22,    38,
     122,    -1,    22,    39,   109,    40,    -1,    22,    39,    40,
      -1,   106,    -1,   107,    -1,    -1,   122,   110,    68,   109,
      -1,   122,    -1,    18,    43,    -1,    -1,    18,   112,   122,
      43,    -1,    -1,    -1,    12,   114,    39,   122,    40,   120,
     115,    -1,    -1,    -1,    13,   117,   120,    12,    39,   122,
      40,    43,   118,    -1,    22,    50,    43,    -1,    51,    22,
      43,    -1,    50,    22,    43,    -1,    22,    51,    43,    -1,
      22,    50,    -1,    22,    51,    -1,    -1,    41,   121,    70,
      42,    -1,   122,    30,   122,    -1,   122,    29,   122,    -1,
     122,    32,   122,    -1,   122,    33,   122,    -1,   122,    34,
     122,    -1,   122,    35,   122,    -1,   122,    36,   122,    -1,
     122,    37,   122,    -1,   122,    44,   122,    -1,    44,   122,
      -1,    47,   122,    -1,   122,    45,   122,    -1,    45,   122,
      -1,   122,    46,   122,    -1,   122,    47,   122,    -1,   122,
      48,   122,    -1,   122,    49,   122,    -1,   122,    54,   122,
      -1,   122,    55,   122,    -1,   122,    52,   122,    -1,   122,
      53,   122,    -1,    31,   122,    -1,    22,    -1,     8,    -1,
      24,    -1,    25,    -1,    26,    -1,    28,    -1,    27,    -1,
      39,   122,    40,    -1,   108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    73,    78,    79,    80,    81,    82,    83,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   105,   105,   112,   112,   114,
     114,   128,   128,   138,   138,   148,   148,   158,   158,   168,
     168,   178,   178,   188,   188,   198,   198,   208,   208,   218,
     218,   228,   228,   238,   238,   248,   254,   254,   254,   258,
     259,   260,   264,   270,   271,   275,   276,   279,   282,   282,
     282,   287,   287,   291,   291,   297,   298,   301,   302,   307,
     314,   322,   323,   328,   328,   329,   333,   334,   334,   340,
     340,   340,   344,   344,   344,   349,   350,   351,   352,   353,
     354,   358,   358,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   380,   381,   382,   390,   391,   399,   408,   416,
     424,   432,   440,   441,   442,   443,   444,   445,   453,   454,
     455,   456,   457,   458
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
  "ASSIGN_SHL", "':'", "','", "$accept", "program", "type", "statement",
  "declaration_statement", "$@1", "$@2", "$@3", "assignment_statement",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13",
  "$@14", "$@15", "switch_statement", "$@16", "$@17", "cases",
  "default_case", "print_statement", "if_statement", "for_block",
  "for_statement", "$@18", "$@19", "function_statment", "$@20", "$@21",
  "args_statment", "args_dec", "fun_call_with_args", "fun_call_no_args",
  "fun_call", "fun_arg_call", "$@22", "return_statment", "$@23",
  "while_statement", "$@24", "$@25", "do_while_statement", "$@26", "$@27",
  "inc_dec_statement", "block", "$@28", "expression", 0
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
     315,   316,   317,   318,   319,   320,   321,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    74,    73,    75,    73,    76,
      73,    78,    77,    79,    77,    80,    77,    81,    77,    82,
      77,    83,    77,    84,    77,    85,    77,    86,    77,    87,
      77,    88,    77,    89,    77,    77,    91,    92,    90,    93,
      93,    93,    94,    95,    95,    96,    96,    97,    99,   100,
      98,   102,   101,   103,   101,   104,   104,   105,   105,   106,
     107,   108,   108,   110,   109,   109,   111,   112,   111,   114,
     115,   113,   117,   118,   116,   119,   119,   119,   119,   119,
     119,   121,   120,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     6,     0,     4,     0,
       6,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     4,     0,     0,     9,     5,
       1,     0,     3,     5,     4,     5,     7,     1,     0,     0,
      11,     0,     8,     0,     7,     3,     1,     2,     4,     4,
       3,     1,     1,     0,     4,     1,     2,     0,     4,     0,
       0,     7,     0,     0,     9,     3,     3,     3,     3,     2,
       2,     0,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     4,     5,     6,     8,     7,   126,     0,
       0,    89,    92,    56,     0,    87,     9,     0,     0,   125,
     127,   128,   129,   131,   130,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     2,    10,    11,    22,    12,    16,
      17,    24,    81,    82,   133,    23,    18,    19,    20,    21,
       0,     0,     0,    68,     0,     0,     0,    14,    86,     0,
      15,     0,    31,     0,    99,   100,    33,    35,    39,    37,
      41,    43,    45,    47,    49,    51,    53,   126,   125,   124,
       0,     3,   112,   115,   113,     0,     0,    29,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,    83,    95,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,     0,    97,    96,     0,
       0,     0,     0,   104,   103,   105,   106,   107,   108,   109,
     110,   111,   114,   116,   117,   118,   119,   122,   123,   120,
     121,    55,     0,     0,     0,     0,    57,    88,    64,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,    28,     0,    65,
       0,     0,     0,     0,    63,    32,     0,    34,    36,    40,
      38,    42,    44,    46,    48,    50,    52,    54,     0,     0,
      73,     0,     0,    76,     0,     0,    90,     0,     0,    84,
      30,    26,     0,    77,    71,     0,    66,    69,    91,     0,
      61,    74,     0,     0,    75,     0,    93,     0,     0,     0,
      60,    78,    72,     3,    94,     0,     0,    58,    67,     0,
       0,    62,    70,    61,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    33,    34,    35,   140,   141,   139,    36,   118,
     124,   125,   127,   126,   128,   129,   130,   131,   132,   133,
     134,    37,    56,   193,   239,   240,    38,    39,   249,    40,
     111,   235,    41,   233,   222,   212,   213,    42,    43,    44,
     120,   172,    45,    59,    46,    54,   228,    47,    55,   244,
      48,    49,    81,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -180
static const yytype_int16 yypact[] =
{
    -180,   112,  -180,  -180,  -180,  -180,  -180,  -180,   -14,   -10,
      -9,  -180,  -180,  -180,   -12,   -11,  -180,    -8,     1,   320,
    -180,  -180,  -180,  -180,  -180,   289,   289,  -180,   289,   289,
     289,    15,    32,     0,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
     358,   289,   289,  -180,    16,    19,    24,  -180,  -180,   289,
    -180,    17,  -180,   164,    30,    41,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,    46,    -2,
     385,  -180,    42,    42,    -2,    49,    55,  -180,    67,    36,
     289,   289,   289,   289,   289,   289,   289,   289,  -180,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   412,
     439,   259,   289,    99,    92,   466,    79,   493,   289,  -180,
      87,   520,  -180,  -180,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,  -180,   210,  -180,  -180,    90,
      97,    98,   105,  1003,  1003,  1025,  1025,   277,   277,   277,
     277,    42,    42,    -2,    -2,    -2,    -2,  -180,  -180,  -180,
    -180,  -180,    19,   259,   547,   106,  -180,  -180,  -180,   103,
     574,  -180,    80,   601,   628,   655,   682,   709,   736,   763,
     790,   817,   844,   871,  -180,   289,   289,  -180,     9,   137,
     259,    19,   289,   109,  -180,  -180,   289,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,   898,   925,
    -180,   128,   114,    84,    19,   115,  -180,   952,   117,  -180,
    -180,  -180,    19,   130,  -180,    14,  -180,  -180,  -180,   123,
      -5,  -180,   289,    19,  -180,   129,  -180,   289,   102,   132,
    -180,   979,  -180,  -180,  -180,   308,    19,  -180,   259,   133,
      19,  -180,  -180,    -5,  -180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,   -79,  -179,  -104,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,   -77,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,   -48,  -180,  -180,  -180,  -180,
     -18,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,   -49,  -180,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      79,    80,   136,    82,    83,    84,   113,   163,    87,   211,
     237,   238,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    88,    89,    51,    77,   109,   110,    16,    52,
      53,    57,    58,    16,   115,    60,   117,    85,   121,    78,
      61,    20,    21,    22,    23,    24,   211,   104,    25,   210,
     105,   106,   107,   108,    86,   112,    26,   116,   142,   190,
      27,    28,    29,   114,    30,   143,   144,   145,   146,   147,
     148,   149,   150,   122,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   123,    63,   215,   164,   101,   102,
     103,   104,   137,   170,   105,   106,   107,   108,   138,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     -27,   165,     2,   189,   166,     3,     4,     5,     6,     7,
       8,     9,   168,    10,    11,    12,    13,   171,   185,    14,
      15,    16,    17,    18,    19,   186,    20,    21,    22,    23,
      24,   187,   216,    25,   188,   192,   194,   214,   196,   218,
     223,    26,   225,    27,   224,   227,    28,    29,   230,    30,
     208,   209,    31,    32,   248,   226,   236,   217,   232,   246,
     243,   121,    77,   231,   247,   252,   254,   234,   219,     0,
       0,     0,     0,     0,   242,     0,    78,     0,    20,    21,
      22,    23,    24,     0,     0,    25,     0,   251,     0,     0,
       0,   253,     0,    26,   119,     0,     0,   241,    28,    29,
       0,    30,   245,     3,     4,     5,     6,     7,     8,     9,
       0,    10,    11,    12,    13,     0,     0,    14,    15,    16,
      17,    18,    19,     0,    20,    21,    22,    23,    24,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,   184,     0,    28,    29,     0,    30,     0,     0,
      31,    32,     3,     4,     5,     6,     7,     8,     9,     0,
      10,    11,    12,    13,     0,     0,    14,    15,    16,    17,
      18,    19,     0,    20,    21,    22,    23,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,    77,    26,     0,
      27,     0,     0,    28,    29,     0,    30,     0,     0,    31,
      32,    78,     0,    20,    21,    22,    23,    24,     0,     0,
      25,    99,   100,   101,   102,   103,   104,     0,    26,   105,
     106,   107,   108,    28,    29,     0,    30,    90,    91,     0,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,    62,    63,
     105,   106,   107,   108,     0,     0,     0,     0,     0,     0,
      64,    65,     0,     0,     0,   250,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    90,    91,     0,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,   104,     0,     0,
     105,   106,   107,   108,    90,    91,     0,    92,    93,    94,
      95,    96,    97,     0,     0,   135,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,     0,   105,   106,   107,
     108,    90,    91,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,   161,    99,   100,   101,   102,
     103,   104,     0,     0,   105,   106,   107,   108,    90,    91,
       0,    92,    93,    94,    95,    96,    97,     0,     0,   162,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,   105,   106,   107,   108,    90,    91,     0,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,   167,
      99,   100,   101,   102,   103,   104,     0,     0,   105,   106,
     107,   108,    90,    91,     0,    92,    93,    94,    95,    96,
      97,     0,     0,   169,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,   105,   106,   107,   108,    90,
      91,     0,    92,    93,    94,    95,    96,    97,     0,     0,
     -85,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       0,     0,   105,   106,   107,   108,    90,    91,     0,    92,
      93,    94,    95,    96,    97,     0,     0,   191,     0,     0,
       0,    99,   100,   101,   102,   103,   104,     0,     0,   105,
     106,   107,   108,    90,    91,     0,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,   195,    99,   100,
     101,   102,   103,   104,     0,     0,   105,   106,   107,   108,
      90,    91,     0,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,   197,    99,   100,   101,   102,   103,
     104,     0,     0,   105,   106,   107,   108,    90,    91,     0,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,   198,    99,   100,   101,   102,   103,   104,     0,     0,
     105,   106,   107,   108,    90,    91,     0,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,   199,    99,
     100,   101,   102,   103,   104,     0,     0,   105,   106,   107,
     108,    90,    91,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,   200,    99,   100,   101,   102,
     103,   104,     0,     0,   105,   106,   107,   108,    90,    91,
       0,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,   201,    99,   100,   101,   102,   103,   104,     0,
       0,   105,   106,   107,   108,    90,    91,     0,    92,    93,
      94,    95,    96,    97,     0,     0,     0,     0,     0,   202,
      99,   100,   101,   102,   103,   104,     0,     0,   105,   106,
     107,   108,    90,    91,     0,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,   203,    99,   100,   101,
     102,   103,   104,     0,     0,   105,   106,   107,   108,    90,
      91,     0,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,   204,    99,   100,   101,   102,   103,   104,
       0,     0,   105,   106,   107,   108,    90,    91,     0,    92,
      93,    94,    95,    96,    97,     0,     0,     0,     0,     0,
     205,    99,   100,   101,   102,   103,   104,     0,     0,   105,
     106,   107,   108,    90,    91,     0,    92,    93,    94,    95,
      96,    97,     0,     0,     0,     0,     0,   206,    99,   100,
     101,   102,   103,   104,     0,     0,   105,   106,   107,   108,
      90,    91,     0,    92,    93,    94,    95,    96,    97,     0,
       0,     0,     0,     0,   207,    99,   100,   101,   102,   103,
     104,     0,     0,   105,   106,   107,   108,    90,    91,     0,
      92,    93,    94,    95,    96,    97,     0,     0,     0,     0,
       0,   220,    99,   100,   101,   102,   103,   104,     0,     0,
     105,   106,   107,   108,    90,    91,     0,    92,    93,    94,
      95,    96,    97,     0,     0,     0,     0,     0,   221,    99,
     100,   101,   102,   103,   104,     0,     0,   105,   106,   107,
     108,    90,    91,     0,    92,    93,    94,    95,    96,    97,
       0,     0,   229,     0,     0,     0,    99,   100,   101,   102,
     103,   104,     0,     0,   105,   106,   107,   108,    90,    91,
       0,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,     0,
       0,   105,   106,   107,   108,    92,    93,    94,    95,    96,
      97,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,   105,   106,   107,   108,    94,
      95,    96,    97,     0,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,     0,     0,   105,   106,   107,
     108
};

static const yytype_int16 yycheck[] =
{
      25,    26,    81,    28,    29,    30,    55,   111,     8,   188,
      15,    16,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    22,    23,    38,     8,    51,    52,    19,    39,
      39,    43,    43,    19,    59,    43,    61,    22,    63,    22,
      39,    24,    25,    26,    27,    28,   225,    49,    31,    40,
      52,    53,    54,    55,    22,    39,    39,    40,    22,   163,
      41,    44,    45,    39,    47,    90,    91,    92,    93,    94,
      95,    96,    97,    43,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    43,    39,   190,   112,    46,    47,
      48,    49,    43,   118,    52,    53,    54,    55,    43,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      43,    12,     0,   162,    22,     3,     4,     5,     6,     7,
       8,     9,    43,    11,    12,    13,    14,    40,    38,    17,
      18,    19,    20,    21,    22,    38,    24,    25,    26,    27,
      28,    43,   191,    31,    39,    39,    43,    10,    68,    40,
      22,    39,    68,    41,    40,    40,    44,    45,    41,    47,
     185,   186,    50,    51,   243,   214,    43,   192,    38,    67,
      41,   196,     8,   222,    42,    42,   253,   225,   196,    -1,
      -1,    -1,    -1,    -1,   233,    -1,    22,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    31,    -1,   246,    -1,    -1,
      -1,   250,    -1,    39,    40,    -1,    -1,   232,    44,    45,
      -1,    47,   237,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    42,    -1,    44,    45,    -1,    47,    -1,    -1,
      50,    51,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,     8,    39,    -1,
      41,    -1,    -1,    44,    45,    -1,    47,    -1,    -1,    50,
      51,    22,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      31,    44,    45,    46,    47,    48,    49,    -1,    39,    52,
      53,    54,    55,    44,    45,    -1,    47,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    38,    39,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    -1,    67,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    54,
      55,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    55,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    54,    55,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    52,    53,
      54,    55,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      -1,    -1,    52,    53,    54,    55,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      53,    54,    55,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    53,    54,    55,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    53,    54,    55,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,
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
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    52,    53,    54,    55,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    52,
      53,    54,    55,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    -1,    52,    53,    54,    55,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    52,    53,    54,    55,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      52,    53,    54,    55,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    54,
      55,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    52,    53,    54,    55,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    -1,
      -1,    52,    53,    54,    55,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    -1,    -1,    52,    53,    54,    55,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    52,    53,    54,
      55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,     0,     3,     4,     5,     6,     7,     8,     9,
      11,    12,    13,    14,    17,    18,    19,    20,    21,    22,
      24,    25,    26,    27,    28,    31,    39,    41,    44,    45,
      47,    50,    51,    71,    72,    73,    77,    90,    95,    96,
      98,   101,   106,   107,   108,   111,   113,   116,   119,   120,
     122,    38,    39,    39,   114,   117,    91,    43,    43,   112,
      43,    39,    38,    39,    50,    51,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,     8,    22,   122,
     122,   121,   122,   122,   122,    22,    22,     8,    22,    23,
      29,    30,    32,    33,    34,    35,    36,    37,    43,    44,
      45,    46,    47,    48,    49,    52,    53,    54,    55,   122,
     122,    99,    39,   120,    39,   122,    40,   122,    78,    40,
     109,   122,    43,    43,    79,    80,    82,    81,    83,    84,
      85,    86,    87,    88,    89,    40,    70,    43,    43,    76,
      74,    75,    22,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,    43,    40,    72,   122,    12,    22,    43,    43,    40,
     122,    40,   110,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,    42,    38,    38,    43,    39,   120,
      72,    40,    39,    92,    43,    43,    68,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,   122,   122,
      40,    71,   104,   105,    10,    72,   120,   122,    40,   109,
      43,    43,   103,    22,    40,    68,   120,    40,   115,    40,
      41,   120,    38,   102,   104,   100,    43,    15,    16,    93,
      94,   122,   120,    41,   118,   122,    67,    42,    70,    97,
      67,   120,    42,   120,    93
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
#line 78 ".\\parser.y"
    { (yyval.string_value) = strdup("int"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 79 ".\\parser.y"
    { (yyval.string_value) = strdup("float"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 80 ".\\parser.y"
    { (yyval.string_value) = strdup("string"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 81 ".\\parser.y"
    { (yyval.string_value) = strdup("bool"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 ".\\parser.y"
    { (yyval.string_value) = strdup("char"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 ".\\parser.y"
    { (yyval.string_value) = strdup("void"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 91 ".\\parser.y"
    {checkBreak(yylineno);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 92 ".\\parser.y"
    {checkContinue(yylineno);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"variable",(yyvsp[(1) - (2)].string_value),yylineno,0 );;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 105 ".\\parser.y"
    {workingSymbolID = -1;
        
        char* temp1 = strdup((yyvsp[(2) - (6)].string_value));
        char* temp2 = (yyvsp[(5) - (6)].nodeptr)->name ? strdup((yyvsp[(5) - (6)].nodeptr)->name) : NULL;
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 112 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"variable",(yyvsp[(1) - (2)].string_value),yylineno,0 );;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 112 ".\\parser.y"
    {workingSymbolID = -1; (yyval.nodeptr) = NULL;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 114 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value),"constant",(yyvsp[(1) - (2)].string_value),yylineno,0 );;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 114 ".\\parser.y"
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
#line 128 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 ".\\parser.y"
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
#line 138 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 140 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 148 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 150 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 158 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 160 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 168 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 170 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 178 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 180 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 188 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 190 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 198 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 200 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 208 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 210 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 218 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 220 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 228 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 230 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 238 ".\\parser.y"
    { 
        workingSymbolID = lookupSymbol((yyvsp[(1) - (2)].string_value), 1, yylineno); 
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 240 ".\\parser.y"
    { 
        char* temp1 = strdup((yyvsp[(1) - (5)].string_value)); 
        char* temp2 = strdup((yyvsp[(4) - (5)].nodeptr)->name); 
        processExpression(quad_file, temp2, "--", temp1, "ASSIGN");
        if (temp1) free(temp1);
        if (temp2) free(temp2); 
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 248 ".\\parser.y"
    {printf("Error at line: %d CONSTANTS must not be reassigned\n", yylineno);exit(EXIT_FAILURE);workingSymbolID = -1;;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 254 ".\\parser.y"
    {inSwitch = true;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 254 ".\\parser.y"
    {lookupSymbol((yyvsp[(4) - (4)].string_value), 0, yylineno);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 254 ".\\parser.y"
    {inSwitch = false;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 270 ".\\parser.y"
    {printf("parsing print 1\n");}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 271 ".\\parser.y"
    {printf("parsing print 2\n");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 275 ".\\parser.y"
    {printf("parsing if_statement \n");}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 276 ".\\parser.y"
    {printf("parsing if_statement \n");}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 282 ".\\parser.y"
    {enterScope();;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 282 ".\\parser.y"
    {inLoop = true;;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 282 ".\\parser.y"
    {inLoop = false; exitScope(yylineno);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 287 ".\\parser.y"
    {funIndex = insertSymbol((yyvsp[(3) - (6)].string_value),"function", (yyvsp[(1) - (6)].string_value), yylineno, 0);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 291 ".\\parser.y"
    {funIndex = insertSymbol((yyvsp[(3) - (5)].string_value),"function", (yyvsp[(1) - (5)].string_value), yylineno, 0);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 301 ".\\parser.y"
    {workingSymbolID = insertSymbol((yyvsp[(2) - (2)].string_value), "variable", (yyvsp[(1) - (2)].string_value), yylineno, 1); printf("i am here");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 307 ".\\parser.y"
    {
        calledFuncIndex = lookupSymbol((yyvsp[(1) - (4)].string_value), 0, yylineno);
        (yyval.nodeptr) = set_type(getSymbolById(calledFuncIndex)->dType);
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 314 ".\\parser.y"
    {
        calledFuncIndex = lookupSymbol((yyvsp[(1) - (3)].string_value), 0, yylineno);
        (yyval.nodeptr) = set_type(getSymbolById(calledFuncIndex)->dType);
    ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 328 ".\\parser.y"
    {funcArgCount++;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 328 ".\\parser.y"
    {printf("parsing fun arg call  \n");}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 329 ".\\parser.y"
    {funcArgCount++;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 334 ".\\parser.y"
    {workingSymbolID = funIndex;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 334 ".\\parser.y"
    {returnInFunction = true;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 340 ".\\parser.y"
    {inLoop = true;;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 340 ".\\parser.y"
    {inLoop = false;;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 340 ".\\parser.y"
    {printf("parsing while statment \n");}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 344 ".\\parser.y"
    {inLoop = true;;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 344 ".\\parser.y"
    {inLoop = false;;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 344 ".\\parser.y"
    {printf("parsing do while statment \n");}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 349 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(1) - (3)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 350 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(2) - (3)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 351 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(2) - (3)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType, getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 352 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(1) - (3)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 353 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(1) - (2)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 354 ".\\parser.y"
    {int id = lookupSymbol((yyvsp[(1) - (2)].string_value), false, yylineno);nodeType * temp = create_node(getSymbolById(id)->dType,getSymbolById(id)->name); (yyval.nodeptr) = inc_dec_checker(temp, yylineno);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 358 ".\\parser.y"
    {enterScope();;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 358 ".\\parser.y"
    { exitScope(yylineno); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 364 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 365 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 366 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 367 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 368 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 369 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 370 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 371 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 372 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file,temp1, temp2, temp, "ADD");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 380 ".\\parser.y"
    {(yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (2)].nodeptr), NULL, yylineno);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 381 ".\\parser.y"
    {(yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (2)].nodeptr), NULL, yylineno);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 382 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SUB");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 390 ".\\parser.y"
    {(yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (2)].nodeptr), NULL, yylineno);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 391 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MUL");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 399 ".\\parser.y"
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

  case 118:

/* Line 1455 of yacc.c  */
#line 408 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "MOD");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 416 ".\\parser.y"
    {
        (yyval.nodeptr) = arithmetic_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "POW");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 424 ".\\parser.y"
    {
        (yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHL");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 432 ".\\parser.y"
    {
        (yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);
        char* temp1 = strdup((yyvsp[(1) - (3)].nodeptr)->name);
        char* temp2 = strdup((yyvsp[(3) - (3)].nodeptr)->name);
        char* temp = strdup(createTemp());
        processExpression(quad_file, temp1, temp2, temp, "SHR");
        (yyval.nodeptr)->name = temp;
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 440 ".\\parser.y"
    {(yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 441 ".\\parser.y"
    {(yyval.nodeptr) = bitwise_operator_checker((yyvsp[(1) - (3)].nodeptr), (yyvsp[(3) - (3)].nodeptr), yylineno);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 442 ".\\parser.y"
    {(yyval.nodeptr) = boolean_operator_checker((yyvsp[(1) - (2)].nodeptr), NULL, yylineno);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 443 ".\\parser.y"
    {int i = lookupSymbol((yyvsp[(1) - (1)].string_value), false, yylineno); checkVariableType(i, yylineno); (yyval.nodeptr) = create_node(getSymbolById(i)->dType,(yyvsp[(1) - (1)].string_value));;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 444 ".\\parser.y"
    {int i = lookupSymbol((yyvsp[(1) - (1)].string_value), false, yylineno); checkVariableType(i, yylineno); (yyval.nodeptr) = create_node(getSymbolById(i)->dType,(yyvsp[(1) - (1)].string_value));;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 445 ".\\parser.y"
    { 
        char stri[32];
        sprintf(stri, "%d", (yyvsp[(1) - (1)].int_value));
        (yyval.nodeptr) = create_node("int", strdup(stri));
        checkParameterType("int", yylineno);
        checkIntAssigning(workingSymbolID, (yyvsp[(1) - (1)].int_value), yylineno); 
        printf("stri: %s\n", (yyval.nodeptr)->name); 
    ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 453 ".\\parser.y"
    { char buffer[50]; sprintf(buffer, "%f", (yyvsp[(1) - (1)].float_value)); (yyval.nodeptr) = create_node("float", buffer) ;printf("buffer:%s \n", buffer); checkParameterType("float", yylineno); checkFloatAssigning(workingSymbolID, (yyvsp[(1) - (1)].float_value), yylineno); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 454 ".\\parser.y"
    { (yyval.nodeptr) = create_node("string", (yyvsp[(1) - (1)].string_value)); checkParameterType("string", yylineno); checkStringAssigning(workingSymbolID, (yyvsp[(1) - (1)].string_value), yylineno); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 455 ".\\parser.y"
    { char buffer[10]; sprintf(buffer, "%c", (yyvsp[(1) - (1)].string_value)); (yyval.nodeptr) = create_node("char", buffer); checkParameterType("char", yylineno); checkCharAssigning(workingSymbolID, (yyvsp[(1) - (1)].string_value), yylineno); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 456 ".\\parser.y"
    { char buffer[6]; sprintf(buffer, "%s", (yyvsp[(1) - (1)].bool_value) ? "true" : "false"); (yyval.nodeptr) = create_node("bool", buffer); checkParameterType("bool", yylineno); checkBoolAssigning(workingSymbolID, (yyvsp[(1) - (1)].bool_value), yylineno); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 457 ".\\parser.y"
    {(yyval.nodeptr) = (yyvsp[(2) - (3)].nodeptr);;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 458 ".\\parser.y"
    {
        char* funType = getSymbolById(calledFuncIndex)->dType;
        checkFunctionReturnType(workingSymbolID, funType, yylineno);
        markInitialized(workingSymbolID);
        (yyval.nodeptr) = (yyvsp[(1) - (1)].nodeptr);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2733 "parser.tab.c"
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
#line 468 ".\\parser.y"


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
