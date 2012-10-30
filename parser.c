/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_ACCEPT = 258,
     TOK_DEST = 259,
     TOK_DPORT = 260,
     TOK_DROP = 261,
     TOK_FORWARD = 262,
     TOK_ICMPTYPE = 263,
     TOK_INPUT = 264,
     TOK_LCURLY = 265,
     TOK_LOCAL = 266,
     TOK_LOG = 267,
     TOK_LSQUARE = 268,
     TOK_MASQ = 269,
     TOK_ONEWAY = 270,
     TOK_OUTPUT = 271,
     TOK_PROTO = 272,
     TOK_PROXY = 273,
     TOK_RCURLY = 274,
     TOK_REDIRECT = 275,
     TOK_REJECT = 276,
     TOK_RSQUARE = 277,
     TOK_SEMICOLON = 278,
     TOK_SOURCE = 279,
     TOK_SPORT = 280,
     TOK_TEXT = 281,
     TOK_IDENTIFIER = 282,
     TOK_DOT = 283,
     TOK_SLASH = 284,
     TOK_ERR = 285,
     TOK_BANG = 286,
     TOK_COLON = 287
   };
#endif
#define TOK_ACCEPT 258
#define TOK_DEST 259
#define TOK_DPORT 260
#define TOK_DROP 261
#define TOK_FORWARD 262
#define TOK_ICMPTYPE 263
#define TOK_INPUT 264
#define TOK_LCURLY 265
#define TOK_LOCAL 266
#define TOK_LOG 267
#define TOK_LSQUARE 268
#define TOK_MASQ 269
#define TOK_ONEWAY 270
#define TOK_OUTPUT 271
#define TOK_PROTO 272
#define TOK_PROXY 273
#define TOK_RCURLY 274
#define TOK_REDIRECT 275
#define TOK_REJECT 276
#define TOK_RSQUARE 277
#define TOK_SEMICOLON 278
#define TOK_SOURCE 279
#define TOK_SPORT 280
#define TOK_TEXT 281
#define TOK_IDENTIFIER 282
#define TOK_DOT 283
#define TOK_SLASH 284
#define TOK_ERR 285
#define TOK_BANG 286
#define TOK_COLON 287




/* Copy the first part of user declarations.  */
#line 20 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

#define YYPARSE_PARAM parm

void yyerror(const char * s);
extern int yylex(void);

