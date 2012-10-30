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
/* Line 1240 of yacc.c.  */
#line 131 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



