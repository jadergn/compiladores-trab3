/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "analisador_sintatico.y"

#include <stdio.h>
#include "hash.h"

Lista **tab_variaveis, **tab_funcoes;
Lista *var, *func;

int i;
int qtd_parametros;
int tipo_parametros[10];
extern int tipo;
extern char * yytext;
extern char identificador[100];
extern int num_linha;
extern char expressao[2000];
extern int escopo;


/* Line 268 of yacc.c  */
#line 90 "analisador_sintatico.tab.c"

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
     token_pr_algoritmo = 258,
     token_pr_variaveis = 259,
     token_pr_fim_variaveis = 260,
     token_pr_inicio = 261,
     token_pr_fim = 262,
     token_pr_inteiro = 263,
     token_pr_inteiros = 264,
     token_pr_caractere = 265,
     token_pr_caracteres = 266,
     token_pr_real = 267,
     token_pr_reais = 268,
     token_pr_literal = 269,
     token_pr_literais = 270,
     token_pr_logico = 271,
     token_pr_logicos = 272,
     token_pr_matriz = 273,
     token_pr_se = 274,
     token_pr_entao = 275,
     token_pr_senao = 276,
     token_pr_fim_se = 277,
     token_pr_para = 278,
     token_pr_de = 279,
     token_pr_ate = 280,
     token_pr_faca = 281,
     token_pr_passo = 282,
     token_pr_fim_para = 283,
     token_pr_enquanto = 284,
     token_pr_fim_enquanto = 285,
     token_pr_imprima = 286,
     token_pr_leia = 287,
     token_pr_imprima_ln = 288,
     token_pr_leia_ln = 289,
     token_pr_maximo = 290,
     token_pr_minimo = 291,
     token_pr_media = 292,
     token_pr_funcao = 293,
     token_pr_retorne = 294,
     token_pr_verdadeiro = 295,
     token_pr_falso = 296,
     token_pr_e = 297,
     token_pr_ou = 298,
     token_pr_nao = 299,
     token_inteiro = 300,
     token_real = 301,
     token_caractere = 302,
     token_literal = 303,
     token_soma = 304,
     token_subtracao = 305,
     token_divisao = 306,
     token_multiplicacao = 307,
     token_incrementador = 308,
     token_modulo = 309,
     token_maior = 310,
     token_maior_igual = 311,
     token_menor = 312,
     token_menor_igual = 313,
     token_igual = 314,
     token_diferente = 315,
     token_e = 316,
     token_e_bit = 317,
     token_ou = 318,
     token_ou_bit = 319,
     token_xor_bit = 320,
     token_til = 321,
     token_nao = 322,
     token_aspas_dupla = 323,
     token_aspas_simples = 324,
     token_abre_parenteses = 325,
     token_fecha_parenteses = 326,
     token_abre_chaves = 327,
     token_fecha_chaves = 328,
     token_abre_colchetes = 329,
     token_fecha_colchetes = 330,
     token_tralha = 331,
     token_contra_barra = 332,
     token_ponto = 333,
     token_virgula = 334,
     token_dois_pontos = 335,
     token_ponto_virgula = 336,
     token_atribuicao = 337,
     token_identificador = 338,
     token_desconhecido = 339,
     token_pr_escolha = 340,
     token_pr_caso = 341,
     token_pr_fim_escolha = 342,
     token_pr_default = 343
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 220 "analisador_sintatico.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNRULES -- Number of states.  */
#define YYNSTATES  251

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    16,    20,    23,    24,    29,
      35,    37,    39,    43,    45,    47,    49,    51,    53,    55,
      60,    65,    69,    71,    73,    75,    77,    79,    83,    86,
      89,    91,    93,    96,    98,   100,   102,   104,   106,   108,
     110,   113,   118,   121,   125,   132,   135,   137,   144,   150,
     156,   162,   170,   176,   186,   197,   200,   204,   208,   212,
     216,   218,   222,   226,   228,   232,   234,   238,   240,   244,
     246,   250,   254,   256,   260,   264,   268,   272,   274,   278,
     282,   284,   288,   292,   296,   298,   301,   304,   307,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     336,   340,   346,   352,   358,   364,   369,   374,   379,   383,
     385,   388,   390,   397,   402,   406,   409,   413,   415,   419
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      90,     0,    -1,    91,   127,    92,   100,    -1,    91,    92,
     100,    -1,     3,    83,    81,    -1,     4,    93,     5,    -1,
       4,     5,    -1,    -1,    95,    80,    94,    81,    -1,    93,
      95,    80,    94,    81,    -1,    96,    -1,    97,    -1,    95,
      79,    83,    -1,    83,    -1,     8,    -1,    12,    -1,    10,
      -1,    14,    -1,    16,    -1,    18,    98,    24,    99,    -1,
      98,    74,    45,    75,    -1,    74,    45,    75,    -1,     9,
      -1,    13,    -1,    11,    -1,    15,    -1,    17,    -1,     6,
     101,     7,    -1,     6,     7,    -1,   101,   102,    -1,   102,
      -1,   104,    -1,   124,    81,    -1,   125,    -1,   105,    -1,
     109,    -1,   110,    -1,   111,    -1,   106,    -1,    83,    -1,
      83,    98,    -1,   103,    82,   113,    81,    -1,    39,    81,
      -1,    39,   113,    81,    -1,    85,    70,    83,    71,   107,
      87,    -1,   107,   108,    -1,   108,    -1,    86,   123,    80,
     101,    23,    81,    -1,    86,   123,    80,    23,    81,    -1,
      88,    80,   101,    23,    81,    -1,    19,   113,    20,   101,
      22,    -1,    19,   113,    20,   101,    21,   101,    22,    -1,
      29,   113,    26,   101,    30,    -1,    23,   103,    24,   113,
      25,   113,    26,   101,    28,    -1,    23,   103,    24,   113,
      25,   113,   112,    26,   101,    28,    -1,    27,    45,    -1,
      27,    49,    45,    -1,    27,    50,    45,    -1,   113,    43,
     114,    -1,   113,    63,   114,    -1,   114,    -1,   114,    42,
     115,    -1,   114,    61,   115,    -1,   115,    -1,   115,    64,
     116,    -1,   116,    -1,   116,    65,   117,    -1,   117,    -1,
     117,    62,   118,    -1,   118,    -1,   118,    59,   119,    -1,
     118,    60,   119,    -1,   119,    -1,   119,    57,   120,    -1,
     119,    58,   120,    -1,   119,    55,   120,    -1,   119,    56,
     120,    -1,   120,    -1,   120,    49,   121,    -1,   120,    50,
     121,    -1,   121,    -1,   121,    52,   122,    -1,   121,    51,
     122,    -1,   121,    54,   122,    -1,   122,    -1,    49,   122,
      -1,    50,   122,    -1,    67,   122,    -1,    70,   113,    71,
      -1,    83,    -1,   123,    -1,   124,    -1,   125,    -1,    48,
      -1,    45,    -1,    46,    -1,    47,    -1,    40,    -1,    41,
      -1,    83,    70,   126,    71,    -1,    83,    70,    71,    -1,
      31,    70,   126,    71,    81,    -1,    32,    70,   126,    71,
      81,    -1,    34,    70,   126,    71,    81,    -1,    33,    70,
     126,    71,    81,    -1,    35,    70,   126,    71,    -1,    36,
      70,   126,    71,    -1,    37,    70,   126,    71,    -1,   126,
      79,   113,    -1,   113,    -1,   127,   128,    -1,   128,    -1,
      38,    83,   129,    80,    96,   100,    -1,    38,    83,   129,
     100,    -1,    70,   130,    71,    -1,    70,    71,    -1,   130,
      79,   131,    -1,   131,    -1,    83,    80,    96,    -1,    83,
      80,    97,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   115,   115,   116,   125,   136,   137,   138,   142,   158,
     177,   178,   182,   187,   195,   196,   197,   198,   199,   203,
     207,   208,   212,   213,   214,   215,   216,   221,   226,   230,
     231,   235,   248,   249,   250,   251,   252,   253,   254,   258,
     271,   275,   279,   280,   285,   289,   290,   294,   295,   296,
     301,   302,   306,   310,   311,   315,   316,   317,   321,   322,
     323,   327,   328,   329,   333,   334,   338,   339,   343,   344,
     348,   349,   350,   354,   355,   356,   357,   358,   362,   363,
     364,   368,   369,   370,   371,   375,   376,   377,   378,   379,
     391,   392,   393,   397,   398,   399,   400,   401,   402,   406,
     407,   411,   421,   431,   441,   451,   462,   472,   485,   491,
     500,   501,   505,   516,   523,   524,   528,   529,   533,   534
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "token_pr_algoritmo",
  "token_pr_variaveis", "token_pr_fim_variaveis", "token_pr_inicio",
  "token_pr_fim", "token_pr_inteiro", "token_pr_inteiros",
  "token_pr_caractere", "token_pr_caracteres", "token_pr_real",
  "token_pr_reais", "token_pr_literal", "token_pr_literais",
  "token_pr_logico", "token_pr_logicos", "token_pr_matriz", "token_pr_se",
  "token_pr_entao", "token_pr_senao", "token_pr_fim_se", "token_pr_para",
  "token_pr_de", "token_pr_ate", "token_pr_faca", "token_pr_passo",
  "token_pr_fim_para", "token_pr_enquanto", "token_pr_fim_enquanto",
  "token_pr_imprima", "token_pr_leia", "token_pr_imprima_ln",
  "token_pr_leia_ln", "token_pr_maximo", "token_pr_minimo",
  "token_pr_media", "token_pr_funcao", "token_pr_retorne",
  "token_pr_verdadeiro", "token_pr_falso", "token_pr_e", "token_pr_ou",
  "token_pr_nao", "token_inteiro", "token_real", "token_caractere",
  "token_literal", "token_soma", "token_subtracao", "token_divisao",
  "token_multiplicacao", "token_incrementador", "token_modulo",
  "token_maior", "token_maior_igual", "token_menor", "token_menor_igual",
  "token_igual", "token_diferente", "token_e", "token_e_bit", "token_ou",
  "token_ou_bit", "token_xor_bit", "token_til", "token_nao",
  "token_aspas_dupla", "token_aspas_simples", "token_abre_parenteses",
  "token_fecha_parenteses", "token_abre_chaves", "token_fecha_chaves",
  "token_abre_colchetes", "token_fecha_colchetes", "token_tralha",
  "token_contra_barra", "token_ponto", "token_virgula",
  "token_dois_pontos", "token_ponto_virgula", "token_atribuicao",
  "token_identificador", "token_desconhecido", "token_pr_escolha",
  "token_pr_caso", "token_pr_fim_escolha", "token_pr_default", "$accept",
  "algoritmo", "declaracao_algoritmo", "bloco_variaveis",
  "declaracao_variaveis", "tipo_variavel", "lista_variaveis",
  "tipo_primitivo", "tipo_matriz", "matriz_colchetes",
  "tipo_primitivo_plural", "bloco_inicio", "lista_comandos", "comando",
  "valor_esquerda", "atribuicao", "comando_retorne", "comando_escolha",
  "casos", "caso", "comando_se", "comando_enquanto", "comando_para",
  "passo", "expressao", "termo_1", "termo_2", "termo_3", "termo_4",
  "termo_5", "termo_6", "termo_7", "termo_8", "termo_9", "valor_primitivo",
  "chamada_funcao", "chamada_funcao_interna", "paramentros_chamada_funcao",
  "declacarao_funcoes", "declaracao_funcao",
  "paramentros_funcao_parenteses", "paramentros_funcao",
  "paramentro_funcao", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    97,
      98,    98,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   105,   105,   106,   107,   107,   108,   108,   108,
     109,   109,   110,   111,   111,   112,   112,   112,   113,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   118,   119,   119,   119,   119,   119,   120,   120,
     120,   121,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     3,     3,     2,     0,     4,     5,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     1,     1,     1,     1,     1,     3,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     3,     6,     2,     1,     6,     5,     5,
       5,     7,     5,     9,    10,     2,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     5,     5,     5,     5,     4,     4,     4,     3,     1,
       2,     1,     6,     4,     3,     2,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     1,     0,     0,     0,     7,
     111,     4,     6,    13,     0,     0,     0,     0,     3,     0,
     110,     5,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    30,     0,    31,    34,    38,    35,    36,    37,
       0,    33,     2,     0,    12,    14,    16,    15,    17,    18,
       0,     0,    10,    11,   115,     0,     0,   117,     0,   113,
      97,    98,    94,    95,    96,    93,     0,     0,     0,     0,
      89,     0,    60,    63,    65,    67,    69,    72,    77,    80,
      84,    90,    91,    92,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,    40,     0,
      27,    29,     0,    32,     0,     0,     8,     0,   114,     0,
       0,    85,    86,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,    43,   100,     0,     0,     0,     0,
       0,     9,     0,   118,   119,   116,   112,    88,     0,    58,
      59,    61,    62,    64,    66,    68,    70,    71,    75,    76,
      73,    74,    78,    79,    82,    81,    83,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,    99,    21,     0,
       0,    41,    22,    24,    23,    25,    26,    19,     0,    50,
       0,    52,   101,   108,   102,   104,   103,    20,     0,     0,
       0,    46,     0,     0,     0,     0,    44,    45,    51,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,    53,    56,    57,     0,    48,     0,    49,    54,
      47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,    14,    61,    15,    62,    63,   108,
     207,    18,    41,    42,    43,    44,    45,    46,   220,   221,
      47,    48,    49,   231,   146,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   147,     9,    10,
      26,    66,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
      22,   -35,    68,     8,    -8,  -119,     3,     0,    94,     8,
    -119,  -119,  -119,  -119,     5,    79,    34,    -1,  -119,    94,
    -119,  -119,   113,    42,   122,   -32,     9,  -119,   479,    62,
     479,    36,    40,   114,   134,   137,   139,   144,   398,    27,
     148,    30,  -119,    81,  -119,  -119,  -119,  -119,  -119,  -119,
     119,  -119,  -119,   122,  -119,  -119,  -119,  -119,  -119,  -119,
     146,   141,  -119,  -119,  -119,   153,   -29,  -119,   123,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,   479,   479,   479,   479,
     169,    -3,   -16,   182,   185,   190,   143,   131,   176,   178,
    -119,  -119,  -119,  -119,   146,   243,    55,   479,   479,   479,
     479,   479,   479,   479,  -119,   -34,   451,   223,   195,   198,
    -119,  -119,   479,  -119,   203,    -4,  -119,   122,  -119,   202,
      94,  -119,  -119,  -119,    28,   319,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   319,   -22,   -27,     6,    23,
      24,    38,    93,   102,  -119,  -119,   103,   211,   242,   217,
      12,  -119,   133,  -119,  -119,  -119,  -119,  -119,   222,   -16,
     -16,   182,   182,   185,   190,   143,   131,   131,   176,   176,
     176,   176,   178,   178,  -119,  -119,  -119,    49,   241,   209,
     479,   220,   221,   225,  -119,  -119,  -119,  -119,  -119,   228,
     -72,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   319,  -119,
     479,  -119,  -119,   -22,  -119,  -119,  -119,  -119,   121,   218,
      90,  -119,   260,    53,   231,   319,  -119,  -119,  -119,   319,
     130,   282,   338,   357,   281,  -119,   276,   277,   319,    -5,
     376,    43,  -119,  -119,  -119,   300,  -119,    60,  -119,  -119,
    -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,   316,  -119,   274,   326,   -45,   213,   284,
    -119,   -15,  -118,   -39,   -28,  -119,  -119,  -119,  -119,   127,
    -119,  -119,  -119,  -119,   -25,   111,   120,   216,   210,   227,
     129,    61,   126,   -20,   142,   -17,     2,    54,  -119,   340,
    -119,  -119,   244
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      50,    95,   111,    81,    52,    96,    27,   168,    12,   126,
      21,    69,     6,   105,   218,    17,   219,   125,    28,    51,
     162,   126,    29,   120,    50,     1,   128,   188,    30,   127,
      31,    32,    33,    34,    35,    36,    37,   110,    38,    64,
     126,   127,   118,    51,   189,   129,     7,   154,     4,    28,
     119,    65,   190,    29,   124,   126,   121,   122,   123,    30,
     127,    31,    32,    33,    34,    35,    36,    37,     5,    38,
     158,   126,   163,    11,   210,   127,   246,   191,    94,   229,
     230,   145,    39,    16,    40,   190,    13,   160,    13,    68,
     222,   127,   126,   201,   192,   193,   126,   106,   126,   167,
      17,   107,   190,   190,    25,   166,    97,   233,    50,   194,
      98,   234,   127,    39,   240,    40,   127,   190,   127,   187,
     245,   184,   185,   186,   248,    54,    94,    51,    50,   111,
      55,    55,    56,    56,    57,    57,    58,    58,    59,    59,
      60,   250,   202,    94,   203,    94,   204,    51,   205,   111,
     206,    50,   148,   149,   150,   151,   152,   153,    23,    24,
     156,    70,    71,   112,   195,   213,    72,    73,    74,    75,
      51,    50,   190,   196,   197,   235,   218,   226,   219,   236,
     237,   190,   190,   111,    99,   223,   135,   136,   137,   138,
      51,    50,    23,    53,   111,   111,   178,   179,   180,   181,
     113,   111,   133,   134,   100,    50,   111,   101,    50,   102,
      51,    95,    50,    95,   103,    50,    50,    50,   109,    95,
     107,    50,   116,    50,    51,   139,   140,    51,    50,   141,
     142,    51,   143,   117,    51,    51,    51,   169,   170,   106,
      51,    28,    51,   208,   209,    29,   130,    51,   171,   172,
     131,    30,   132,    31,    32,    33,    34,    35,    36,    37,
      28,    38,   176,   177,    29,   182,   183,   144,   157,   158,
      30,   211,    31,    32,    33,    34,    35,    36,    37,    28,
      38,   159,   228,    29,   161,    65,   198,   199,   200,    30,
     212,    31,    32,    33,    34,    35,    36,    37,   225,    38,
      28,   214,   215,   217,    29,    39,   216,    40,   238,   242,
      30,   232,    31,    32,    33,    34,    35,    36,    37,    28,
      38,   243,   244,    29,    39,    19,    40,   114,   249,    30,
     164,    31,    32,    33,    34,    35,    36,    37,    28,    38,
      22,   174,    29,    39,   115,    40,   173,   227,    30,    20,
      31,    32,    33,    34,    35,    36,    37,    28,    38,   175,
     224,   239,     0,   165,    39,     0,    40,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    28,    38,     0,     0,
     241,     0,     0,    39,     0,    40,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    28,    38,     0,     0,   247,
       0,     0,    39,     0,    40,    30,     0,    31,    32,    33,
      34,    35,    36,    37,     0,    38,     0,     0,     0,     0,
       0,    39,     0,    40,     0,     0,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,     0,     0,    70,    71,
      39,     0,    40,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,    78,     0,     0,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,    80,    31,    32,    33,    34,    35,    36,    37,     0,
       0,    70,    71,     0,     0,     0,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,    37,     0,    78,    70,
      71,    79,   155,     0,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-119))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    29,    41,    28,    19,    30,     7,   125,     5,    43,
       5,    26,     4,    38,    86,     6,    88,    20,    19,    17,
      24,    43,    23,    68,    41,     3,    42,   145,    29,    63,
      31,    32,    33,    34,    35,    36,    37,     7,    39,    71,
      43,    63,    71,    41,    71,    61,    38,    81,    83,    19,
      79,    83,    79,    23,    79,    43,    76,    77,    78,    29,
      63,    31,    32,    33,    34,    35,    36,    37,     0,    39,
      74,    43,   117,    81,    25,    63,    81,    71,    83,    26,
      27,    26,    83,    83,    85,    79,    83,   112,    83,    80,
     208,    63,    43,    81,    71,    71,    43,    70,    43,    71,
       6,    74,    79,    79,    70,   120,    70,   225,   125,    71,
      70,   229,    63,    83,   232,    85,    63,    79,    63,   144,
     238,   141,   142,   143,    81,    83,    83,   125,   145,   168,
       8,     8,    10,    10,    12,    12,    14,    14,    16,    16,
      18,    81,     9,    83,    11,    83,    13,   145,    15,   188,
      17,   168,    98,    99,   100,   101,   102,   103,    79,    80,
     106,    40,    41,    82,    71,   190,    45,    46,    47,    48,
     168,   188,    79,    71,    71,    45,    86,    87,    88,    49,
      50,    79,    79,   222,    70,   210,    55,    56,    57,    58,
     188,   208,    79,    80,   233,   234,   135,   136,   137,   138,
      81,   240,    59,    60,    70,   222,   245,    70,   225,    70,
     208,   239,   229,   241,    70,   232,   233,   234,    70,   247,
      74,   238,    81,   240,   222,    49,    50,   225,   245,    51,
      52,   229,    54,    80,   232,   233,   234,   126,   127,    70,
     238,    19,   240,    21,    22,    23,    64,   245,   128,   129,
      65,    29,    62,    31,    32,    33,    34,    35,    36,    37,
      19,    39,   133,   134,    23,   139,   140,    24,    45,    74,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    19,
      39,    83,    22,    23,    81,    83,    75,    45,    71,    29,
      81,    31,    32,    33,    34,    35,    36,    37,    80,    39,
      19,    81,    81,    75,    23,    83,    81,    85,    26,    28,
      29,    80,    31,    32,    33,    34,    35,    36,    37,    19,
      39,    45,    45,    23,    83,     9,    85,    53,    28,    29,
     117,    31,    32,    33,    34,    35,    36,    37,    19,    39,
      14,   131,    23,    83,    60,    85,   130,   220,    29,     9,
      31,    32,    33,    34,    35,    36,    37,    19,    39,   132,
     218,    23,    -1,   119,    83,    -1,    85,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    19,    39,    -1,    -1,
      23,    -1,    -1,    83,    -1,    85,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    19,    39,    -1,    -1,    23,
      -1,    -1,    83,    -1,    85,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      83,    -1,    85,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    83,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    67,    40,
      41,    70,    71,    -1,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    90,    91,    83,     0,     4,    38,    92,   127,
     128,    81,     5,    83,    93,    95,    83,     6,   100,    92,
     128,     5,    95,    79,    80,    70,   129,     7,    19,    23,
      29,    31,    32,    33,    34,    35,    36,    37,    39,    83,
      85,   101,   102,   103,   104,   105,   106,   109,   110,   111,
     124,   125,   100,    80,    83,     8,    10,    12,    14,    16,
      18,    94,    96,    97,    71,    83,   130,   131,    80,   100,
      40,    41,    45,    46,    47,    48,    49,    50,    67,    70,
      83,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,    83,   103,   113,    70,    70,    70,
      70,    70,    70,    70,    81,   113,    70,    74,    98,    70,
       7,   102,    82,    81,    94,    98,    81,    80,    71,    79,
      96,   122,   122,   122,   113,    20,    43,    63,    42,    61,
      64,    65,    62,    59,    60,    55,    56,    57,    58,    49,
      50,    51,    52,    54,    24,    26,   113,   126,   126,   126,
     126,   126,   126,   126,    81,    71,   126,    45,    74,    83,
     113,    81,    24,    96,    97,   131,   100,    71,   101,   114,
     114,   115,   115,   116,   117,   118,   119,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   122,   113,   101,    71,
      79,    71,    71,    71,    71,    71,    71,    71,    75,    45,
      71,    81,     9,    11,    13,    15,    17,    99,    21,    22,
      25,    30,    81,   113,    81,    81,    81,    75,    86,    88,
     107,   108,   101,   113,   123,    80,    87,   108,    22,    26,
      27,   112,    80,   101,   101,    45,    49,    50,    26,    23,
     101,    23,    28,    45,    45,   101,    81,    23,    81,    28,
      81
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
        case 3:

/* Line 1806 of yacc.c  */
#line 117 "analisador_sintatico.y"
    {
	//imprime_hash(tab_variaveis);
	//printf("\n\n##########################\n\n");
	//imprime_hash(tab_funcoes);
}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 126 "analisador_sintatico.y"
    {
//apagando o vetor expressao
for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 143 "analisador_sintatico.y"
    {
	//insere a lista de variaveis(var) na tabela de variaveis(tab_variaveis), crio uma lista antes, pois so aqui fica sabendo do tipo das variaveis
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo,escopo);
	//se retornar vazio foi pq tentou redeclarar uma variavel
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	libera(var);
	var = inicializa();
	//apaga o vetor de expressao
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 159 "analisador_sintatico.y"
    {
	//insere a lista de variaveis(var) na tabela de variaveis(tab_variaveis), cria uma lista antes pois so aqui fica sabendo do tipo das variaveis
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo,escopo);
	//se retornar vazio foi pq tentou redeclarar uma variavel
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	libera(var);
	var = inicializa();
	//apaga o vetor de expressao
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 183 "analisador_sintatico.y"
    {
	//insere todas as variaveis dentro de uma lista(todas as variaveis tem o mesmo tipo)
	var = insere_variavel_lista(var,identificador,0);
}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 188 "analisador_sintatico.y"
    {
	//insere todas as variaveis dentro de uma lista(todas as variaveis tem o mesmo tipo)
	var = insere_variavel_lista(var,identificador,0);
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 222 "analisador_sintatico.y"
    {
	//fim do programa, verificas se tem alguma variavel que nao foi utilizada
	verifica_variavel_usada(tab_variaveis);
}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 236 "analisador_sintatico.y"
    {
	//o vetor expressao armazena toda a expressao a ser analizada, se tiver associacao de tipo invalido na expressao retorna o erro
	if(!verifica_tipo(tab_variaveis,expressao,escopo)){
	
		printf("Erro semantico na linha %d. Tipo invalido associado a variavel.\n",num_linha);
		exit(0);
	}
	//apaga o vetor de expressao
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 259 "analisador_sintatico.y"
    {
	//verifica se a variavel que estao recebendo atribuicao foi declarada, se sim usada=1, var=NULL nao foi encontrada a variavel, logo ela nao foi declarada
	var =busca(tab_variaveis,identificador, escopo); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
	}
	
}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 380 "analisador_sintatico.y"
    {
	//verifica se a variavel foi declarada
	var =busca(tab_variaveis,identificador, escopo); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
	}
}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 412 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela, em funcoes o escopo precisa ser colocado mas nao eh usado
	func = busca(tab_funcoes,"imprima",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao imprima.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 422 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	func = busca(tab_funcoes,"leia",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao leia.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 432 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	func = busca(tab_funcoes,"leia_ln",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao leia_ln.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 442 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	func = busca(tab_funcoes,"imprima_ln",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao imprima_ln.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 452 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	printf("expressao = %s/n",expressao);
	func = busca(tab_funcoes,"maximo",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao maximo.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 463 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	func = busca(tab_funcoes,"minimo",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao minimo.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 473 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	func = busca(tab_funcoes,"media",escopo);
	if (qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Numero de argumentos da funcao media.\n",num_linha);
		exit(0);
	}
	qtd_parametros =0;	
}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 486 "analisador_sintatico.y"
    {
	//conta quantos parametros a funcao esta recebendo
	//printf("identificador =%s\n ",identificador);
	qtd_parametros++;
}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 492 "analisador_sintatico.y"
    {
	//conta quantos parametros a funcao esta recebendo
	//printf("identificador =%s\n ",identificador);
	qtd_parametros++;
}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 506 "analisador_sintatico.y"
    {
	/*tab_funcoes = insere_funcao_hash(tab_funcoes, func, tipo);
	if(tab_funcoes == NULL){
		printf("Erro semantico na linha %d. Funcao redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);	
	libera(func);
	func = inicializa();*/
}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 517 "analisador_sintatico.y"
    {
	//printf("declaracao de funcoes - sem parametros\n");
}
    break;



/* Line 1806 of yacc.c  */
#line 2064 "analisador_sintatico.tab.c"
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



/* Line 2067 of yacc.c  */
#line 539 "analisador_sintatico.y"


#include "lex.yy.c"

main(){
	
	tab_variaveis = inicializa_hash();
	var = inicializa();
	
	tab_funcoes = inicializa_hash();
	func = inicializa();
	//insere as funcoes primitivas da linguagem
	insere_funcao(tab_funcoes,"leia",-1,1);
	tipo_parametros[0]=2;
	tipo_parametros[1]=-1;
	insere_parametro_funcao(tab_funcoes,"leia",tipo_parametros);	
	insere_funcao(tab_funcoes,"leia_ln",-1,1);
	insere_parametro_funcao(tab_funcoes,"leia_ln",tipo_parametros);
	insere_funcao(tab_funcoes,"imprima",-1,1);
	insere_parametro_funcao(tab_funcoes,"imprima",tipo_parametros);
	insere_funcao(tab_funcoes,"imprima_ln",-1,1);
	insere_parametro_funcao(tab_funcoes,"imprima_ln",tipo_parametros);
	insere_funcao(tab_funcoes,"-",0,2);
	tipo_parametros[0]=0;
	tipo_parametros[1]=0;
	tipo_parametros[2]=-1;
	insere_parametro_funcao(tab_funcoes,"-",tipo_parametros);
	insere_funcao(tab_funcoes,"*",0,2);
	insere_parametro_funcao(tab_funcoes,"*",tipo_parametros);
	insere_funcao(tab_funcoes,"/",0,2);
	insere_parametro_funcao(tab_funcoes,"/",tipo_parametros);
	insere_funcao(tab_funcoes,"^",0,2);
	insere_parametro_funcao(tab_funcoes,"^",tipo_parametros);
	insere_funcao(tab_funcoes,"maximo",0,2);
	insere_parametro_funcao(tab_funcoes,"maximo",tipo_parametros);
	insere_funcao(tab_funcoes,"minimo",0,2);
	insere_parametro_funcao(tab_funcoes,"minimo",tipo_parametros);
	insere_funcao(tab_funcoes,"media",0,2);
	insere_parametro_funcao(tab_funcoes,"media",tipo_parametros);
	
	yyparse();
}

/* rotina de erro */
yyerror (){
	printf("Erro! Linha %d\n", num_linha);
}