#define YYPRINT(f, t, v) yyprint(f, t, v)


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 35 "parser.y"
typedef union YYSTYPE {
	struct rule_list_s * u_rule_list;
	struct rule_s * u_rule;
	struct specifier_list_s * u_specifier_list;
	struct negated_specifier_s * u_negated_specifier;
	struct specifier_s * u_specifier;
	struct direction_specifier_s * u_direction_specifier;
	struct direction_argument_list_s * u_direction_argument_list;
	struct direction_argument_s * u_direction_argument;
	struct target_specifier_s * u_target_specifier;
	struct log_target_specifier_s * u_log_target_specifier;
	struct host_specifier_s * u_host_specifier;
	struct host_argument_list_s * u_host_argument_list;
	struct host_argument_s * u_host_argument;
	struct port_specifier_s * u_port_specifier;
	struct port_argument_list_s * u_port_argument_list;
	struct port_argument_s * u_port_argument;
	struct protocol_specifier_s * u_protocol_specifier;
	struct protocol_argument_list_s * u_protocol_argument_list;
	struct protocol_argument_s * u_protocol_argument;
	struct icmptype_specifier_s * u_icmptype_specifier;
	struct icmptype_argument_list_s * u_icmptype_argument_list;
	struct icmptype_argument_s * u_icmptype_argument;
	struct option_specifier_s * u_option_specifier;
	struct compound_specifier_s * u_compound_specifier;
	struct chaingroup_specifier_s * u_chaingroup_specifier;
	struct subrule_list_s * u_subrule_list;
	char * u_str;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 184 "parser.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 126 "parser.y"

int yyprint(FILE * f, int t, YYSTYPE v);


/* Line 214 of yacc.c.  */
#line 199 "parser.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   112

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  32
/* YYNRULES -- Number of rules. */
#define YYNRULES  69
/* YYNRULES -- Number of states. */
#define YYNSTATES  95

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    12,    13,    16,    18,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      42,    45,    47,    51,    52,    55,    57,    59,    61,    63,
      65,    67,    69,    72,    75,    77,    81,    82,    85,    89,
      91,    94,    97,    99,   103,   105,   108,   112,   114,   117,
     119,   123,   124,   127,   129,   132,   134,   138,   139,   142,
     144,   146,   148,   150,   154,   156,   160,   162,   166,   171
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      34,     0,    -1,    35,    -1,    -1,    35,    36,    -1,    37,
      23,    -1,    -1,    37,    38,    -1,    39,    -1,    31,    39,
      -1,    62,    -1,    40,    -1,    44,    -1,    45,    -1,    49,
      -1,    53,    -1,    57,    -1,    61,    -1,    64,    -1,     9,
      41,    -1,    16,    41,    -1,    42,    -1,    10,    42,    19,
      -1,    -1,    42,    43,    -1,    27,    -1,     3,    -1,    21,
      -1,     6,    -1,    14,    -1,    18,    -1,    20,    -1,    24,
      46,    -1,     4,    46,    -1,    47,    -1,    10,    47,    19,
      -1,    -1,    47,    48,    -1,    27,    29,    27,    -1,    27,
      -1,    25,    50,    -1,     5,    50,    -1,    51,    -1,    10,
      50,    19,    -1,    52,    -1,    51,    52,    -1,    27,    32,
      27,    -1,    27,    -1,    17,    54,    -1,    55,    -1,    10,
      55,    19,    -1,    -1,    55,    56,    -1,    27,    -1,     8,
      58,    -1,    59,    -1,    10,    59,    19,    -1,    -1,    59,
      60,    -1,    27,    -1,    11,    -1,     7,    -1,    15,    -1,
      12,    26,    27,    -1,    12,    -1,    10,    63,    19,    -1,
      37,    -1,    63,    23,    37,    -1,    13,    27,    63,    22,
      -1,    13,    63,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   131,   131,   139,   142,   150,   158,   161,   169,   175,
     183,   189,   195,   201,   207,   213,   219,   225,   231,   239,
     245,   253,   257,   264,   267,   275,   282,   287,   292,   297,
     302,   307,   314,   320,   328,   332,   339,   342,   350,   356,
     364,   370,   378,   382,   387,   393,   401,   407,   415,   422,
     426,   433,   436,   444,   451,   458,   462,   469,   472,   480,
     487,   493,   499,   505,   511,   519,   526,   532,   540,   546
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_ACCEPT", "TOK_DEST", "TOK_DPORT", 
  "TOK_DROP", "TOK_FORWARD", "TOK_ICMPTYPE", "TOK_INPUT", "TOK_LCURLY", 
  "TOK_LOCAL", "TOK_LOG", "TOK_LSQUARE", "TOK_MASQ", "TOK_ONEWAY", 
  "TOK_OUTPUT", "TOK_PROTO", "TOK_PROXY", "TOK_RCURLY", "TOK_REDIRECT", 
  "TOK_REJECT", "TOK_RSQUARE", "TOK_SEMICOLON", "TOK_SOURCE", "TOK_SPORT", 
  "TOK_TEXT", "TOK_IDENTIFIER", "TOK_DOT", "TOK_SLASH", "TOK_ERR", 
  "TOK_BANG", "TOK_COLON", "$accept", "ast", "rule_list", "rule", 
  "specifier_list", "negated_specifier", "specifier", 
  "direction_specifier", "direction_argument_list", 
  "direction_argument_list_", "direction_argument", "target_specifier", 
  "host_specifier", "host_argument_list", "host_argument_list_", 
  "host_argument", "port_specifier", "port_argument_list", 
  "port_argument_list_", "port_argument", "protocol_specifier", 
  "protocol_argument_list", "protocol_argument_list_", 
  "protocol_argument", "icmptype_specifier", "icmptype_argument_list", 
  "icmptype_argument_list_", "icmptype_argument", "option_specifier", 
  "compound_specifier", "subrule_list", "chaingroup_specifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    33,    34,    35,    35,    36,    37,    37,    38,    38,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    40,
      40,    41,    41,    42,    42,    43,    44,    44,    44,    44,
      44,    44,    45,    45,    46,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    53,    54,
      54,    55,    55,    56,    57,    58,    58,    59,    59,    60,
      61,    61,    61,    61,    61,    62,    63,    63,    64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     2,     2,     0,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     0,     2,     3,     1,
       2,     2,     1,     3,     1,     2,     3,     1,     2,     1,
       3,     0,     2,     1,     2,     1,     3,     0,     2,     1,
       1,     1,     1,     3,     1,     3,     1,     3,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     6,     1,     4,     0,    26,    36,     0,    28,
      61,    57,    23,     6,    60,    64,     6,    29,    62,    23,
      51,    30,    31,    27,     5,    36,     0,     0,     7,     8,
      11,    12,    13,    14,    15,    16,    17,    10,    18,    36,
      33,    34,     0,    47,    41,    42,    44,    57,    54,    55,
      23,    19,    21,    66,     0,     0,     6,     0,    20,    51,
      48,    49,    32,    40,     9,     0,    39,    37,     0,     0,
      45,     0,    59,    58,     0,    25,    24,    65,     6,    63,
       0,    69,     0,    53,    52,    35,     0,    43,    46,    56,
      22,    67,    68,    50,    38
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,     1,     2,     4,    53,    28,    29,    30,    51,    52,
      76,    31,    32,    40,    41,    67,    33,    44,    45,    46,
      34,    60,    61,    84,    35,    48,    49,    73,    36,    37,
      54,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -16
static const yysigned_char yypact[] =
{
     -16,    27,    29,   -16,   -16,    -1,   -16,    22,     8,   -16,
     -16,    28,    30,   -16,   -16,    32,    35,   -16,   -16,    30,
      61,   -16,   -16,   -16,   -16,    22,     8,    74,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,    45,     8,    41,   -16,    47,   -16,   -16,   -16,    48,
     -16,   -16,    66,    39,    42,    69,   -16,    44,   -16,   -16,
     -16,    70,   -16,   -16,   -16,     6,    71,   -16,    82,    75,
     -16,     7,   -16,   -16,     9,   -16,   -16,   -16,   -16,   -16,
      46,   -16,    12,   -16,   -16,   -16,    76,   -16,   -16,   -16,
     -16,    39,   -16,   -16,   -16
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -16,   -16,   -16,   -16,    -2,   -16,    77,   -16,    86,    56,
     -16,   -16,   -16,    83,    68,   -16,   -16,    -5,   -16,    64,
     -16,   -16,    51,   -16,   -16,   -16,    65,   -16,   -16,   -16,
     -15,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yysigned_char yytable[] =
{
       5,    57,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    42,    22,
      23,    63,    24,    25,    26,    85,    89,     3,    90,    -2,
      27,    93,    39,    66,    72,    43,    75,    68,    47,    83,
      50,    80,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    55,    22,
      23,    77,    56,    25,    26,    78,    81,    78,    92,    78,
      27,    59,    66,    69,    43,    72,    91,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    75,    22,    23,    79,    83,    25,    26,
      86,    87,    88,    94,    64,    58,    74,    65,    62,    70,
      82,     0,    71
};

static const yysigned_char yycheck[] =
{
       2,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    10,    20,
      21,    26,    23,    24,    25,    19,    19,     0,    19,     0,
      31,    19,    10,    27,    27,    27,    27,    42,    10,    27,
      10,    56,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    26,    20,
      21,    19,    27,    24,    25,    23,    22,    23,    22,    23,
      31,    10,    27,    32,    27,    27,    78,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    27,    20,    21,    27,    27,    24,    25,
      29,    19,    27,    27,    27,    19,    50,    39,    25,    45,
      59,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    34,    35,     0,    36,    37,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    20,    21,    23,    24,    25,    31,    38,    39,
      40,    44,    45,    49,    53,    57,    61,    62,    64,    10,
      46,    47,    10,    27,    50,    51,    52,    10,    58,    59,
      10,    41,    42,    37,    63,    26,    27,    63,    41,    10,
      54,    55,    46,    50,    39,    47,    27,    48,    50,    32,
      52,    59,    27,    60,    42,    27,    43,    19,    23,    27,
      63,    22,    55,    27,    56,    19,    29,    19,    27,    19,
      19,    37,    22,    19,    27
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 132 "parser.y"
    {
		/* we expect parm to be already allocated, and that
		 * it is of type (struct ast_s *) */
		((struct ast_s *) parm)->list = yyvsp[0].u_rule_list;
	}
    break;

  case 3:
#line 139 "parser.y"
    {
		yyval.u_rule_list = NULL;
	}
    break;

  case 4:
#line 143 "parser.y"
    {
		yyval.u_rule_list = malloc(sizeof(struct rule_list_s));
		yyval.u_rule_list->list = yyvsp[-1].u_rule_list;
		yyval.u_rule_list->rule = yyvsp[0].u_rule;
	}
    break;

  case 5:
#line 151 "parser.y"
    {
		yyval.u_rule = malloc(sizeof(struct rule_s));
		yyval.u_rule->list = yyvsp[-1].u_specifier_list;
	}
    break;

  case 6:
#line 158 "parser.y"
    {
		yyval.u_specifier_list = NULL;
	}
    break;

  case 7:
#line 162 "parser.y"
    {
		yyval.u_specifier_list = malloc(sizeof(struct specifier_list_s));
		yyval.u_specifier_list->list = yyvsp[-1].u_specifier_list;
		yyval.u_specifier_list->spec = yyvsp[0].u_negated_specifier;
	}
    break;

  case 8:
#line 170 "parser.y"
    {
		yyval.u_negated_specifier = malloc(sizeof(struct negated_specifier_s));
		yyval.u_negated_specifier->negated = 0;
		yyval.u_negated_specifier->spec = yyvsp[0].u_specifier;
	}
    break;

  case 9:
#line 176 "parser.y"
    {
		yyval.u_negated_specifier = malloc(sizeof(struct negated_specifier_s));
		yyval.u_negated_specifier->negated = 1;
		yyval.u_negated_specifier->spec = yyvsp[0].u_specifier;
	}
    break;

  case 10:
#line 184 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->compound = yyvsp[0].u_compound_specifier;
	}
    break;

  case 11:
#line 190 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->direction = yyvsp[0].u_direction_specifier;
	}
    break;

  case 12:
#line 196 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->target = yyvsp[0].u_target_specifier;
	}
    break;

  case 13:
#line 202 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->host = yyvsp[0].u_host_specifier;
	}
    break;

  case 14:
#line 208 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->port = yyvsp[0].u_port_specifier;
	}
    break;

  case 15:
#line 214 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->protocol = yyvsp[0].u_protocol_specifier;
	}
    break;

  case 16:
#line 220 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->icmptype = yyvsp[0].u_icmptype_specifier;
	}
    break;

  case 17:
#line 226 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->option = yyvsp[0].u_option_specifier;
	}
    break;

  case 18:
#line 232 "parser.y"
    {
		yyval.u_specifier = malloc(sizeof(struct specifier_s));
		memset(yyval.u_specifier, 0, sizeof(struct specifier_s));
		yyval.u_specifier->chaingroup = yyvsp[0].u_chaingroup_specifier;
	}
    break;

  case 19:
#line 240 "parser.y"
    {
		yyval.u_direction_specifier = malloc(sizeof(struct direction_specifier_s));
		yyval.u_direction_specifier->type = TOK_INPUT;
		yyval.u_direction_specifier->list = yyvsp[0].u_direction_argument_list;
	}
    break;

  case 20:
#line 246 "parser.y"
    {
		yyval.u_direction_specifier = malloc(sizeof(struct direction_specifier_s));
		yyval.u_direction_specifier->type = TOK_OUTPUT;
		yyval.u_direction_specifier->list = yyvsp[0].u_direction_argument_list;
	}
    break;

  case 21:
#line 254 "parser.y"
    {
		yyval.u_direction_argument_list = yyvsp[0].u_direction_argument_list;
	}
    break;

  case 22:
#line 258 "parser.y"
    {
		yyval.u_direction_argument_list = yyvsp[-1].u_direction_argument_list;
	}
    break;

  case 23:
#line 264 "parser.y"
    {
		yyval.u_direction_argument_list = NULL;
	}
    break;

  case 24:
#line 268 "parser.y"
    {
		yyval.u_direction_argument_list = malloc(sizeof(struct direction_argument_list_s));
		yyval.u_direction_argument_list->list = yyvsp[-1].u_direction_argument_list;
		yyval.u_direction_argument_list->arg = yyvsp[0].u_direction_argument;
	}
    break;

  case 25:
#line 276 "parser.y"
    {
		yyval.u_direction_argument = malloc(sizeof(struct direction_argument_s));
		yyval.u_direction_argument->direction = yyvsp[0].u_str;
	}
    break;

  case 26:
#line 283 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_ACCEPT;
	}
    break;

  case 27:
#line 288 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_REJECT;
	}
    break;

  case 28:
#line 293 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_DROP;
	}
    break;

  case 29:
#line 298 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_MASQ;
	}
    break;

  case 30:
#line 303 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_PROXY;
	}
    break;

  case 31:
#line 308 "parser.y"
    {
		yyval.u_target_specifier = malloc(sizeof(struct target_specifier_s));
		yyval.u_target_specifier->type = TOK_REDIRECT;
	}
    break;

  case 32:
#line 315 "parser.y"
    {
		yyval.u_host_specifier = malloc(sizeof(struct host_specifier_s));
		yyval.u_host_specifier->type = TOK_SOURCE;
		yyval.u_host_specifier->list = yyvsp[0].u_host_argument_list;
	}
    break;

  case 33:
#line 321 "parser.y"
    {
		yyval.u_host_specifier = malloc(sizeof(struct host_specifier_s));
		yyval.u_host_specifier->type = TOK_DEST;
		yyval.u_host_specifier->list = yyvsp[0].u_host_argument_list;
	}
    break;

  case 34:
#line 329 "parser.y"
    {
		yyval.u_host_argument_list = yyvsp[0].u_host_argument_list;
	}
    break;

  case 35:
#line 333 "parser.y"
    {
		yyval.u_host_argument_list = yyvsp[-1].u_host_argument_list;
	}
    break;

  case 36:
#line 339 "parser.y"
    {
		yyval.u_host_argument_list = NULL;
	}
    break;

  case 37:
#line 343 "parser.y"
    {
		yyval.u_host_argument_list = malloc(sizeof(struct host_argument_list_s));
		yyval.u_host_argument_list->list = yyvsp[-1].u_host_argument_list;
		yyval.u_host_argument_list->arg = yyvsp[0].u_host_argument;
	}
    break;

  case 38:
#line 351 "parser.y"
    {
		yyval.u_host_argument = malloc(sizeof(struct host_argument_s));
		yyval.u_host_argument->host = yyvsp[-2].u_str;
		yyval.u_host_argument->mask = yyvsp[0].u_str;
	}
    break;

  case 39:
#line 357 "parser.y"
    {
		yyval.u_host_argument = malloc(sizeof(struct host_argument_s));
		yyval.u_host_argument->host = yyvsp[0].u_str;
                yyval.u_host_argument->mask = 0;
	}
    break;

  case 40:
#line 365 "parser.y"
    {
		yyval.u_port_specifier = malloc(sizeof(struct port_specifier_s));
		yyval.u_port_specifier->type = TOK_SPORT;
		yyval.u_port_specifier->list = yyvsp[0].u_port_argument_list;
	}
    break;

  case 41:
#line 371 "parser.y"
    {
		yyval.u_port_specifier = malloc(sizeof(struct port_specifier_s));
		yyval.u_port_specifier->type = TOK_DPORT;
		yyval.u_port_specifier->list = yyvsp[0].u_port_argument_list;
	}
    break;

  case 42:
#line 379 "parser.y"
    {
		yyval.u_port_argument_list = yyvsp[0].u_port_argument_list;
	}
    break;

  case 43:
#line 383 "parser.y"
    {
		yyval.u_port_argument_list = yyvsp[-1].u_port_argument_list;
	}
    break;

  case 44:
#line 388 "parser.y"
    {
		yyval.u_port_argument_list = malloc(sizeof(struct port_argument_list_s));
		yyval.u_port_argument_list->list = NULL;
		yyval.u_port_argument_list->arg = yyvsp[0].u_port_argument;
	}
    break;

  case 45:
#line 394 "parser.y"
    {
		yyval.u_port_argument_list = malloc(sizeof(struct port_argument_list_s));
		yyval.u_port_argument_list->list = yyvsp[-1].u_port_argument_list;
		yyval.u_port_argument_list->arg = yyvsp[0].u_port_argument;
	}
    break;

  case 46:
#line 402 "parser.y"
    {
		yyval.u_port_argument = malloc(sizeof(struct port_argument_s));
		yyval.u_port_argument->port_min = yyvsp[-2].u_str;
		yyval.u_port_argument->port_max = yyvsp[0].u_str;
	}
    break;

  case 47:
#line 408 "parser.y"
    {
		yyval.u_port_argument = malloc(sizeof(struct port_argument_s));
		yyval.u_port_argument->port_min = yyvsp[0].u_str;
		yyval.u_port_argument->port_max = NULL;
	}
    break;

  case 48:
#line 416 "parser.y"
    {
		yyval.u_protocol_specifier = malloc(sizeof(struct protocol_specifier_s));
		yyval.u_protocol_specifier->list = yyvsp[0].u_protocol_argument_list;
	}
    break;

  case 49:
#line 423 "parser.y"
    {
		yyval.u_protocol_argument_list = yyvsp[0].u_protocol_argument_list;
	}
    break;

  case 50:
#line 427 "parser.y"
    {
		yyval.u_protocol_argument_list = yyvsp[-1].u_protocol_argument_list;
	}
    break;

  case 51:
#line 433 "parser.y"
    {
		yyval.u_protocol_argument_list = NULL;
	}
    break;

  case 52:
#line 437 "parser.y"
    {
		yyval.u_protocol_argument_list = malloc(sizeof(struct protocol_argument_list_s));
		yyval.u_protocol_argument_list->list = yyvsp[-1].u_protocol_argument_list;
		yyval.u_protocol_argument_list->arg = yyvsp[0].u_protocol_argument;
	}
    break;

  case 53:
#line 445 "parser.y"
    {
		yyval.u_protocol_argument = malloc(sizeof(struct protocol_argument_s));
		yyval.u_protocol_argument->proto = strdup(yyvsp[0].u_str);
	}
    break;

  case 54:
#line 452 "parser.y"
    {
		yyval.u_icmptype_specifier = malloc(sizeof(struct icmptype_specifier_s));
		yyval.u_icmptype_specifier->list = yyvsp[0].u_icmptype_argument_list;
	}
    break;

  case 55:
#line 459 "parser.y"
    {
		yyval.u_icmptype_argument_list = yyvsp[0].u_icmptype_argument_list;
	}
    break;

  case 56:
#line 463 "parser.y"
    {
		yyval.u_icmptype_argument_list = yyvsp[-1].u_icmptype_argument_list;
	}
    break;

  case 57:
#line 469 "parser.y"
    {
		yyval.u_icmptype_argument_list = NULL;
	}
    break;

  case 58:
