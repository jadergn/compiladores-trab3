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
Lista *var, *func, *l, *v;

Pilha *pilha_exp;
int expressao_tipo;

int i;
int qtd_parametros;
int tipo_parametros[10];
int retorno_func;
char valor_esquerda[100];
extern int tipo;
extern char * yytext;
extern char identificador[100];
extern char funcao[100];
extern int num_linha;
extern char expressao[2000];
extern int escopo;


/* Line 268 of yacc.c  */
#line 96 "analisador_sintatico.tab.c"

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
     token_pr_fim_funcao = 340,
     token_pr_escolha = 341,
     token_pr_caso = 342,
     token_pr_fim_escolha = 343,
     token_pr_default = 344
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
#line 227 "analisador_sintatico.tab.c"

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
#define YYLAST   529

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNRULES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      85,    86,    87,    88,    89
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
     385,   388,   390,   398,   404,   408,   411,   415,   417,   421
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,   128,    93,   101,    -1,    92,    93,
     101,    -1,     3,    83,    81,    -1,     4,    94,     5,    -1,
       4,     5,    -1,    -1,    96,    80,    95,    81,    -1,    94,
      96,    80,    95,    81,    -1,    97,    -1,    98,    -1,    96,
      79,    83,    -1,    83,    -1,     8,    -1,    12,    -1,    10,
      -1,    14,    -1,    16,    -1,    18,    99,    24,   100,    -1,
      99,    74,    45,    75,    -1,    74,    45,    75,    -1,     9,
      -1,    13,    -1,    11,    -1,    15,    -1,    17,    -1,     6,
     102,     7,    -1,     6,     7,    -1,   102,   103,    -1,   103,
      -1,   105,    -1,   125,    81,    -1,   126,    -1,   106,    -1,
     110,    -1,   111,    -1,   112,    -1,   107,    -1,    83,    -1,
      83,    99,    -1,   104,    82,   114,    81,    -1,    39,    81,
      -1,    39,   114,    81,    -1,    86,    70,    83,    71,   108,
      88,    -1,   108,   109,    -1,   109,    -1,    87,   124,    80,
     102,    23,    81,    -1,    87,   124,    80,    23,    81,    -1,
      89,    80,   102,    23,    81,    -1,    19,   114,    20,   102,
      22,    -1,    19,   114,    20,   102,    21,   102,    22,    -1,
      29,   114,    26,   102,    30,    -1,    23,   104,    24,   114,
      25,   114,    26,   102,    28,    -1,    23,   104,    24,   114,
      25,   114,   113,    26,   102,    28,    -1,    27,    45,    -1,
      27,    49,    45,    -1,    27,    50,    45,    -1,   114,    43,
     115,    -1,   114,    63,   115,    -1,   115,    -1,   115,    42,
     116,    -1,   115,    61,   116,    -1,   116,    -1,   116,    64,
     117,    -1,   117,    -1,   117,    65,   118,    -1,   118,    -1,
     118,    62,   119,    -1,   119,    -1,   119,    59,   120,    -1,
     119,    60,   120,    -1,   120,    -1,   120,    57,   121,    -1,
     120,    58,   121,    -1,   120,    55,   121,    -1,   120,    56,
     121,    -1,   121,    -1,   121,    49,   122,    -1,   121,    50,
     122,    -1,   122,    -1,   122,    52,   123,    -1,   122,    51,
     123,    -1,   122,    54,   123,    -1,   123,    -1,    49,   123,
      -1,    50,   123,    -1,    67,   123,    -1,    70,   114,    71,
      -1,    83,    -1,   124,    -1,   125,    -1,   126,    -1,    48,
      -1,    45,    -1,    46,    -1,    47,    -1,    40,    -1,    41,
      -1,    83,    70,   127,    71,    -1,    83,    70,    71,    -1,
      31,    70,   127,    71,    81,    -1,    32,    70,   127,    71,
      81,    -1,    34,    70,   127,    71,    81,    -1,    33,    70,
     127,    71,    81,    -1,    35,    70,   127,    71,    -1,    36,
      70,   127,    71,    -1,    37,    70,   127,    71,    -1,   127,
      79,   114,    -1,   114,    -1,   128,   129,    -1,   129,    -1,
      38,    83,   130,    80,    97,   101,    85,    -1,    38,    83,
     130,   101,    85,    -1,    70,   131,    71,    -1,    70,    71,
      -1,   131,    79,   132,    -1,   132,    -1,    83,    80,    97,
      -1,    83,    80,    98,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   125,   134,   145,   146,   147,   151,   170,
     191,   192,   196,   202,   211,   215,   219,   223,   227,   231,
     235,   236,   240,   241,   242,   243,   244,   249,   254,   258,
     259,   263,   277,   278,   279,   280,   281,   282,   283,   287,
     301,   305,   318,   319,   324,   328,   329,   333,   334,   335,
     340,   341,   345,   349,   350,   354,   355,   356,   360,   367,
     374,   384,   385,   386,   390,   391,   395,   396,   400,   401,
     405,   406,   407,   411,   412,   413,   414,   415,   419,   420,
     421,   425,   426,   427,   428,   432,   433,   434,   435,   436,
     457,   469,   482,   486,   487,   488,   489,   490,   491,   495,
     509,   524,   534,   544,   554,   564,   576,   586,   599,   609,
     623,   624,   628,   644,   651,   658,   668,   669,   673,   680
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
  "token_identificador", "token_desconhecido", "token_pr_fim_funcao",
  "token_pr_escolha", "token_pr_caso", "token_pr_fim_escolha",
  "token_pr_default", "$accept", "algoritmo", "declaracao_algoritmo",
  "bloco_variaveis", "declaracao_variaveis", "tipo_variavel",
  "lista_variaveis", "tipo_primitivo", "tipo_matriz", "matriz_colchetes",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    98,
      99,    99,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     104,   105,   106,   106,   107,   108,   108,   109,   109,   109,
     110,   110,   111,   112,   112,   113,   113,   113,   114,   114,
     114,   115,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   119,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   124,   124,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132
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
       2,     1,     7,     5,     3,     2,     3,     1,     3,     3
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
       0,     0,    10,    11,   115,     0,     0,   117,     0,     0,
      97,    98,    94,    95,    96,    93,     0,     0,     0,     0,
      89,     0,    60,    63,    65,    67,    69,    72,    77,    80,
      84,    90,    91,    92,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,    40,     0,
      27,    29,     0,    32,     0,     0,     8,     0,   114,     0,
       0,   113,    85,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,     0,     0,    43,   100,     0,     0,     0,
       0,     0,     9,     0,   118,   119,   116,     0,    88,     0,
      58,    59,    61,    62,    64,    66,    68,    70,    71,    75,
      76,    73,    74,    78,    79,    82,    81,    83,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,    99,    21,
       0,     0,    41,    22,    24,    23,    25,    26,    19,   112,
       0,    50,     0,    52,   101,   108,   102,   104,   103,    20,
       0,     0,     0,    46,     0,     0,     0,     0,    44,    45,
      51,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,    53,    56,    57,     0,    48,     0,
      49,    54,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,    14,    61,    15,    62,    63,   108,
     208,    18,    41,    42,    43,    44,    45,    46,   222,   223,
      47,    48,    49,   233,   147,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   148,     9,    10,
      26,    66,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
      22,   -35,    55,     8,   -13,  -120,     3,   -10,    71,     8,
    -120,  -120,  -120,  -120,     5,   109,    11,    -1,  -120,    71,
    -120,  -120,   155,    35,   147,   -32,     9,  -120,   446,    60,
     446,    79,    83,   100,   103,   113,   116,   122,   365,     4,
     139,    30,  -120,    74,  -120,  -120,  -120,  -120,  -120,  -120,
     130,  -120,  -120,   147,  -120,  -120,  -120,  -120,  -120,  -120,
     142,   141,  -120,  -120,  -120,   140,   -29,  -120,   124,   163,
    -120,  -120,  -120,  -120,  -120,  -120,   446,   446,   446,   446,
     157,    -3,   -16,   177,   185,   211,   180,   212,   215,   200,
    -120,  -120,  -120,  -120,   142,   268,    88,   446,   446,   446,
     446,   446,   446,   446,  -120,   -34,   418,   255,   231,   228,
    -120,  -120,   446,  -120,   232,    -4,  -120,   147,  -120,   244,
      71,  -120,  -120,  -120,  -120,    64,   283,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   283,   -22,   -27,    31,
      32,    62,    66,    75,   119,  -120,  -120,   153,   253,   285,
     261,    36,  -120,   378,  -120,  -120,  -120,   257,  -120,   224,
     -16,   -16,   177,   177,   185,   211,   180,   212,   212,   215,
     215,   215,   215,   200,   200,  -120,  -120,  -120,    76,   145,
     265,   446,   266,   270,   278,  -120,  -120,  -120,  -120,  -120,
     274,   -73,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
     283,  -120,   446,  -120,  -120,   -22,  -120,  -120,  -120,  -120,
     154,   263,   117,  -120,    61,    99,   282,   283,  -120,  -120,
    -120,   283,    26,   337,   302,   321,   243,  -120,   319,   322,
     283,    23,   342,    77,  -120,  -120,  -120,   262,  -120,    86,
    -120,  -120,  -120
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,   359,  -120,   317,   358,   -45,   267,   320,
    -120,   -15,  -119,   -39,   -28,  -120,  -120,  -120,  -120,   160,
    -120,  -120,  -120,  -120,   -25,   156,   174,   252,   254,   259,
     189,   150,   168,   -20,   170,   -17,     2,   318,  -120,   385,
    -120,  -120,   284
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      50,    95,   111,    81,    52,    96,    27,   169,    12,   127,
      21,    69,     6,   105,   220,    17,   221,   126,    28,    51,
     163,   127,    29,   120,    50,     1,   129,   189,    30,   128,
      31,    32,    33,    34,    35,    36,    37,   110,    38,    64,
     127,   128,   118,    51,   190,   130,     7,   155,     4,    28,
     119,    65,   191,    29,   125,     5,   122,   123,   124,    30,
     128,    31,    32,    33,    34,    35,    36,    37,    11,    38,
     159,   237,   164,    16,   106,   238,   239,    17,   107,   127,
      28,    25,    39,   230,    29,    40,    13,   161,    13,    68,
      30,   224,    31,    32,    33,    34,    35,    36,    37,   128,
      38,   212,   192,   193,   248,   167,    94,   127,   235,    50,
     191,   191,   236,    39,   146,   242,    40,   202,    54,   127,
     188,   247,   185,   186,   187,   231,   232,   128,    51,    50,
     111,   127,    55,   194,    56,   168,    57,   195,    58,   128,
      59,   191,   127,    94,    39,   191,   196,    40,    51,    97,
     111,   128,    50,    98,   191,    55,   112,    56,   250,    57,
      94,    58,   128,    59,    28,    60,   215,   252,    29,    94,
      99,    51,    50,   100,    30,   213,    31,    32,    33,    34,
      35,    36,    37,   101,    38,   111,   102,   225,    23,    24,
     197,    51,   103,    50,    70,    71,   111,   111,   191,    72,
      73,    74,    75,   111,   220,   228,   221,    50,   111,   109,
      50,   113,    51,    95,    50,    95,   107,    50,    50,    50,
     117,    95,   116,    50,   198,    50,    51,   106,    39,    51,
      50,    40,   191,    51,    23,    53,    51,    51,    51,   134,
     135,   131,    51,    28,    51,   210,   211,    29,   121,    51,
     132,   142,   143,    30,   144,    31,    32,    33,    34,    35,
      36,    37,    28,    38,   140,   141,    29,   136,   137,   138,
     139,   244,    30,   133,    31,    32,    33,    34,    35,    36,
      37,    28,    38,   170,   171,    29,   179,   180,   181,   182,
     251,    30,   145,    31,    32,    33,    34,    35,    36,    37,
     158,    38,    28,   172,   173,   159,    29,    39,   183,   184,
      40,   160,    30,   162,    31,    32,    33,    34,    35,    36,
      37,    28,    38,   177,   178,   241,    39,    65,   199,    40,
     200,    30,   201,    31,    32,    33,    34,    35,    36,    37,
      28,    38,   209,   227,   243,    39,   214,   216,    40,   219,
      30,   217,    31,    32,    33,    34,    35,    36,    37,   218,
      38,    28,   234,   240,   245,   249,    39,   246,    19,    40,
     114,    30,    22,    31,    32,    33,    34,    35,    36,    37,
     115,    38,   229,   174,   165,    39,   175,   203,    40,   204,
     226,   205,   176,   206,    20,   207,    31,    32,    33,    34,
      35,    36,    37,   166,    39,    70,    71,    40,     0,     0,
      72,    73,    74,    75,    76,    77,   149,   150,   151,   152,
     153,   154,     0,     0,   157,    39,     0,     0,    40,     0,
       0,     0,    78,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,    80,    31,
      32,    33,    34,    35,    36,    37,     0,     0,    70,    71,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,     0,    78,    70,    71,    79,   156,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-120))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      17,    29,    41,    28,    19,    30,     7,   126,     5,    43,
       5,    26,     4,    38,    87,     6,    89,    20,    19,    17,
      24,    43,    23,    68,    41,     3,    42,   146,    29,    63,
      31,    32,    33,    34,    35,    36,    37,     7,    39,    71,
      43,    63,    71,    41,    71,    61,    38,    81,    83,    19,
      79,    83,    79,    23,    79,     0,    76,    77,    78,    29,
      63,    31,    32,    33,    34,    35,    36,    37,    81,    39,
      74,    45,   117,    83,    70,    49,    50,     6,    74,    43,
      19,    70,    83,    22,    23,    86,    83,   112,    83,    80,
      29,   210,    31,    32,    33,    34,    35,    36,    37,    63,
      39,    25,    71,    71,    81,   120,    83,    43,   227,   126,
      79,    79,   231,    83,    26,   234,    86,    81,    83,    43,
     145,   240,   142,   143,   144,    26,    27,    63,   126,   146,
     169,    43,     8,    71,    10,    71,    12,    71,    14,    63,
      16,    79,    43,    83,    83,    79,    71,    86,   146,    70,
     189,    63,   169,    70,    79,     8,    82,    10,    81,    12,
      83,    14,    63,    16,    19,    18,   191,    81,    23,    83,
      70,   169,   189,    70,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    70,    39,   224,    70,   212,    79,    80,
      71,   189,    70,   210,    40,    41,   235,   236,    79,    45,
      46,    47,    48,   242,    87,    88,    89,   224,   247,    70,
     227,    81,   210,   241,   231,   243,    74,   234,   235,   236,
      80,   249,    81,   240,    71,   242,   224,    70,    83,   227,
     247,    86,    79,   231,    79,    80,   234,   235,   236,    59,
      60,    64,   240,    19,   242,    21,    22,    23,    85,   247,
      65,    51,    52,    29,    54,    31,    32,    33,    34,    35,
      36,    37,    19,    39,    49,    50,    23,    55,    56,    57,
      58,    28,    29,    62,    31,    32,    33,    34,    35,    36,
      37,    19,    39,   127,   128,    23,   136,   137,   138,   139,
      28,    29,    24,    31,    32,    33,    34,    35,    36,    37,
      45,    39,    19,   129,   130,    74,    23,    83,   140,   141,
      86,    83,    29,    81,    31,    32,    33,    34,    35,    36,
      37,    19,    39,   134,   135,    23,    83,    83,    75,    86,
      45,    29,    71,    31,    32,    33,    34,    35,    36,    37,
      19,    39,    85,    80,    23,    83,    81,    81,    86,    75,
      29,    81,    31,    32,    33,    34,    35,    36,    37,    81,
      39,    19,    80,    26,    45,    23,    83,    45,     9,    86,
      53,    29,    14,    31,    32,    33,    34,    35,    36,    37,
      60,    39,   222,   131,   117,    83,   132,     9,    86,    11,
     220,    13,   133,    15,     9,    17,    31,    32,    33,    34,
      35,    36,    37,   119,    83,    40,    41,    86,    -1,    -1,
      45,    46,    47,    48,    49,    50,    98,    99,   100,   101,
     102,   103,    -1,    -1,   106,    83,    -1,    -1,    86,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    -1,    67,    40,    41,    70,    71,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    91,    92,    83,     0,     4,    38,    93,   128,
     129,    81,     5,    83,    94,    96,    83,     6,   101,    93,
     129,     5,    96,    79,    80,    70,   130,     7,    19,    23,
      29,    31,    32,    33,    34,    35,    36,    37,    39,    83,
      86,   102,   103,   104,   105,   106,   107,   110,   111,   112,
     125,   126,   101,    80,    83,     8,    10,    12,    14,    16,
      18,    95,    97,    98,    71,    83,   131,   132,    80,   101,
      40,    41,    45,    46,    47,    48,    49,    50,    67,    70,
      83,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    83,   104,   114,    70,    70,    70,
      70,    70,    70,    70,    81,   114,    70,    74,    99,    70,
       7,   103,    82,    81,    95,    99,    81,    80,    71,    79,
      97,    85,   123,   123,   123,   114,    20,    43,    63,    42,
      61,    64,    65,    62,    59,    60,    55,    56,    57,    58,
      49,    50,    51,    52,    54,    24,    26,   114,   127,   127,
     127,   127,   127,   127,   127,    81,    71,   127,    45,    74,
      83,   114,    81,    24,    97,    98,   132,   101,    71,   102,
     115,   115,   116,   116,   117,   118,   119,   120,   120,   121,
     121,   121,   121,   122,   122,   123,   123,   123,   114,   102,
      71,    79,    71,    71,    71,    71,    71,    71,    71,    75,
      45,    71,    81,     9,    11,    13,    15,    17,   100,    85,
      21,    22,    25,    30,    81,   114,    81,    81,    81,    75,
      87,    89,   108,   109,   102,   114,   124,    80,    88,   109,
      22,    26,    27,   113,    80,   102,   102,    45,    49,    50,
      26,    23,   102,    23,    28,    45,    45,   102,    81,    23,
      81,    28,    81
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
        case 2:

/* Line 1806 of yacc.c  */
#line 122 "analisador_sintatico.y"
    {
	//imprime_hash(tab_variaveis);
}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 126 "analisador_sintatico.y"
    {
	//imprime_hash(tab_variaveis);
	//printf("\n\n##########################\n\n");
	//imprime_hash(tab_funcoes);
}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 135 "analisador_sintatico.y"
    {
//apagando o vetor expressao
for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 152 "analisador_sintatico.y"
    {
	//insere a lista de variaveis(var) na tabela de variaveis(tab_variaveis), crio uma lista antes, pois so aqui fica sabendo do tipo das variaveis
	//printf("escopo1 = %d\n",escopo);
	//imprime(var);
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
	//imprime_hash(tab_variaveis);
}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 171 "analisador_sintatico.y"
    {
	//insere a lista de variaveis(var) na tabela de variaveis(tab_variaveis), cria uma lista antes pois so aqui fica sabendo do tipo das variaveis
	//printf("escopo1 = %d\n",escopo);
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo,escopo);
	//se retornar vazio foi pq tentou redeclarar uma variavel
	if(tab_variaveis == NULL){
		printf("vaErro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	libera(var);
	var = inicializa();
	//apaga o vetor de expressao
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
	//imprime_hash(tab_variaveis);
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 197 "analisador_sintatico.y"
    {
	//insere todas as variaveis dentro de uma lista(todas as variaveis tem o mesmo tipo)
	var = insere_variavel_lista(var,identificador,0);
	//printf("identi = %s\n",identificador);
}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 203 "analisador_sintatico.y"
    {
	//insere todas as variaveis dentro de uma lista(todas as variaveis tem o mesmo tipo)
	var = insere_variavel_lista(var,identificador,0);
	//printf("identi = %s\n",identificador);
}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 212 "analisador_sintatico.y"
    {
	retorno_func = 0;
}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 216 "analisador_sintatico.y"
    {
	retorno_func = 3;
}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 220 "analisador_sintatico.y"
    {
	retorno_func = 1;
}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 224 "analisador_sintatico.y"
    {
	retorno_func = 2;
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 250 "analisador_sintatico.y"
    {
	//fim do programa, verificas se tem alguma variavel que nao foi utilizada
	verifica_variavel_usada(tab_variaveis);
}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 264 "analisador_sintatico.y"
    {
	//o vetor expressao armazena toda a expressao a ser analizada, se tiver associacao de tipo invalido na expressao retorna o erro
	/*printf("expressao = %s\n",expressao);
	if(!verifica_tipo(tab_variaveis,expressao,escopo)){
	
		printf("Erro semantico na linha %d. Tipo invalido associado a variavel.\n",num_linha);
		exit(0);
	}*/
	//apaga o vetor de expressao
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 288 "analisador_sintatico.y"
    {
	//verifica se a variavel que estao recebendo atribuicao foi declarada, se sim usada=1, var=NULL nao foi encontrada a variavel, logo ela nao foi declarada
	var =busca(tab_variaveis,identificador, escopo); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		strcpy(valor_esquerda,identificador);
		set_usada(var);
	}
	var = inicializa();
}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 306 "analisador_sintatico.y"
    {
	printf("valor= %s\n",valor_esquerda);
	var =busca(tab_variaveis,valor_esquerda, escopo);
	if(get_tipo(var)!=expressao_tipo){
		printf("Erro semantico na linha %d. Tipo de atribuicao invalida.\n",num_linha);
		exit(0);
	}
	var=inicializa();
}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 361 "analisador_sintatico.y"
    {
	expressao_tipo = pilha_remove(pilha_exp);
//	printf("Retorno da expressao: %d\n", expressao_tipo);
	pilha_destroi(pilha_exp);
	pilha_constroi(pilha_exp);
}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 368 "analisador_sintatico.y"
    {
	expressao_tipo = pilha_remove(pilha_exp);
//	printf("Retorno da expressao: %d\n", expressao_tipo);
	pilha_destroi(pilha_exp);
	pilha_constroi(pilha_exp);
}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 375 "analisador_sintatico.y"
    {
	expressao_tipo = pilha_remove(pilha_exp);
//	printf("Retorno da expressao: %d\n", expressao_tipo);
	pilha_destroi(pilha_exp);
	pilha_constroi(pilha_exp);
}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 437 "analisador_sintatico.y"
    {
	//verifica se a variavel foi declarada
	var =busca(tab_variaveis,identificador, escopo); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
		pilha_insere(pilha_exp, get_tipo(var));
		if(pilha_verifica_compatibilidade(pilha_exp)) {
			//pilha_imprime(pilha_exp);
		}
		else {
			printf("Incompatibilidade de tipos na expressão da linha %d.\n", num_linha);
			exit(0);
		}
	}
	var = inicializa();
}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 458 "analisador_sintatico.y"
    {

	pilha_insere(pilha_exp, tipo);
	if(pilha_verifica_compatibilidade(pilha_exp)) {
		pilha_imprime(pilha_exp);
	}
	else {
		printf("Incompatibilidade de tipos na expressão da linha %d.\n", num_linha);
		exit(0);
	}
}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 470 "analisador_sintatico.y"
    {
	func = busca(tab_funcoes,funcao,escopo);
	pilha_insere(pilha_exp,get_retorno(func));
	if(pilha_verifica_compatibilidade(pilha_exp)) {
		pilha_imprime(pilha_exp);
	}
	else {
		printf("Incompatibilidade de tipos na expressão da linha %d.\n", num_linha);
		exit(0);
	}
	func = inicializa();
}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 496 "analisador_sintatico.y"
    {
	printf("qtd = %d\n",qtd_parametros);
	func = busca(tab_funcoes,funcao,escopo);
	if(qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Quantidade de parametros invalidos.\n",num_linha);
		exit(0);
	}
	func = inicializa();
	imprime(v);
	printf("-->%s\n",expressao);
	//imprime(v);
	
}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 510 "analisador_sintatico.y"
    {
	printf("qtd = %d\n",qtd_parametros);
	func = busca(tab_funcoes,funcao,escopo);
	if(qtd_parametros != get_aridade(func)){
		printf("Erro semantico na linha %d. Quantidade de parametros invalidos.\n",num_linha);
		exit(0);
	}
	func = inicializa();
	imprime(v);
	printf("-->%s\n",expressao);	
}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 525 "analisador_sintatico.y"
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
#line 535 "analisador_sintatico.y"
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
#line 545 "analisador_sintatico.y"
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
#line 555 "analisador_sintatico.y"
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
#line 565 "analisador_sintatico.y"
    {
	//busca a funcao imprima na tabela de funcoes e verifica se a quantidade de parametros que a funcao esta recebendo, eh a mesma que foi declarada na tabela
	//EM EXPRESSAO TA TODAS AS VARIAVEIS E QUE ESTA SENDO USADA NA FUNCAO, AQUI TEM Q PEGAR EXPRESSAO E CADA VARIAVEL VERIFICAR O TIPO, NO CASO A QUE RECEBE A ATRIBUICAO VERIFICAR COM O RETORNO DA FUNCAO E AS OUTRAS COM OS PARAMETROS DA FUNCAO, FAZER ISSO PARA TODAS AS FUNCOES PRIMITIVAS
	//printf("expressao = %s/n",expressao);
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
#line 577 "analisador_sintatico.y"
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
#line 587 "analisador_sintatico.y"
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
#line 600 "analisador_sintatico.y"
    {
	//conta quantos parametros a funcao esta recebendo
	//printf("identificador =%s\n ",identificador);
	l = busca(tab_variaveis,identificador,escopo);
	//v = (Variavel*)l->info;
	//printf("%d \n",get_tipo(l));
	v = insere_variavel_lista1(v,identificador,get_tipo(l),get_escopo(l),get_usada(l));
	qtd_parametros++;
}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 610 "analisador_sintatico.y"
    {
	//conta quantos parametros a funcao esta recebendo
	//printf("identificador =%s\n ",identificador);
	l = busca(tab_variaveis,identificador,escopo);
	//v = (Variavel*)l->info;
	//printf("%d \n",get_tipo(l));
	v = insere_variavel_lista1(v,identificador,get_tipo(l),get_escopo(l),get_usada(l));
	
	qtd_parametros++;
}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 629 "analisador_sintatico.y"
    {
	/*tab_funcoes = insere_funcao_hash(tab_funcoes, func, tipo);
	if(tab_funcoes == NULL){
		printf("Erro semantico na linha %d. Funcao redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);	
	libera(func);
	func = inicializa();*/
	tipo_parametros[qtd_parametros] = -1;
	tab_funcoes = insere_funcao(tab_funcoes,funcao,retorno_func,qtd_parametros);
	tab_funcoes = insere_parametro_funcao(tab_funcoes,funcao,tipo_parametros);
	qtd_parametros=0;	
	
}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 645 "analisador_sintatico.y"
    {
	//printf("declaracao de funcoes - sem parametros\n");
}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 652 "analisador_sintatico.y"
    {
	//imprime_hash(tab_variaveis);
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 659 "analisador_sintatico.y"
    {
	//imprime_hash(tab_variaveis);
	for(i=0;i<2000;i++){
		expressao[i]='\0';
	}
}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 674 "analisador_sintatico.y"
    {
	//printf("escopo = %d identificador = %s tipo = %d\n",escopo,identificador,tipo);
	insere_variavel(tab_variaveis,identificador,tipo,0,escopo);
	tipo_parametros[qtd_parametros] = tipo;
	qtd_parametros++;
}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 681 "analisador_sintatico.y"
    {
	tipo_parametros[qtd_parametros] = tipo;
	qtd_parametros++;
}
    break;



/* Line 1806 of yacc.c  */
#line 2309 "analisador_sintatico.tab.c"
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
#line 689 "analisador_sintatico.y"


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
	
	pilha_exp = pilha_constroi();
	
	yyparse();
}

/* rotina de erro */
yyerror (){
	printf("Erro! Linha %d\n", num_linha);
}

