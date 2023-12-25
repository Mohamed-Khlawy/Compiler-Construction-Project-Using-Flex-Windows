/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "Noname2.y"

	#include<stdio.h>
	int x[26];
	int name[26];
	float y[26];
	char z[26];
	char w[26][26];
	int loc[26];
	int ln[26];
	int show[3];
	int dd[3];

/* Line 371 of yacc.c  */
#line 81 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CH = 258,
     NUM = 259,
     ID = 260,
     FLO = 261,
     CHH = 262,
     HBL = 263,
     IF = 264,
     THEN = 265,
     ELSE = 266,
     INT = 267,
     HALMBZ = 268,
     FLOAT = 269,
     CHAR = 270,
     CHAIN = 271,
     FOR = 272,
     WHILE = 273,
     DO = 274
   };
#endif
/* Tokens.  */
#define CH 258
#define NUM 259
#define ID 260
#define FLO 261
#define CHH 262
#define HBL 263
#define IF 264
#define THEN 265
#define ELSE 266
#define INT 267
#define HALMBZ 268
#define FLOAT 269
#define CHAR 270
#define CHAIN 271
#define FOR 272
#define WHILE 273
#define DO 274



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "Noname2.y"

	int in;
	float fl;
	char ch;
	char st[26];


/* Line 387 of yacc.c  */
#line 170 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 198 "y.tab.c"

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  171

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,     2,     2,     2,    28,     2,
      23,    24,    33,    31,     2,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
      25,    27,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,    29,    22,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    42,    52,    56,    60,
      65,    70,    82,    84,    86,    90,    94,    99,   104,   109,
     113,   118,   123,   126,   131,   134,   139,   142,   147,   150,
     155,   164,   177,   181,   185,   188,   190,   194,   198,   203,
     208,   213,   218,   222,   226,   230,   234,   238,   243,   248,
     253,   258,   262,   266,   270,   274,   276,   280,   284,   286,
     288,   292,   294
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    36,    20,    37,    -1,    52,
      -1,    51,    -1,    50,    -1,    49,    -1,    48,    -1,    47,
      -1,    46,    -1,    45,    -1,    41,    -1,    39,    -1,    38,
      -1,    19,    21,    36,    20,    42,    22,    18,    23,    40,
      24,    -1,    18,    23,    40,    24,    21,    36,    20,    42,
      22,    -1,     5,    25,    52,    -1,     5,    26,    52,    -1,
       5,    25,    27,    52,    -1,     5,    26,    27,    52,    -1,
      17,    23,    44,    20,    43,    20,    42,    24,    21,    36,
      22,    -1,    50,    -1,    51,    -1,     5,    25,    52,    -1,
       5,    26,    52,    -1,     5,    25,    27,    52,    -1,     5,
      26,    27,    52,    -1,    12,     5,    27,    52,    -1,     5,
      27,    52,    -1,    13,    23,     5,    24,    -1,    13,    23,
       7,    24,    -1,    12,     5,    -1,    12,     5,    27,    52,
      -1,    14,     5,    -1,    14,     5,    27,    52,    -1,    15,
       5,    -1,    15,     5,    27,     3,    -1,    16,     5,    -1,
      16,     5,    27,     7,    -1,     9,    23,    48,    24,    10,
      21,    36,    22,    -1,     9,    23,    48,    24,    10,    21,
      36,    22,    11,    21,    36,    22,    -1,    49,    28,    49,
      -1,    49,    29,    49,    -1,    30,    49,    -1,    49,    -1,
      52,    25,    52,    -1,    52,    26,    52,    -1,    52,    25,
      27,    52,    -1,    52,    26,    27,    52,    -1,    52,    30,
      27,    52,    -1,    52,    25,    26,    52,    -1,    31,    31,
       5,    -1,    32,    32,     5,    -1,    31,     5,    31,    -1,
      32,     5,    32,    -1,     5,    27,    52,    -1,     5,    27,
      31,    52,    -1,     5,    27,    32,    52,    -1,     5,    27,
      33,    52,    -1,     5,    27,    34,    52,    -1,     5,    27,
       3,    -1,     5,    27,     7,    -1,    52,    31,    53,    -1,
      52,    32,    53,    -1,    53,    -1,    53,    33,    54,    -1,
      53,    34,    54,    -1,    54,    -1,     4,    -1,    23,    52,
      24,    -1,     5,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    41,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    57,   165,   257,   264,   271,
     278,   285,   566,   571,   577,   584,   591,   598,   605,   617,
     629,   653,   662,   674,   689,   701,   717,   730,   746,   759,
     776,   786,   794,   799,   804,   809,   816,   818,   820,   822,
     824,   826,   830,   857,   884,   911,   939,   955,   979,  1003,
    1027,  1053,  1066,  1083,  1089,  1095,  1102,  1108,  1117,  1124,
    1130,  1136,  1151
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CH", "NUM", "ID", "FLO", "CHH", "HBL",
  "IF", "THEN", "ELSE", "INT", "HALMBZ", "FLOAT", "CHAR", "CHAIN", "FOR",
  "WHILE", "DO", "';'", "'{'", "'}'", "'('", "')'", "'<'", "'>'", "'='",
  "'&'", "'|'", "'!'", "'+'", "'-'", "'*'", "'/'", "$accept", "s", "f",
  "do", "while", "condition", "for", "count", "cond", "idd", "pr", "dec",
  "if", "lo", "rel", "inde", "ass", "stat", "term", "fact", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      59,   123,   125,    40,    41,    60,    62,    61,    38,   124,
      33,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    38,    39,    40,    40,    40,
      40,    41,    42,    42,    43,    43,    43,    43,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    52,    53,    53,    53,    54,
      54,    54,    54
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    10,     9,     3,     3,     4,
       4,    11,     1,     1,     3,     3,     4,     4,     4,     3,
       4,     4,     2,     4,     2,     4,     2,     4,     2,     4,
       8,    12,     3,     3,     2,     1,     3,     3,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     4,     4,     4,
       4,     3,     3,     3,     3,     1,     3,     3,     1,     1,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    69,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    14,
      13,    12,    11,    10,     9,     8,     7,     6,     5,     4,
      65,    68,     0,     0,    32,     0,    34,    36,    38,     0,
       0,     0,    71,     0,    44,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,     0,     0,     0,     0,    56,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    54,    52,    55,    53,     3,    42,    43,
       0,     0,    46,     0,    47,     0,    63,    64,    66,    67,
      57,    58,    59,    60,     0,    33,    30,    31,    35,    37,
      39,     0,     0,     0,     0,     0,     0,     0,    51,    48,
      49,    50,     0,    29,     0,     0,     0,     0,    17,     0,
      18,     0,     0,     6,     5,     0,    28,     0,     0,     0,
      19,    20,     0,     0,     0,     0,    24,     0,    25,     0,
       0,    22,    23,     0,     0,    40,    26,    27,     0,     0,
       0,     0,     0,    16,     0,     0,     0,    15,     0,    21,
      41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,    19,    20,    80,    21,   132,   126,    78,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -132