#line 473 "parser.y"
    {
		yyval.u_icmptype_argument_list = malloc(sizeof(struct icmptype_argument_list_s));
		yyval.u_icmptype_argument_list->list = yyvsp[-1].u_icmptype_argument_list;
		yyval.u_icmptype_argument_list->arg = yyvsp[0].u_icmptype_argument;
	}
    break;

  case 59:
#line 481 "parser.y"
    {
		yyval.u_icmptype_argument = malloc(sizeof(struct icmptype_argument_s));
		yyval.u_icmptype_argument->icmptype = yyvsp[0].u_str;
	}
    break;

  case 60:
#line 488 "parser.y"
    {
		yyval.u_option_specifier = malloc(sizeof(struct option_specifier_s));
		yyval.u_option_specifier->type = TOK_LOCAL;
		yyval.u_option_specifier->logmsg = 0;
	}
    break;

  case 61:
#line 494 "parser.y"
    {
		yyval.u_option_specifier = malloc(sizeof(struct option_specifier_s));
		yyval.u_option_specifier->type = TOK_FORWARD;
		yyval.u_option_specifier->logmsg = 0;
	}
    break;

  case 62:
#line 500 "parser.y"
    {
		yyval.u_option_specifier = malloc(sizeof(struct option_specifier_s));
		yyval.u_option_specifier->type = TOK_ONEWAY;
		yyval.u_option_specifier->logmsg = 0;
	}
    break;

  case 63:
#line 506 "parser.y"
    {
                yyval.u_option_specifier = malloc(sizeof(struct option_specifier_s));
		yyval.u_option_specifier->type = TOK_LOG;
		yyval.u_option_specifier->logmsg = yyvsp[0].u_str;
	}
    break;

  case 64:
#line 512 "parser.y"
    {
                yyval.u_option_specifier = malloc(sizeof(struct option_specifier_s));	
		yyval.u_option_specifier->type = TOK_LOG;
		yyval.u_option_specifier->logmsg = 0;
	}
    break;

  case 65:
#line 520 "parser.y"
    {
		yyval.u_compound_specifier = malloc(sizeof(struct compound_specifier_s));
		yyval.u_compound_specifier->list = yyvsp[-1].u_subrule_list;
	}
    break;

  case 66:
#line 527 "parser.y"
    {
		yyval.u_subrule_list = malloc(sizeof(struct subrule_list_s));
		yyval.u_subrule_list->subrule_list = NULL;
		yyval.u_subrule_list->specifier_list = yyvsp[0].u_specifier_list;
	}
    break;

  case 67:
#line 533 "parser.y"
    {
		yyval.u_subrule_list = malloc(sizeof(struct subrule_list_s));
		yyval.u_subrule_list->subrule_list = yyvsp[-2].u_subrule_list;
		yyval.u_subrule_list->specifier_list = yyvsp[0].u_specifier_list;
	}
    break;

  case 68:
#line 541 "parser.y"
    {
		yyval.u_chaingroup_specifier = malloc(sizeof(struct chaingroup_specifier_s));
		yyval.u_chaingroup_specifier->name = yyvsp[-2].u_str;
		yyval.u_chaingroup_specifier->list = yyvsp[-1].u_subrule_list;
	}
    break;

  case 69:
#line 547 "parser.y"
    {
		yyval.u_chaingroup_specifier = malloc(sizeof(struct chaingroup_specifier_s));
		yyval.u_chaingroup_specifier->name = NULL;
		yyval.u_chaingroup_specifier->list = yyvsp[-1].u_subrule_list;
	}
    break;


    }

/* Line 999 of yacc.c.  */
#line 1744 "parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 554 "parser.y"

char * filename();
long int lineno();
extern char * yytext;

void yyerror(const char * s) {
	fprintf(stderr, "%s:%ld: %s\n", filename(), lineno(), s);
}

int yyprint(FILE * f, int type, YYSTYPE v) {
	fprintf(f, "%d:\"%s\":%p", type, yytext, &v);
	return 0;
}

