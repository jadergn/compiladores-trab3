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

Lista ** tab_variaveis;
Lista *var;

extern int tipo;
extern char * yytext;
extern char identificador[100];
extern int num_linha;


/* Line 268 of yacc.c  */
#line 85 "analisador_sintatico.tab.c"

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
     token_pr_funcao = 288,
     token_pr_retorne = 289,
     token_pr_verdadeiro = 290,
     token_pr_falso = 291,
     token_pr_e = 292,
     token_pr_ou = 293,
     token_pr_nao = 294,
     token_inteiro = 295,
     token_real = 296,
     token_caractere = 297,
     token_literal = 298,
     token_soma = 299,
     token_subtracao = 300,
     token_divisao = 301,
     token_multiplicacao = 302,
     token_incrementador = 303,
     token_modulo = 304,
     token_maior = 305,
     token_maior_igual = 306,
     token_menor = 307,
     token_menor_igual = 308,
     token_igual = 309,
     token_diferente = 310,
     token_e = 311,
     token_e_bit = 312,
     token_ou = 313,
     token_ou_bit = 314,
     token_xor_bit = 315,
     token_til = 316,
     token_nao = 317,
     token_aspas_dupla = 318,
     token_aspas_simples = 319,
     token_abre_parenteses = 320,
     token_fecha_parenteses = 321,
     token_abre_chaves = 322,
     token_fecha_chaves = 323,
     token_abre_colchetes = 324,
     token_fecha_colchetes = 325,
     token_tralha = 326,
     token_contra_barra = 327,
     token_ponto = 328,
     token_virgula = 329,
     token_dois_pontos = 330,
     token_ponto_virgula = 331,
     token_atribuicao = 332,
     token_identificador = 333,
     token_desconhecido = 334,
     token_pr_escolha = 335,
     token_pr_caso = 336,
     token_pr_fim_escolha = 337,
     token_pr_default = 338
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
#line 210 "analisador_sintatico.tab.c"

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
#define YYLAST   437

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

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
      75,    76,    77,    78,    79,    80,    81,    82,    83
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
     336,   340,   346,   350,   354,   356,   359,   361,   368,   373,
     377,   380,   384,   386,   390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      85,     0,    -1,    86,    87,   122,    95,    -1,    86,    87,
      95,    -1,     3,    78,    76,    -1,     4,    88,     5,    -1,
       4,     5,    -1,    -1,    90,    75,    89,    76,    -1,    88,
      90,    75,    89,    76,    -1,    91,    -1,    92,    -1,    90,
      74,    78,    -1,    78,    -1,     8,    -1,    12,    -1,    10,
      -1,    14,    -1,    16,    -1,    18,    93,    24,    94,    -1,
      93,    69,    40,    70,    -1,    69,    40,    70,    -1,     9,
      -1,    13,    -1,    11,    -1,    15,    -1,    17,    -1,     6,
      96,     7,    -1,     6,     7,    -1,    96,    97,    -1,    97,
      -1,    99,    -1,   119,    76,    -1,   120,    -1,   100,    -1,
     104,    -1,   105,    -1,   106,    -1,   101,    -1,    78,    -1,
      78,    93,    -1,    98,    77,   108,    76,    -1,    34,    76,
      -1,    34,   108,    76,    -1,    80,    65,    78,    66,   102,
      82,    -1,   102,   103,    -1,   103,    -1,    81,   118,    75,
      96,    23,    76,    -1,    81,   118,    75,    23,    76,    -1,
      83,    75,    96,    23,    76,    -1,    19,   108,    20,    96,
      22,    -1,    19,   108,    20,    96,    21,    96,    22,    -1,
      29,   108,    26,    96,    30,    -1,    23,    98,    24,   108,
      25,   108,    26,    96,    28,    -1,    23,    98,    24,   108,
      25,   108,   107,    26,    96,    28,    -1,    27,    40,    -1,
      27,    44,    40,    -1,    27,    45,    40,    -1,   108,    38,
     109,    -1,   108,    58,   109,    -1,   109,    -1,   109,    37,
     110,    -1,   109,    56,   110,    -1,   110,    -1,   110,    59,
     111,    -1,   111,    -1,   111,    60,   112,    -1,   112,    -1,
     112,    57,   113,    -1,   113,    -1,   113,    54,   114,    -1,
     113,    55,   114,    -1,   114,    -1,   114,    52,   115,    -1,
     114,    53,   115,    -1,   114,    50,   115,    -1,   114,    51,
     115,    -1,   115,    -1,   115,    44,   116,    -1,   115,    45,
     116,    -1,   116,    -1,   116,    47,   117,    -1,   116,    46,
     117,    -1,   116,    49,   117,    -1,   117,    -1,    44,   117,
      -1,    45,   117,    -1,    62,   117,    -1,    65,   108,    66,
      -1,    78,    -1,   118,    -1,   119,    -1,   120,    -1,    43,
      -1,    40,    -1,    41,    -1,    42,    -1,    35,    -1,    36,
      -1,    78,    65,   121,    66,    -1,    78,    65,    66,    -1,
      31,    65,   121,    66,    76,    -1,    32,    65,    66,    -1,
     121,    74,   108,    -1,   108,    -1,   122,   123,    -1,   123,
      -1,    33,    78,   124,    75,    91,    95,    -1,    33,    78,
     124,    95,    -1,    65,   125,    66,    -1,    65,    66,    -1,
     125,    74,   126,    -1,   126,    -1,    78,    75,    91,    -1,
      78,    75,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   106,   110,   115,   123,   124,   128,   141,
     157,   158,   162,   168,   176,   177,   178,   179,   180,   184,
     188,   189,   193,   194,   195,   196,   197,   202,   206,   210,
     211,   215,   216,   217,   218,   219,   220,   221,   222,   226,
     240,   244,   248,   249,   254,   258,   259,   263,   264,   265,
     270,   271,   275,   279,   280,   284,   285,   286,   290,   291,
     292,   296,   297,   298,   302,   303,   307,   308,   312,   313,
     317,   318,   319,   323,   324,   325,   326,   327,   331,   332,
     333,   337,   338,   339,   340,   344,   345,   346,   347,   348,
     360,   361,   362,   366,   367,   368,   369,   370,   371,   375,
     376,   380,   381,   385,   386,   390,   391,   395,   396,   400,
     401,   405,   406,   410,   411
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
  "token_pr_imprima", "token_pr_leia", "token_pr_funcao",
  "token_pr_retorne", "token_pr_verdadeiro", "token_pr_falso",
  "token_pr_e", "token_pr_ou", "token_pr_nao", "token_inteiro",
  "token_real", "token_caractere", "token_literal", "token_soma",
  "token_subtracao", "token_divisao", "token_multiplicacao",
  "token_incrementador", "token_modulo", "token_maior",
  "token_maior_igual", "token_menor", "token_menor_igual", "token_igual",
  "token_diferente", "token_e", "token_e_bit", "token_ou", "token_ou_bit",
  "token_xor_bit", "token_til", "token_nao", "token_aspas_dupla",
  "token_aspas_simples", "token_abre_parenteses", "token_fecha_parenteses",
  "token_abre_chaves", "token_fecha_chaves", "token_abre_colchetes",
  "token_fecha_colchetes", "token_tralha", "token_contra_barra",
  "token_ponto", "token_virgula", "token_dois_pontos",
  "token_ponto_virgula", "token_atribuicao", "token_identificador",
  "token_desconhecido", "token_pr_escolha", "token_pr_caso",
  "token_pr_fim_escolha", "token_pr_default", "$accept", "algoritmo",
  "declaracao_algoritmo", "bloco_variaveis", "declaracao_variaveis",
  "tipo_variavel", "lista_variaveis", "tipo_primitivo", "tipo_matriz",
  "matriz_colchetes", "tipo_primitivo_plural", "bloco_inicio",
  "lista_comandos", "comando", "valor_esquerda", "atribuicao",
  "comando_retorne", "comando_escolha", "casos", "caso", "comando_se",
  "comando_enquanto", "comando_para", "passo", "expressao", "termo_1",
  "termo_2", "termo_3", "termo_4", "termo_5", "termo_6", "termo_7",
  "termo_8", "termo_9", "valor_primitivo", "chamada_funcao",
  "chamada_funcao_interna", "paramentros_chamada_funcao",
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
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    86,    87,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    92,
      93,    93,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    99,   100,   100,   101,   102,   102,   103,   103,   103,
     104,   104,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   114,   114,   114,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126
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
       3,     5,     3,     3,     1,     2,     1,     6,     4,     3,
       2,     3,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     0,     1,     0,     0,     4,     6,
      13,     0,     0,     0,     0,     3,     0,   106,     5,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    30,     0,    31,    34,    38,    35,    36,    37,
       0,    33,     0,     2,   105,     0,    12,    14,    16,    15,
      17,    18,     0,     0,    10,    11,    97,    98,    94,    95,
      96,    93,     0,     0,     0,     0,    89,     0,    60,    63,
      65,    67,    69,    72,    77,    80,    84,    90,    91,    92,
      39,     0,     0,     0,     0,    42,     0,     0,     0,    40,
       0,    27,    29,     0,    32,     0,     0,     0,     0,     8,
      85,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,   102,    43,   100,
       0,     0,     0,     0,     0,   110,     0,     0,   112,     0,
     108,     9,     0,    88,     0,    58,    59,    61,    62,    64,
      66,    68,    70,    71,    75,    76,    73,    74,    78,    79,
      82,    81,    83,     0,     0,     0,     0,    99,    21,     0,
       0,    41,     0,   109,     0,     0,    22,    24,    23,    25,
      26,    19,     0,    50,     0,    52,   101,   103,    20,     0,
       0,     0,    46,   113,   114,   111,   107,     0,     0,     0,
       0,    44,    45,    51,     0,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,    53,    56,    57,
       0,    48,     0,    49,    54,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    11,    53,    12,    54,    55,    89,
     181,    15,    31,    32,    33,    34,    35,    36,   191,   192,
      37,    38,    39,   206,   125,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   126,    16,    17,
      96,   137,   138
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
      24,    10,    94,   119,    36,  -123,    -1,    32,  -123,  -123,
    -123,     2,   -59,     5,    51,  -123,    32,  -123,  -123,    85,
      72,   125,  -123,   359,    78,   359,   101,   103,   305,    35,
     121,    12,  -123,   122,  -123,  -123,  -123,  -123,  -123,  -123,
     130,  -123,   132,  -123,  -123,   125,  -123,  -123,  -123,  -123,
    -123,  -123,   143,   139,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,   359,   359,   359,   359,   152,     9,    42,   161,
     167,   177,   134,   120,   148,    25,  -123,  -123,  -123,  -123,
     143,   214,    49,   359,   171,  -123,   -28,   320,   200,   172,
     184,  -123,  -123,   359,  -123,   -55,     3,   191,   -11,  -123,
    -123,  -123,  -123,    55,   234,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   234,   -18,   -41,  -123,  -123,  -123,
      15,   201,   229,   210,   -16,  -123,   205,    83,  -123,   108,
    -123,  -123,   127,  -123,    30,    42,    42,   161,   161,   167,
     177,   134,   120,   120,   148,   148,   148,   148,    25,    25,
    -123,  -123,  -123,    38,   199,   206,   359,  -123,  -123,   211,
      14,  -123,   125,  -123,   207,   277,  -123,  -123,  -123,  -123,
    -123,  -123,   234,  -123,   359,  -123,  -123,   -18,  -123,   112,
     215,    99,  -123,  -123,  -123,  -123,  -123,   213,    28,   217,
     234,  -123,  -123,  -123,   234,   118,   262,   241,   255,   220,
    -123,   254,   256,   234,    23,   294,    41,  -123,  -123,  -123,
     227,  -123,    54,  -123,  -123,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,  -123,   250,   286,  -122,   129,   247,
    -123,   -14,   -98,   -30,    -3,  -123,  -123,  -123,  -123,   113,
    -123,  -123,  -123,  -123,   -20,   -49,    96,   193,   196,   192,
     111,    60,   107,     6,   126,   -13,     1,   221,  -123,   293,
    -123,  -123,   136
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      40,    92,    43,    67,     9,    82,   144,    18,    86,    13,
     105,   135,    22,   142,    41,    20,    21,   175,    40,    91,
     105,    81,   105,   136,    23,   165,   164,     1,    24,   104,
     106,    23,    41,   166,    25,    24,    26,    27,    13,    28,
     106,    25,   106,    26,    27,   103,    28,   105,   128,    23,
     193,   182,   183,    24,   204,   205,   145,   146,   132,    25,
     171,    26,    27,   184,    28,    14,   105,   106,   100,   101,
     102,   120,   121,   134,   122,   124,   105,    10,   139,   107,
      10,   167,   140,    29,   197,    30,   106,   105,     4,   166,
      29,    40,    30,   105,     5,   189,   106,   190,   108,   221,
      87,    80,   208,   163,    88,    41,   209,   106,    29,   215,
      30,    40,     8,   106,    92,   220,    47,   223,    48,    80,
      49,   143,    50,     6,    51,    41,   160,   161,   162,    42,
     225,    40,    80,    47,    92,    48,   176,    49,   177,    50,
     178,    51,   179,    52,   180,    41,   187,    56,    57,   173,
      46,    40,    58,    59,    60,    61,    80,   174,   210,    20,
      45,   196,   211,   212,   198,    41,    83,    92,    84,    40,
     114,   115,   116,   117,   154,   155,   156,   157,    92,    92,
     189,   201,   190,    41,    40,    92,    90,    40,   112,   113,
      92,    40,   118,   119,    40,    40,    40,    95,    41,    93,
      40,    41,    40,   147,   148,    41,    94,    40,    41,    41,
      41,    81,    88,    81,    41,    99,    41,    87,    23,    81,
     109,    41,    24,   152,   153,   158,   159,   110,    25,   185,
      26,    27,    23,    28,   111,   203,    24,   127,   123,    23,
     131,   132,    25,    24,    26,    27,    23,    28,   217,    25,
      24,    26,    27,    23,    28,   224,    25,    24,    26,    27,
      23,    28,   133,    25,   214,    26,    27,   141,    28,   169,
      25,   168,    26,    27,    23,    28,   170,    29,   216,    30,
     172,   188,   186,    13,    25,   136,    26,    27,   213,    28,
     200,    29,   207,    30,   218,    97,   219,    19,    29,    98,
      30,   194,   149,   151,   202,    29,   150,    30,   130,    44,
     195,     0,    29,    23,    30,   199,     0,   222,     0,    29,
       0,    30,     0,    25,     0,    26,    27,     0,    28,     0,
       0,     0,     0,    29,     0,    30,    26,    27,     0,     0,
      56,    57,     0,     0,     0,    58,    59,    60,    61,    62,
      63,    26,    27,     0,     0,    56,    57,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,     0,     0,
      65,     0,    29,     0,    30,     0,     0,     0,     0,     0,
       0,    85,    64,    66,     0,    65,   129,     0,     0,     0,
      26,    27,     0,     0,    56,    57,     0,     0,    66,    58,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-123))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      13,    31,    16,    23,     5,    25,   104,     5,    28,     6,
      38,    66,     7,    24,    13,    74,    75,   139,    31,     7,
      38,    24,    38,    78,    19,    66,   124,     3,    23,    20,
      58,    19,    31,    74,    29,    23,    31,    32,     6,    34,
      58,    29,    58,    31,    32,    65,    34,    38,    76,    19,
     172,    21,    22,    23,    26,    27,   105,   106,    69,    29,
      76,    31,    32,    25,    34,    33,    38,    58,    62,    63,
      64,    46,    47,    93,    49,    26,    38,    78,    75,    37,
      78,    66,    96,    78,   182,    80,    58,    38,    78,    74,
      78,   104,    80,    38,     0,    81,    58,    83,    56,    76,
      65,    78,   200,   123,    69,   104,   204,    58,    78,   207,
      80,   124,    76,    58,   144,   213,     8,    76,    10,    78,
      12,    66,    14,     4,    16,   124,   120,   121,   122,    78,
      76,   144,    78,     8,   164,    10,     9,    12,    11,    14,
      13,    16,    15,    18,    17,   144,   166,    35,    36,    66,
      78,   164,    40,    41,    42,    43,    78,    74,    40,    74,
      75,   175,    44,    45,   184,   164,    65,   197,    65,   182,
      50,    51,    52,    53,   114,   115,   116,   117,   208,   209,
      81,    82,    83,   182,   197,   215,    65,   200,    54,    55,
     220,   204,    44,    45,   207,   208,   209,    65,   197,    77,
     213,   200,   215,   107,   108,   204,    76,   220,   207,   208,
     209,   214,    69,   216,   213,    76,   215,    65,    19,   222,
      59,   220,    23,   112,   113,   118,   119,    60,    29,    30,
      31,    32,    19,    34,    57,    22,    23,    66,    24,    19,
      40,    69,    29,    23,    31,    32,    19,    34,    28,    29,
      23,    31,    32,    19,    34,    28,    29,    23,    31,    32,
      19,    34,    78,    29,    23,    31,    32,    76,    34,    40,
      29,    70,    31,    32,    19,    34,    66,    78,    23,    80,
      75,    70,    76,     6,    29,    78,    31,    32,    26,    34,
      75,    78,    75,    80,    40,    45,    40,    11,    78,    52,
      80,   172,   109,   111,   191,    78,   110,    80,    87,    16,
     174,    -1,    78,    19,    80,   189,    -1,    23,    -1,    78,
      -1,    80,    -1,    29,    -1,    31,    32,    -1,    34,    -1,
      -1,    -1,    -1,    78,    -1,    80,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    -1,    62,    -1,    -1,
      65,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    62,    78,    -1,    65,    66,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    78,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    85,    86,    78,     0,     4,    87,    76,     5,
      78,    88,    90,     6,    33,    95,   122,   123,     5,    90,
      74,    75,     7,    19,    23,    29,    31,    32,    34,    78,
      80,    96,    97,    98,    99,   100,   101,   104,   105,   106,
     119,   120,    78,    95,   123,    75,    78,     8,    10,    12,
      14,    16,    18,    89,    91,    92,    35,    36,    40,    41,
      42,    43,    44,    45,    62,    65,    78,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
      78,    98,   108,    65,    65,    76,   108,    65,    69,    93,
      65,     7,    97,    77,    76,    65,   124,    89,    93,    76,
     117,   117,   117,   108,    20,    38,    58,    37,    56,    59,
      60,    57,    54,    55,    50,    51,    52,    53,    44,    45,
      46,    47,    49,    24,    26,   108,   121,    66,    76,    66,
     121,    40,    69,    78,   108,    66,    78,   125,   126,    75,
      95,    76,    24,    66,    96,   109,   109,   110,   110,   111,
     112,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   117,   117,   108,    96,    66,    74,    66,    70,    40,
      66,    76,    75,    66,    74,    91,     9,    11,    13,    15,
      17,    94,    21,    22,    25,    30,    76,   108,    70,    81,
      83,   102,   103,    91,    92,   126,    95,    96,   108,   118,
      75,    82,   103,    22,    26,    27,   107,    75,    96,    96,
      40,    44,    45,    26,    23,    96,    23,    28,    40,    40,
      96,    76,    23,    76,    28,    76
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
        case 5:

/* Line 1806 of yacc.c  */
#line 116 "analisador_sintatico.y"
    {
	
	/*if(busca(tab_variaveis,"a1a")!=NULL)
		imprime(busca(tab_variaveis,"a1a"));
	else
		printf("Nao encontrado\n");*/	
}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 129 "analisador_sintatico.y"
    {
	//printf("primeiro\n");
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo);
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);	
	libera(var);
	var = inicializa();
	
}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 142 "analisador_sintatico.y"
    {
	//printf("segundo\n");
	tab_variaveis = insere_variavel_hash(tab_variaveis, var, tipo);
	if(tab_variaveis == NULL){
		printf("Erro semantico na linha %d. Variavel redeclarada.\n",num_linha);
		exit(0);
	}
	//printf ("identificador= %s\n",identificador);
	libera(var);
	var = inicializa();
	
}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 163 "analisador_sintatico.y"
    {
	var = insere_variavel_lista(var,identificador,0);
			
	//printf("%s\n",identificador);
}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 169 "analisador_sintatico.y"
    {
	var = insere_variavel_lista(var,identificador,0);
	//printf("%s\n",identificador);
}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 203 "analisador_sintatico.y"
    {
	verifica_variavel_usada(tab_variaveis);
}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 227 "analisador_sintatico.y"
    {
	//verifica se as variaveis que estao recebendo atribuicao foram declaradas, se sim usada=1
	var =busca(tab_variaveis,identificador); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
	}
	//imprime_hash(tab_variaveis);
	
}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 349 "analisador_sintatico.y"
    {
	var =busca(tab_variaveis,identificador); 
	if(var == NULL){
		printf("Erro semantico na linha %d. Variavel nao declarada.\n",num_linha);
		exit(0);
		
	}else{
		set_usada(var);
		//printf("Variavel declarada-> %s!!\n",identificador);
	}
}
    break;



/* Line 1806 of yacc.c  */
#line 1828 "analisador_sintatico.tab.c"
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
#line 416 "analisador_sintatico.y"


#include "lex.yy.c"

main(){
	tab_variaveis = inicializa_hash();
	var = inicializa();
	yyparse();
}

/* rotina de erro */
yyerror (){
	printf("Erro! Linha %d\n", num_linha);
}