static const yytype_int16 yypact[] =
{
     124,  -132,    22,  -132,    32,    54,    38,    65,    76,    86,
      56,    92,    99,    70,    70,    -1,     1,     7,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,     0,  -132,  -132,    87,
      50,  -132,    31,    67,    94,     6,    95,   108,   121,    11,
     147,   124,  -132,    -6,  -132,    87,   122,   159,   133,   161,
    -132,   124,    70,    70,    62,   104,   142,    70,    70,    70,
      70,  -132,  -132,    70,    70,    70,    70,    55,   146,     0,
      70,   149,   150,    70,   168,   170,   148,   173,   162,    69,
     157,   164,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,
      70,    70,    55,    70,    55,    70,    50,    50,  -132,  -132,
      55,    55,    55,    55,   175,    55,  -132,  -132,    55,  -132,
    -132,    70,   160,   181,   140,   145,   167,   124,    55,    55,
      55,    55,   169,    55,    70,    74,   171,    70,    55,    70,
      55,   124,   172,   174,   176,   124,    55,   153,   156,    16,
      55,    55,   177,   182,    -8,    70,    55,    70,    55,    22,
     165,  -132,  -132,   124,   178,   184,    55,    55,   183,   180,
     147,   185,   124,  -132,   179,   124,    -5,  -132,    36,  -132,
    -132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,   -39,   -48,  -132,  -132,    33,  -132,  -131,  -132,  -132,
    -132,  -132,  -132,   166,    -9,  -108,  -107,   -13,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -24
static const yytype_int16 yytable[] =
{
      43,    45,    81,    87,    46,    44,    48,    50,   150,   133,
     134,    71,    51,    72,   155,    51,    76,   169,    82,    67,
      45,   149,   159,    77,    69,    57,    58,    51,    52,    53,
      47,   151,   152,    49,    61,     1,    42,     3,    62,    45,
      45,    92,    94,    88,    89,   133,   134,    15,    16,    32,
     100,   101,   102,   103,    13,    33,    51,   105,   170,    34,
     108,    35,    63,    64,    65,    66,     1,    42,     3,    87,
      36,     1,    42,     3,     1,    42,     3,   118,   119,    39,
     120,    37,   121,    59,    60,    13,    57,    58,    90,    91,
      13,    38,   142,    13,   114,   115,   144,    14,   123,   137,
     138,   128,   130,    96,    97,    87,    98,    99,     1,    42,
       3,   136,    54,    55,   140,    40,   141,    56,    57,    58,
      41,    70,    73,   166,   146,   148,   168,    13,     1,     2,
       3,    93,   156,     4,   157,    74,     5,     6,     7,     8,
       9,    10,    11,    12,     1,    42,     3,    13,    75,     1,
      42,     3,    79,    83,    14,    15,    16,     1,    42,     3,
       1,    42,     3,    13,    84,    85,    86,   127,    13,    95,
     104,   109,   129,   106,   107,   111,    13,   110,   112,    13,
     145,   116,   113,   147,   117,   122,   125,   124,   131,   158,
     135,   139,     0,   164,   143,   161,   -22,   153,   -23,    68,
     154,   160,   163,   167,   162,     0,   165
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-132)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      13,    14,    41,    51,     5,    14,     5,     0,   139,   117,
     117,     5,    20,     7,    22,    20,     5,    22,    24,    32,
      33,     5,   153,    12,    33,    31,    32,    20,    28,    29,
      31,   139,   139,    32,     3,     4,     5,     6,     7,    52,
      53,    54,    55,    52,    53,   153,   153,    31,    32,    27,
      63,    64,    65,    66,    23,    23,    20,    70,    22,     5,
      73,    23,    31,    32,    33,    34,     4,     5,     6,   117,
       5,     4,     5,     6,     4,     5,     6,    90,    91,    23,
      93,     5,    95,    33,    34,    23,    31,    32,    26,    27,
      23,     5,   131,    23,    25,    26,   135,    30,   111,    25,
      26,   114,   115,    57,    58,   153,    59,    60,     4,     5,
       6,   124,    25,    26,   127,    23,   129,    30,    31,    32,
      21,    27,    27,   162,   137,   138,   165,    23,     4,     5,
       6,    27,   145,     9,   147,    27,    12,    13,    14,    15,
      16,    17,    18,    19,     4,     5,     6,    23,    27,     4,
       5,     6,     5,    31,    30,    31,    32,     4,     5,     6,
       4,     5,     6,    23,     5,    32,     5,    27,    23,    27,
      24,     3,    27,    24,    24,    27,    23,     7,     5,    23,
      27,    24,    20,    27,    20,    10,     5,    27,    21,    24,
      21,    20,    -1,   160,    22,    11,    22,    20,    22,    33,
      18,    23,    22,    24,    21,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     9,    12,    13,    14,    15,    16,
      17,    18,    19,    23,    30,    31,    32,    36,    37,    38,
      39,    41,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    27,    23,     5,    23,     5,     5,     5,    23,
      23,    21,     5,    52,    49,    52,     5,    31,     5,    32,
       0,    20,    28,    29,    25,    26,    30,    31,    32,    33,
      34,     3,     7,    31,    32,    33,    34,    52,    48,    49,
      27,     5,     7,    27,    27,    27,     5,    12,    44,     5,
      40,    36,    24,    31,     5,    32,     5,    37,    49,    49,
      26,    27,    52,    27,    52,    27,    53,    53,    54,    54,
      52,    52,    52,    52,    24,    52,    24,    24,    52,     3,
       7,    27,     5,    20,    25,    26,    24,    20,    52,    52,
      52,    52,    10,    52,    27,     5,    43,    27,    52,    27,
      52,    21,    42,    50,    51,    21,    52,    25,    26,    20,
      52,    52,    36,    22,    36,    27,    52,    27,    52,     5,
      42,    50,    51,    20,    18,    22,    52,    52,    24,    42,
      23,    11,    21,    22,    40,    21,    36,    24,    36,    22,
      22
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
/* Line 1792 of yacc.c  */
#line 42 "Noname2.y"
    {
	printf("the result = %g \n",(yyvsp[(1) - (1)].fl));
}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 47 "Noname2.y"
    {printf("the result = %d \n",(yyvsp[(1) - (1)].in));}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 48 "Noname2.y"
    {printf("the result = %d \n",(yyvsp[(1) - (1)].in));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 58 "Noname2.y"
    {
	if (dd[2]==2)
	{
		if(dd[0]==1)
			x[dd[1]]--;
		else if(dd[0]==2)
			x[dd[1]]++;
		else if (dd[0] == 3)
			x[dd[1]] /= 2;
		else if (dd[0] == 4)
			x[dd[1]] *= 2;
	}

	if (show[0] == 1 && dd[0] == 1)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] += (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] < show[2] );
	}

	else if (show[0] == 3 && dd[0] == 1)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] += (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] <= show[2] );
	}

	else if (show[0] == 1 && dd[0] == 3)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] *= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] < show[2] );
	}

	else if (show[0] == 3 && dd[0] == 3)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] *= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] <= show[2] );
	}

	else if (show[0] == 2 && dd[0] == 2)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] -= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] > show[2] );
	}

	else if (show[0] == 4 && dd[0] == 2)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] -= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] >= show[2] );
	}

	else if (show[0] == 2 && dd[0] == 4)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] /= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] > show[2] );
	}

	else if (show[0] == 4 && dd[0] == 4)
	{
		do 
		{
			printf("loop is excuted \n");
			x[dd[1]] /= (yyvsp[(5) - (10)].in);
		}

		while ( x[show[1]] >= show[2] );
	}

	else 
	{
		printf("This loop syntax is not true, please correct it!!! \n");
	}
}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 166 "Noname2.y"
    {
	if (dd[2]==2)
	{
		if(dd[0]==1)
			x[dd[1]]--;
		else if(dd[0]==2)
			x[dd[1]]++;
		else if (dd[0] == 3)
			x[dd[1]] /= 2;
		else if (dd[0] == 4)
			x[dd[1]] *= 2;
	}

	if (show[0] == 1 && dd[0] == 1)
	{
		while ( x[show[1]] < show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] += (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 3 && dd[0] == 1)
	{
		while ( x[show[1]] <= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] += (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 1 && dd[0] == 3)
	{
		while ( x[show[1]] < show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] *= (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 3 && dd[0] == 3)
	{
		while ( x[show[1]] <= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] *= (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 2 && dd[0] == 2)
	{
		while ( x[show[1]] > show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] -= (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 4 && dd[0] == 2)
	{
		while ( x[show[1]] >= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] -= (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 2 && dd[0] == 4)
	{
		while ( x[show[1]] > show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] /= (yyvsp[(8) - (9)].in);
		}
	}

	else if (show[0] == 4 && dd[0] == 4)
	{
		while ( x[show[1]] >= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] /= (yyvsp[(8) - (9)].in);
		}
	}

	else 
	{
		printf("This loop syntax is not true, please correct it!!! \n");
	}
}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 258 "Noname2.y"
    {
	show[0]=1;
	show[1]=(yyvsp[(1) - (3)].in);
	show[2]=(yyvsp[(3) - (3)].fl);
}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 265 "Noname2.y"
    {
	show[0]=2;
	show[1]=(yyvsp[(1) - (3)].in);
	show[2]=(yyvsp[(3) - (3)].fl);
}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 272 "Noname2.y"
    {
	show[0]=3;
	show[1]=(yyvsp[(1) - (4)].in);
	show[2]=(yyvsp[(4) - (4)].fl);
}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 279 "Noname2.y"
    {
	show[0]=4;
	show[1]=(yyvsp[(1) - (4)].in);
	show[2]=(yyvsp[(4) - (4)].fl);
}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 286 "Noname2.y"
    { 
	int z=0,y=0;
	if (ln[show[1]]==1)
		z=1;
	if (dd[2]==1)
	{
		y=1;
		if(dd[0]==1)
			loc[dd[1]]--;
		else if(dd[0]==2)
			loc[dd[1]]++;
		else if (dd[0] == 3)
			loc[dd[1]] /= 2;
		else if (dd[0] == 4)
			loc[dd[1]] *= 2;
	}
	else 
	{	if(dd[0]==1)
			x[dd[1]]--;
		else if(dd[0]==2)
			x[dd[1]]++;
		else if (dd[0] == 3)
			x[dd[1]] /= 2;
		else if (dd[0] == 4)
			x[dd[1]] *= 2;
	}						

	if(show[0]==1&& dd[0]==1)
	{ 
		//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);
		if(y==1&&z==1)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); loc[show[1]] < show[2] ; loc[dd[1]] += (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else if(y==0&&z==0)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); x[show[1]] < show[2] ; x[dd[1]] += (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else  if(y==1&&z==0)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); x[show[1]] < show[2] ; loc[dd[1]] += (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else  
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); loc[show[1]] < show[2] ; x[dd[1]] += (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}
	}
	
	else if(show[0]==1&& dd[0]==3)
	{ 
		//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);
		if(y==1&&z==1)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); loc[show[1]] < show[2] ; loc[dd[1]] *= (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else if(y==0&&z==0)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); x[show[1]] < show[2] ; x[dd[1]] *= (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else  if(y==1&&z==0)
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); x[show[1]] < show[2] ; loc[dd[1]] *= (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}

		else  
		{
			int i;
			for(i=(yyvsp[(3) - (11)].in); loc[show[1]] < show[2] ; x[dd[1]] *= (yyvsp[(7) - (11)].in) )
				printf("loop is excuted \n");
		}
	}

	else if(show[0]==2&& dd[0]==2)
		{
			//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);

			if(y==1&&z==1)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); loc[show[1]] > show[2] ; loc[dd[1]] -= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}

			else if(y==0&&z==0)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); x[show[1]] > show[2] ; x[dd[1]] -= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
			else  if(y==1&&z==0)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); x[show[1]] > show[2] ; loc[dd[1]] -= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
			else  
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); loc[show[1]] > show[2] ; x[dd[1]] -= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
		}
		
	else if (show[0] == 3 && dd[0] == 1)
		{
			if(y==1&&z==1)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] <= show[2] ; loc[dd[1]] += (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else if(y==0&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] <= show[2] ; x[dd[1]] += (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else  if(y==1&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] <= show[2] ; loc[dd[1]] += (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else  
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] <= show[2] ; x[dd[1]] += (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}			
		}

	else if (show[0] == 3 && dd[0] == 3)
		{
			if(y==1&&z==1)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] <= show[2] ; loc[dd[1]] *= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else if(y==0&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] <= show[2] ; x[dd[1]] *= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else  if(y==1&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] <= show[2] ; loc[dd[1]] *= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

			else  
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] <= show[2] ; x[dd[1]] *= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}			
		}

	else if (show[0] == 4 && dd[0] == 2)
			{
				if(y==1&&z==1)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] >= show[2] ; loc[dd[1]] -= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

				else if(y==0&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] >= show[2] ; x[dd[1]] -= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
				else  if(y==1&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] >= show[2] ; loc[dd[1]] -= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
				else  
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] >= show[2] ; x[dd[1]] -= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
			}

	else if (show[0] == 4 && dd[0] == 4)
			{
				if(y==1&&z==1)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] >= show[2] ; loc[dd[1]] /= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}

				else if(y==0&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] >= show[2] ; x[dd[1]] /= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
				else  if(y==1&&z==0)
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); x[show[1]] >= show[2] ; loc[dd[1]] /= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
				else  
				{
					int i;
					for(i=(yyvsp[(3) - (11)].in); loc[show[1]] >= show[2] ; x[dd[1]] /= (yyvsp[(7) - (11)].in) )
						printf("loop is excuted \n");
				}
			}

	else if(show[0]==2&& dd[0]==4)
		{
			//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);

			if(y==1&&z==1)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); loc[show[1]] > show[2] ; loc[dd[1]] /= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}

			else if(y==0&&z==0)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); x[show[1]] > show[2] ; x[dd[1]] /= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
			else  if(y==1&&z==0)
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); x[show[1]] > show[2] ; loc[dd[1]] /= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
			else  
			{
				int i;
				for(i=(yyvsp[(3) - (11)].in); loc[show[1]] > show[2] ; x[dd[1]] /= (yyvsp[(7) - (11)].in) )
					printf("loop is excuted \n");
			}
		}

	else 
	{
		printf("This loop syntax is not true, please correct it!!! \n");
	}
}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 567 "Noname2.y"
    {
	(yyval.in)=(yyvsp[(1) - (1)].in);
}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 572 "Noname2.y"
    {
	(yyval.in)=(yyvsp[(1) - (1)].in);
}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 578 "Noname2.y"
    {
	show[0]=1;
	show[1]=(yyvsp[(1) - (3)].in);
	show[2]=(yyvsp[(3) - (3)].fl);
}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 585 "Noname2.y"
    {
	show[0]=2;
	show[1]=(yyvsp[(1) - (3)].in);
	show[2]=(yyvsp[(3) - (3)].fl);
}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 592 "Noname2.y"
    {
	show[0]=3;
	show[1]=(yyvsp[(1) - (4)].in);
	show[2]=(yyvsp[(4) - (4)].fl);
}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 599 "Noname2.y"
    {
	show[0]=4;
	show[1]=(yyvsp[(1) - (4)].in);
	show[2]=(yyvsp[(4) - (4)].fl);
}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 606 "Noname2.y"
    {
	if(ln[(yyvsp[(2) - (4)].in)]==0)
	{
		loc[(yyvsp[(2) - (4)].in)]= (yyvsp[(4) - (4)].fl);
		(yyval.in)=loc[(yyvsp[(2) - (4)].in)];
		ln[(yyvsp[(2) - (4)].in)]=1;
	}
	else 
		printf("the variable is decleare before");
}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 618 "Noname2.y"
    {
	if(name[(yyvsp[(1) - (3)].in)]==1)
	{
		(yyval.in)=x[(yyvsp[(1) - (3)].in)];
		x[(yyvsp[(1) - (3)].in)]=(yyvsp[(3) - (3)].fl);
	}
	else 
		printf("this variable is decleared before or not decleare before");
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 630 "Noname2.y"
    {
	if(name[(yyvsp[(3) - (4)].in)]==1)
		printf("%d \n",x[(yyvsp[(3) - (4)].in)]);
	else
		if (name[(yyvsp[(3) - (4)].in)]==2)
			printf("%g \n",y[(yyvsp[(3) - (4)].in)]);
		else 
			if(name[(yyvsp[(3) - (4)].in)]==3)
				printf("%c \n",z[(yyvsp[(3) - (4)].in)]);
			else 
				if(name[(yyvsp[(3) - (4)].in)]==4)
				{
					int i;
					for(i=1;i<w[(yyvsp[(3) - (4)].in)][0];i++)
						printf("%c",w[(yyvsp[(3) - (4)].in)][i]);
					printf("\n");
				}
				else 
					printf("variable is not decleared");
}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 654 "Noname2.y"
    {
	 int i;
	for(i=1;i<(yyvsp[(3) - (4)].st)[0];i++)
	printf("%c",(yyvsp[(3) - (4)].st)[i]);
	printf("\n");
}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 663 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (2)].in)]==0)
		name[(yyvsp[(2) - (2)].in)]=1;
	else
		if(name[(yyvsp[(2) - (2)].in)]==1)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 675 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (4)].in)]==0)
	{
		name[(yyvsp[(2) - (4)].in)]=1;
		x[(yyvsp[(2) - (4)].in)]=(yyvsp[(4) - (4)].fl);
	}
	else 
		if(name[(yyvsp[(2) - (4)].in)]==1)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 690 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (2)].in)]==0)
		name[(yyvsp[(2) - (2)].in)]=2;
	else 
		if(name[(yyvsp[(2) - (2)].in)]==2)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 702 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (4)].in)]==0)
	{
		name[(yyvsp[(2) - (4)].in)]=2;
		y[(yyvsp[(2) - (4)].in)]=(yyvsp[(4) - (4)].fl);
	}
	else 
		if(name[(yyvsp[(2) - (4)].in)]==2)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 718 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (2)].in)]==0)
		name[(yyvsp[(2) - (2)].in)]=3;
	else 
		if(name[(yyvsp[(2) - (2)].in)]==3)
			printf("this variable is decleare before in same type \n");
		else 
			printf("this variable is decleared but in variouse type \n");
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 731 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (4)].in)]==0)
	{
		name[(yyvsp[(2) - (4)].in)]=3;
		z[(yyvsp[(2) - (4)].in)]=(yyvsp[(4) - (4)].ch);
	}
	else 
		if(name[(yyvsp[(2) - (4)].in)]==3)
			printf("this variable is decleare before in same type \n");
		else 
			printf("this variable is decleared but in variouse type \n");
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 747 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (2)].in)]==0)
		name[(yyvsp[(2) - (2)].in)]=4;
	else 
		if(name[(yyvsp[(2) - (2)].in)]==4)
			yyerror("declare in same type");
		else 
			yyerror("declear in vaious type");
}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 760 "Noname2.y"
    {
	if(name[(yyvsp[(2) - (4)].in)]==0)
	{
		name[(yyvsp[(2) - (4)].in)]=4;
		int i;
		for(i=0;i<(yyvsp[(4) - (4)].st)[0];i++)
			w[(yyvsp[(2) - (4)].in)][i]=(yyvsp[(4) - (4)].st)[i];
	}
	else 
		if(name[(yyvsp[(2) - (4)].in)]==4)
			yyerror("declare in same type");
		else 
			yyerror("declear in vaious type");
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 777 "Noname2.y"
    {
	if((yyvsp[(3) - (8)].in)==0)
		printf("if not excuted \n");
	else 
		printf("if is excuted \n");
}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 787 "Noname2.y"
    {
	 if((yyvsp[(3) - (12)].in)==0)
		printf("else si excuted \n");
	else 
		printf("if is excuted \n");
}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 795 "Noname2.y"
    {
	(yyval.in)=(yyvsp[(1) - (3)].in)&&(yyvsp[(3) - (3)].in);
}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 800 "Noname2.y"
    {
	(yyval.in)=(yyvsp[(1) - (3)].in)||(yyvsp[(3) - (3)].in);
}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 805 "Noname2.y"
    {
	(yyval.in)=!(yyvsp[(2) - (2)].in);
}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 810 "Noname2.y"
    {
	(yyval.in)=(yyvsp[(1) - (1)].in);
}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 816 "Noname2.y"
    {(yyval.in)=(yyvsp[(1) - (3)].fl)<(yyvsp[(3) - (3)].fl);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 818 "Noname2.y"
    {(yyval.in)=(yyvsp[(1) - (3)].fl)>(yyvsp[(3) - (3)].fl);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 820 "Noname2.y"
    {(yyval.in)=((yyvsp[(1) - (4)].fl)<=(yyvsp[(4) - (4)].fl));}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 822 "Noname2.y"
    {(yyval.in)=((yyvsp[(1) - (4)].fl)>=(yyvsp[(4) - (4)].fl));}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 824 "Noname2.y"
    {(yyval.in)=((yyvsp[(1) - (4)].fl)==(yyvsp[(4) - (4)].fl));}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 826 "Noname2.y"
    {(yyval.in)=((yyvsp[(1) - (4)].fl)!=(yyvsp[(4) - (4)].fl));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 831 "Noname2.y"
    {
	if(ln[(yyvsp[(3) - (3)].in)]==1)
	{
		++loc[(yyvsp[(3) - (3)].in)]; 
		(yyval.in)=1;
		dd[0]=1;
		dd[1]=(yyvsp[(3) - (3)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(3) - (3)].in)]==1)
		{
			++x[(yyvsp[(3) - (3)].in)];
			(yyval.in)=1;
			dd[0]=1;
			dd[1]=(yyvsp[(3) - (3)].in);
			dd[2]=2;
		}
		else 
			if(name[(yyvsp[(3) - (3)].in)]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 858 "Noname2.y"
    {
	if(ln[(yyvsp[(3) - (3)].in)]==1)
	{
		--loc[(yyvsp[(3) - (3)].in)];
		(yyval.in)=1;
		dd[0]=2;
		dd[1]=(yyvsp[(3) - (3)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(3) - (3)].in)]==1)
		{
			--x[(yyvsp[(3) - (3)].in)];
			(yyval.in)=1;
			dd[0]=2;
			dd[1]=(yyvsp[(3) - (3)].in);
			dd[2]=2;
		}
		else 
			if(name[(yyvsp[(3) - (3)].in)]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 885 "Noname2.y"
    {
	if(ln[(yyvsp[(2) - (3)].in)]==1)
	{
		++loc[(yyvsp[(2) - (3)].in)]; 
		(yyval.in)=1;
		dd[0]=1;
		dd[1]=(yyvsp[(2) - (3)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(2) - (3)].in)]==1)
		{
			++x[(yyvsp[(2) - (3)].in)];
			(yyval.in)=1;
			dd[0]=1;
			dd[1]=(yyvsp[(2) - (3)].in);
			dd[2]=2;
		}
		else 
			if(name[(yyvsp[(2) - (3)].in)]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 912 "Noname2.y"
    {
	if(ln[(yyvsp[(2) - (3)].in)]==1)
	{
		--loc[(yyvsp[(2) - (3)].in)];
		(yyval.in)=1;
		dd[0]=2;
		dd[1]=(yyvsp[(2) - (3)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(2) - (3)].in)]==1)
		{
			--x[(yyvsp[(2) - (3)].in)];
			(yyval.in)=1;
			dd[0]=2;
			dd[1]=(yyvsp[(2) - (3)].in);
			dd[2]=2;
		}
		else 
			if(name[(yyvsp[(2) - (3)].in)]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 940 "Noname2.y"
    {
	(yyval.in)=-1;
	if(name[(yyvsp[(1) - (3)].in)]==1)
		x[(yyvsp[(1) - (3)].in)]=(yyvsp[(3) - (3)].fl);
	else 
		if(name[(yyvsp[(1) - (3)].in)]==0)
			printf("this variable not declare before \n");
		else 
			if(name[(yyvsp[(1) - (3)].in)]==2)
				y[(yyvsp[(1) - (3)].in)]=(yyvsp[(3) - (3)].fl);
			else 
				printf("this variable is not conpitable with operation\n");
}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 956 "Noname2.y"
    {
	if(ln[(yyvsp[(1) - (4)].in)]==1)
	{
		loc[(yyvsp[(1) - (4)].in)]=loc[(yyvsp[(1) - (4)].in)]+(yyvsp[(4) - (4)].fl);
		(yyval.in)=(yyvsp[(4) - (4)].fl);
		dd[0]=1;
		dd[1]=(yyvsp[(1) - (4)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(1) - (4)].in)]==1)
		{
			x[(yyvsp[(1) - (4)].in)]=x[(yyvsp[(1) - (4)].in)]+(yyvsp[(4) - (4)].fl);
			(yyval.in)=(yyvsp[(4) - (4)].fl);
			dd[0]=1;
			dd[1]=(yyvsp[(1) - (4)].in);
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 980 "Noname2.y"
    {
	if(ln[(yyvsp[(1) - (4)].in)]==1)
	{
		loc[(yyvsp[(1) - (4)].in)]=loc[(yyvsp[(1) - (4)].in)]-(yyvsp[(4) - (4)].fl);
		(yyval.in)=(yyvsp[(4) - (4)].fl);
		dd[0]=2;
		dd[1]=(yyvsp[(1) - (4)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(1) - (4)].in)]==1)
		{
			x[(yyvsp[(1) - (4)].in)]=x[(yyvsp[(1) - (4)].in)]-(yyvsp[(4) - (4)].fl);
			(yyval.in)=(yyvsp[(4) - (4)].fl);
			dd[0]=2;
			dd[1]=(yyvsp[(1) - (4)].in);
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 1004 "Noname2.y"
    {
	if(ln[(yyvsp[(1) - (4)].in)]==1)
	{
		loc[(yyvsp[(1) - (4)].in)]=loc[(yyvsp[(1) - (4)].in)]*(yyvsp[(4) - (4)].fl);
		(yyval.in)=(yyvsp[(4) - (4)].fl);
		dd[0]=3;
		dd[1]=(yyvsp[(1) - (4)].in);
		dd[2]=1;
	}
	else 
		if(name[(yyvsp[(1) - (4)].in)]==1)
		{
			x[(yyvsp[(1) - (4)].in)]=x[(yyvsp[(1) - (4)].in)]*(yyvsp[(4) - (4)].fl);
			(yyval.in)=(yyvsp[(4) - (4)].fl);
			dd[0]=3;
			dd[1]=(yyvsp[(1) - (4)].in);
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 1028 "Noname2.y"
    {
	if((yyvsp[(4) - (4)].fl)==0)
		printf("division by 0");
	else 
		if(ln[(yyvsp[(1) - (4)].in)]==1)
		{
			loc[(yyvsp[(1) - (4)].in)]=loc[(yyvsp[(1) - (4)].in)]/(yyvsp[(4) - (4)].fl);
			(yyval.in)=(yyvsp[(4) - (4)].fl);
			dd[0]=4;
			dd[1]=(yyvsp[(1) - (4)].in);
			dd[2]=1;
		}
		else  if(name[(yyvsp[(1) - (4)].in)]==1)
		{
			x[(yyvsp[(1) - (4)].in)]=x[(yyvsp[(1) - (4)].in)]/(yyvsp[(4) - (4)].fl);
			(yyval.in)=(yyvsp[(4) - (4)].fl);
			dd[0]=4;
			dd[1]=(yyvsp[(1) - (4)].in);
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");   
}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 1054 "Noname2.y"
    {
	if(name[(yyvsp[(1) - (3)].in)]==0)
		printf("you must declear this variable before you assign value \n");
	else 
		if(name[(yyvsp[(1) - (3)].in)]==3)
			z[(yyvsp[(1) - (3)].in)]=(yyvsp[(3) - (3)].ch);
		else 
			yyerror("not combitable");
}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 1067 "Noname2.y"
    {
	if(name[(yyvsp[(1) - (3)].in)]==0)
		yyerror("not decleared ");
	else 
		if(name[(yyvsp[(1) - (3)].in)]==4)
		{
			int i;
			for(i=0;i<(yyvsp[(3) - (3)].st)[0];i++)
				w[(yyvsp[(1) - (3)].in)][i]=(yyvsp[(3) - (3)].st)[i];
		}
		else 
			yyerror("not combitable ");
}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 1084 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (3)].fl)+(yyvsp[(3) - (3)].fl);
}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 1090 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (3)].fl)-(yyvsp[(3) - (3)].fl);
}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 1096 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (1)].fl);
}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 1103 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (3)].fl)*(yyvsp[(3) - (3)].fl);
}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 1109 "Noname2.y"
    {
	if((yyvsp[(3) - (3)].fl) == 0)
		printf("divison by 0");
	else 
		(yyval.fl)=(yyvsp[(1) - (3)].fl)/(yyvsp[(3) - (3)].fl);
}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 1118 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (1)].fl);
}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 1125 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (1)].in);
}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 1131 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(2) - (3)].fl);
}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 1137 "Noname2.y"
    {
	if(name[(yyvsp[(1) - (1)].in)]==1)
		(yyval.fl)=x[(yyvsp[(1) - (1)].in)];
	else
		if(name[(yyvsp[(1) - (1)].in)]==2)
			(yyval.fl)=y[(yyvsp[(1) - (1)].in)];
		else 
			if (name[(yyvsp[(1) - (1)].in)]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is not comptable iwth operation \n");	 
}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1152 "Noname2.y"
    {
	(yyval.fl)=(yyvsp[(1) - (1)].fl);
}
    break;


/* Line 1792 of yacc.c  */
#line 2782 "y.tab.c"
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


/* Line 2055 of yacc.c  */
#line 1155 "Noname2.y"



int yyerror(char* s)
{
	printf("error in %s \n",s);
	return 0;
}


int main()
{
	yyparse();
}