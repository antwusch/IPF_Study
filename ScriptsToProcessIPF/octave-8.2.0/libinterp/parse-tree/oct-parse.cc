/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         OCTAVE_STYPE
/* Substitute the variable and function names.  */
#define yyparse         octave_parse
#define yypush_parse    octave_push_parse
#define yypull_parse    octave_pull_parse
#define yypstate_new    octave_pstate_new
#define yypstate_clear  octave_pstate_clear
#define yypstate_delete octave_pstate_delete
#define yypstate        octave_pstate
#define yylex           octave_lex
#define yyerror         octave_error
#define yydebug         octave_debug
#define yynerrs         octave_nerrs

/* First part of user prologue.  */
#line 30 "../libinterp/parse-tree/oct-parse.yy"


#define YYDEBUG 1

#if defined (HAVE_CONFIG_H)
#  include "config.h"
#endif

#include <cassert>
#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <map>
#include <sstream>

#include "Matrix.h"
#include "cmd-edit.h"
#include "cmd-hist.h"
#include "file-ops.h"
#include "file-stat.h"
#include "oct-env.h"
#include "oct-time.h"
#include "quit.h"

#include "Cell.h"
#include "anon-fcn-validator.h"
#include "builtin-defun-decls.h"
#include "defun.h"
#include "dynamic-ld.h"
#include "error.h"
#include "input.h"
#include "interpreter-private.h"
#include "interpreter.h"
#include "lex.h"
#include "load-path.h"
#include "lo-sysdep.h"
#include "oct-hist.h"
#include "oct-map.h"
#include "ov-classdef.h"
#include "ov-fcn-handle.h"
#include "ov-usr-fcn.h"
#include "ov-null-mat.h"
#include "pager.h"
#include "parse.h"
#include "pt-all.h"
#include "pt-eval.h"
#include "symtab.h"
#include "token.h"
#include "unwind-prot.h"
#include "utils.h"
#include "variables.h"

// oct-parse.h must be included after pt-all.h
#include "oct-parse.h"

extern int octave_lex (YYSTYPE *, void *);

// Forward declarations for some functions defined at the bottom of
// the file.

static void yyerror (octave::base_parser& parser, const char *s);

#define lexer (parser.get_lexer ())
#define scanner lexer.m_scanner

// Previous versions of Octave used Bison's YYUSE macro to avoid
// warnings about unused values in rules.  But that Bison macro was
// apparently never intended to be public.  So define our own.  All we
// need to do is mention the symantic value somewhere in the rule.  It
// doesn't actually need to be used to avoid the Bison warning, so just
// define this macro to discard its parameter.
#define OCTAVE_YYUSE(X, ...)

#if defined (HAVE_PRAGMA_GCC_DIAGNOSTIC)
   // Disable this warning for code that is generated by Bison,
   // including grammar rules.  Push the current state so we can
   // restore the warning state prior to functions we define at
   // the bottom of the file.
#  pragma GCC diagnostic push
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#endif


#line 168 "libinterp/parse-tree/oct-parse.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "oct-parse.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* ':'  */
  YYSYMBOL_5_ = 5,                         /* '-'  */
  YYSYMBOL_6_ = 6,                         /* '+'  */
  YYSYMBOL_7_ = 7,                         /* '*'  */
  YYSYMBOL_8_ = 8,                         /* '/'  */
  YYSYMBOL_9_ = 9,                         /* '~'  */
  YYSYMBOL_10_ = 10,                       /* '!'  */
  YYSYMBOL_11_ = 11,                       /* '('  */
  YYSYMBOL_12_ = 12,                       /* ')'  */
  YYSYMBOL_13_ = 13,                       /* '['  */
  YYSYMBOL_14_ = 14,                       /* ']'  */
  YYSYMBOL_15_ = 15,                       /* '{'  */
  YYSYMBOL_16_ = 16,                       /* '}'  */
  YYSYMBOL_17_ = 17,                       /* '.'  */
  YYSYMBOL_18_ = 18,                       /* '@'  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* ';'  */
  YYSYMBOL_21_n_ = 21,                     /* '\n'  */
  YYSYMBOL_ADD_EQ = 22,                    /* ADD_EQ  */
  YYSYMBOL_SUB_EQ = 23,                    /* SUB_EQ  */
  YYSYMBOL_MUL_EQ = 24,                    /* MUL_EQ  */
  YYSYMBOL_DIV_EQ = 25,                    /* DIV_EQ  */
  YYSYMBOL_LEFTDIV_EQ = 26,                /* LEFTDIV_EQ  */
  YYSYMBOL_POW_EQ = 27,                    /* POW_EQ  */
  YYSYMBOL_EMUL_EQ = 28,                   /* EMUL_EQ  */
  YYSYMBOL_EDIV_EQ = 29,                   /* EDIV_EQ  */
  YYSYMBOL_ELEFTDIV_EQ = 30,               /* ELEFTDIV_EQ  */
  YYSYMBOL_EPOW_EQ = 31,                   /* EPOW_EQ  */
  YYSYMBOL_AND_EQ = 32,                    /* AND_EQ  */
  YYSYMBOL_OR_EQ = 33,                     /* OR_EQ  */
  YYSYMBOL_EXPR_AND_AND = 34,              /* EXPR_AND_AND  */
  YYSYMBOL_EXPR_OR_OR = 35,                /* EXPR_OR_OR  */
  YYSYMBOL_EXPR_AND = 36,                  /* EXPR_AND  */
  YYSYMBOL_EXPR_OR = 37,                   /* EXPR_OR  */
  YYSYMBOL_EXPR_LT = 38,                   /* EXPR_LT  */
  YYSYMBOL_EXPR_LE = 39,                   /* EXPR_LE  */
  YYSYMBOL_EXPR_EQ = 40,                   /* EXPR_EQ  */
  YYSYMBOL_EXPR_NE = 41,                   /* EXPR_NE  */
  YYSYMBOL_EXPR_GE = 42,                   /* EXPR_GE  */
  YYSYMBOL_EXPR_GT = 43,                   /* EXPR_GT  */
  YYSYMBOL_LEFTDIV = 44,                   /* LEFTDIV  */
  YYSYMBOL_EMUL = 45,                      /* EMUL  */
  YYSYMBOL_EDIV = 46,                      /* EDIV  */
  YYSYMBOL_ELEFTDIV = 47,                  /* ELEFTDIV  */
  YYSYMBOL_HERMITIAN = 48,                 /* HERMITIAN  */
  YYSYMBOL_TRANSPOSE = 49,                 /* TRANSPOSE  */
  YYSYMBOL_PLUS_PLUS = 50,                 /* PLUS_PLUS  */
  YYSYMBOL_MINUS_MINUS = 51,               /* MINUS_MINUS  */
  YYSYMBOL_POW = 52,                       /* POW  */
  YYSYMBOL_EPOW = 53,                      /* EPOW  */
  YYSYMBOL_NUMBER = 54,                    /* NUMBER  */
  YYSYMBOL_STRUCT_ELT = 55,                /* STRUCT_ELT  */
  YYSYMBOL_NAME = 56,                      /* NAME  */
  YYSYMBOL_END = 57,                       /* END  */
  YYSYMBOL_DQ_STRING = 58,                 /* DQ_STRING  */
  YYSYMBOL_SQ_STRING = 59,                 /* SQ_STRING  */
  YYSYMBOL_FOR = 60,                       /* FOR  */
  YYSYMBOL_PARFOR = 61,                    /* PARFOR  */
  YYSYMBOL_WHILE = 62,                     /* WHILE  */
  YYSYMBOL_DO = 63,                        /* DO  */
  YYSYMBOL_UNTIL = 64,                     /* UNTIL  */
  YYSYMBOL_SPMD = 65,                      /* SPMD  */
  YYSYMBOL_IF = 66,                        /* IF  */
  YYSYMBOL_ELSEIF = 67,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 68,                      /* ELSE  */
  YYSYMBOL_SWITCH = 69,                    /* SWITCH  */
  YYSYMBOL_CASE = 70,                      /* CASE  */
  YYSYMBOL_OTHERWISE = 71,                 /* OTHERWISE  */
  YYSYMBOL_BREAK = 72,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 73,                  /* CONTINUE  */
  YYSYMBOL_FUNC_RET = 74,                  /* FUNC_RET  */
  YYSYMBOL_UNWIND = 75,                    /* UNWIND  */
  YYSYMBOL_CLEANUP = 76,                   /* CLEANUP  */
  YYSYMBOL_TRY = 77,                       /* TRY  */
  YYSYMBOL_CATCH = 78,                     /* CATCH  */
  YYSYMBOL_GLOBAL = 79,                    /* GLOBAL  */
  YYSYMBOL_PERSISTENT = 80,                /* PERSISTENT  */
  YYSYMBOL_FCN_HANDLE = 81,                /* FCN_HANDLE  */
  YYSYMBOL_CLASSDEF = 82,                  /* CLASSDEF  */
  YYSYMBOL_PROPERTIES = 83,                /* PROPERTIES  */
  YYSYMBOL_METHODS = 84,                   /* METHODS  */
  YYSYMBOL_EVENTS = 85,                    /* EVENTS  */
  YYSYMBOL_ENUMERATION = 86,               /* ENUMERATION  */
  YYSYMBOL_METAQUERY = 87,                 /* METAQUERY  */
  YYSYMBOL_SUPERCLASSREF = 88,             /* SUPERCLASSREF  */
  YYSYMBOL_FQ_IDENT = 89,                  /* FQ_IDENT  */
  YYSYMBOL_GET = 90,                       /* GET  */
  YYSYMBOL_SET = 91,                       /* SET  */
  YYSYMBOL_FCN = 92,                       /* FCN  */
  YYSYMBOL_ARGUMENTS = 93,                 /* ARGUMENTS  */
  YYSYMBOL_LEXICAL_ERROR = 94,             /* LEXICAL_ERROR  */
  YYSYMBOL_END_OF_INPUT = 95,              /* END_OF_INPUT  */
  YYSYMBOL_INPUT_FILE = 96,                /* INPUT_FILE  */
  YYSYMBOL_UNARY = 97,                     /* UNARY  */
  YYSYMBOL_YYACCEPT = 98,                  /* $accept  */
  YYSYMBOL_input = 99,                     /* input  */
  YYSYMBOL_simple_list = 100,              /* simple_list  */
  YYSYMBOL_simple_list1 = 101,             /* simple_list1  */
  YYSYMBOL_opt_list = 102,                 /* opt_list  */
  YYSYMBOL_list = 103,                     /* list  */
  YYSYMBOL_list1 = 104,                    /* list1  */
  YYSYMBOL_opt_fcn_list = 105,             /* opt_fcn_list  */
  YYSYMBOL_fcn_list = 106,                 /* fcn_list  */
  YYSYMBOL_fcn_list1 = 107,                /* fcn_list1  */
  YYSYMBOL_statement = 108,                /* statement  */
  YYSYMBOL_word_list_cmd = 109,            /* word_list_cmd  */
  YYSYMBOL_word_list = 110,                /* word_list  */
  YYSYMBOL_identifier = 111,               /* identifier  */
  YYSYMBOL_superclass_identifier = 112,    /* superclass_identifier  */
  YYSYMBOL_meta_identifier = 113,          /* meta_identifier  */
  YYSYMBOL_string = 114,                   /* string  */
  YYSYMBOL_constant = 115,                 /* constant  */
  YYSYMBOL_matrix = 116,                   /* matrix  */
  YYSYMBOL_matrix_rows = 117,              /* matrix_rows  */
  YYSYMBOL_cell = 118,                     /* cell  */
  YYSYMBOL_cell_rows = 119,                /* cell_rows  */
  YYSYMBOL_cell_or_matrix_row = 120,       /* cell_or_matrix_row  */
  YYSYMBOL_fcn_handle = 121,               /* fcn_handle  */
  YYSYMBOL_anon_fcn_handle = 122,          /* anon_fcn_handle  */
  YYSYMBOL_primary_expr = 123,             /* primary_expr  */
  YYSYMBOL_magic_colon = 124,              /* magic_colon  */
  YYSYMBOL_magic_tilde = 125,              /* magic_tilde  */
  YYSYMBOL_arg_list = 126,                 /* arg_list  */
  YYSYMBOL_indirect_ref_op = 127,          /* indirect_ref_op  */
  YYSYMBOL_oper_expr = 128,                /* oper_expr  */
  YYSYMBOL_power_expr = 129,               /* power_expr  */
  YYSYMBOL_colon_expr = 130,               /* colon_expr  */
  YYSYMBOL_simple_expr = 131,              /* simple_expr  */
  YYSYMBOL_assign_lhs = 132,               /* assign_lhs  */
  YYSYMBOL_assign_expr = 133,              /* assign_expr  */
  YYSYMBOL_expression = 134,               /* expression  */
  YYSYMBOL_command = 135,                  /* command  */
  YYSYMBOL_declaration = 136,              /* declaration  */
  YYSYMBOL_decl_init_list = 137,           /* decl_init_list  */
  YYSYMBOL_decl_elt = 138,                 /* decl_elt  */
  YYSYMBOL_select_command = 139,           /* select_command  */
  YYSYMBOL_if_command = 140,               /* if_command  */
  YYSYMBOL_if_cmd_list = 141,              /* if_cmd_list  */
  YYSYMBOL_if_cmd_list1 = 142,             /* if_cmd_list1  */
  YYSYMBOL_elseif_clause = 143,            /* elseif_clause  */
  YYSYMBOL_else_clause = 144,              /* else_clause  */
  YYSYMBOL_switch_command = 145,           /* switch_command  */
  YYSYMBOL_case_list = 146,                /* case_list  */
  YYSYMBOL_case_list1 = 147,               /* case_list1  */
  YYSYMBOL_switch_case = 148,              /* switch_case  */
  YYSYMBOL_default_case = 149,             /* default_case  */
  YYSYMBOL_loop_command = 150,             /* loop_command  */
  YYSYMBOL_jump_command = 151,             /* jump_command  */
  YYSYMBOL_spmd_command = 152,             /* spmd_command  */
  YYSYMBOL_except_command = 153,           /* except_command  */
  YYSYMBOL_push_fcn_symtab = 154,          /* push_fcn_symtab  */
  YYSYMBOL_param_list_beg = 155,           /* param_list_beg  */
  YYSYMBOL_param_list_end = 156,           /* param_list_end  */
  YYSYMBOL_opt_param_list = 157,           /* opt_param_list  */
  YYSYMBOL_param_list = 158,               /* param_list  */
  YYSYMBOL_param_list1 = 159,              /* param_list1  */
  YYSYMBOL_param_list2 = 160,              /* param_list2  */
  YYSYMBOL_param_list_elt = 161,           /* param_list_elt  */
  YYSYMBOL_return_list = 162,              /* return_list  */
  YYSYMBOL_return_list1 = 163,             /* return_list1  */
  YYSYMBOL_parsing_local_fcns = 164,       /* parsing_local_fcns  */
  YYSYMBOL_push_script_symtab = 165,       /* push_script_symtab  */
  YYSYMBOL_begin_file = 166,               /* begin_file  */
  YYSYMBOL_file = 167,                     /* file  */
  YYSYMBOL_function_beg = 168,             /* function_beg  */
  YYSYMBOL_fcn_name = 169,                 /* fcn_name  */
  YYSYMBOL_function_end = 170,             /* function_end  */
  YYSYMBOL_function = 171,                 /* function  */
  YYSYMBOL_function_body = 172,            /* function_body  */
  YYSYMBOL_at_first_executable_stmt = 173, /* at_first_executable_stmt  */
  YYSYMBOL_function_body1 = 174,           /* function_body1  */
  YYSYMBOL_arguments_block = 175,          /* arguments_block  */
  YYSYMBOL_arguments_beg = 176,            /* arguments_beg  */
  YYSYMBOL_args_attr_list = 177,           /* args_attr_list  */
  YYSYMBOL_args_validation_list = 178,     /* args_validation_list  */
  YYSYMBOL_arg_name = 179,                 /* arg_name  */
  YYSYMBOL_arg_validation = 180,           /* arg_validation  */
  YYSYMBOL_size_spec = 181,                /* size_spec  */
  YYSYMBOL_class_name = 182,               /* class_name  */
  YYSYMBOL_validation_fcns = 183,          /* validation_fcns  */
  YYSYMBOL_default_value = 184,            /* default_value  */
  YYSYMBOL_classdef_beg = 185,             /* classdef_beg  */
  YYSYMBOL_classdef = 186,                 /* classdef  */
  YYSYMBOL_attr_list = 187,                /* attr_list  */
  YYSYMBOL_attr_list1 = 188,               /* attr_list1  */
  YYSYMBOL_attr = 189,                     /* attr  */
  YYSYMBOL_superclass_list = 190,          /* superclass_list  */
  YYSYMBOL_superclass_list1 = 191,         /* superclass_list1  */
  YYSYMBOL_superclass = 192,               /* superclass  */
  YYSYMBOL_class_body = 193,               /* class_body  */
  YYSYMBOL_class_body1 = 194,              /* class_body1  */
  YYSYMBOL_properties_block = 195,         /* properties_block  */
  YYSYMBOL_properties_beg = 196,           /* properties_beg  */
  YYSYMBOL_property_list = 197,            /* property_list  */
  YYSYMBOL_property_list1 = 198,           /* property_list1  */
  YYSYMBOL_class_property = 199,           /* class_property  */
  YYSYMBOL_methods_block = 200,            /* methods_block  */
  YYSYMBOL_methods_beg = 201,              /* methods_beg  */
  YYSYMBOL_method_decl1 = 202,             /* method_decl1  */
  YYSYMBOL_method_decl = 203,              /* method_decl  */
  YYSYMBOL_204_1 = 204,                    /* $@1  */
  YYSYMBOL_method = 205,                   /* method  */
  YYSYMBOL_methods_list = 206,             /* methods_list  */
  YYSYMBOL_methods_list1 = 207,            /* methods_list1  */
  YYSYMBOL_events_block = 208,             /* events_block  */
  YYSYMBOL_events_beg = 209,               /* events_beg  */
  YYSYMBOL_events_list = 210,              /* events_list  */
  YYSYMBOL_events_list1 = 211,             /* events_list1  */
  YYSYMBOL_class_event = 212,              /* class_event  */
  YYSYMBOL_enum_block = 213,               /* enum_block  */
  YYSYMBOL_enumeration_beg = 214,          /* enumeration_beg  */
  YYSYMBOL_enum_list = 215,                /* enum_list  */
  YYSYMBOL_enum_list1 = 216,               /* enum_list1  */
  YYSYMBOL_class_enum = 217,               /* class_enum  */
  YYSYMBOL_stmt_begin = 218,               /* stmt_begin  */
  YYSYMBOL_anon_fcn_begin = 219,           /* anon_fcn_begin  */
  YYSYMBOL_stash_comment = 220,            /* stash_comment  */
  YYSYMBOL_parse_error = 221,              /* parse_error  */
  YYSYMBOL_sep_no_nl = 222,                /* sep_no_nl  */
  YYSYMBOL_opt_sep_no_nl = 223,            /* opt_sep_no_nl  */
  YYSYMBOL_opt_nl = 224,                   /* opt_nl  */
  YYSYMBOL_nl = 225,                       /* nl  */
  YYSYMBOL_sep = 226,                      /* sep  */
  YYSYMBOL_opt_sep = 227                   /* opt_sep  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined OCTAVE_STYPE_IS_TRIVIAL && OCTAVE_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1622

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  574

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,     2,     2,     2,     2,     2,
      11,    12,     7,     6,    19,     5,    17,     8,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,    20,
       2,     3,     2,     2,    18,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    13,     2,    14,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    15,     2,    16,     9,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97
};

#if OCTAVE_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   415,   415,   426,   437,   444,   450,   454,   456,   461,
     462,   466,   470,   472,   477,   478,   482,   490,   495,   502,
     504,   506,   518,   530,   532,   540,   545,   549,   553,   555,
     559,   561,   565,   569,   571,   579,   583,   585,   602,   603,
     609,   611,   617,   623,   631,   639,   651,   663,   665,   667,
     669,   674,   676,   678,   680,   688,   692,   700,   702,   704,
     706,   712,   718,   726,   735,   737,   739,   741,   752,   763,
     774,   785,   787,   789,   791,   797,   799,   801,   803,   805,
     807,   809,   811,   813,   815,   817,   819,   821,   823,   825,
     827,   831,   833,   835,   837,   848,   859,   870,   881,   883,
     889,   891,   893,   895,   897,   899,   903,   915,   929,   931,
     933,   935,   937,   939,   941,   943,   945,   947,   949,   951,
     955,   969,   971,   973,   975,   977,   979,   981,   983,   985,
     987,   989,   991,   993,   997,  1012,  1019,  1027,  1029,  1031,
    1033,  1035,  1037,  1039,  1041,  1049,  1054,  1061,  1063,  1067,
    1069,  1077,  1079,  1087,  1097,  1099,  1103,  1111,  1115,  1125,
    1137,  1150,  1151,  1153,  1155,  1159,  1161,  1165,  1173,  1185,
    1197,  1203,  1214,  1225,  1236,  1253,  1258,  1263,  1271,  1290,
    1301,  1312,  1330,  1342,  1360,  1372,  1373,  1377,  1384,  1393,
    1394,  1411,  1413,  1421,  1423,  1431,  1439,  1458,  1477,  1481,
    1495,  1499,  1508,  1512,  1546,  1564,  1573,  1583,  1594,  1607,
    1620,  1655,  1662,  1671,  1677,  1687,  1693,  1699,  1707,  1725,
    1733,  1734,  1748,  1753,  1766,  1770,  1781,  1782,  1795,  1796,
    1802,  1803,  1816,  1817,  1829,  1847,  1867,  1868,  1876,  1878,
    1886,  1888,  1894,  1900,  1909,  1915,  1927,  1933,  1941,  1946,
    1950,  1959,  1961,  1963,  1965,  1967,  1973,  1979,  1985,  1994,
    2011,  2019,  2023,  2033,  2035,  2066,  2070,  2087,  2094,  2099,
    2106,  2109,  2108,  2124,  2126,  2131,  2135,  2144,  2146,  2154,
    2171,  2179,  2183,  2192,  2194,  2202,  2206,  2223,  2231,  2235,
    2244,  2246,  2254,  2267,  2274,  2282,  2285,  2291,  2295,  2301,
    2307,  2313,  2322,  2323,  2328,  2329,  2333,  2339,  2347,  2353,
    2359,  2365,  2371,  2377,  2386,  2387
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if OCTAVE_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "'='", "':'", "'-'",
  "'+'", "'*'", "'/'", "'~'", "'!'", "'('", "')'", "'['", "']'", "'{'",
  "'}'", "'.'", "'@'", "','", "';'", "'\\n'", "ADD_EQ", "SUB_EQ", "MUL_EQ",
  "DIV_EQ", "LEFTDIV_EQ", "POW_EQ", "EMUL_EQ", "EDIV_EQ", "ELEFTDIV_EQ",
  "EPOW_EQ", "AND_EQ", "OR_EQ", "EXPR_AND_AND", "EXPR_OR_OR", "EXPR_AND",
  "EXPR_OR", "EXPR_LT", "EXPR_LE", "EXPR_EQ", "EXPR_NE", "EXPR_GE",
  "EXPR_GT", "LEFTDIV", "EMUL", "EDIV", "ELEFTDIV", "HERMITIAN",
  "TRANSPOSE", "PLUS_PLUS", "MINUS_MINUS", "POW", "EPOW", "NUMBER",
  "STRUCT_ELT", "NAME", "END", "DQ_STRING", "SQ_STRING", "FOR", "PARFOR",
  "WHILE", "DO", "UNTIL", "SPMD", "IF", "ELSEIF", "ELSE", "SWITCH", "CASE",
  "OTHERWISE", "BREAK", "CONTINUE", "FUNC_RET", "UNWIND", "CLEANUP", "TRY",
  "CATCH", "GLOBAL", "PERSISTENT", "FCN_HANDLE", "CLASSDEF", "PROPERTIES",
  "METHODS", "EVENTS", "ENUMERATION", "METAQUERY", "SUPERCLASSREF",
  "FQ_IDENT", "GET", "SET", "FCN", "ARGUMENTS", "LEXICAL_ERROR",
  "END_OF_INPUT", "INPUT_FILE", "UNARY", "$accept", "input", "simple_list",
  "simple_list1", "opt_list", "list", "list1", "opt_fcn_list", "fcn_list",
  "fcn_list1", "statement", "word_list_cmd", "word_list", "identifier",
  "superclass_identifier", "meta_identifier", "string", "constant",
  "matrix", "matrix_rows", "cell", "cell_rows", "cell_or_matrix_row",
  "fcn_handle", "anon_fcn_handle", "primary_expr", "magic_colon",
  "magic_tilde", "arg_list", "indirect_ref_op", "oper_expr", "power_expr",
  "colon_expr", "simple_expr", "assign_lhs", "assign_expr", "expression",
  "command", "declaration", "decl_init_list", "decl_elt", "select_command",
  "if_command", "if_cmd_list", "if_cmd_list1", "elseif_clause",
  "else_clause", "switch_command", "case_list", "case_list1",
  "switch_case", "default_case", "loop_command", "jump_command",
  "spmd_command", "except_command", "push_fcn_symtab", "param_list_beg",
  "param_list_end", "opt_param_list", "param_list", "param_list1",
  "param_list2", "param_list_elt", "return_list", "return_list1",
  "parsing_local_fcns", "push_script_symtab", "begin_file", "file",
  "function_beg", "fcn_name", "function_end", "function", "function_body",
  "at_first_executable_stmt", "function_body1", "arguments_block",
  "arguments_beg", "args_attr_list", "args_validation_list", "arg_name",
  "arg_validation", "size_spec", "class_name", "validation_fcns",
  "default_value", "classdef_beg", "classdef", "attr_list", "attr_list1",
  "attr", "superclass_list", "superclass_list1", "superclass",
  "class_body", "class_body1", "properties_block", "properties_beg",
  "property_list", "property_list1", "class_property", "methods_block",
  "methods_beg", "method_decl1", "method_decl", "$@1", "method",
  "methods_list", "methods_list1", "events_block", "events_beg",
  "events_list", "events_list1", "class_event", "enum_block",
  "enumeration_beg", "enum_list", "enum_list1", "class_enum", "stmt_begin",
  "anon_fcn_begin", "stash_comment", "parse_error", "sep_no_nl",
  "opt_sep_no_nl", "opt_nl", "nl", "sep", "opt_sep", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-453)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-316)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     748,  -453,   610,   610,   610,   610,   549,  1160,  1160,    40,
    -453,  -453,   610,   610,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
      38,    38,  -453,  -453,  -453,  -453,    58,   -11,    86,  -453,
    -453,   124,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,   726,  -453,   844,   919,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,    42,    69,   111,  -453,
    -453,  -453,  -453,   166,  -453,  -453,   198,   198,   198,   198,
     184,  -453,   610,  1336,    41,  -453,  -453,  -453,   195,  -453,
     156,  -453,  -453,    25,  -453,   198,   198,  1400,  1416,   549,
     183,   183,   549,   549,   183,   183,   228,    38,  -453,    38,
    -453,  -453,  -453,   920,  -453,   124,  -453,   610,   610,   610,
     610,   610,  1176,  1240,  -453,   610,   610,   610,   610,  -453,
    -453,  -453,  -453,  1480,  1480,    33,   610,   610,   610,   610,
     610,   610,   610,   610,   610,   610,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,  -453,
    -453,  -453,  1000,   213,    20,  -453,  -453,  -453,   216,  -453,
    1160,  1336,  -453,  1160,  -453,  -453,  -453,  -453,   225,   219,
    -453,   484,   549,   351,   237,   549,   238,  -453,  -453,  -453,
    -453,   187,  1080,  1080,  -453,   199,   143,   183,  1080,  1080,
     549,  -453,  -453,  -453,  1501,  1569,  1569,   198,   198,  -453,
      45,  -453,    98,   198,   198,   198,   198,  1480,  1480,  1480,
    1480,  1480,  1480,  -453,    39,    39,   549,  -453,   550,   397,
     251,   408,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   149,  -453,   183,  -453,  -453,  -453,  -453,    18,
     241,   245,   267,   271,    40,  1336,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,    31,  -453,  -453,   931,   549,   999,   549,
     183,  -453,  -453,  -453,   211,   222,   183,  -453,  -453,  -453,
    -453,  -453,   146,   204,    74,  -453,   610,  -453,  1336,  -453,
      39,    39,    39,    39,    39,    39,  1256,  1320,  -453,  -453,
      36,   270,  -453,   840,  -453,   272,   183,  -453,  -453,   139,
      38,    38,    60,   183,  -453,  -453,   549,  -453,   549,  -453,
    1080,   549,  -453,  1080,   183,   183,  -453,  -453,   227,   146,
    -453,  -453,  -453,  -453,  -453,  1558,  -453,   130,  -453,   154,
     549,  -453,  -453,  -453,    26,    38,   193,  -453,    38,  -453,
    -453,  -453,    40,   203,   274,   183,   290,   183,   253,  -453,
    -453,   549,  1080,   183,   183,  -453,  -453,  -453,   183,   183,
    -453,  -453,   299,    38,    38,   311,   142,  -453,   183,   221,
    -453,   183,  -453,  -453,   183,  -453,     6,  1080,   183,  -453,
    -453,   183,  1080,   549,  1080,  -453,  -453,  -453,   549,  1080,
    1080,  1080,  -453,  -453,  -453,   549,   183,    26,   279,  -453,
     193,   203,  -453,  -453,  -453,  -453,   203,   183,  1080,   266,
     306,   268,   183,  -453,  -453,   269,   275,  -453,  -453,  -453,
     235,   105,   148,  -453,     6,  1080,  -453,   316,   277,  -453,
     183,  -453,  1080,   183,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   281,   183,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,   235,  -453,  -453,  -453,    38,    38,  -453,  1080,
    -453,  1080,  -453,   105,   183,   183,   183,   183,  -453,   317,
    -453,   183,   320,   282,  -453,  -453,  -453,  -453,  -453,   272,
     272,   272,   272,  -453,   104,   283,  1336,  -453,    38,  -453,
     286,   -19,   286,   286,   320,  -453,   144,  -453,   313,   287,
     183,  -453,    38,  -453,  -453,  -453,   288,   183,    30,   293,
     183,  -453,    38,   295,   183,  -453,    38,  -453,  -453,  1336,
     344,  -453,    51,  -453,   320,  -453,   -15,   101,   350,  -453,
    -453,   286,  -453,  -453,   286,   345,   161,   549,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   549,  -453,  -453,    38,
     347,    40,  -453,  -453
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   297,     0,     0,     0,     0,     0,    38,    38,     0,
     298,   299,     0,     0,    30,    25,    28,    29,   295,   295,
     295,   295,   295,   295,   295,   175,   176,   177,   295,   295,
       0,     0,    44,    27,    26,   296,     0,     0,   302,     7,
      21,    47,    53,    52,    31,    48,    50,    51,    49,   136,
      64,   108,   109,   134,     0,   135,    19,    20,   137,   138,
     151,   152,   139,   140,   141,   142,     0,     0,   304,   144,
     295,   143,     4,   303,     5,    47,    80,    79,    77,    78,
       0,    55,    56,    39,     0,    33,    58,    59,    40,    57,
       0,    36,   183,     0,   294,    75,    76,     0,     0,     0,
     314,   314,     0,     0,   314,   314,   149,   145,   147,   146,
       1,     2,     3,   303,     6,    22,    23,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,     0,    71,
      72,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     202,   306,     9,   305,     0,   300,   301,    54,    42,    32,
      38,    41,    35,    38,   188,    56,   194,   193,     0,   190,
     191,     0,     0,   120,     0,     0,     0,   293,   308,   309,
     310,   315,     9,     9,   293,     0,   154,   314,     9,     9,
       0,   148,     8,    24,   106,    84,    83,    85,    86,    67,
       0,    69,     0,    89,    87,    88,    90,     0,     0,     0,
       0,     0,     0,    91,    81,    82,     0,    73,   118,   119,
     116,   117,   110,   111,   112,   115,   113,   114,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   234,     0,    10,   314,    12,   295,   200,   307,     0,
       0,     0,   206,     0,   185,    43,    34,    60,    61,    62,
      37,   184,   187,     0,    46,    45,     0,     0,     0,     0,
     314,   311,   312,   313,     0,     0,   314,   153,   295,   295,
     157,   155,   161,     0,     0,   150,     0,    68,     0,    70,
     105,   104,   102,   103,   100,   101,     0,     0,    92,    93,
       0,     0,   203,   315,    11,   236,   314,   195,   198,     0,
       0,     0,     0,   314,   186,   192,     0,   293,     0,   293,
       9,     0,   178,     9,   314,   314,   295,   295,     0,   163,
     165,   162,   295,   181,   295,   107,    94,     0,    96,     0,
       0,    98,    74,    13,     0,     0,    14,   197,     0,   207,
     208,   206,   185,   215,     0,   314,   121,   314,     0,   170,
     156,     0,     9,   314,   314,   160,   166,   164,   314,   314,
      95,    97,     0,     0,     0,   240,     0,   238,   314,     0,
      15,   314,    17,   199,   314,   219,     0,     9,   314,   216,
     295,   314,     9,     0,     9,   169,   293,   159,     0,     9,
       9,     9,    99,   242,   243,     0,   314,     0,   244,   204,
      16,   215,   209,   210,   211,   213,   215,   314,     9,     0,
       0,     0,   314,   293,   168,     0,     0,   241,   237,   239,
       0,   249,   314,    18,     0,     9,   217,   220,     0,   171,
     314,   173,     9,   314,   179,   180,   248,   246,   260,   267,
     280,   287,     0,   314,   251,   295,   252,   295,   253,   295,
     254,   295,     0,   245,   212,   214,     0,     0,   172,     9,
     158,     9,   235,   250,   314,   314,   314,   314,   247,     0,
     224,   314,   226,     0,   167,   255,   256,   257,   258,   236,
     236,   236,   236,   221,   315,     0,     0,   222,   228,   174,
     261,   295,   281,   288,   226,   218,     0,   229,   230,     0,
     314,   263,     0,   274,   273,   277,     0,   314,     0,     0,
     314,   283,     0,     0,   314,   290,     0,   223,   227,     0,
     232,   259,   295,   262,   226,   266,   295,   268,     0,   270,
     279,   282,   285,   286,   289,     0,     0,     0,   225,   264,
     265,   278,   269,   271,   284,   291,     0,   231,   233,     0,
       0,   268,   272,   292
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -453,  -453,  -453,  -453,  -133,  -453,  -453,  -453,  -453,  -453,
       2,  -453,  -453,     0,  -453,  -453,   -12,  -453,  -453,  -453,
    -453,  -453,     8,  -453,  -453,   -81,  -163,   -86,   -74,  -157,
       1,  -122,  -453,   163,   -52,  -453,    72,  -453,  -453,   326,
     -68,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
      21,    22,  -453,  -453,  -453,  -453,  -453,  -453,  -453,     5,
      -8,  -453,  -453,    90,  -164,  -453,  -453,  -453,  -453,  -453,
    -453,    46,   -75,  -345,   -50,   -53,  -453,   -51,  -453,  -453,
    -453,  -130,  -452,  -453,  -453,  -453,  -453,  -453,  -453,  -234,
    -453,   -41,  -453,  -453,   -95,  -453,  -453,  -103,  -453,  -453,
    -453,  -161,  -101,  -453,  -174,  -453,  -453,  -150,  -453,  -453,
     -82,  -453,  -453,  -453,  -146,   -77,  -453,  -453,  -453,  -147,
    -170,  -453,    -1,  -453,   370,   374,  -453,  -453,  -239,   261
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    36,    37,    38,   252,   253,   254,   389,   390,   391,
     255,    40,   115,    75,    42,    43,    44,    45,    46,    84,
      47,    90,    85,    48,    49,    50,    86,    87,    88,   135,
      51,   224,    52,    53,    54,    55,    56,    57,    58,   107,
     108,    59,    60,   195,   196,   290,   291,    61,   338,   339,
     340,   341,    62,    63,    64,    65,    66,    93,   272,   323,
     324,   178,   179,   180,   263,   319,   316,    67,    68,    69,
      70,   264,   424,    71,   396,   397,   398,   399,   400,   477,
     491,   492,   507,   508,   518,   540,   558,   256,   257,   355,
     386,   387,   441,   442,   457,   462,   463,   464,   465,   519,
     520,   521,   466,   467,   549,   524,   569,   525,   526,   527,
     468,   469,   529,   530,   531,   470,   471,   533,   534,   535,
     280,   181,   522,    72,    73,    74,   162,   163,   191,   192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    94,    39,    76,    77,    78,    79,   176,   267,   168,
     111,   392,   225,    95,    96,   313,    91,    97,    98,    99,
     100,   101,   102,   103,   286,   177,   174,   104,   105,   116,
     106,   106,   317,   259,   175,   383,   384,  -189,  -275,   201,
     175,   201,  -276,   259,   226,   184,   186,   350,   210,   212,
     306,    92,   223,   223,   307,   169,   124,   297,   110,   284,
     285,   170,   537,   422,   298,   293,   294,   310,   310,   164,
     281,   282,   283,  -182,    15,   443,    15,  -182,    80,    89,
      89,    15,    15,    78,   112,   268,    15,    15,   227,   308,
     309,   351,   560,   106,    15,   300,   301,   302,   303,   304,
     305,   423,   267,   203,  -196,    10,    11,   106,  -315,   106,
     260,   261,    92,    41,   299,   202,    15,   298,   204,   205,
     206,   207,   208,   281,   282,   283,   213,   214,   215,   216,
     276,   343,   161,   278,   159,   267,   223,   223,   223,   223,
     223,   223,   380,   310,   310,   310,   310,   310,   310,   298,
     260,   261,   344,   357,   416,    89,   538,   365,   358,   367,
      15,   417,    41,   298,   262,   160,   523,   188,   189,   190,
     381,   187,   172,   298,   194,   197,   173,   567,   266,   268,
     298,   270,    16,    17,   472,   165,   166,   176,   458,   459,
     460,   461,    41,    41,    89,    89,   167,   368,    41,    41,
     370,   523,   188,   189,   190,   177,   281,   282,   283,   122,
     288,   289,   268,   123,   171,   124,   336,   337,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   200,   347,   349,   258,   265,   432,   271,   273,   407,
     277,   279,    89,   269,   312,    89,   129,   130,   131,   132,
     133,   134,   504,   275,    80,   315,   287,    80,   320,   318,
     183,   183,   321,   453,   425,   510,   511,   512,   513,   429,
    -196,   431,   295,   106,   322,   331,   434,   435,   436,   332,
     342,   542,   352,   354,   375,  -182,   401,   334,   335,   140,
     141,   142,   143,   144,   145,   448,   395,   345,   311,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   403,
     405,   412,   475,    41,   415,   353,   419,   440,   450,   480,
     359,   360,   361,   449,   456,   451,   454,   476,   539,   503,
      41,   506,   455,    41,   478,   373,   374,   269,   482,   509,
     515,   378,  -295,   379,   541,   545,   493,   557,   494,   327,
     550,   329,   553,   563,   385,   388,   566,   109,   393,   573,
     376,   377,   193,   325,   548,   198,   199,   394,   362,   474,
     269,   444,    41,   445,   514,   446,   439,   488,    89,    89,
     495,   559,   496,   413,   414,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   572,   561,    41,   364,   427,
     366,   497,    41,   369,    41,   564,   498,   565,   113,    41,
      41,    41,   114,     0,     0,     0,     0,   385,     0,     0,
       0,     0,   382,     0,     0,     0,     0,     0,    41,     0,
       0,   136,   516,   138,   139,   140,   141,   142,   143,   144,
     145,     0,     0,   406,   138,    41,   140,   141,   142,   143,
     144,   145,    41,     0,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,   484,   556,   485,     0,   486,     0,
     487,     0,     0,     0,     0,   430,   489,   490,     0,    41,
     433,    41,     0,     0,     0,   274,     0,   437,     0,     2,
       3,     0,     0,     4,     5,     6,     0,     7,     0,     8,
       0,     0,     9,     0,   490,     0,     0,     0,   517,     0,
     528,   532,   536,     0,     0,   314,     0,     0,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,   547,     0,
       0,     0,   552,     0,    12,    13,   555,     0,    14,   562,
      15,   330,    16,    17,     0,   528,     0,   333,     0,     0,
     532,     0,     0,   536,     2,     3,     0,     0,     4,     5,
       6,     0,     7,   562,     8,    32,     0,     9,     0,   571,
       0,    33,    34,     0,     0,     0,     0,   356,    89,     0,
       0,     0,     0,     0,   363,     0,   138,   139,   140,   141,
     142,   143,   144,   145,     0,   371,   372,     0,     0,    12,
      13,     0,     0,    14,     0,    15,     0,    16,    17,     0,
       0,    89,     0,     0,     0,     2,     3,     0,     0,     4,
       5,     6,     0,     7,     0,     8,   402,     0,   404,   568,
      32,     0,     0,     0,   408,   409,    33,    34,   570,   410,
     411,     0,     0,     0,     0,     0,     0,     0,     0,   418,
       0,     0,   420,     0,     0,   421,     0,     0,     0,   426,
      12,    13,   428,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,   438,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       0,    32,     0,   452,     0,     0,     0,    33,    34,     0,
       0,     0,     0,   473,     0,     0,     0,     0,     0,     0,
       0,   479,     0,     0,   481,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   483,     0,     0,     0,     0,     0,
     117,   118,   119,   120,   121,     0,     0,   122,     0,     0,
       0,   123,     0,   124,     0,   499,   500,   501,   502,     1,
       0,     0,   505,     2,     3,     0,     0,     4,     5,     6,
       0,     7,     0,     8,     0,     0,     9,    10,    11,  -302,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
       0,   543,     0,     0,     0,     0,     0,     0,   546,     0,
       0,   551,     0,     0,     0,   554,     0,     0,    12,    13,
       0,     0,    14,     0,    15,     0,    16,    17,    18,    19,
      20,    21,     0,    22,    23,     0,     0,    24,     0,     0,
      25,    26,    27,    28,     0,    29,     0,    30,    31,    32,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
    -182,     0,    35,  -302,  -201,     2,     3,  -120,     0,     4,
       5,     6,     0,     7,     0,     8,     0,     0,     9,   281,
     282,   283,     0,     0,     0,     0,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,     0,    30,
      31,    32,   146,     0,     0,     2,     3,    33,    34,     4,
       5,     6,  -182,     7,   326,     8,  -201,     0,     9,   165,
     166,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,     0,    30,
      31,    32,   328,     0,     0,     2,     3,    33,    34,     4,
       5,     6,  -182,     7,     0,     8,  -201,     0,     9,     0,
       0,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,     0,    30,
      31,    32,   251,     0,     0,     2,     3,    33,    34,     4,
       5,     6,  -182,     7,     0,     8,  -201,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
      18,    19,    20,    21,     0,    22,    23,     0,     0,    24,
       0,     0,    25,    26,    27,    28,     0,    29,     0,    30,
      31,    32,     0,     0,    81,     2,     3,    33,    34,    82,
       5,     6,  -182,     7,     0,     8,  -201,     0,     9,    83,
      81,     2,     3,     0,     0,    82,     5,     6,   209,     7,
       0,     8,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,    15,     0,    16,    17,     0,     0,     0,     0,
       0,    32,     0,     0,    81,     2,     3,    33,    34,    82,
       5,     6,     0,     7,     0,     8,   211,    32,     9,     0,
      81,     2,     3,    33,    34,    82,     5,     6,   346,     7,
       0,     8,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,    15,     0,    16,    17,     0,     0,     0,     0,
       0,    32,     0,     0,    81,     2,     3,    33,    34,    82,
       5,     6,     0,     7,     0,     8,   348,    32,     9,     0,
      81,     2,     3,    33,    34,    82,     5,     6,     0,     7,
       0,     8,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,    15,     0,    16,    17,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     2,     3,    33,    34,     4,
       5,   182,     0,     7,     0,     8,     0,    32,     0,     0,
       0,     2,     3,    33,    34,     4,     5,   185,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      14,     0,    15,     0,    16,    17,     0,     0,     0,     0,
       0,    32,     0,     0,     0,   217,   218,    33,    34,   219,
     220,     6,     0,     7,     0,     8,     0,    32,     0,     0,
       0,     0,     0,    33,    34,   296,   118,   119,   120,   121,
       0,     0,   122,     0,     0,     0,   123,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,   222,     0,     0,    14,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,    32,     0,   118,   119,   120,   121,    33,    34,   122,
       0,     0,     0,   123,     0,   124,   120,   121,     0,     0,
     122,     0,     0,     0,   123,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,     0,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134
};

static const yytype_int16 yycheck[] =
{
       0,     9,     0,     2,     3,     4,     5,    93,   171,    83,
      21,   356,   134,    12,    13,   254,     8,    18,    19,    20,
      21,    22,    23,    24,   194,    93,     1,    28,    29,    41,
      30,    31,    14,    13,     9,     9,    10,    12,    57,   107,
       9,   109,    57,    13,    11,    97,    98,    11,   122,   123,
      11,    11,   133,   134,    15,    14,    17,    12,     0,   192,
     193,    20,   514,    57,    19,   198,   199,   224,   225,    70,
      19,    20,    21,    92,    56,   420,    56,    92,     6,     7,
       8,    56,    56,    82,    95,   171,    56,    56,    55,    50,
      51,    55,   544,    93,    56,   217,   218,   219,   220,   221,
     222,    95,   265,   115,     3,    19,    20,   107,    57,   109,
      90,    91,    11,   113,    16,   113,    56,    19,   117,   118,
     119,   120,   121,    19,    20,    21,   125,   126,   127,   128,
     182,    57,    21,   185,    92,   298,   217,   218,   219,   220,
     221,   222,    12,   300,   301,   302,   303,   304,   305,    19,
      90,    91,    78,    14,    12,    83,    12,   327,    19,   329,
      56,    19,   162,    19,   164,    96,   511,    19,    20,    21,
      16,    99,    16,    19,   102,   103,    20,    16,   170,   265,
      19,   173,    58,    59,    36,    19,    20,   273,    83,    84,
      85,    86,   192,   193,   122,   123,    12,   330,   198,   199,
     333,   546,    19,    20,    21,   273,    19,    20,    21,    11,
      67,    68,   298,    15,    19,    17,    70,    71,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,   306,   307,    21,    19,   406,    12,    19,   372,
       3,     3,   170,   171,    95,   173,    48,    49,    50,    51,
      52,    53,   491,   181,   182,   256,    57,   185,    17,   259,
      97,    98,    17,   433,   397,   499,   500,   501,   502,   402,
       3,   404,   200,   273,     3,    64,   409,   410,   411,    57,
      76,   520,    12,    11,    57,    92,    12,   288,   289,    38,
      39,    40,    41,    42,    43,   428,    93,   296,   226,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    19,
      57,    12,   445,   313,     3,   313,    95,    38,    12,   452,
     320,   321,   322,    57,    89,    57,    57,    11,    15,    12,
     330,    11,    57,   333,    57,   336,   337,   265,    57,    57,
      57,   342,    56,   344,    57,    57,   479,     3,   481,   277,
      57,   279,    57,     3,   354,   355,    11,    31,   358,    12,
     339,   339,   101,   273,   528,   104,   105,   362,   322,   444,
     298,   421,   372,   426,   504,   426,   417,   472,   306,   307,
     483,   542,   483,   383,   384,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,   569,   546,   397,   326,   400,
     328,   483,   402,   331,   404,   551,   483,   554,    38,   409,
     410,   411,    38,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,   428,    -1,
      -1,    34,   506,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,   371,    36,   445,    38,    39,    40,    41,
      42,    43,   452,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    -1,    -1,    -1,   465,   539,   467,    -1,   469,    -1,
     471,    -1,    -1,    -1,    -1,   403,   476,   477,    -1,   479,
     408,   481,    -1,    -1,    -1,     1,    -1,   415,    -1,     5,
       6,    -1,    -1,     9,    10,    11,    -1,    13,    -1,    15,
      -1,    -1,    18,    -1,   504,    -1,    -1,    -1,   508,    -1,
     511,   512,   513,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,   522,    -1,    -1,    -1,    -1,    -1,   528,    -1,
      -1,    -1,   532,    -1,    50,    51,   536,    -1,    54,   547,
      56,   280,    58,    59,    -1,   546,    -1,   286,    -1,    -1,
     551,    -1,    -1,   554,     5,     6,    -1,    -1,     9,    10,
      11,    -1,    13,   571,    15,    81,    -1,    18,    -1,   569,
      -1,    87,    88,    -1,    -1,    -1,    -1,   316,   506,    -1,
      -1,    -1,    -1,    -1,   323,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,   334,   335,    -1,    -1,    50,
      51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,    -1,
      -1,   539,    -1,    -1,    -1,     5,     6,    -1,    -1,     9,
      10,    11,    -1,    13,    -1,    15,   365,    -1,   367,   557,
      81,    -1,    -1,    -1,   373,   374,    87,    88,   566,   378,
     379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   388,
      -1,    -1,   391,    -1,    -1,   394,    -1,    -1,    -1,   398,
      50,    51,   401,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   427,    -1,
      -1,    81,    -1,   432,    -1,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,   442,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   450,    -1,    -1,   453,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    17,    -1,   484,   485,   486,   487,     1,
      -1,    -1,   491,     5,     6,    -1,    -1,     9,    10,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,   520,    -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,
      -1,   530,    -1,    -1,    -1,   534,    -1,    -1,    50,    51,
      -1,    -1,    54,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,     5,     6,     3,    -1,     9,
      10,    11,    -1,    13,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,     3,    -1,    -1,     5,     6,    87,    88,     9,
      10,    11,    92,    13,     3,    15,    96,    -1,    18,    19,
      20,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,     3,    -1,    -1,     5,     6,    87,    88,     9,
      10,    11,    92,    13,    -1,    15,    96,    -1,    18,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,    82,    -1,    -1,     5,     6,    87,    88,     9,
      10,    11,    92,    13,    -1,    15,    96,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    -1,    -1,    69,
      -1,    -1,    72,    73,    74,    75,    -1,    77,    -1,    79,
      80,    81,    -1,    -1,     4,     5,     6,    87,    88,     9,
      10,    11,    92,    13,    -1,    15,    96,    -1,    18,    19,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,     4,     5,     6,    87,    88,     9,
      10,    11,    -1,    13,    -1,    15,    16,    81,    18,    -1,
       4,     5,     6,    87,    88,     9,    10,    11,    12,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,     4,     5,     6,    87,    88,     9,
      10,    11,    -1,    13,    -1,    15,    16,    81,    18,    -1,
       4,     5,     6,    87,    88,     9,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,     5,     6,    87,    88,     9,
      10,    11,    -1,    13,    -1,    15,    -1,    81,    -1,    -1,
      -1,     5,     6,    87,    88,     9,    10,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,     5,     6,    87,    88,     9,
      10,    11,    -1,    13,    -1,    15,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    87,    88,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,     5,     6,     7,     8,    87,    88,    11,
      -1,    -1,    -1,    15,    -1,    17,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,     6,     9,    10,    11,    13,    15,    18,
      19,    20,    50,    51,    54,    56,    58,    59,    60,    61,
      62,    63,    65,    66,    69,    72,    73,    74,    75,    77,
      79,    80,    81,    87,    88,    94,    99,   100,   101,   108,
     109,   111,   112,   113,   114,   115,   116,   118,   121,   122,
     123,   128,   130,   131,   132,   133,   134,   135,   136,   139,
     140,   145,   150,   151,   152,   153,   154,   165,   166,   167,
     168,   171,   221,   222,   223,   111,   128,   128,   128,   128,
     134,     4,     9,    19,   117,   120,   124,   125,   126,   134,
     119,   120,    11,   155,   158,   128,   128,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   111,   137,   138,   137,
       0,    21,    95,   222,   223,   110,   114,     4,     5,     6,
       7,     8,    11,    15,    17,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   127,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     3,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    92,
      96,    21,   224,   225,   220,    19,    20,    12,   126,    14,
      20,    19,    16,    20,     1,     9,   125,   138,   159,   160,
     161,   219,    11,   131,   132,    11,   132,   134,    19,    20,
      21,   226,   227,   227,   134,   141,   142,   134,   227,   227,
       3,   138,   108,   114,   128,   128,   128,   128,   128,    12,
     126,    16,   126,   128,   128,   128,   128,     5,     6,     9,
      10,    50,    51,   123,   129,   129,    11,    55,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,    82,   102,   103,   104,   108,   185,   186,    21,    13,
      90,    91,   111,   162,   169,    19,   120,   124,   125,   134,
     120,    12,   156,    19,     1,   134,   132,     3,   132,     3,
     218,    19,    20,    21,   102,   102,   218,    57,    67,    68,
     143,   144,   227,   102,   102,   134,     4,    12,    19,    16,
     129,   129,   129,   129,   129,   129,    11,    15,    50,    51,
     127,   134,    95,   226,   227,   220,   164,    14,   111,   163,
      17,    17,     3,   157,   158,   161,     3,   134,     3,   134,
     227,    64,    57,   227,   220,   220,    70,    71,   146,   147,
     148,   149,    76,    57,    78,   128,    12,   126,    16,   126,
      11,    55,    12,   108,    11,   187,   227,    14,    19,   111,
     111,   111,   169,   227,   134,   218,   134,   218,   102,   134,
     102,   227,   227,   220,   220,    57,   148,   149,   220,   220,
      12,    16,   134,     9,    10,   111,   188,   189,   111,   105,
     106,   107,   171,   111,   157,    93,   172,   173,   174,   175,
     176,    12,   227,    19,   227,    57,   134,   102,   227,   227,
     227,   227,    12,   111,   111,     3,    12,    19,   227,    95,
     227,   227,    57,    95,   170,   102,   227,   220,   227,   102,
     134,   102,   218,   134,   102,   102,   102,   134,   227,   189,
      38,   190,   191,   171,   172,   173,   175,   227,   102,    57,
      12,    57,   227,   218,    57,    57,    89,   192,    83,    84,
      85,    86,   193,   194,   195,   196,   200,   201,   208,   209,
     213,   214,    36,   227,   170,   102,    11,   177,    57,   227,
     102,   227,    57,   227,   220,   220,   220,   220,   192,   111,
     111,   178,   179,   102,   102,   195,   200,   208,   213,   227,
     227,   227,   227,    12,   226,   227,    11,   180,   181,    57,
     187,   187,   187,   187,   179,    57,   126,   111,   182,   197,
     198,   199,   220,   171,   203,   205,   206,   207,   220,   210,
     211,   212,   220,   215,   216,   217,   220,   180,    12,    15,
     183,    57,   226,   227,   111,    57,   227,   111,   162,   202,
      57,   227,   111,    57,   227,   111,   126,     3,   184,   199,
     180,   205,   158,     3,   212,   217,    11,    16,   134,   204,
     134,   111,   202,    12
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   104,   104,   105,   105,   106,   107,   107,   108,
     108,   108,   109,   110,   110,   111,   112,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   121,   122,   122,   123,   123,   123,
     123,   123,   123,   123,   123,   124,   125,   126,   126,   126,
     126,   126,   126,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     132,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   141,   141,   142,   142,   143,   144,
     145,   146,   146,   146,   146,   147,   147,   148,   149,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   152,   153,
     153,   153,   154,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   162,   163,   163,
     164,   165,   166,   167,   167,   168,   169,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   174,   174,   175,   176,
     177,   177,   178,   178,   179,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   186,   187,   187,   188,   188,
     189,   189,   189,   189,   190,   190,   191,   191,   192,   193,
     193,   194,   194,   194,   194,   194,   194,   194,   194,   195,
     196,   197,   197,   198,   198,   199,   200,   201,   202,   202,
     203,   204,   203,   205,   205,   206,   206,   207,   207,   208,
     209,   210,   210,   211,   211,   212,   213,   214,   215,   215,
     216,   216,   217,   218,   219,   220,   221,   221,   222,   222,
     222,   222,   223,   223,   224,   224,   225,   225,   226,   226,
     226,   226,   226,   226,   227,   227
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     2,     1,     3,     0,
       1,     2,     1,     3,     0,     1,     2,     1,     3,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     1,     3,     0,     1,
       1,     2,     2,     3,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     1,     2,     2,     3,     4,     3,
       4,     2,     2,     3,     5,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     3,     4,     3,     4,     3,     5,
       2,     2,     2,     2,     2,     2,     3,     5,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     2,     1,
       3,     1,     1,     4,     1,     2,     4,     2,     7,     4,
       6,     0,     1,     1,     2,     1,     2,     7,     4,     7,
       6,     9,    10,     9,    12,     1,     1,     1,     5,     9,
       9,     5,     0,     1,     1,     0,     1,     3,     2,     0,
       1,     1,     3,     1,     1,     2,     1,     3,     1,     3,
       0,     0,     2,     4,     7,     2,     1,     3,     3,     1,
       1,     7,     9,     2,     4,     0,     1,     3,     7,     1,
       0,     3,     2,     4,     1,     4,     0,     3,     0,     1,
       0,     3,     0,     2,     1,     8,     0,     4,     1,     3,
       1,     3,     2,     2,     0,     2,     2,     3,     1,     0,
       2,     1,     1,     1,     1,     3,     3,     3,     3,     6,
       1,     0,     2,     1,     3,     3,     6,     1,     1,     2,
       2,     0,     5,     1,     1,     0,     2,     1,     3,     6,
       1,     0,     2,     1,     3,     2,     6,     1,     0,     2,
       1,     3,     5,     0,     0,     0,     1,     1,     1,     1,
       2,     2,     0,     1,     0,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = OCTAVE_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == OCTAVE_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (parser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use OCTAVE_error or OCTAVE_UNDEF. */
#define YYERRCODE OCTAVE_UNDEF


/* Enable debugging if requested.  */
#if OCTAVE_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, parser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, octave::base_parser& parser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (parser);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, octave::base_parser& parser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, parser);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, octave::base_parser& parser)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], parser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, parser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !OCTAVE_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !OCTAVE_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, octave::base_parser& parser)
{
  YY_USE (yyvaluep);
  YY_USE (parser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_3_: /* '='  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1777 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_4_: /* ':'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1783 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_5_: /* '-'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1789 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_6_: /* '+'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1795 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_7_: /* '*'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1801 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_8_: /* '/'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1807 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_9_: /* '~'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1813 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_10_: /* '!'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1819 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_11_: /* '('  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1825 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_12_: /* ')'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1831 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_13_: /* '['  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1837 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_14_: /* ']'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1843 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_15_: /* '{'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1849 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_16_: /* '}'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1855 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_17_: /* '.'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1861 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_18_: /* '@'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1867 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_19_: /* ','  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1873 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_20_: /* ';'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1879 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_21_n_: /* '\n'  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1885 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ADD_EQ: /* ADD_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1891 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SUB_EQ: /* SUB_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1897 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_MUL_EQ: /* MUL_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1903 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DIV_EQ: /* DIV_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1909 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEFTDIV_EQ: /* LEFTDIV_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1915 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_POW_EQ: /* POW_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1921 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EMUL_EQ: /* EMUL_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1927 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EDIV_EQ: /* EDIV_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1933 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELEFTDIV_EQ: /* ELEFTDIV_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1939 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EPOW_EQ: /* EPOW_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1945 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_AND_EQ: /* AND_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1951 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_OR_EQ: /* OR_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1957 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_AND_AND: /* EXPR_AND_AND  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1963 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_OR_OR: /* EXPR_OR_OR  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1969 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_AND: /* EXPR_AND  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1975 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_OR: /* EXPR_OR  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1981 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_LT: /* EXPR_LT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1987 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_LE: /* EXPR_LE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1993 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_EQ: /* EXPR_EQ  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 1999 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_NE: /* EXPR_NE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2005 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_GE: /* EXPR_GE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2011 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EXPR_GT: /* EXPR_GT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2017 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEFTDIV: /* LEFTDIV  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2023 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EMUL: /* EMUL  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2029 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EDIV: /* EDIV  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2035 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELEFTDIV: /* ELEFTDIV  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2041 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_HERMITIAN: /* HERMITIAN  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2047 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_TRANSPOSE: /* TRANSPOSE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2053 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PLUS_PLUS: /* PLUS_PLUS  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2059 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_MINUS_MINUS: /* MINUS_MINUS  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2065 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_POW: /* POW  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2071 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EPOW: /* EPOW  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2077 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_NUMBER: /* NUMBER  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2083 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_STRUCT_ELT: /* STRUCT_ELT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2089 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_NAME: /* NAME  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2095 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_END: /* END  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2101 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DQ_STRING: /* DQ_STRING  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2107 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SQ_STRING: /* SQ_STRING  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2113 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FOR: /* FOR  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2119 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PARFOR: /* PARFOR  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2125 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_WHILE: /* WHILE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2131 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_DO: /* DO  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2137 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNTIL: /* UNTIL  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2143 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SPMD: /* SPMD  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2149 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_IF: /* IF  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2155 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELSEIF: /* ELSEIF  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2161 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ELSE: /* ELSE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2167 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SWITCH: /* SWITCH  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2173 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CASE: /* CASE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2179 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_OTHERWISE: /* OTHERWISE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2185 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_BREAK: /* BREAK  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2191 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CONTINUE: /* CONTINUE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2197 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FUNC_RET: /* FUNC_RET  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2203 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNWIND: /* UNWIND  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2209 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CLEANUP: /* CLEANUP  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2215 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_TRY: /* TRY  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2221 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CATCH: /* CATCH  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2227 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_GLOBAL: /* GLOBAL  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2233 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PERSISTENT: /* PERSISTENT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2239 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FCN_HANDLE: /* FCN_HANDLE  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2245 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_CLASSDEF: /* CLASSDEF  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2251 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_PROPERTIES: /* PROPERTIES  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2257 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_METHODS: /* METHODS  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2263 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_EVENTS: /* EVENTS  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2269 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ENUMERATION: /* ENUMERATION  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2275 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_METAQUERY: /* METAQUERY  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2281 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SUPERCLASSREF: /* SUPERCLASSREF  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2287 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FQ_IDENT: /* FQ_IDENT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2293 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_GET: /* GET  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2299 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_SET: /* SET  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2305 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_FCN: /* FCN  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2311 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_ARGUMENTS: /* ARGUMENTS  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2317 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_LEXICAL_ERROR: /* LEXICAL_ERROR  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2323 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_END_OF_INPUT: /* END_OF_INPUT  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2329 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_UNARY: /* UNARY  */
#line 343 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2335 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_input: /* input  */
#line 345 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_type); }
#line 2341 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_list: /* simple_list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2347 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_list1: /* simple_list1  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2353 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_list: /* opt_list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2359 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_list: /* list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2365 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_list1: /* list1  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2371 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_fcn_list: /* opt_fcn_list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2377 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_list: /* fcn_list  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2383 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_list1: /* fcn_list1  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2389 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 369 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_type); }
#line 2395 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_word_list_cmd: /* word_list_cmd  */
#line 356 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_index_expression_type); }
#line 2401 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_word_list: /* word_list  */
#line 357 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2407 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_identifier: /* identifier  */
#line 355 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2413 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_identifier: /* superclass_identifier  */
#line 351 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_superclass_ref_type); }
#line 2419 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_meta_identifier: /* meta_identifier  */
#line 352 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_metaclass_query_type); }
#line 2425 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_string: /* string  */
#line 349 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2431 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_constant: /* constant  */
#line 349 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2437 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_matrix: /* matrix  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2443 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_matrix_rows: /* matrix_rows  */
#line 346 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_matrix_type); }
#line 2449 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell: /* cell  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2455 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell_rows: /* cell_rows  */
#line 347 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_cell_type); }
#line 2461 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_cell_or_matrix_row: /* cell_or_matrix_row  */
#line 357 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2467 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_handle: /* fcn_handle  */
#line 350 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_fcn_handle_type); }
#line 2473 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_anon_fcn_handle: /* anon_fcn_handle  */
#line 354 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_anon_fcn_handle_type); }
#line 2479 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_primary_expr: /* primary_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2485 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_magic_colon: /* magic_colon  */
#line 349 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_constant_type); }
#line 2491 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_magic_tilde: /* magic_tilde  */
#line 355 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2497 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_list: /* arg_list  */
#line 357 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2503 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_oper_expr: /* oper_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2509 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_power_expr: /* power_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2515 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_colon_expr: /* colon_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2521 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_simple_expr: /* simple_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2527 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_assign_lhs: /* assign_lhs  */
#line 357 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_argument_list_type); }
#line 2533 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_assign_expr: /* assign_expr  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2539 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_expression: /* expression  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2545 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_command: /* command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2551 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_declaration: /* declaration  */
#line 368 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_command_type); }
#line 2557 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_decl_init_list: /* decl_init_list  */
#line 367 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_init_list_type); }
#line 2563 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_decl_elt: /* decl_elt  */
#line 366 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_elt_type); }
#line 2569 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_select_command: /* select_command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2575 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_command: /* if_command  */
#line 360 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_command_type); }
#line 2581 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_cmd_list: /* if_cmd_list  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_command_list_type); }
#line 2587 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_if_cmd_list1: /* if_cmd_list1  */
#line 362 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_command_list_type); }
#line 2593 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_elseif_clause: /* elseif_clause  */
#line 361 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_clause_type); }
#line 2599 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_else_clause: /* else_clause  */
#line 361 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_if_clause_type); }
#line 2605 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_switch_command: /* switch_command  */
#line 363 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_command_type); }
#line 2611 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 365 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_list_type); }
#line 2617 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_case_list1: /* case_list1  */
#line 365 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_list_type); }
#line 2623 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_switch_case: /* switch_case  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_type); }
#line 2629 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_default_case: /* default_case  */
#line 364 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_switch_case_type); }
#line 2635 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_loop_command: /* loop_command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2641 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_jump_command: /* jump_command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2647 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_spmd_command: /* spmd_command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2653 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_except_command: /* except_command  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2659 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_param_list: /* opt_param_list  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2665 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list: /* param_list  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2671 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list1: /* param_list1  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2677 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list2: /* param_list2  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2683 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_param_list_elt: /* param_list_elt  */
#line 366 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_decl_elt_type); }
#line 2689 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_return_list: /* return_list  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2695 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_return_list1: /* return_list1  */
#line 358 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_parameter_list_type); }
#line 2701 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_file: /* file  */
#line 359 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_command_type); }
#line 2707 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_beg: /* function_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2713 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_fcn_name: /* fcn_name  */
#line 355 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2719 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_end: /* function_end  */
#line 369 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_type); }
#line 2725 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function: /* function  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2731 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_body: /* function_body  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2737 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_function_body1: /* function_body1  */
#line 370 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_statement_list_type); }
#line 2743 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arguments_block: /* arguments_block  */
#line 371 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arguments_block_type); }
#line 2749 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arguments_beg: /* arguments_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2755 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_args_attr_list: /* args_attr_list  */
#line 372 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_args_block_attribute_list_type); }
#line 2761 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_args_validation_list: /* args_validation_list  */
#line 373 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_args_block_validation_list_type); }
#line 2767 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_name: /* arg_name  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2773 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_arg_validation: /* arg_validation  */
#line 374 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_validation_type); }
#line 2779 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_size_spec: /* size_spec  */
#line 375 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_size_spec_type); }
#line 2785 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_name: /* class_name  */
#line 355 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_identifier_type); }
#line 2791 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_validation_fcns: /* validation_fcns  */
#line 376 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_arg_validation_fcns_type); }
#line 2797 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_default_value: /* default_value  */
#line 348 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_expression_type); }
#line 2803 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_classdef_beg: /* classdef_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2809 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_classdef: /* classdef  */
#line 379 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_type); }
#line 2815 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr_list: /* attr_list  */
#line 381 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_list_type); }
#line 2821 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr_list1: /* attr_list1  */
#line 381 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_list_type); }
#line 2827 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_attr: /* attr  */
#line 380 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_attribute_type); }
#line 2833 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_list: /* superclass_list  */
#line 383 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_list_type); }
#line 2839 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass_list1: /* superclass_list1  */
#line 383 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_list_type); }
#line 2845 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_superclass: /* superclass  */
#line 382 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_superclass_type); }
#line 2851 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_body: /* class_body  */
#line 384 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_body_type); }
#line 2857 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_body1: /* class_body1  */
#line 384 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_body_type); }
#line 2863 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_properties_block: /* properties_block  */
#line 387 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_properties_block_type); }
#line 2869 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_properties_beg: /* properties_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2875 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_property_list: /* property_list  */
#line 386 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_list_type); }
#line 2881 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_property_list1: /* property_list1  */
#line 386 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_list_type); }
#line 2887 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_property: /* class_property  */
#line 385 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_property_type); }
#line 2893 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_block: /* methods_block  */
#line 389 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_methods_block_type); }
#line 2899 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_beg: /* methods_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2905 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_decl1: /* method_decl1  */
#line 377 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).octave_user_function_type); }
#line 2911 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method_decl: /* method_decl  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2917 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_method: /* method  */
#line 353 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_function_def_type); }
#line 2923 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_list: /* methods_list  */
#line 388 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_methods_list_type); }
#line 2929 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_methods_list1: /* methods_list1  */
#line 388 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_methods_list_type); }
#line 2935 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_block: /* events_block  */
#line 392 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_events_block_type); }
#line 2941 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_beg: /* events_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2947 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_list: /* events_list  */
#line 391 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_events_list_type); }
#line 2953 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_events_list1: /* events_list1  */
#line 391 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_events_list_type); }
#line 2959 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_event: /* class_event  */
#line 390 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_event_type); }
#line 2965 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_block: /* enum_block  */
#line 395 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_block_type); }
#line 2971 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enumeration_beg: /* enumeration_beg  */
#line 340 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 2977 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_list: /* enum_list  */
#line 394 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_list_type); }
#line 2983 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_enum_list1: /* enum_list1  */
#line 394 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_list_type); }
#line 2989 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_class_enum: /* class_enum  */
#line 393 "../libinterp/parse-tree/oct-parse.yy"
            { delete ((*yyvaluep).tree_classdef_enum_type); }
#line 2995 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_stash_comment: /* stash_comment  */
#line 342 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3001 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_sep_no_nl: /* sep_no_nl  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3007 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_sep_no_nl: /* opt_sep_no_nl  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3013 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_nl: /* opt_nl  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3019 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_nl: /* nl  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3025 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_sep: /* sep  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3031 "libinterp/parse-tree/oct-parse.cc"
        break;

    case YYSYMBOL_opt_sep: /* opt_sep  */
#line 341 "../libinterp/parse-tree/oct-parse.yy"
            { }
#line 3037 "libinterp/parse-tree/oct-parse.cc"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





int
yyparse (octave::base_parser& parser)
{
  yypstate *yyps = yypstate_new ();
  if (!yyps)
    {
      yyerror (parser, YY_("memory exhausted"));
      return 2;
    }
  int yystatus = yypull_parse (yyps, parser);
  yypstate_delete (yyps);
  return yystatus;
}

int
yypull_parse (yypstate *yyps, octave::base_parser& parser)
{
  YY_ASSERT (yyps);
  int yystatus;
  do {
    YYSTYPE yylval;
    int yychar = yylex (&yylval, scanner);
    yystatus = yypush_parse (yyps, yychar, &yylval, parser);
  } while (yystatus == YYPUSH_MORE);
  return yystatus;
}

#define octave_nerrs yyps->octave_nerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, YYMALLOC (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      YYFREE (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, octave::base_parser& parser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;

    case 2:
      yypstate_clear (yyps);
      break;

    default:
      break;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = OCTAVE_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == OCTAVE_EMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
    }

  if (yychar <= OCTAVE_EOF)
    {
      yychar = OCTAVE_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == OCTAVE_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = OCTAVE_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = OCTAVE_EMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: simple_list '\n'  */
#line 416 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.tree_type) = nullptr;

                    if (! parser.finish_input ((yyvsp[-1].tree_statement_list_type)))
                      YYABORT;
                    else
                      YYACCEPT;
                  }
#line 3410 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 3: /* input: simple_list END_OF_INPUT  */
#line 427 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.tree_type) = nullptr;

                    if (! parser.finish_input ((yyvsp[-1].tree_statement_list_type), true))
                      YYABORT;
                    else
                      YYACCEPT;
                  }
#line 3425 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 4: /* input: parse_error  */
#line 438 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_type) = nullptr;
                    YYABORT;
                  }
#line 3434 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 5: /* simple_list: opt_sep_no_nl  */
#line 445 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    (yyval.tree_statement_list_type) = nullptr;
                  }
#line 3444 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 6: /* simple_list: simple_list1 opt_sep_no_nl  */
#line 451 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.set_stmt_print_flag ((yyvsp[-1].tree_statement_list_type), (yyvsp[0].punct_type), false); }
#line 3450 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 7: /* simple_list1: statement  */
#line 455 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.make_statement_list ((yyvsp[0].tree_statement_type)); }
#line 3456 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 8: /* simple_list1: simple_list1 sep_no_nl statement  */
#line 457 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].punct_type), (yyvsp[0].tree_statement_type), false); }
#line 3462 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 9: /* opt_list: %empty  */
#line 461 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = nullptr; }
#line 3468 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 10: /* opt_list: list  */
#line 463 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type); }
#line 3474 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 11: /* list: list1 opt_sep  */
#line 467 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.set_stmt_print_flag ((yyvsp[-1].tree_statement_list_type), (yyvsp[0].punct_type), true); }
#line 3480 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 12: /* list1: statement  */
#line 471 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.make_statement_list ((yyvsp[0].tree_statement_type)); }
#line 3486 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 13: /* list1: list1 sep statement  */
#line 473 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].punct_type), (yyvsp[0].tree_statement_type), true); }
#line 3492 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 14: /* opt_fcn_list: %empty  */
#line 477 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = nullptr; }
#line 3498 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 15: /* opt_fcn_list: fcn_list  */
#line 479 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type); }
#line 3504 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 16: /* fcn_list: fcn_list1 opt_sep  */
#line 483 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    (yyval.tree_statement_list_type) = (yyvsp[-1].tree_statement_list_type);
                  }
#line 3514 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 17: /* fcn_list1: function  */
#line 491 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_function_def_type));
                    (yyval.tree_statement_list_type) = parser.make_statement_list (stmt);
                  }
#line 3523 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 18: /* fcn_list1: fcn_list1 opt_sep function  */
#line 496 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_function_def_type));
                    (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].punct_type), stmt, false);
                  }
#line 3532 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 19: /* statement: expression  */
#line 503 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_expression_type)); }
#line 3538 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 20: /* statement: command  */
#line 505 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_command_type)); }
#line 3544 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 21: /* statement: word_list_cmd  */
#line 507 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_statement_type) = parser.make_statement ((yyvsp[0].tree_index_expression_type)); }
#line 3550 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 22: /* word_list_cmd: identifier word_list  */
#line 519 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_index_expression_type) = parser.make_index_expression ((yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_argument_list_type), '(');
                    if (! (yyval.tree_index_expression_type))
                      {
                        // make_index_expression deleted $1 and $2.
                        YYABORT;
                      }
                    (yyval.tree_index_expression_type)->mark_word_list_cmd ();
                  }
#line 3564 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 23: /* word_list: string  */
#line 531 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_constant_type)); }
#line 3570 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 24: /* word_list: word_list string  */
#line 533 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-1].tree_argument_list_type), (yyvsp[0].tree_constant_type)); }
#line 3576 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 25: /* identifier: NAME  */
#line 541 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = parser.make_identifier ((yyvsp[0].tok_val)); }
#line 3582 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 26: /* superclass_identifier: SUPERCLASSREF  */
#line 546 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_superclass_ref_type) = parser.make_superclass_ref ((yyvsp[0].tok_val)); }
#line 3588 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 27: /* meta_identifier: METAQUERY  */
#line 550 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_metaclass_query_type) = parser.make_metaclass_query ((yyvsp[0].tok_val)); }
#line 3594 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 28: /* string: DQ_STRING  */
#line 554 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok_val)); }
#line 3600 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 29: /* string: SQ_STRING  */
#line 556 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok_val)); }
#line 3606 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 30: /* constant: NUMBER  */
#line 560 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok_val)); }
#line 3612 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 31: /* constant: string  */
#line 562 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = (yyvsp[0].tree_constant_type); }
#line 3618 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 32: /* matrix: '[' matrix_rows ']'  */
#line 566 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.finish_matrix ((yyvsp[-1].tree_matrix_type), (yyvsp[-2].tok_val), (yyvsp[0].tok_val)); }
#line 3624 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 33: /* matrix_rows: cell_or_matrix_row  */
#line 570 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_matrix_type) = parser.make_matrix ((yyvsp[0].tree_argument_list_type)); }
#line 3630 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 34: /* matrix_rows: matrix_rows ';' cell_or_matrix_row  */
#line 572 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_matrix_type) = parser.append_matrix_row ((yyvsp[-2].tree_matrix_type), (yyvsp[0].tree_argument_list_type));
                  }
#line 3640 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 35: /* cell: '{' cell_rows '}'  */
#line 580 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.finish_cell ((yyvsp[-1].tree_cell_type), (yyvsp[-2].tok_val), (yyvsp[0].tok_val)); }
#line 3646 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 36: /* cell_rows: cell_or_matrix_row  */
#line 584 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_cell_type) = parser.make_cell ((yyvsp[0].tree_argument_list_type)); }
#line 3652 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 37: /* cell_rows: cell_rows ';' cell_or_matrix_row  */
#line 586 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_cell_type) = parser.append_cell_row ((yyvsp[-2].tree_cell_type), (yyvsp[0].tree_argument_list_type));
                  }
#line 3662 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 38: /* cell_or_matrix_row: %empty  */
#line 602 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = nullptr; }
#line 3668 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 39: /* cell_or_matrix_row: ','  */
#line 604 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.tree_argument_list_type) = nullptr;
                  }
#line 3678 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 40: /* cell_or_matrix_row: arg_list  */
#line 610 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = (yyvsp[0].tree_argument_list_type); }
#line 3684 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 41: /* cell_or_matrix_row: arg_list ','  */
#line 612 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.tree_argument_list_type) = (yyvsp[-1].tree_argument_list_type);
                  }
#line 3694 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 42: /* cell_or_matrix_row: ',' arg_list  */
#line 618 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_argument_list_type) = (yyvsp[0].tree_argument_list_type);
                  }
#line 3704 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 43: /* cell_or_matrix_row: ',' arg_list ','  */
#line 624 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_argument_list_type) = (yyvsp[-1].tree_argument_list_type);
                  }
#line 3714 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 44: /* fcn_handle: FCN_HANDLE  */
#line 632 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_fcn_handle_type) = parser.make_fcn_handle ((yyvsp[0].tok_val)); }
#line 3720 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 45: /* anon_fcn_handle: '@' param_list anon_fcn_begin expression  */
#line 640 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_anon_fcn_handle_type) = parser.make_anon_fcn_handle ((yyvsp[-2].tree_parameter_list_type), (yyvsp[0].tree_expression_type), (yyvsp[-3].tok_val)->beg_pos ());
                    if (! (yyval.tree_anon_fcn_handle_type))
                      {
                        // make_anon_fcn_handle deleted $2 and $4.
                        YYABORT;
                      }

                    lexer.m_parsing_anon_fcn_body = false;
                    lexer.m_nesting_level.remove ();
                  }
#line 3736 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 46: /* anon_fcn_handle: '@' param_list anon_fcn_begin error  */
#line 652 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].tok_val), (yyvsp[-2].tree_parameter_list_type));

                    lexer.m_parsing_anon_fcn_body = false;

                    (yyval.tree_anon_fcn_handle_type) = nullptr;
                    parser.bison_error ("anonymous function bodies must be single expressions");
                    YYABORT;
                  }
#line 3750 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 47: /* primary_expr: identifier  */
#line 664 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_identifier_type); }
#line 3756 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 48: /* primary_expr: constant  */
#line 666 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_constant_type); }
#line 3762 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 49: /* primary_expr: fcn_handle  */
#line 668 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_fcn_handle_type); }
#line 3768 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 50: /* primary_expr: matrix  */
#line 670 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_matrix_or_assign_lhs = false;
                    (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 3777 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 51: /* primary_expr: cell  */
#line 675 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 3783 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 52: /* primary_expr: meta_identifier  */
#line 677 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_metaclass_query_type); }
#line 3789 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 53: /* primary_expr: superclass_identifier  */
#line 679 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_superclass_ref_type); }
#line 3795 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 54: /* primary_expr: '(' expression ')'  */
#line 681 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = (yyvsp[-1].tree_expression_type)->mark_in_parens ();
                  }
#line 3805 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 55: /* magic_colon: ':'  */
#line 689 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_constant_type) = parser.make_constant ((yyvsp[0].tok_val)); }
#line 3811 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 56: /* magic_tilde: '~'  */
#line 693 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.tree_identifier_type) = parser.make_black_hole ();
                  }
#line 3821 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 57: /* arg_list: expression  */
#line 701 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_expression_type)); }
#line 3827 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 58: /* arg_list: magic_colon  */
#line 703 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_constant_type)); }
#line 3833 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 59: /* arg_list: magic_tilde  */
#line 705 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_argument_list_type) = parser.make_argument_list ((yyvsp[0].tree_identifier_type)); }
#line 3839 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 60: /* arg_list: arg_list ',' magic_colon  */
#line 707 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[0].tree_constant_type));
                  }
#line 3849 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 61: /* arg_list: arg_list ',' magic_tilde  */
#line 713 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[0].tree_identifier_type));
                  }
#line 3859 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 62: /* arg_list: arg_list ',' expression  */
#line 719 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_argument_list_type) = parser.append_argument_list ((yyvsp[-2].tree_argument_list_type), (yyvsp[0].tree_expression_type));
                  }
#line 3869 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 63: /* indirect_ref_op: '.'  */
#line 727 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.dummy_type) = 0;
                    lexer.m_looking_at_indirect_ref = true;
                  }
#line 3880 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 64: /* oper_expr: primary_expr  */
#line 736 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 3886 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 65: /* oper_expr: oper_expr PLUS_PLUS  */
#line 738 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (PLUS_PLUS, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 3892 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 66: /* oper_expr: oper_expr MINUS_MINUS  */
#line 740 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (MINUS_MINUS, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 3898 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 67: /* oper_expr: oper_expr '(' ')'  */
#line 742 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), nullptr, '(');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 3913 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 68: /* oper_expr: oper_expr '(' arg_list ')'  */
#line 753 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_argument_list_type), '(');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 3928 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 69: /* oper_expr: oper_expr '{' '}'  */
#line 764 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), nullptr, '{');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 3943 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 70: /* oper_expr: oper_expr '{' arg_list '}'  */
#line 775 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_argument_list_type), '{');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 3958 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 71: /* oper_expr: oper_expr HERMITIAN  */
#line 786 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (HERMITIAN, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 3964 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 72: /* oper_expr: oper_expr TRANSPOSE  */
#line 788 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (TRANSPOSE, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 3970 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 73: /* oper_expr: oper_expr indirect_ref_op STRUCT_ELT  */
#line 790 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-2].tree_expression_type), (yyvsp[0].tok_val)->text ()); }
#line 3976 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 74: /* oper_expr: oper_expr indirect_ref_op '(' expression ')'  */
#line 792 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-4].tree_expression_type), (yyvsp[-1].tree_expression_type));
                  }
#line 3986 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 75: /* oper_expr: PLUS_PLUS oper_expr  */
#line 798 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op (PLUS_PLUS, (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 3992 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 76: /* oper_expr: MINUS_MINUS oper_expr  */
#line 800 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op (MINUS_MINUS, (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 3998 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 77: /* oper_expr: '~' oper_expr  */
#line 802 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('~', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4004 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 78: /* oper_expr: '!' oper_expr  */
#line 804 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('!', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4010 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 79: /* oper_expr: '+' oper_expr  */
#line 806 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('+', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4016 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 80: /* oper_expr: '-' oper_expr  */
#line 808 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('-', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4022 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 81: /* oper_expr: oper_expr POW power_expr  */
#line 810 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (POW, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4028 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 82: /* oper_expr: oper_expr EPOW power_expr  */
#line 812 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EPOW, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4034 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 83: /* oper_expr: oper_expr '+' oper_expr  */
#line 814 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ('+', (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4040 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 84: /* oper_expr: oper_expr '-' oper_expr  */
#line 816 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ('-', (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4046 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 85: /* oper_expr: oper_expr '*' oper_expr  */
#line 818 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ('*', (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4052 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 86: /* oper_expr: oper_expr '/' oper_expr  */
#line 820 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op ('/', (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4058 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 87: /* oper_expr: oper_expr EMUL oper_expr  */
#line 822 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EMUL, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4064 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 88: /* oper_expr: oper_expr EDIV oper_expr  */
#line 824 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EDIV, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4070 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 89: /* oper_expr: oper_expr LEFTDIV oper_expr  */
#line 826 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (LEFTDIV, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4076 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 90: /* oper_expr: oper_expr ELEFTDIV oper_expr  */
#line 828 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (ELEFTDIV, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4082 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 91: /* power_expr: primary_expr  */
#line 832 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4088 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 92: /* power_expr: power_expr PLUS_PLUS  */
#line 834 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (PLUS_PLUS, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 4094 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 93: /* power_expr: power_expr MINUS_MINUS  */
#line 836 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_postfix_op (MINUS_MINUS, (yyvsp[-1].tree_expression_type), (yyvsp[0].tok_val)); }
#line 4100 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 94: /* power_expr: power_expr '(' ')'  */
#line 838 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), nullptr, '(');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 4115 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 95: /* power_expr: power_expr '(' arg_list ')'  */
#line 849 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_argument_list_type), '(');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4130 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 96: /* power_expr: power_expr '{' '}'  */
#line 860 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-2].tree_expression_type), nullptr, '{');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1.
                        YYABORT;
                      }
                  }
#line 4145 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 97: /* power_expr: power_expr '{' arg_list '}'  */
#line 871 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_index_expression ((yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_argument_list_type), '{');
                    if (! (yyval.tree_expression_type))
                      {
                        // make_index_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4160 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 98: /* power_expr: power_expr indirect_ref_op STRUCT_ELT  */
#line 882 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-2].tree_expression_type), (yyvsp[0].tok_val)->text ()); }
#line 4166 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 99: /* power_expr: power_expr indirect_ref_op '(' expression ')'  */
#line 884 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_expression_type) = parser.make_indirect_ref ((yyvsp[-4].tree_expression_type), (yyvsp[-1].tree_expression_type));
                  }
#line 4176 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 100: /* power_expr: PLUS_PLUS power_expr  */
#line 890 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op (PLUS_PLUS, (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4182 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 101: /* power_expr: MINUS_MINUS power_expr  */
#line 892 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op (MINUS_MINUS, (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4188 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 102: /* power_expr: '~' power_expr  */
#line 894 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('~', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4194 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 103: /* power_expr: '!' power_expr  */
#line 896 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('!', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4200 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 104: /* power_expr: '+' power_expr  */
#line 898 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('+', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4206 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 105: /* power_expr: '-' power_expr  */
#line 900 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_prefix_op ('-', (yyvsp[0].tree_expression_type), (yyvsp[-1].tok_val)); }
#line 4212 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 106: /* colon_expr: oper_expr ':' oper_expr  */
#line 904 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_expression_type) = parser.make_colon_expression ((yyvsp[-2].tree_expression_type), (yyvsp[0].tree_expression_type));

                    if (! (yyval.tree_expression_type))
                      {
                        // make_colon_expression deleted $1 and $3.
                        YYABORT;
                      }
                  }
#line 4228 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 107: /* colon_expr: oper_expr ':' oper_expr ':' oper_expr  */
#line 916 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].tok_val), (yyvsp[-1].tok_val));

                    (yyval.tree_expression_type) = parser.make_colon_expression ((yyvsp[-4].tree_expression_type), (yyvsp[0].tree_expression_type), (yyvsp[-2].tree_expression_type));

                    if (! (yyval.tree_expression_type))
                      {
                        // make_colon_expression deleted $1, $3, and $5.
                        YYABORT;
                      }
                  }
#line 4244 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 108: /* simple_expr: oper_expr  */
#line 930 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4250 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 109: /* simple_expr: colon_expr  */
#line 932 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type); }
#line 4256 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 110: /* simple_expr: simple_expr EXPR_LT simple_expr  */
#line 934 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_LT, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4262 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 111: /* simple_expr: simple_expr EXPR_LE simple_expr  */
#line 936 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_LE, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4268 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 112: /* simple_expr: simple_expr EXPR_EQ simple_expr  */
#line 938 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_EQ, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4274 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 113: /* simple_expr: simple_expr EXPR_GE simple_expr  */
#line 940 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_GE, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4280 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 114: /* simple_expr: simple_expr EXPR_GT simple_expr  */
#line 942 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_GT, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4286 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 115: /* simple_expr: simple_expr EXPR_NE simple_expr  */
#line 944 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_NE, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4292 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 116: /* simple_expr: simple_expr EXPR_AND simple_expr  */
#line 946 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_AND, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4298 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 117: /* simple_expr: simple_expr EXPR_OR simple_expr  */
#line 948 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_binary_op (EXPR_OR, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4304 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 118: /* simple_expr: simple_expr EXPR_AND_AND simple_expr  */
#line 950 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_boolean_op (EXPR_AND_AND, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4310 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 119: /* simple_expr: simple_expr EXPR_OR_OR simple_expr  */
#line 952 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_boolean_op (EXPR_OR_OR, (yyvsp[-2].tree_expression_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4316 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 120: /* assign_lhs: simple_expr  */
#line 956 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_argument_list_type) = parser.validate_matrix_for_assignment ((yyvsp[0].tree_expression_type));

                    if ((yyval.tree_argument_list_type))
                      { lexer.m_looking_at_matrix_or_assign_lhs = false; }
                    else
                      {
                        // validate_matrix_for_assignment deleted $1.
                        YYABORT;
                      }
                  }
#line 4332 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 121: /* assign_expr: assign_lhs '=' expression  */
#line 970 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op ('=', (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4338 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 122: /* assign_expr: assign_lhs ADD_EQ expression  */
#line 972 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (ADD_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4344 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 123: /* assign_expr: assign_lhs SUB_EQ expression  */
#line 974 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (SUB_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4350 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 124: /* assign_expr: assign_lhs MUL_EQ expression  */
#line 976 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (MUL_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4356 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 125: /* assign_expr: assign_lhs DIV_EQ expression  */
#line 978 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (DIV_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4362 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 126: /* assign_expr: assign_lhs LEFTDIV_EQ expression  */
#line 980 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (LEFTDIV_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4368 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 127: /* assign_expr: assign_lhs POW_EQ expression  */
#line 982 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (POW_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4374 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 128: /* assign_expr: assign_lhs EMUL_EQ expression  */
#line 984 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (EMUL_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4380 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 129: /* assign_expr: assign_lhs EDIV_EQ expression  */
#line 986 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (EDIV_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4386 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 130: /* assign_expr: assign_lhs ELEFTDIV_EQ expression  */
#line 988 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (ELEFTDIV_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4392 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 131: /* assign_expr: assign_lhs EPOW_EQ expression  */
#line 990 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (EPOW_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4398 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 132: /* assign_expr: assign_lhs AND_EQ expression  */
#line 992 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (AND_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4404 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 133: /* assign_expr: assign_lhs OR_EQ expression  */
#line 994 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = parser.make_assign_op (OR_EQ, (yyvsp[-2].tree_argument_list_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4410 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 134: /* expression: simple_expr  */
#line 998 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if ((yyvsp[0].tree_expression_type) && ((yyvsp[0].tree_expression_type)->is_matrix () || (yyvsp[0].tree_expression_type)->iscell ()))
                      {
                        if (parser.validate_array_list ((yyvsp[0].tree_expression_type)))
                          (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                        else
                          {
                            delete (yyvsp[0].tree_expression_type);
                            YYABORT;
                          }
                      }
                    else
                      (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 4429 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 135: /* expression: assign_expr  */
#line 1013 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! (yyvsp[0].tree_expression_type))
                      YYABORT;

                    (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 4440 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 136: /* expression: anon_fcn_handle  */
#line 1020 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = (yyvsp[0].tree_anon_fcn_handle_type); }
#line 4446 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 137: /* command: declaration  */
#line 1028 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_decl_command_type); }
#line 4452 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 138: /* command: select_command  */
#line 1030 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4458 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 139: /* command: loop_command  */
#line 1032 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4464 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 140: /* command: jump_command  */
#line 1034 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4470 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 141: /* command: spmd_command  */
#line 1036 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4476 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 142: /* command: except_command  */
#line 1038 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4482 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 143: /* command: function  */
#line 1040 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_function_def_type); }
#line 4488 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 144: /* command: file  */
#line 1042 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_command_type); }
#line 4494 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 145: /* declaration: GLOBAL decl_init_list  */
#line 1050 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_decl_command_type) = parser.make_decl_command (GLOBAL, (yyvsp[-1].tok_val), (yyvsp[0].tree_decl_init_list_type));
                    lexer.m_looking_at_decl_list = false;
                  }
#line 4503 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 146: /* declaration: PERSISTENT decl_init_list  */
#line 1055 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_decl_command_type) = parser.make_decl_command (PERSISTENT, (yyvsp[-1].tok_val), (yyvsp[0].tree_decl_init_list_type));
                    lexer.m_looking_at_decl_list = false;
                  }
#line 4512 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 147: /* decl_init_list: decl_elt  */
#line 1062 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_init_list_type) = parser.make_decl_init_list ((yyvsp[0].tree_decl_elt_type)); }
#line 4518 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 148: /* decl_init_list: decl_init_list decl_elt  */
#line 1064 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_init_list_type) = parser.append_decl_init_list ((yyvsp[-1].tree_decl_init_list_type), (yyvsp[0].tree_decl_elt_type)); }
#line 4524 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 149: /* decl_elt: identifier  */
#line 1068 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[0].tree_identifier_type)); }
#line 4530 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 150: /* decl_elt: identifier '=' expression  */
#line 1070 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[-2].tree_identifier_type), (yyvsp[-1].tok_val), (yyvsp[0].tree_expression_type)); }
#line 4536 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 151: /* select_command: if_command  */
#line 1078 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_if_command_type); }
#line 4542 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 152: /* select_command: switch_command  */
#line 1080 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = (yyvsp[0].tree_switch_command_type); }
#line 4548 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 153: /* if_command: IF stash_comment if_cmd_list END  */
#line 1088 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_if_command_type) = parser.finish_if_command ((yyvsp[-3].tok_val), (yyvsp[-1].tree_if_command_list_type), (yyvsp[0].tok_val), (yyvsp[-2].comment_type))))
                      {
                        // finish_if_command deleted $3.
                        YYABORT;
                      }
                  }
#line 4560 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 154: /* if_cmd_list: if_cmd_list1  */
#line 1098 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_command_list_type) = (yyvsp[0].tree_if_command_list_type); }
#line 4566 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 155: /* if_cmd_list: if_cmd_list1 else_clause  */
#line 1100 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_command_list_type) = parser.append_if_clause ((yyvsp[-1].tree_if_command_list_type), (yyvsp[0].tree_if_clause_type)); }
#line 4572 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 156: /* if_cmd_list1: expression stmt_begin opt_sep opt_list  */
#line 1104 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    parser.maybe_convert_to_braindead_shortcircuit ((yyvsp[-3].tree_expression_type));

                    (yyval.tree_if_command_list_type) = parser.start_if_command ((yyvsp[-3].tree_expression_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 4584 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 157: /* if_cmd_list1: if_cmd_list1 elseif_clause  */
#line 1112 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_if_command_list_type) = parser.append_if_clause ((yyvsp[-1].tree_if_command_list_type), (yyvsp[0].tree_if_clause_type)); }
#line 4590 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 158: /* elseif_clause: ELSEIF stash_comment opt_sep expression stmt_begin opt_sep opt_list  */
#line 1116 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-4].punct_type), (yyvsp[-1].punct_type));

                    parser.maybe_convert_to_braindead_shortcircuit ((yyvsp[-3].tree_expression_type));

                    (yyval.tree_if_clause_type) = parser.make_elseif_clause ((yyvsp[-6].tok_val), (yyvsp[-3].tree_expression_type), (yyvsp[0].tree_statement_list_type), (yyvsp[-5].comment_type));
                  }
#line 4602 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 159: /* else_clause: ELSE stash_comment opt_sep opt_list  */
#line 1126 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_if_clause_type) = parser.make_else_clause ((yyvsp[-3].tok_val), (yyvsp[-2].comment_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 4612 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 160: /* switch_command: SWITCH stash_comment expression opt_sep case_list END  */
#line 1138 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    if (! ((yyval.tree_switch_command_type) = parser.finish_switch_command ((yyvsp[-5].tok_val), (yyvsp[-3].tree_expression_type), (yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tok_val), (yyvsp[-4].comment_type))))
                      {
                        // finish_switch_command deleted $3 adn $5.
                        YYABORT;
                      }
                  }
#line 4626 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 161: /* case_list: %empty  */
#line 1150 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = nullptr; }
#line 4632 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 162: /* case_list: default_case  */
#line 1152 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.make_switch_case_list ((yyvsp[0].tree_switch_case_type)); }
#line 4638 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 163: /* case_list: case_list1  */
#line 1154 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = (yyvsp[0].tree_switch_case_list_type); }
#line 4644 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 164: /* case_list: case_list1 default_case  */
#line 1156 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.append_switch_case ((yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tree_switch_case_type)); }
#line 4650 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 165: /* case_list1: switch_case  */
#line 1160 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.make_switch_case_list ((yyvsp[0].tree_switch_case_type)); }
#line 4656 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 166: /* case_list1: case_list1 switch_case  */
#line 1162 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_switch_case_list_type) = parser.append_switch_case ((yyvsp[-1].tree_switch_case_list_type), (yyvsp[0].tree_switch_case_type)); }
#line 4662 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 167: /* switch_case: CASE stash_comment opt_sep expression stmt_begin opt_sep opt_list  */
#line 1166 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-4].punct_type), (yyvsp[-1].punct_type));

                    (yyval.tree_switch_case_type) = parser.make_switch_case ((yyvsp[-6].tok_val), (yyvsp[-3].tree_expression_type), (yyvsp[0].tree_statement_list_type), (yyvsp[-5].comment_type));
                  }
#line 4672 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 168: /* default_case: OTHERWISE stash_comment opt_sep opt_list  */
#line 1174 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_switch_case_type) = parser.make_default_switch_case ((yyvsp[-3].tok_val), (yyvsp[-2].comment_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 4682 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 169: /* loop_command: WHILE stash_comment expression stmt_begin opt_sep opt_list END  */
#line 1186 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    parser.maybe_convert_to_braindead_shortcircuit ((yyvsp[-4].tree_expression_type));

                    if (! ((yyval.tree_command_type) = parser.make_while_command ((yyvsp[-6].tok_val), (yyvsp[-4].tree_expression_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-5].comment_type))))
                      {
                        // make_while_command deleted $3 and $6.
                        YYABORT;
                      }
                  }
#line 4698 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 170: /* loop_command: DO stash_comment opt_sep opt_list UNTIL expression  */
#line 1198 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-5].tok_val), (yyvsp[-3].punct_type));

                    (yyval.tree_command_type) = parser.make_do_until_command ((yyvsp[-1].tok_val), (yyvsp[-2].tree_statement_list_type), (yyvsp[0].tree_expression_type), (yyvsp[-4].comment_type));
                  }
#line 4708 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 171: /* loop_command: FOR stash_comment assign_lhs '=' expression stmt_begin opt_sep opt_list END  */
#line 1204 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-5].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_for_command (FOR, (yyvsp[-8].tok_val), (yyvsp[-6].tree_argument_list_type), (yyvsp[-4].tree_expression_type),
                                                         nullptr, (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-7].comment_type))))
                      {
                        // make_for_command deleted $3, $5, and $8.
                        YYABORT;
                      }
                  }
#line 4723 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 172: /* loop_command: FOR stash_comment '(' assign_lhs '=' expression ')' opt_sep opt_list END  */
#line 1215 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-7].tok_val), (yyvsp[-5].tok_val), (yyvsp[-3].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_for_command (FOR, (yyvsp[-9].tok_val), (yyvsp[-6].tree_argument_list_type), (yyvsp[-4].tree_expression_type),
                                                         nullptr, (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-8].comment_type))))
                      {
                        // make_for_command deleted $4, $6, and $9.
                        YYABORT;
                      }
                  }
#line 4738 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 173: /* loop_command: PARFOR stash_comment assign_lhs '=' expression stmt_begin opt_sep opt_list END  */
#line 1226 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-5].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_for_command (PARFOR, (yyvsp[-8].tok_val), (yyvsp[-6].tree_argument_list_type), (yyvsp[-4].tree_expression_type),
                                                         nullptr, (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-7].comment_type))))
                      {
                        // make_for_command deleted $3, $5, and $8.
                        YYABORT;
                      }
                  }
#line 4753 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 174: /* loop_command: PARFOR stash_comment '(' assign_lhs '=' expression ',' expression ')' opt_sep opt_list END  */
#line 1237 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-9].tok_val), (yyvsp[-7].tok_val), (yyvsp[-5].tok_val), (yyvsp[-3].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_for_command (PARFOR, (yyvsp[-11].tok_val), (yyvsp[-8].tree_argument_list_type), (yyvsp[-6].tree_expression_type),
                                                         (yyvsp[-4].tree_expression_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-10].comment_type))))
                      {
                        // make_for_command deleted $4, $6, $8, and $11.
                        YYABORT;
                      }
                  }
#line 4768 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 175: /* jump_command: BREAK  */
#line 1254 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_break_command ((yyvsp[0].tok_val))))
                      YYABORT;
                  }
#line 4777 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 176: /* jump_command: CONTINUE  */
#line 1259 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_command_type) = parser.make_continue_command ((yyvsp[0].tok_val))))
                      YYABORT;
                  }
#line 4786 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 177: /* jump_command: FUNC_RET  */
#line 1264 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_command_type) = parser.make_return_command ((yyvsp[0].tok_val)); }
#line 4792 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 178: /* spmd_command: SPMD stash_comment opt_sep opt_list END  */
#line 1272 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    octave::comment_list *lc = (yyvsp[-3].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_command_type) = parser.make_spmd_command ((yyvsp[-4].tok_val), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_spmd_command deleted $4, LC, and TC.
                        YYABORT;
                      }
                  }
#line 4809 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 179: /* except_command: UNWIND stash_comment opt_sep opt_list CLEANUP stash_comment opt_sep opt_list END  */
#line 1292 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-6].punct_type), (yyvsp[-4].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_unwind_command ((yyvsp[-8].tok_val), (yyvsp[-5].tree_statement_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-7].comment_type), (yyvsp[-3].comment_type))))
                      {
                        // make_unwind_command deleted $4 and $8.
                        YYABORT;
                      }
                  }
#line 4823 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 180: /* except_command: TRY stash_comment opt_sep opt_list CATCH stash_comment opt_sep opt_list END  */
#line 1303 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-6].punct_type), (yyvsp[-4].tok_val), (yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_try_command ((yyvsp[-8].tok_val), (yyvsp[-5].tree_statement_list_type), (yyvsp[-2].punct_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tok_val), (yyvsp[-7].comment_type), (yyvsp[-3].comment_type))))
                      {
                        // make_try_command deleted $4 and $8.
                        YYABORT;
                      }
                  }
#line 4837 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 181: /* except_command: TRY stash_comment opt_sep opt_list END  */
#line 1313 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    if (! ((yyval.tree_command_type) = parser.make_try_command ((yyvsp[-4].tok_val), (yyvsp[-1].tree_statement_list_type), 0, nullptr,
                                                         (yyvsp[0].tok_val), (yyvsp[-3].comment_type), nullptr)))
                      {
                        // make_try_command deleted $4.
                        YYABORT;
                      }
                  }
#line 4852 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 182: /* push_fcn_symtab: %empty  */
#line 1330 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! parser.push_fcn_symtab ())
                      YYABORT;

                    (yyval.dummy_type) = 0;
                  }
#line 4863 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 183: /* param_list_beg: '('  */
#line 1343 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.dummy_type) = 0;
                    lexer.m_looking_at_parameter_list = true;
                    lexer.m_arguments_is_keyword = false;

                    if (lexer.m_looking_at_function_handle)
                      {
                        // Will get a real name later.
                        lexer.m_symtab_context.push (octave::symbol_scope ("parser:param_list_beg"));
                        lexer.m_looking_at_function_handle--;
                        lexer.m_looking_at_anon_fcn_args = true;
                      }
                  }
#line 4883 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 184: /* param_list_end: ')'  */
#line 1361 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.dummy_type) = 0;
                    lexer.m_looking_at_parameter_list = false;
                    lexer.m_arguments_is_keyword = true;
                    lexer.m_looking_for_object_index = false;
                  }
#line 4896 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 185: /* opt_param_list: %empty  */
#line 1372 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = nullptr; }
#line 4902 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 186: /* opt_param_list: param_list  */
#line 1374 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = (yyvsp[0].tree_parameter_list_type); }
#line 4908 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 187: /* param_list: param_list_beg param_list1 param_list_end  */
#line 1378 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if ((yyvsp[-1].tree_parameter_list_type))
                      lexer.mark_as_variables ((yyvsp[-1].tree_parameter_list_type)->variable_names ());

                    (yyval.tree_parameter_list_type) = (yyvsp[-1].tree_parameter_list_type);
                  }
#line 4919 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 188: /* param_list: param_list_beg error  */
#line 1385 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_parameter_list_type) = nullptr;
                    parser.bison_error ("invalid parameter list");
                    YYABORT;
                  }
#line 4929 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 189: /* param_list1: %empty  */
#line 1393 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::in); }
#line 4935 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 190: /* param_list1: param_list2  */
#line 1395 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyvsp[0].tree_parameter_list_type)->mark_as_formal_parameters ();

                    if (parser.validate_param_list ((yyvsp[0].tree_parameter_list_type), octave::tree_parameter_list::in))
                      {
                        lexer.mark_as_variables ((yyvsp[0].tree_parameter_list_type)->variable_names ());
                        (yyval.tree_parameter_list_type) = (yyvsp[0].tree_parameter_list_type);
                      }
                    else
                      {
                        delete (yyvsp[0].tree_parameter_list_type);
                        YYABORT;
                      }
                  }
#line 4954 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 191: /* param_list2: param_list_elt  */
#line 1412 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::in, (yyvsp[0].tree_decl_elt_type)); }
#line 4960 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 192: /* param_list2: param_list2 ',' param_list_elt  */
#line 1414 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_parameter_list_type) = parser.append_parameter_list ((yyvsp[-2].tree_parameter_list_type), (yyvsp[0].tree_decl_elt_type));
                  }
#line 4970 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 193: /* param_list_elt: decl_elt  */
#line 1422 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = (yyvsp[0].tree_decl_elt_type); }
#line 4976 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 194: /* param_list_elt: magic_tilde  */
#line 1424 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_decl_elt_type) = parser.make_decl_elt ((yyvsp[0].tree_identifier_type)); }
#line 4982 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 195: /* return_list: '[' ']'  */
#line 1432 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val), (yyvsp[0].tok_val));

                    lexer.m_looking_at_return_list = false;

                    (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::out);
                  }
#line 4994 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 196: /* return_list: identifier  */
#line 1440 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_looking_at_return_list = false;

                    octave::tree_parameter_list *tmp
                      = parser.make_parameter_list (octave::tree_parameter_list::out, (yyvsp[0].tree_identifier_type));

                    // Even though this parameter list can contain only
                    // a single identifier, we still need to validate it
                    // to check for varargin or varargout.

                    if (parser.validate_param_list (tmp, octave::tree_parameter_list::out))
                      (yyval.tree_parameter_list_type) = tmp;
                    else
                      {
                        delete tmp;
                        YYABORT;
                      }
                  }
#line 5017 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 197: /* return_list: '[' return_list1 ']'  */
#line 1459 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    lexer.m_looking_at_return_list = false;

                    // Check for duplicate parameter names, varargin,
                    // or varargout.

                    if (parser.validate_param_list ((yyvsp[-1].tree_parameter_list_type), octave::tree_parameter_list::out))
                      (yyval.tree_parameter_list_type) = (yyvsp[-1].tree_parameter_list_type);
                    else
                      {
                        delete (yyvsp[-1].tree_parameter_list_type);
                        YYABORT;
                      }
                  }
#line 5038 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 198: /* return_list1: identifier  */
#line 1478 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tree_parameter_list_type) = parser.make_parameter_list (octave::tree_parameter_list::out, (yyvsp[0].tree_identifier_type));
                  }
#line 5046 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 199: /* return_list1: return_list1 ',' identifier  */
#line 1482 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_parameter_list_type) = parser.append_parameter_list ((yyvsp[-2].tree_parameter_list_type), (yyvsp[0].tree_identifier_type));
                  }
#line 5056 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 200: /* parsing_local_fcns: %empty  */
#line 1495 "../libinterp/parse-tree/oct-parse.yy"
                  { parser.parsing_local_functions (true); }
#line 5062 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 201: /* push_script_symtab: %empty  */
#line 1499 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;

                    // This scope may serve as the parent scope for local
                    // functions in classdef files..
                    lexer.m_symtab_context.push (octave::symbol_scope ("parser:push_script_symtab"));
                  }
#line 5074 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 202: /* begin_file: push_script_symtab INPUT_FILE  */
#line 1509 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.dummy_type) = 0; }
#line 5080 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 203: /* file: begin_file opt_nl opt_list END_OF_INPUT  */
#line 1513 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    if (lexer.m_reading_fcn_file)
                      {
                        // Delete the dummy statement_list we created
                        // after parsing the function.  Any function
                        // definitions found in the file have already
                        // been stored in the symbol table or in
                        // base_parser::m_primary_fcn.

                        // Unused symbol table context.
                        lexer.m_symtab_context.pop ();

                        delete (yyvsp[-1].tree_statement_list_type);

                        if (! parser.validate_primary_fcn ())
                          YYABORT;
                      }
                    else
                      {
                        octave::tree_statement *end_of_script
                          = parser.make_end ("endscript", true,
                                             (yyvsp[0].tok_val)->beg_pos (), (yyvsp[0].tok_val)->end_pos ());

                        parser.make_script ((yyvsp[-1].tree_statement_list_type), end_of_script);

                        if (! parser.validate_primary_fcn ())
                          YYABORT;
                      }

                    (yyval.tree_command_type) = nullptr;
                  }
#line 5118 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 204: /* file: begin_file opt_nl classdef parsing_local_fcns opt_sep opt_fcn_list END_OF_INPUT  */
#line 1547 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-5].punct_type), (yyvsp[-2].punct_type), (yyvsp[0].tok_val));

                    // Unused symbol table context.
                    lexer.m_symtab_context.pop ();

                    if (! parser.finish_classdef_file ((yyvsp[-4].tree_classdef_type), (yyvsp[-1].tree_statement_list_type)))
                      YYABORT;

                    (yyval.tree_command_type) = nullptr;
                  }
#line 5134 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 205: /* function_beg: push_fcn_symtab FCN  */
#line 1565 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                    if (lexer.m_reading_classdef_file
                        || lexer.m_parsing_classdef)
                      lexer.m_maybe_classdef_get_set_method = true;
                  }
#line 5145 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 206: /* fcn_name: identifier  */
#line 1574 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_identifier_type) = parser.make_fcn_name ((yyvsp[0].tree_identifier_type))))
                      {
                        // make_fcn_name deleted $1.
                        YYABORT;
                      }

                    lexer.m_arguments_is_keyword = true;
                  }
#line 5159 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 207: /* fcn_name: GET '.' identifier  */
#line 1584 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[-1].tok_val));

                    (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type);

                    lexer.m_parsed_function_name.top () = true;
                    lexer.m_maybe_classdef_get_set_method = false;
                    lexer.m_parsing_classdef_get_method = true;
                    lexer.m_arguments_is_keyword = true;
                  }
#line 5174 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 208: /* fcn_name: SET '.' identifier  */
#line 1595 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[-1].tok_val));

                    (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type);

                    lexer.m_parsed_function_name.top () = true;
                    lexer.m_maybe_classdef_get_set_method = false;
                    lexer.m_parsing_classdef_set_method = true;
                    lexer.m_arguments_is_keyword = true;
                  }
#line 5189 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 209: /* function_end: END  */
#line 1608 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    parser.endfunction_found (true);

                    if (parser.end_token_ok ((yyvsp[0].tok_val), octave::token::function_end))
                      (yyval.tree_statement_type) = parser.make_end ("endfunction", false,
                                            (yyvsp[0].tok_val)->beg_pos (), (yyvsp[0].tok_val)->end_pos ());
                    else
                      {
                        parser.end_token_error ((yyvsp[0].tok_val), octave::token::function_end);
                        YYABORT;
                      }
                  }
#line 5206 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 210: /* function_end: END_OF_INPUT  */
#line 1621 "../libinterp/parse-tree/oct-parse.yy"
                  {
// A lot of tests are based on the assumption that this is OK
//                  if (lexer.m_reading_script_file)
//                    {
//                      parser.bison_error ("function body open at end of script");
//                      YYABORT;
//                    }

                    if (parser.endfunction_found ())
                      {
                        parser.bison_error ("inconsistent function endings -- "
                                 "if one function is explicitly ended, "
                                 "so must all the others");
                        YYABORT;
                      }

                    if (! (lexer.m_reading_fcn_file || lexer.m_reading_script_file
                           || lexer.input_from_eval_string ()))
                      {
                        parser.bison_error ("function body open at end of input");
                        YYABORT;
                      }

                    if (lexer.m_reading_classdef_file)
                      {
                        parser.bison_error ("classdef body open at end of input");
                        YYABORT;
                      }

                    (yyval.tree_statement_type) = parser.make_end ("endfunction", true,
                                          (yyvsp[0].tok_val)->beg_pos (), (yyvsp[0].tok_val)->end_pos ());
                  }
#line 5243 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 211: /* function: function_beg stash_comment fcn_name opt_param_list opt_sep function_body function_end  */
#line 1657 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    (yyval.tree_function_def_type) = parser.make_function ((yyvsp[-6].tok_val), nullptr, (yyvsp[-4].tree_identifier_type), (yyvsp[-3].tree_parameter_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tree_statement_type), (yyvsp[-5].comment_type));
                  }
#line 5253 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 212: /* function: function_beg stash_comment return_list '=' fcn_name opt_param_list opt_sep function_body function_end  */
#line 1664 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-5].tok_val), (yyvsp[-2].punct_type));

                    (yyval.tree_function_def_type) = parser.make_function ((yyvsp[-8].tok_val), (yyvsp[-6].tree_parameter_list_type), (yyvsp[-4].tree_identifier_type), (yyvsp[-3].tree_parameter_list_type), (yyvsp[-1].tree_statement_list_type), (yyvsp[0].tree_statement_type), (yyvsp[-7].comment_type));
                  }
#line 5263 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 213: /* function_body: at_first_executable_stmt opt_list  */
#line 1672 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].dummy_type));

                    (yyval.tree_statement_list_type) = (yyvsp[0].tree_statement_list_type);
                  }
#line 5273 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 214: /* function_body: function_body1 opt_sep at_first_executable_stmt opt_list  */
#line 1678 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                    (yyval.tree_statement_list_type) = parser.append_function_body ((yyvsp[-3].tree_statement_list_type), (yyvsp[0].tree_statement_list_type));
                  }
#line 5283 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 215: /* at_first_executable_stmt: %empty  */
#line 1687 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    lexer.m_arguments_is_keyword = false;
                  }
#line 5292 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 216: /* function_body1: arguments_block  */
#line 1694 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_arguments_block_type));

                    (yyval.tree_statement_list_type) = parser.make_statement_list (stmt);
                  }
#line 5302 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 217: /* function_body1: function_body1 opt_sep arguments_block  */
#line 1700 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    octave::tree_statement *stmt = parser.make_statement ((yyvsp[0].tree_arguments_block_type));

                    (yyval.tree_statement_list_type) = parser.append_statement_list ((yyvsp[-2].tree_statement_list_type), (yyvsp[-1].punct_type), stmt, false);
                  }
#line 5312 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 218: /* arguments_block: arguments_beg stash_comment opt_sep args_attr_list args_validation_list opt_sep END  */
#line 1709 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-4].punct_type), (yyvsp[-1].punct_type));

                    octave::comment_list *lc = (yyvsp[-5].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_arguments_block_type) = parser.make_arguments_block ((yyvsp[-6].tok_val), (yyvsp[-3].tree_args_block_attribute_list_type), (yyvsp[-2].tree_args_block_validation_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_arguments_block deleted $4, $5, LC, and TC.
                        YYABORT;
                      }

                    lexer.m_arguments_is_keyword = true;
                  }
#line 5331 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 219: /* arguments_beg: ARGUMENTS  */
#line 1726 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                    lexer.m_arguments_is_keyword = false;
                  }
#line 5340 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 220: /* args_attr_list: %empty  */
#line 1733 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_args_block_attribute_list_type) = nullptr; }
#line 5346 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 221: /* args_attr_list: '(' identifier ')'  */
#line 1735 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    // Error if $$ is nullptr.
                    if  (! ((yyval.tree_args_block_attribute_list_type) = parser.make_args_attribute_list ((yyvsp[-1].tree_identifier_type))))
                      {
                        // make_args_attribute_list deleted $2.
                        YYABORT;
                      }
                  }
#line 5361 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 222: /* args_validation_list: arg_name arg_validation  */
#line 1749 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      (yyvsp[0].tree_arg_validation_type)->arg_name ((yyvsp[-1].tree_expression_type));
                      (yyval.tree_args_block_validation_list_type) = parser.make_args_validation_list ((yyvsp[0].tree_arg_validation_type));
                    }
#line 5370 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 223: /* args_validation_list: args_validation_list sep arg_name arg_validation  */
#line 1754 "../libinterp/parse-tree/oct-parse.yy"
                    {
                      OCTAVE_YYUSE ((yyvsp[-2].punct_type));

                      (yyvsp[0].tree_arg_validation_type)->arg_name ((yyvsp[-1].tree_expression_type));
                      (yyval.tree_args_block_validation_list_type) = parser.append_args_validation_list ((yyvsp[-3].tree_args_block_validation_list_type), (yyvsp[0].tree_arg_validation_type));
                    }
#line 5381 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 224: /* arg_name: identifier  */
#line 1767 "../libinterp/parse-tree/oct-parse.yy"
                    { (yyval.tree_expression_type) = (yyvsp[0].tree_identifier_type); }
#line 5387 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 225: /* arg_validation: size_spec class_name validation_fcns default_value  */
#line 1771 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.tree_arg_validation_type) = parser.make_arg_validation ((yyvsp[-3].tree_arg_size_spec_type), (yyvsp[-2].tree_identifier_type), (yyvsp[-1].tree_arg_validation_fcns_type), (yyvsp[0].tree_expression_type))))
                      {
                        // make_arg_validation deleted ...
                        YYABORT;
                      }
                  }
#line 5399 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 226: /* size_spec: %empty  */
#line 1781 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_arg_size_spec_type) = nullptr; }
#line 5405 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 227: /* size_spec: '(' arg_list ')'  */
#line 1783 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    if (! ((yyval.tree_arg_size_spec_type) = parser.make_arg_size_spec ((yyvsp[-1].tree_argument_list_type))))
                      {
                        // make_arg_size_spec deleted $2.
                        YYABORT;
                      }
                  }
#line 5419 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 228: /* class_name: %empty  */
#line 1795 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = nullptr; }
#line 5425 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 229: /* class_name: identifier  */
#line 1797 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_identifier_type) = (yyvsp[0].tree_identifier_type); }
#line 5431 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 230: /* validation_fcns: %empty  */
#line 1802 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_arg_validation_fcns_type) = nullptr; }
#line 5437 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 231: /* validation_fcns: '{' arg_list '}'  */
#line 1804 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    if (! ((yyval.tree_arg_validation_fcns_type) = parser.make_arg_validation_fcns ((yyvsp[-1].tree_argument_list_type))))
                      {
                        // make_arg_validation_fcns deleted $2.
                        YYABORT;
                      }
                  }
#line 5451 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 232: /* default_value: %empty  */
#line 1816 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_expression_type) = nullptr; }
#line 5457 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 233: /* default_value: '=' expression  */
#line 1818 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_expression_type) = (yyvsp[0].tree_expression_type);
                  }
#line 5467 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 234: /* classdef_beg: CLASSDEF  */
#line 1830 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! lexer.m_reading_classdef_file)
                      {
                        parser.bison_error ("classdef must appear inside a file containing only a class definition");
                        YYABORT;
                      }

                    // Create invalid parent scope.
                    lexer.m_symtab_context.push (octave::symbol_scope ());
                    lexer.m_parsing_classdef = true;
                    lexer.m_parsing_classdef_decl = true;
                    lexer.m_classdef_element_names_are_keywords = true;

                    (yyval.tok_val) = (yyvsp[0].tok_val);
                  }
#line 5487 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 235: /* classdef: classdef_beg stash_comment attr_list identifier opt_sep superclass_list class_body END  */
#line 1848 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].punct_type));

                    octave::comment_list *lc = (yyvsp[-6].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    lexer.m_parsing_classdef = false;

                    if (! ((yyval.tree_classdef_type) = parser.make_classdef ((yyvsp[-7].tok_val), (yyvsp[-5].tree_classdef_attribute_list_type), (yyvsp[-4].tree_identifier_type), (yyvsp[-2].tree_classdef_superclass_list_type), (yyvsp[-1].tree_classdef_body_type), (yyvsp[0].tok_val),
                                                      lc, tc)))
                      {
                        // make_classdef deleted $3, $4, $6, $7, LC, and
                        // TC.
                        YYABORT;
                      }
                  }
#line 5508 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 236: /* attr_list: %empty  */
#line 1867 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_list_type) = nullptr; }
#line 5514 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 237: /* attr_list: '(' attr_list1 ')' opt_sep  */
#line 1869 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].tok_val), (yyvsp[-1].tok_val), (yyvsp[0].punct_type));

                    (yyval.tree_classdef_attribute_list_type) = (yyvsp[-2].tree_classdef_attribute_list_type);
                  }
#line 5524 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 238: /* attr_list1: attr  */
#line 1877 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_list_type) = parser.make_classdef_attribute_list ((yyvsp[0].tree_classdef_attribute_type)); }
#line 5530 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 239: /* attr_list1: attr_list1 ',' attr  */
#line 1879 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_attribute_list_type) = parser.append_classdef_attribute ((yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[0].tree_classdef_attribute_type));
                  }
#line 5540 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 240: /* attr: identifier  */
#line 1887 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_attribute_type) = parser.make_classdef_attribute ((yyvsp[0].tree_identifier_type)); }
#line 5546 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 241: /* attr: identifier '=' expression  */
#line 1889 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_attribute_type) = parser.make_classdef_attribute ((yyvsp[-2].tree_identifier_type), (yyvsp[0].tree_expression_type));
                  }
#line 5556 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 242: /* attr: '~' identifier  */
#line 1895 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_attribute_type) = parser.make_not_classdef_attribute ((yyvsp[0].tree_identifier_type));
                  }
#line 5566 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 243: /* attr: '!' identifier  */
#line 1901 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_attribute_type) = parser.make_not_classdef_attribute ((yyvsp[0].tree_identifier_type));
                  }
#line 5576 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 244: /* superclass_list: %empty  */
#line 1909 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_parsing_classdef_decl = false;
                    lexer.m_parsing_classdef_superclass = false;

                    (yyval.tree_classdef_superclass_list_type) = nullptr;
                  }
#line 5587 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 245: /* superclass_list: superclass_list1 opt_sep  */
#line 1916 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_parsing_classdef_decl = false;
                    lexer.m_parsing_classdef_superclass = false;

                    (yyval.tree_classdef_superclass_list_type) = (yyvsp[-1].tree_classdef_superclass_list_type);
                  }
#line 5600 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 246: /* superclass_list1: EXPR_LT superclass  */
#line 1928 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_superclass_list_type) = parser.make_classdef_superclass_list ((yyvsp[0].tree_classdef_superclass_type));
                  }
#line 5610 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 247: /* superclass_list1: superclass_list1 EXPR_AND superclass  */
#line 1934 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].tok_val));

                    (yyval.tree_classdef_superclass_list_type) = parser.append_classdef_superclass ((yyvsp[-2].tree_classdef_superclass_list_type), (yyvsp[0].tree_classdef_superclass_type));
                  }
#line 5620 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 248: /* superclass: FQ_IDENT  */
#line 1942 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_superclass_type) = parser.make_classdef_superclass ((yyvsp[0].tok_val)); }
#line 5626 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 249: /* class_body: %empty  */
#line 1946 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tree_classdef_body_type) = nullptr;
                  }
#line 5635 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 250: /* class_body: class_body1 opt_sep  */
#line 1951 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tree_classdef_body_type) = (yyvsp[-1].tree_classdef_body_type);
                  }
#line 5646 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 251: /* class_body1: properties_block  */
#line 1960 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_properties_block_type)); }
#line 5652 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 252: /* class_body1: methods_block  */
#line 1962 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_methods_block_type)); }
#line 5658 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 253: /* class_body1: events_block  */
#line 1964 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_events_block_type)); }
#line 5664 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 254: /* class_body1: enum_block  */
#line 1966 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_body_type) = parser.make_classdef_body ((yyvsp[0].tree_classdef_enum_block_type)); }
#line 5670 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 255: /* class_body1: class_body1 opt_sep properties_block  */
#line 1968 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_body_type) = parser.append_classdef_properties_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_properties_block_type));
                  }
#line 5680 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 256: /* class_body1: class_body1 opt_sep methods_block  */
#line 1974 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_body_type) = parser.append_classdef_methods_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_methods_block_type));
                  }
#line 5690 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 257: /* class_body1: class_body1 opt_sep events_block  */
#line 1980 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_body_type) = parser.append_classdef_events_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_events_block_type));
                  }
#line 5700 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 258: /* class_body1: class_body1 opt_sep enum_block  */
#line 1986 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_body_type) = parser.append_classdef_enum_block ((yyvsp[-2].tree_classdef_body_type), (yyvsp[0].tree_classdef_enum_block_type));
                  }
#line 5710 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 259: /* properties_block: properties_beg stash_comment opt_sep attr_list property_list END  */
#line 1995 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].punct_type));

                    octave::comment_list *lc = (yyvsp[-4].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_classdef_properties_block_type) = parser.make_classdef_properties_block
                           ((yyvsp[-5].tok_val), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_property_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_classdef_properties_block deleted $4,
                        // $5, LC, and TC.
                        YYABORT;
                      }
                  }
#line 5729 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 260: /* properties_beg: PROPERTIES  */
#line 2012 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                  }
#line 5738 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 261: /* property_list: %empty  */
#line 2019 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_property_list_type) = nullptr;
                  }
#line 5747 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 262: /* property_list: property_list1 opt_sep  */
#line 2024 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_property_list_type) = (yyvsp[-1].tree_classdef_property_list_type);
                  }
#line 5758 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 263: /* property_list1: class_property  */
#line 2034 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_property_list_type) = parser.make_classdef_property_list ((yyvsp[0].tree_classdef_property_type)); }
#line 5764 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 264: /* property_list1: property_list1 sep class_property  */
#line 2036 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    // We don't look ahead to grab end-of-line comments.
                    // Instead, they are grabbed when we see the
                    // identifier that becomes the next element in the
                    // list.  If the element at the end of the list
                    // doesn't have a doc string, see whether the
                    // element we are adding is stroing an end-of-line
                    // comment for us to use.

                    octave::tree_classdef_property *last_elt = (yyvsp[-2].tree_classdef_property_list_type)->back ();

                    if (! last_elt->have_doc_string ())
                      {
                        octave::comment_list *cl = (yyvsp[0].tree_classdef_property_type)->comments ();

                        if (cl)
                          {
                            octave::comment_elt elt = cl->front ();

                            if (elt.is_end_of_line ())
                              last_elt->doc_string (elt.text ());
                          }
                      }

                    (yyval.tree_classdef_property_list_type) = parser.append_classdef_property ((yyvsp[-2].tree_classdef_property_list_type), (yyvsp[0].tree_classdef_property_type));
                  }
#line 5797 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 265: /* class_property: stash_comment identifier arg_validation  */
#line 2067 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_property_type) = parser.make_classdef_property ((yyvsp[-2].comment_type), (yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_arg_validation_type)); }
#line 5803 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 266: /* methods_block: methods_beg stash_comment opt_sep attr_list methods_list END  */
#line 2071 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].punct_type));

                    octave::comment_list *lc = (yyvsp[-4].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_classdef_methods_block_type) = parser.make_classdef_methods_block
                           ((yyvsp[-5].tok_val), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_methods_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_classdef_methods_block deleted $4, $5,
                        // LC, and TC.
                        YYABORT;
                      }
                  }
#line 5822 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 267: /* methods_beg: METHODS  */
#line 2088 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                  }
#line 5831 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 268: /* method_decl1: identifier  */
#line 2095 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.octave_user_function_type) = parser.start_classdef_external_method ((yyvsp[0].tree_identifier_type), nullptr)))
                      YYABORT;
                  }
#line 5840 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 269: /* method_decl1: identifier param_list  */
#line 2100 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    if (! ((yyval.octave_user_function_type) = parser.start_classdef_external_method ((yyvsp[-1].tree_identifier_type), (yyvsp[0].tree_parameter_list_type))))
                      YYABORT;
                  }
#line 5849 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 270: /* method_decl: stash_comment method_decl1  */
#line 2107 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = parser.finish_classdef_external_method ((yyvsp[0].octave_user_function_type), nullptr, (yyvsp[-1].comment_type)); }
#line 5855 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 271: /* $@1: %empty  */
#line 2109 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    lexer.m_defining_fcn++;
                    lexer.m_parsed_function_name.push (false);
                  }
#line 5866 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 272: /* method_decl: stash_comment return_list '=' $@1 method_decl1  */
#line 2116 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_defining_fcn--;
                    lexer.m_parsed_function_name.pop ();

                    (yyval.tree_function_def_type) = parser.finish_classdef_external_method ((yyvsp[0].octave_user_function_type), (yyvsp[-3].tree_parameter_list_type), (yyvsp[-4].comment_type));
                  }
#line 5877 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 273: /* method: method_decl  */
#line 2125 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = (yyvsp[0].tree_function_def_type); }
#line 5883 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 274: /* method: function  */
#line 2127 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_function_def_type) = (yyvsp[0].tree_function_def_type); }
#line 5889 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 275: /* methods_list: %empty  */
#line 2131 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_methods_list_type) = nullptr;
                  }
#line 5898 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 276: /* methods_list: methods_list1 opt_sep  */
#line 2136 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_methods_list_type) = (yyvsp[-1].tree_classdef_methods_list_type);
                  }
#line 5909 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 277: /* methods_list1: method  */
#line 2145 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_methods_list_type) = parser.make_classdef_methods_list ((yyvsp[0].tree_function_def_type)); }
#line 5915 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 278: /* methods_list1: methods_list1 opt_sep method  */
#line 2147 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_methods_list_type) = parser.append_classdef_method ((yyvsp[-2].tree_classdef_methods_list_type), (yyvsp[0].tree_function_def_type));
                  }
#line 5925 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 279: /* events_block: events_beg stash_comment opt_sep attr_list events_list END  */
#line 2155 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].punct_type));

                    octave::comment_list *lc = (yyvsp[-4].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_classdef_events_block_type) = parser.make_classdef_events_block
                           ((yyvsp[-5].tok_val), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_events_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_classdef_events_block deleted $4, $5,
                        // LC, and TC.
                        YYABORT;
                      }
                  }
#line 5944 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 280: /* events_beg: EVENTS  */
#line 2172 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                  }
#line 5953 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 281: /* events_list: %empty  */
#line 2179 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_events_list_type) = nullptr;
                  }
#line 5962 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 282: /* events_list: events_list1 opt_sep  */
#line 2184 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_events_list_type) = (yyvsp[-1].tree_classdef_events_list_type);
                  }
#line 5973 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 283: /* events_list1: class_event  */
#line 2193 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_events_list_type) = parser.make_classdef_events_list ((yyvsp[0].tree_classdef_event_type)); }
#line 5979 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 284: /* events_list1: events_list1 opt_sep class_event  */
#line 2195 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_events_list_type) = parser.append_classdef_event ((yyvsp[-2].tree_classdef_events_list_type), (yyvsp[0].tree_classdef_event_type));
                  }
#line 5989 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 285: /* class_event: stash_comment identifier  */
#line 2203 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_event_type) = parser.make_classdef_event ((yyvsp[-1].comment_type), (yyvsp[0].tree_identifier_type)); }
#line 5995 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 286: /* enum_block: enumeration_beg stash_comment opt_sep attr_list enum_list END  */
#line 2207 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-3].punct_type));

                    octave::comment_list *lc = (yyvsp[-4].comment_type);
                    octave::comment_list *tc = lexer.get_comment ();

                    if (! ((yyval.tree_classdef_enum_block_type) = parser.make_classdef_enum_block
                           ((yyvsp[-5].tok_val), (yyvsp[-2].tree_classdef_attribute_list_type), (yyvsp[-1].tree_classdef_enum_list_type), (yyvsp[0].tok_val), lc, tc)))
                      {
                        // make_classdef_enum_block deleted $4, $5, LC,
                        // and TC.
                        YYABORT;
                      }
                  }
#line 6014 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 287: /* enumeration_beg: ENUMERATION  */
#line 2224 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = false;
                    (yyval.tok_val) = (yyvsp[0].tok_val);
                  }
#line 6023 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 288: /* enum_list: %empty  */
#line 2231 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_enum_list_type) = nullptr;
                  }
#line 6032 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 289: /* enum_list: enum_list1 opt_sep  */
#line 2236 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].punct_type));

                    lexer.m_classdef_element_names_are_keywords = true;
                    (yyval.tree_classdef_enum_list_type) = (yyvsp[-1].tree_classdef_enum_list_type);
                  }
#line 6043 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 290: /* enum_list1: class_enum  */
#line 2245 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.tree_classdef_enum_list_type) = parser.make_classdef_enum_list ((yyvsp[0].tree_classdef_enum_type)); }
#line 6049 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 291: /* enum_list1: enum_list1 opt_sep class_enum  */
#line 2247 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-1].punct_type));

                    (yyval.tree_classdef_enum_list_type) = parser.append_classdef_enum ((yyvsp[-2].tree_classdef_enum_list_type), (yyvsp[0].tree_classdef_enum_type));
                  }
#line 6059 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 292: /* class_enum: stash_comment identifier '(' expression ')'  */
#line 2255 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[-2].tok_val), (yyvsp[0].tok_val));

                    (yyval.tree_classdef_enum_type) = parser.make_classdef_enum ((yyvsp[-3].tree_identifier_type), (yyvsp[-1].tree_expression_type), (yyvsp[-4].comment_type));
                  }
#line 6069 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 293: /* stmt_begin: %empty  */
#line 2267 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    lexer.m_at_beginning_of_statement = true;
                  }
#line 6078 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 294: /* anon_fcn_begin: %empty  */
#line 2274 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    lexer.m_at_beginning_of_statement = true;
                    lexer.m_parsing_anon_fcn_body = true;
                  }
#line 6088 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 295: /* stash_comment: %empty  */
#line 2282 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.comment_type) = lexer.get_comment (); }
#line 6094 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 296: /* parse_error: LEXICAL_ERROR  */
#line 2286 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    (yyval.dummy_type) = 0;
                    std::string msg = (yyvsp[0].tok_val)->text ();
                    parser.bison_error (msg.c_str ());
                  }
#line 6104 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 297: /* parse_error: error  */
#line 2292 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.dummy_type) = 0; }
#line 6110 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 298: /* sep_no_nl: ','  */
#line 2296 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = ',';
                  }
#line 6120 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 299: /* sep_no_nl: ';'  */
#line 2302 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = ';';
                  }
#line 6130 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 300: /* sep_no_nl: sep_no_nl ','  */
#line 2308 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6140 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 301: /* sep_no_nl: sep_no_nl ';'  */
#line 2314 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6150 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 302: /* opt_sep_no_nl: %empty  */
#line 2322 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = 0; }
#line 6156 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 303: /* opt_sep_no_nl: sep_no_nl  */
#line 2324 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = (yyvsp[0].punct_type); }
#line 6162 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 304: /* opt_nl: %empty  */
#line 2328 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = 0; }
#line 6168 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 305: /* opt_nl: nl  */
#line 2330 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = (yyvsp[0].punct_type); }
#line 6174 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 306: /* nl: '\n'  */
#line 2334 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = '\n';
                  }
#line 6184 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 307: /* nl: nl '\n'  */
#line 2340 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6194 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 308: /* sep: ','  */
#line 2348 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = ',';
                  }
#line 6204 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 309: /* sep: ';'  */
#line 2354 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = ';';
                  }
#line 6214 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 310: /* sep: '\n'  */
#line 2360 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = '\n';
                  }
#line 6224 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 311: /* sep: sep ','  */
#line 2366 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6234 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 312: /* sep: sep ';'  */
#line 2372 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6244 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 313: /* sep: sep '\n'  */
#line 2378 "../libinterp/parse-tree/oct-parse.yy"
                  {
                    OCTAVE_YYUSE ((yyvsp[0].tok_val));

                    (yyval.punct_type) = (yyvsp[-1].punct_type);
                  }
#line 6254 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 314: /* opt_sep: %empty  */
#line 2386 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = 0; }
#line 6260 "libinterp/parse-tree/oct-parse.cc"
    break;

  case 315: /* opt_sep: sep  */
#line 2388 "../libinterp/parse-tree/oct-parse.yy"
                  { (yyval.punct_type) = (yyvsp[0].punct_type); }
#line 6266 "libinterp/parse-tree/oct-parse.cc"
    break;


#line 6270 "libinterp/parse-tree/oct-parse.cc"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == OCTAVE_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (parser, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= OCTAVE_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == OCTAVE_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, parser);
          yychar = OCTAVE_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, parser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != OCTAVE_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, parser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, parser);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef octave_nerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yystacksize
#line 2391 "../libinterp/parse-tree/oct-parse.yy"


#if defined (HAVE_PRAGMA_GCC_DIAGNOSTIC)
   // Restore prevailing warning state for remainder of the file.
#  pragma GCC diagnostic pop
#endif

// Generic error messages.

#undef lexer
#undef scanner

static void
yyerror (octave::base_parser& parser, const char *s)
{
  parser.bison_error (s);
}

OCTAVE_BEGIN_NAMESPACE(octave)

  class parse_exception : public std::runtime_error
  {
  public:

    parse_exception (const std::string& message,
                     const std::string& fcn_name = "",
                     const std::string& file_name = "",
                     int line = -1, int column = -1)
      : runtime_error (message), m_message (message),
        m_fcn_name (fcn_name), m_file_name (file_name),
        m_line (line), m_column (column)
    { }

    parse_exception (const parse_exception&) = default;

    parse_exception& operator = (const parse_exception&) = default;

    ~parse_exception (void) = default;

    std::string message (void) const { return m_message; }

    // Provided for std::exception interface.
    const char * what (void) const noexcept { return m_message.c_str (); }

    std::string fcn_name (void) const { return m_fcn_name; }
    std::string file_name (void) const { return m_file_name; }

    int line (void) const { return m_line; }
    int column (void) const { return m_column; }

    // virtual void display (std::ostream& os) const;

  private:

    std::string m_message;

    std::string m_fcn_name;
    std::string m_file_name;
    int m_line;
    int m_column;
  };

  class parse_tree_validator : public tree_walker
  {
  public:

    parse_tree_validator (void)
      : m_scope (), m_error_list ()
    { }

    parse_tree_validator (const parse_tree_validator&) = delete;

    parse_tree_validator& operator = (const parse_tree_validator&) = delete;

    ~parse_tree_validator (void) = default;

    symbol_scope get_scope (void) const { return m_scope; }

    bool ok (void) const { return m_error_list.empty (); }

    std::list<parse_exception> error_list (void) const
    {
      return m_error_list;
    }

    void visit_octave_user_script (octave_user_script& script)
    {
      unwind_protect_var<symbol_scope> restore_var (m_scope, script.scope ());

      tree_statement_list *stmt_list = script.body ();

      if (stmt_list)
        stmt_list->accept (*this);
    }

    void visit_octave_user_function (octave_user_function& fcn)
    {
      unwind_protect_var<symbol_scope> restore_var (m_scope, fcn.scope ());

      tree_statement_list *stmt_list = fcn.body ();

      if (stmt_list)
        stmt_list->accept (*this);

      std::map<std::string, octave_value> subfcns = fcn.subfunctions ();

      if (! subfcns.empty ())
        {
          for (auto& nm_val : subfcns)
            {
              octave_user_function *subfcn
                = nm_val.second.user_function_value ();

              if (subfcn)
                subfcn->accept (*this);
            }
        }
    }

    void visit_index_expression (tree_index_expression& idx_expr)
    {
      if (idx_expr.is_word_list_cmd ())
        {
          std::string sym_nm = idx_expr.name ();

          if (m_scope.is_variable (sym_nm))
            {
              std::string message
                = sym_nm + ": invalid use of symbol as both variable and command";
              parse_exception pe (message, m_scope.fcn_name (),
                                  m_scope.fcn_file_name (),
                                  idx_expr.line (), idx_expr.column ());

              m_error_list.push_back (pe);
            }
        }
    }

  private:

    symbol_scope m_scope;

    std::list<parse_exception> m_error_list;
  };

  template <typename LIST_T, typename ELT_T>
  static LIST_T *
  list_append (LIST_T *list, ELT_T elt)
  {
    list->append (elt);
    return list;
  }

  std::size_t
  base_parser::parent_scope_info::size (void) const
  {
    return m_info.size ();
  }

  void
  base_parser::parent_scope_info::push (const value_type& elt)
  {
    m_info.push_back (elt);
  }

  void
  base_parser::parent_scope_info::push (const symbol_scope& scope)
  {
    push (value_type (scope, ""));
  }

  void
  base_parser::parent_scope_info::pop (void)
  {
    m_info.pop_back ();
  }

  bool
  base_parser::parent_scope_info::name_ok (const std::string& name)
  {
    // Name can't be the same as any parent function or any other
    // function we've already seen.  We could maintain a complex
    // tree structure of names, or we can just store the set of
    // full names of all the functions, which must be unique.

    std::string full_name;

    for (std::size_t i = 0; i < size()-1; i++)
      {
        const value_type& elt = m_info[i];

        if (name == elt.second)
          return false;

        full_name += elt.second + ">";
      }

    full_name += name;

    if (m_all_names.find (full_name) != m_all_names.end ())
      {
        // Return false (failure) if we are parsing a subfunction, local
        // function, or nested function.  Otherwise, it is OK to have a
        // duplicate name.

        return ! (m_parser.parsing_subfunctions ()
                  || m_parser.parsing_local_functions ()
                  || m_parser.curr_fcn_depth () > 0);
      }

    m_all_names.insert (full_name);

    return true;
  }

  bool
  base_parser::parent_scope_info::name_current_scope (const std::string& name)
  {
    if (! name_ok (name))
      return false;

    if (size () > 0)
      m_info.back().second = name;

    return true;
  }

  symbol_scope
  base_parser::parent_scope_info::parent_scope (void) const
  {
    return size () > 1 ? m_info[size()-2].first : symbol_scope ();
  }

  std::string
  base_parser::parent_scope_info::parent_name (void) const
  {
    return m_info[size()-2].second;
  }

  void base_parser::parent_scope_info::clear (void)
  {
    m_info.clear ();
    m_all_names.clear ();
  }

  base_parser::base_parser (base_lexer& lxr)
    : m_endfunction_found (false), m_autoloading (false),
      m_fcn_file_from_relative_lookup (false),
      m_parsing_subfunctions (false), m_parsing_local_functions (false),
      m_max_fcn_depth (-1), m_curr_fcn_depth (-1), m_primary_fcn_scope (),
      m_curr_class_name (), m_curr_package_name (), m_function_scopes (*this),
      m_primary_fcn (), m_subfunction_names (), m_classdef_object (),
      m_stmt_list (), m_lexer (lxr), m_parser_state (yypstate_new ())
  { }

  base_parser::~base_parser (void)
  {
    delete &m_lexer;

    // FIXME: Deleting the internal Bison parser state structure does
    // not clean up any partial parse trees in the event of an interrupt or
    // error.  It's not clear how to safely do that with the C language
    // parser that Bison generates.  The C++ language parser that Bison
    // generates would do it for us automatically whenever an exception
    // is thrown while parsing input, but there is currently no C++
    // interface for a push parser.

    yypstate_delete (static_cast<yypstate *> (m_parser_state));
  }

  void
  base_parser::reset (void)
  {
    m_endfunction_found = false;
    m_autoloading = false;
    m_fcn_file_from_relative_lookup = false;
    m_parsing_subfunctions = false;
    m_parsing_local_functions = false;
    m_max_fcn_depth = -1;
    m_curr_fcn_depth = -1;
    m_primary_fcn_scope = symbol_scope ();
    m_curr_class_name = "";
    m_curr_package_name = "";
    m_function_scopes.clear ();
    m_primary_fcn = octave_value ();
    m_subfunction_names.clear ();
    m_classdef_object.reset ();
    m_stmt_list.reset ();

    m_lexer.reset ();

    yypstate_delete (static_cast<yypstate *> (m_parser_state));
    m_parser_state = yypstate_new ();
  }

  // Error messages for mismatched end tokens.

  static std::string
  end_token_as_string (token::end_tok_type ettype)
  {
    std::string retval = "<unknown>";

    switch (ettype)
      {
      case token::simple_end:
        retval = "end";
        break;

      case token::classdef_end:
        retval = "endclassdef";
        break;

      case token::enumeration_end:
        retval = "endenumeration";
        break;

      case token::events_end:
        retval = "endevents";
        break;

      case token::for_end:
        retval = "endfor";
        break;

      case token::function_end:
        retval = "endfunction";
        break;

      case token::if_end:
        retval = "endif";
        break;

      case token::methods_end:
        retval = "endmethods";
        break;

      case token::parfor_end:
        retval = "endparfor";
        break;

      case token::properties_end:
        retval = "endproperties";
        break;

      case token::spmd_end:
        retval = "endspmd";
        break;

      case token::switch_end:
        retval = "endswitch";
        break;

      case token::try_catch_end:
        retval = "end_try_catch";
        break;

      case token::unwind_protect_end:
        retval = "end_unwind_protect";
        break;

      case token::while_end:
        retval = "endwhile";
        break;

      default:
        panic_impossible ();
        break;
      }

    return retval;
  }

  void
  base_parser::statement_list (std::shared_ptr<tree_statement_list>& lst)
  {
    if (! lst)
      return;

    if (m_stmt_list)
      {
        // Append additional code to existing statement list.

        while (! lst->empty ())
          {
            m_stmt_list->push_back (lst->front ());
            lst->pop_front ();
          }
      }
    else
      m_stmt_list = lst;
  }

  void
  base_parser::end_token_error (token *tok, token::end_tok_type expected)
  {
    std::string msg = ("'" + end_token_as_string (expected)
                       + "' command matched by '"
                       + end_token_as_string (tok->ettype ()) + "'");

    bison_error (msg, tok->beg_pos ());
  }

  // Check to see that end tokens are properly matched.

  bool
  base_parser::end_token_ok (token *tok, token::end_tok_type expected)
  {
    token::end_tok_type ettype = tok->ettype ();

    return ettype == expected || ettype == token::simple_end;
  }

  bool
  base_parser::push_fcn_symtab (void)
  {
    m_curr_fcn_depth++;

    if (m_max_fcn_depth < m_curr_fcn_depth)
      m_max_fcn_depth = m_curr_fcn_depth;

    // Will get a real name later.
    m_lexer.m_symtab_context.push (symbol_scope ("parser:push_fcn_symtab"));
    m_function_scopes.push (m_lexer.m_symtab_context.curr_scope ());

    if (! m_lexer.m_reading_script_file && m_curr_fcn_depth == 0
        && ! m_parsing_subfunctions)
        {
          m_primary_fcn_scope = m_lexer.m_symtab_context.curr_scope ();
          m_primary_fcn_scope.mark_primary_fcn_scope ();
        }

    if (m_lexer.m_reading_script_file && m_curr_fcn_depth > 0)
      {
        bison_error ("nested functions not implemented in this context");

        return false;
      }

    return true;
  }

  // Make a constant.

  tree_constant *
  base_parser::make_constant (token *tok_val)
  {
    int l = tok_val->line ();
    int c = tok_val->column ();

    int op = tok_val->token_value ();

    tree_constant *retval = nullptr;

    switch (op)
      {
      case ':':
        {
          octave_value tmp (octave_value::magic_colon_t);
          retval = new tree_constant (tmp);
        }
        break;

      case NUMBER:
        {
          retval = new tree_constant (tok_val->number (), l, c);
          retval->stash_original_text (tok_val->text_rep ());
        }
        break;

      case DQ_STRING:
      case SQ_STRING:
        {
          std::string txt = tok_val->text ();

          char delim = op == DQ_STRING ? '"' : '\'';
          octave_value tmp (txt, delim);

          if (txt.empty ())
            {
              if (op == DQ_STRING)
                tmp = octave_null_str::instance;
              else
                tmp = octave_null_sq_str::instance;
            }

          retval = new tree_constant (tmp, l, c);

          if (op == DQ_STRING)
            txt = undo_string_escapes (txt);

          // FIXME: maybe this should also be handled by
          // tok_val->text_rep () for character strings?
          retval->stash_original_text (delim + txt + delim);
        }
        break;

      default:
        panic_impossible ();
        break;
      }

    return retval;
  }

  tree_black_hole *
  base_parser::make_black_hole (void)
  {
    return new tree_black_hole ();
  }

  // Make a function handle.

  tree_fcn_handle *
  base_parser::make_fcn_handle (token *tok_val)
  {
    int l = tok_val->line ();
    int c = tok_val->column ();

    tree_fcn_handle *retval = new tree_fcn_handle (tok_val->text (), l, c);

    return retval;
  }

  // Make an anonymous function handle.

  tree_anon_fcn_handle *
  base_parser::make_anon_fcn_handle (tree_parameter_list *param_list,
                                     tree_expression *expr,
                                     const filepos& at_pos)
  {
    // FIXME: We need to examine EXPR and issue an error if any
    // sub-expression contains an assignment, compound assignment,
    // increment, or decrement operator.

    anon_fcn_validator validator (param_list, expr);

    if (! validator.ok ())
      {
        delete param_list;
        delete expr;

        bison_error (validator.message (), validator.line (),
                     validator.column ());

        return nullptr;
      }

    symbol_scope fcn_scope = m_lexer.m_symtab_context.curr_scope ();
    symbol_scope parent_scope = m_lexer.m_symtab_context.parent_scope ();

    m_lexer.m_symtab_context.pop ();

    expr->set_print_flag (false);

    fcn_scope.mark_static ();

    int at_line = at_pos.line ();
    int at_column = at_pos.column ();

    tree_anon_fcn_handle *retval
      = new tree_anon_fcn_handle (param_list, expr, fcn_scope,
                                  parent_scope, at_line, at_column);

    std::ostringstream buf;

    tree_print_code tpc (buf);

    retval->accept (tpc);

    std::string file = m_lexer.m_fcn_file_full_name;
    if (! file.empty ())
      buf << ": file: " << file;
    else if (m_lexer.input_from_terminal ())
      buf << ": *terminal input*";
    else if (m_lexer.input_from_eval_string ())
      buf << ": *eval string*";
    buf << ": line: " << at_line << " column: " << at_column;

    std::string scope_name = buf.str ();

    fcn_scope.cache_name (scope_name);

    // FIXME: Stash the filename.  This does not work and produces
    // errors when executed.
    //retval->stash_file_name (m_lexer.m_fcn_file_name);

    return retval;
  }

  // Build a colon expression.

  tree_expression *
  base_parser::make_colon_expression (tree_expression *base,
                                      tree_expression *limit,
                                      tree_expression *incr)
  {
    tree_expression *retval = nullptr;

    if (! base || ! limit)
      {
        delete base;
        delete limit;
        delete incr;

        return retval;
      }

    int l = base->line ();
    int c = base->column ();

    tree_colon_expression *expr
      = new tree_colon_expression (base, limit, incr, l, c);

    retval = expr;

    if (base->is_constant () && limit->is_constant ()
        && (! incr || incr->is_constant ()))
      {
        interpreter& interp = __get_interpreter__ ();

        try
          {
            // If the evaluation generates a warning message, restore
            // the previous value of last_warning_message and skip the
            // conversion to a constant value.

            error_system& es = interp.get_error_system ();

            unwind_action restore_last_warning_message
              (&error_system::set_last_warning_message, &es,
               es.last_warning_message (""));

            unwind_action restore_discard_warning_messages
              (&error_system::set_discard_warning_messages, &es,
               es.discard_warning_messages (true));

            tree_evaluator& tw = interp.get_evaluator ();

            octave_value tmp = expr->evaluate (tw);

            std::string msg = es.last_warning_message ();

            if (msg.empty ())
              {
                tree_constant *tc_retval
                  = new tree_constant (tmp, expr->line (), expr->column ());

                std::ostringstream buf;

                tree_print_code tpc (buf);

                expr->accept (tpc);

                tc_retval->stash_original_text (buf.str ());

                delete expr;

                retval = tc_retval;
              }
          }
        catch (const execution_exception&)
          {
            interp.recover_from_exception ();
          }
      }

    return retval;
  }

  // Build a binary expression.

  tree_expression *
  base_parser::make_binary_op (int op, tree_expression *op1,
                               token *tok_val, tree_expression *op2)
  {
    octave_value::binary_op t = octave_value::unknown_binary_op;

    switch (op)
      {
      case POW:
        t = octave_value::op_pow;
        break;

      case EPOW:
        t = octave_value::op_el_pow;
        break;

      case '+':
        t = octave_value::op_add;
        break;

      case '-':
        t = octave_value::op_sub;
        break;

      case '*':
        t = octave_value::op_mul;
        break;

      case '/':
        t = octave_value::op_div;
        break;

      case EMUL:
        t = octave_value::op_el_mul;
        break;

      case EDIV:
        t = octave_value::op_el_div;
        break;

      case LEFTDIV:
        t = octave_value::op_ldiv;
        break;

      case ELEFTDIV:
        t = octave_value::op_el_ldiv;
        break;

      case EXPR_LT:
        t = octave_value::op_lt;
        break;

      case EXPR_LE:
        t = octave_value::op_le;
        break;

      case EXPR_EQ:
        t = octave_value::op_eq;
        break;

      case EXPR_GE:
        t = octave_value::op_ge;
        break;

      case EXPR_GT:
        t = octave_value::op_gt;
        break;

      case EXPR_NE:
        t = octave_value::op_ne;
        break;

      case EXPR_AND:
        t = octave_value::op_el_and;
        break;

      case EXPR_OR:
        t = octave_value::op_el_or;
        break;

      default:
        panic_impossible ();
        break;
      }

    int l = tok_val->line ();
    int c = tok_val->column ();

    return maybe_compound_binary_expression (op1, op2, l, c, t);
  }

  void
  base_parser::maybe_convert_to_braindead_shortcircuit (tree_expression*& expr)
  {
    if (expr->is_binary_expression ())
      {
        tree_binary_expression *binexp
          = dynamic_cast<tree_binary_expression *> (expr);

        tree_expression *lhs = binexp->lhs ();
        tree_expression *rhs = binexp->rhs ();

        maybe_convert_to_braindead_shortcircuit (lhs);
        maybe_convert_to_braindead_shortcircuit (rhs);

        // Operands may have changed.
        binexp->lhs (lhs);
        binexp->rhs (rhs);

        octave_value::binary_op op_type = binexp->op_type ();
        if (op_type == octave_value::op_el_and
            || op_type == octave_value::op_el_or)
          {
            binexp->preserve_operands ();

            int line = expr->line ();
            int column = expr->column ();

            delete expr;

            expr = new tree_braindead_shortcircuit_binary_expression
              (lhs, rhs, line, column, op_type);
          }
      }
  }

  // Build a boolean expression.

  tree_expression *
  base_parser::make_boolean_op (int op, tree_expression *op1,
                                token *tok_val, tree_expression *op2)
  {
    tree_boolean_expression::type t;

    switch (op)
      {
      case EXPR_AND_AND:
        t = tree_boolean_expression::bool_and;
        break;

      case EXPR_OR_OR:
        t = tree_boolean_expression::bool_or;
        break;

      default:
        panic_impossible ();
        break;
      }

    int l = tok_val->line ();
    int c = tok_val->column ();

    return new tree_boolean_expression (op1, op2, l, c, t);
  }

  // Build a prefix expression.

  tree_expression *
  base_parser::make_prefix_op (int op, tree_expression *op1, token *tok_val)
  {
    octave_value::unary_op t = octave_value::unknown_unary_op;

    switch (op)
      {
      case '~':
      case '!':
        t = octave_value::op_not;
        break;

      case '+':
        t = octave_value::op_uplus;
        break;

      case '-':
        t = octave_value::op_uminus;
        break;

      case PLUS_PLUS:
        t = octave_value::op_incr;
        break;

      case MINUS_MINUS:
        t = octave_value::op_decr;
        break;

      default:
        panic_impossible ();
        break;
      }

    int l = tok_val->line ();
    int c = tok_val->column ();

    return new tree_prefix_expression (op1, l, c, t);
  }

  // Build a postfix expression.

  tree_expression *
  base_parser::make_postfix_op (int op, tree_expression *op1, token *tok_val)
  {
    octave_value::unary_op t = octave_value::unknown_unary_op;

    switch (op)
      {
      case HERMITIAN:
        t = octave_value::op_hermitian;
        break;

      case TRANSPOSE:
        t = octave_value::op_transpose;
        break;

      case PLUS_PLUS:
        t = octave_value::op_incr;
        break;

      case MINUS_MINUS:
        t = octave_value::op_decr;
        break;

      default:
        panic_impossible ();
        break;
      }

    int l = tok_val->line ();
    int c = tok_val->column ();

    return new tree_postfix_expression (op1, l, c, t);
  }

  // Build an unwind-protect command.

  tree_command *
  base_parser::make_unwind_command (token *unwind_tok,
                                    tree_statement_list *body,
                                    tree_statement_list *cleanup_stmts,
                                    token *end_tok,
                                    comment_list *lc,
                                    comment_list *mc)
  {
    tree_command *retval = nullptr;

    if (end_token_ok (end_tok, token::unwind_protect_end))
      {
        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        int l = unwind_tok->line ();
        int c = unwind_tok->column ();

        retval = new tree_unwind_protect_command (body, cleanup_stmts,
                                                  lc, mc, tc, l, c);
      }
    else
      {
        delete body;
        delete cleanup_stmts;

        end_token_error (end_tok, token::unwind_protect_end);
      }

    return retval;
  }

  // Build a try-catch command.

  tree_command *
  base_parser::make_try_command (token *try_tok,
                                 tree_statement_list *body,
                                 char catch_sep,
                                 tree_statement_list *cleanup_stmts,
                                 token *end_tok,
                                 comment_list *lc,
                                 comment_list *mc)
  {
    tree_command *retval = nullptr;

    if (end_token_ok (end_tok, token::try_catch_end))
      {
        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        int l = try_tok->line ();
        int c = try_tok->column ();

        tree_identifier *id = nullptr;

        if (! catch_sep && cleanup_stmts && ! cleanup_stmts->empty ())
          {
            tree_statement *stmt = cleanup_stmts->front ();

            if (stmt)
              {
                tree_expression *expr = stmt->expression ();

                if (expr && expr->is_identifier ())
                  {
                    id = dynamic_cast<tree_identifier *> (expr);

                    cleanup_stmts->pop_front ();

                    stmt->set_expression (nullptr);
                    delete stmt;
                  }
              }
          }

        retval = new tree_try_catch_command (body, cleanup_stmts, id,
                                             lc, mc, tc, l, c);
      }
    else
      {
        delete body;
        delete cleanup_stmts;

        end_token_error (end_tok, token::try_catch_end);
      }

    return retval;
  }

  // Build a while command.

  tree_command *
  base_parser::make_while_command (token *while_tok,
                                   tree_expression *expr,
                                   tree_statement_list *body,
                                   token *end_tok,
                                   comment_list *lc)
  {
    tree_command *retval = nullptr;

    maybe_warn_assign_as_truth_value (expr);

    if (end_token_ok (end_tok, token::while_end))
      {
        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        m_lexer.m_looping--;

        int l = while_tok->line ();
        int c = while_tok->column ();

        retval = new tree_while_command (expr, body, lc, tc, l, c);
      }
    else
      {
        delete expr;
        delete body;

        end_token_error (end_tok, token::while_end);
      }

    return retval;
  }

  // Build a do-until command.

  tree_command *
  base_parser::make_do_until_command (token *until_tok,
                                      tree_statement_list *body,
                                      tree_expression *expr,
                                      comment_list *lc)
  {
    maybe_warn_assign_as_truth_value (expr);

    comment_list *tc = m_lexer.m_comment_buf.get_comment ();

    m_lexer.m_looping--;

    int l = until_tok->line ();
    int c = until_tok->column ();

    return new tree_do_until_command (expr, body, lc, tc, l, c);
  }

  // Build a for command.

  tree_command *
  base_parser::make_for_command (int tok_id, token *for_tok,
                                 tree_argument_list *lhs,
                                 tree_expression *expr,
                                 tree_expression *maxproc,
                                 tree_statement_list *body,
                                 token *end_tok,
                                 comment_list *lc)
  {
    tree_command *retval = nullptr;

    bool parfor = tok_id == PARFOR;

    if (end_token_ok (end_tok, parfor ? token::parfor_end : token::for_end))
      {
        expr->mark_as_for_cmd_expr ();

        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        m_lexer.m_looping--;

        int l = for_tok->line ();
        int c = for_tok->column ();

        if (lhs->length () == 1)
          {
            tree_expression *tmp = lhs->remove_front ();

            m_lexer.mark_as_variable (tmp->name ());

            retval = new tree_simple_for_command (parfor, tmp, expr, maxproc,
                                                  body, lc, tc, l, c);

            delete lhs;
          }
        else
          {
            if (parfor)
              {
                delete lhs;
                delete expr;
                delete maxproc;
                delete body;

                bison_error ("invalid syntax for parfor statement");
              }

            m_lexer.mark_as_variables (lhs->variable_names ());

            retval = new tree_complex_for_command (lhs, expr, body,
                                                   lc, tc, l, c);
          }
      }
    else
      {
        delete lhs;
        delete expr;
        delete maxproc;
        delete body;

        end_token_error (end_tok, parfor ? token::parfor_end : token::for_end);
      }

    return retval;
  }

  // Build a break command.

  tree_command *
  base_parser::make_break_command (token *break_tok)
  {
    int l = break_tok->line ();
    int c = break_tok->column ();

    if (! m_lexer.m_looping)
      {
        bison_error ("break must appear within a loop");
        return nullptr;
      }
    else
      return new tree_break_command (l, c);
  }

  // Build a continue command.

  tree_command *
  base_parser::make_continue_command (token *continue_tok)
  {
    int l = continue_tok->line ();
    int c = continue_tok->column ();

    if (! m_lexer.m_looping)
      {
        bison_error ("continue must appear within a loop");
        return nullptr;
      }
    else
      return new tree_continue_command (l, c);
  }

  // Build a return command.

  tree_command *
  base_parser::make_return_command (token *return_tok)
  {
    int l = return_tok->line ();
    int c = return_tok->column ();

    return new tree_return_command (l, c);
  }

  // Build an spmd command.

  tree_spmd_command *
  base_parser::make_spmd_command (token *spmd_tok, tree_statement_list *body,
                                  token *end_tok, comment_list *lc,
                                  comment_list *tc)
  {
    tree_spmd_command *retval = nullptr;

    if (end_token_ok (end_tok, token::spmd_end))
      {
        int l = spmd_tok->line ();
        int c = spmd_tok->column ();

        retval = new tree_spmd_command (body, lc, tc, l, c);
      }
    else
      {
        delete body;
        delete lc;
        delete tc;

        end_token_error (end_tok, token::spmd_end);
      }

    return retval;
  }

  // Start an if command.

  tree_if_command_list *
  base_parser::start_if_command (tree_expression *expr,
                                 tree_statement_list *list)
  {
    maybe_warn_assign_as_truth_value (expr);

    // Line and column will be set in finish_if_command.

    tree_if_clause *t = new tree_if_clause (expr, list);

    return new tree_if_command_list (t);
  }

  // Finish an if command.

  tree_if_command *
  base_parser::finish_if_command (token *if_tok,
                                  tree_if_command_list *list,
                                  token *end_tok,
                                  comment_list *lc)
  {
    tree_if_command *retval = nullptr;

    if (end_token_ok (end_tok, token::if_end))
      {
        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        int l = if_tok->line ();
        int c = if_tok->column ();

        if (list && ! list->empty ())
          {
            tree_if_clause *elt = list->front ();

            if (elt)
              {
                elt->line (l);
                elt->column (c);
              }
          }

        retval = new tree_if_command (list, lc, tc, l, c);
      }
    else
      {
        delete list;

        end_token_error (end_tok, token::if_end);
      }

    return retval;
  }

  // Build an elseif clause.

  tree_if_clause *
  base_parser::make_elseif_clause (token *elseif_tok,
                                   tree_expression *expr,
                                   tree_statement_list *list,
                                   comment_list *lc)
  {
    maybe_warn_assign_as_truth_value (expr);

    int l = elseif_tok->line ();
    int c = elseif_tok->column ();

    return new tree_if_clause (expr, list, lc, l, c);
  }

  tree_if_clause *
  base_parser::make_else_clause (token *else_tok, comment_list *lc,
                                 tree_statement_list *list)
  {
    int l = else_tok->line ();
    int c = else_tok->column ();

    return new tree_if_clause (list, lc, l, c);
  }

  tree_if_command_list *
  base_parser::append_if_clause (tree_if_command_list *list,
                                 tree_if_clause *clause)
  {
    return list_append (list, clause);
  }

  // Finish a switch command.

  tree_switch_command *
  base_parser::finish_switch_command (token *switch_tok,
                                      tree_expression *expr,
                                      tree_switch_case_list *list,
                                      token *end_tok,
                                      comment_list *lc)
  {
    tree_switch_command *retval = nullptr;

    if (end_token_ok (end_tok, token::switch_end))
      {
        comment_list *tc = m_lexer.m_comment_buf.get_comment ();

        int l = switch_tok->line ();
        int c = switch_tok->column ();

        if (list && ! list->empty ())
          {
            tree_switch_case *elt = list->front ();

            if (elt)
              {
                elt->line (l);
                elt->column (c);
              }
          }

        retval = new tree_switch_command (expr, list, lc, tc, l, c);
      }
    else
      {
        delete expr;
        delete list;

        end_token_error (end_tok, token::switch_end);
      }

    return retval;
  }

  tree_switch_case_list *
  base_parser::make_switch_case_list (tree_switch_case *switch_case)
  {
    return new tree_switch_case_list (switch_case);
  }

  // Build a switch case.

  tree_switch_case *
  base_parser::make_switch_case (token *case_tok,
                                 tree_expression *expr,
                                 tree_statement_list *list,
                                 comment_list *lc)
  {
    maybe_warn_variable_switch_label (expr);

    int l = case_tok->line ();
    int c = case_tok->column ();

    return new tree_switch_case (expr, list, lc, l, c);
  }

  tree_switch_case *
  base_parser::make_default_switch_case (token *default_tok, comment_list *lc,
                                         tree_statement_list *list)
  {
    int l = default_tok->line ();
    int c = default_tok->column ();

    return new tree_switch_case (list, lc, l, c);
  }

  tree_switch_case_list *
  base_parser::append_switch_case (tree_switch_case_list *list,
                                   tree_switch_case *elt)
  {
    return list_append (list, elt);
  }

  // Build an assignment to a variable.

  tree_expression *
  base_parser::make_assign_op (int op, tree_argument_list *lhs,
                               token *eq_tok, tree_expression *rhs)
  {
    octave_value::assign_op t = octave_value::unknown_assign_op;

    switch (op)
      {
      case '=':
        t = octave_value::op_asn_eq;
        break;

      case ADD_EQ:
        t = octave_value::op_add_eq;
        break;

      case SUB_EQ:
        t = octave_value::op_sub_eq;
        break;

      case MUL_EQ:
        t = octave_value::op_mul_eq;
        break;

      case DIV_EQ:
        t = octave_value::op_div_eq;
        break;

      case LEFTDIV_EQ:
        t = octave_value::op_ldiv_eq;
        break;

      case POW_EQ:
        t = octave_value::op_pow_eq;
        break;

      case EMUL_EQ:
        t = octave_value::op_el_mul_eq;
        break;

      case EDIV_EQ:
        t = octave_value::op_el_div_eq;
        break;

      case ELEFTDIV_EQ:
        t = octave_value::op_el_ldiv_eq;
        break;

      case EPOW_EQ:
        t = octave_value::op_el_pow_eq;
        break;

      case AND_EQ:
        t = octave_value::op_el_and_eq;
        break;

      case OR_EQ:
        t = octave_value::op_el_or_eq;
        break;

      default:
        panic_impossible ();
        break;
      }

    int l = eq_tok->line ();
    int c = eq_tok->column ();

    if (! lhs->is_simple_assign_lhs () && t != octave_value::op_asn_eq)
      {
        // Multiple assignments like [x,y] OP= rhs are only valid for
        // '=', not '+=', etc.

        delete lhs;
        delete rhs;

        bison_error ("computed multiple assignment not allowed",
                     eq_tok->beg_pos ());

        return nullptr;
      }

    if (lhs->is_simple_assign_lhs ())
      {
        // We are looking at a simple assignment statement like x = rhs;

        tree_expression *tmp = lhs->remove_front ();

        if ((tmp->is_identifier () || tmp->is_index_expression ())
            && iskeyword (tmp->name ()))
          {
            std::string kw = tmp->name ();

            delete tmp;
            delete lhs;
            delete rhs;

            bison_error ("invalid assignment to keyword \"" + kw + "\"",
                         eq_tok->beg_pos ());

            return nullptr;
          }

        delete lhs;

        m_lexer.mark_as_variable (tmp->name ());

        return new tree_simple_assignment (tmp, rhs, false, l, c, t);
      }
    else
      {
        std::list<std::string> names = lhs->variable_names ();

        for (const auto& kw : names)
          {
            if (iskeyword (kw))
              {
                delete lhs;
                delete rhs;

                bison_error ("invalid assignment to keyword \"" + kw + "\"",
                             eq_tok->beg_pos ());

                return nullptr;
              }
          }

        m_lexer.mark_as_variables (names);

        return new tree_multi_assignment (lhs, rhs, false, l, c);
      }
  }

  void
  base_parser::make_script (tree_statement_list *cmds,
                            tree_statement *end_script)
  {
    if (! cmds)
      cmds = new tree_statement_list ();

    cmds->append (end_script);

    symbol_scope script_scope = m_lexer.m_symtab_context.curr_scope ();

    script_scope.cache_name (m_lexer.m_fcn_file_full_name);
    script_scope.cache_fcn_file_name (m_lexer.m_fcn_file_full_name);
    script_scope.cache_dir_name (m_lexer.m_dir_name);

    octave_user_script *script
      = new octave_user_script (m_lexer.m_fcn_file_full_name,
                                m_lexer.m_fcn_file_name, script_scope,
                                cmds, m_lexer.m_help_text);

    m_lexer.m_symtab_context.pop ();
    m_lexer.m_help_text = "";

    sys::time now;

    script->stash_fcn_file_time (now);
    script->stash_dir_name (m_lexer.m_dir_name);

    m_primary_fcn = octave_value (script);
  }

  tree_identifier *
  base_parser::make_fcn_name (tree_identifier *id)
  {
    std::string id_name = id->name ();

    // Make classdef local functions unique from classdef methods.

    if (m_parsing_local_functions && m_curr_fcn_depth == 0)
      id_name = m_lexer.m_fcn_file_name + ">" + id_name;

    if (! m_function_scopes.name_current_scope (id_name))
      {
        bison_error ("duplicate subfunction or nested function name",
                     id->line (), id->column ());

        delete id;
        return nullptr;
      }

    symbol_scope curr_scope = m_lexer.m_symtab_context.curr_scope ();
    curr_scope.cache_name (id_name);

    m_lexer.m_parsed_function_name.top () = true;
    m_lexer.m_maybe_classdef_get_set_method = false;

    return id;
  }

  // Define a function.

  // FIXME: combining start_function, finish_function, and
  // recover_from_parsing_function should be possible, but it makes
  // for a large mess.  Maybe this could be a bit better organized?

  tree_function_def *
  base_parser::make_function (token *fcn_tok,
                              tree_parameter_list *ret_list,
                              tree_identifier *id,
                              tree_parameter_list *param_list,
                              tree_statement_list *body,
                              tree_statement *end_fcn_stmt,
                              comment_list *lc)
  {
    int l = fcn_tok->line ();
    int c = fcn_tok->column ();

    octave_user_function *tmp_fcn
      = start_function (id, param_list, body, end_fcn_stmt);

    tree_function_def *retval = finish_function (ret_list, tmp_fcn, lc, l, c);

    recover_from_parsing_function ();

    return retval;
  }

  // Begin defining a function.

  octave_user_function *
  base_parser::start_function (tree_identifier *id,
                               tree_parameter_list *param_list,
                               tree_statement_list *body,
                               tree_statement *end_fcn_stmt)
  {
    // We'll fill in the return list later.

    std::string id_name = id->name ();

    delete id;

    if (m_lexer.m_parsing_classdef_get_method)
      id_name.insert (0, "get.");
    else if (m_lexer.m_parsing_classdef_set_method)
      id_name.insert (0, "set.");

    m_lexer.m_parsing_classdef_get_method = false;
    m_lexer.m_parsing_classdef_set_method = false;

    if (! body)
      body = new tree_statement_list ();

    body->append (end_fcn_stmt);

    octave_user_function *fcn
      = new octave_user_function (m_lexer.m_symtab_context.curr_scope (),
                                  param_list, nullptr, body);

    comment_list *tc = m_lexer.m_comment_buf.get_comment ();

    fcn->stash_trailing_comment (tc);
    fcn->stash_fcn_end_location (end_fcn_stmt->line (),
                                 end_fcn_stmt->column ());

    // If input is coming from a file, issue a warning if the name of
    // the file does not match the name of the function stated in the
    // file.  Matlab doesn't provide a diagnostic (it ignores the stated
    // name).
    if (! m_autoloading && m_lexer.m_reading_fcn_file
        && m_curr_fcn_depth == 0 && ! m_parsing_subfunctions)
      {
        // FIXME: should m_lexer.m_fcn_file_name already be
        // preprocessed when we get here?  It seems to only be a
        // problem with relative filenames.

        std::string nm = m_lexer.m_fcn_file_name;

        std::size_t pos = nm.find_last_of (sys::file_ops::dir_sep_chars ());

        if (pos != std::string::npos)
          nm = m_lexer.m_fcn_file_name.substr (pos+1);

        if (nm != id_name)
          {
            warning_with_id
              ("Octave:function-name-clash",
               "function name '%s' does not agree with function filename '%s'",
               id_name.c_str (), m_lexer.m_fcn_file_full_name.c_str ());

            id_name = nm;
          }
      }

    sys::time now;

    fcn->stash_fcn_file_name (m_lexer.m_fcn_file_full_name);
    fcn->stash_fcn_file_time (now);
    fcn->stash_dir_name (m_lexer.m_dir_name);
    fcn->stash_package_name (m_lexer.m_package_name);
    fcn->mark_as_system_fcn_file ();
    fcn->stash_function_name (id_name);

    if (m_lexer.m_reading_fcn_file || m_lexer.m_reading_classdef_file || m_autoloading)
      {
        if (m_fcn_file_from_relative_lookup)
          fcn->mark_relative ();

        if (m_lexer.m_parsing_class_method)
          {
            if (m_lexer.m_parsing_classdef)
              {
                if (m_curr_class_name == id_name)
                  fcn->mark_as_classdef_constructor ();
                else
                  fcn->mark_as_classdef_method ();
              }
            else
              {
                if (m_curr_class_name == id_name)
                  fcn->mark_as_legacy_constructor ();
                else
                  fcn->mark_as_legacy_method ();
              }

            fcn->stash_dispatch_class (m_curr_class_name);
          }

        std::string nm = fcn->fcn_file_name ();

        sys::file_stat fs (nm);

        if (fs && fs.is_newer (now))
          warning_with_id ("Octave:future-time-stamp",
                           "time stamp for '%s' is in the future", nm.c_str ());
      }
    else if (! m_lexer.input_from_tmp_history_file ()
             && ! m_lexer.m_force_script
             && m_lexer.m_reading_script_file
             && m_lexer.m_fcn_file_name == id_name)
      {
        warning ("function '%s' defined within script file '%s'",
                 id_name.c_str (), m_lexer.m_fcn_file_full_name.c_str ());
      }

    // Record help text for functions other than nested functions.
    // We cannot currently record help for nested functions (bug #46008)
    // because the doc_string of the outermost function is read first,
    // whereas this function is called for the innermost function first.
    // We could have a stack of help_text in lexer.
    if (! m_lexer.m_help_text.empty () && m_curr_fcn_depth == 0)
      {
        fcn->document (m_lexer.m_help_text);

        m_lexer.m_help_text = "";
      }

    if (m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0
        && ! m_parsing_subfunctions)
      m_primary_fcn = octave_value (fcn);

    return fcn;
  }

  tree_statement *
  base_parser::make_end (const std::string& type, bool eof,
                         const filepos& beg_pos, const filepos& /*end_pos*/)
  {
    int l = beg_pos.line ();
    int c = beg_pos.column ();

    return make_statement (new tree_no_op_command (type, eof, l, c));
  }

  tree_function_def *
  base_parser::finish_function (tree_parameter_list *ret_list,
                                octave_user_function *fcn,
                                comment_list *lc,
                                int l, int c)
  {
    tree_function_def *retval = nullptr;

    if (! ret_list)
      ret_list = new tree_parameter_list (tree_parameter_list::out);

    ret_list->mark_as_formal_parameters ();

    if (fcn)
      {
        std::string fcn_nm = fcn->name ();
        std::string file = fcn->fcn_file_name ();

        std::string tmp = fcn_nm;
        if (! file.empty ())
          tmp += ": " + file;

        symbol_scope fcn_scope = fcn->scope ();
        fcn_scope.cache_name (tmp);
        fcn_scope.cache_fcn_name (fcn_nm);
        fcn_scope.cache_fcn_file_name (file);
        fcn_scope.cache_dir_name (m_lexer.m_dir_name);

        if (lc)
          fcn->stash_leading_comment (lc);

        fcn->define_ret_list (ret_list);

        if (m_curr_fcn_depth > 0 || m_parsing_subfunctions)
          {
            fcn->stash_fcn_location (l, c);

            octave_value ov_fcn (fcn);

            if (m_endfunction_found && m_function_scopes.size () > 1)
              {
                fcn->mark_as_nested_function ();
                fcn_scope.set_nesting_depth (m_curr_fcn_depth);

                symbol_scope pscope = m_function_scopes.parent_scope ();
                fcn_scope.set_parent (pscope);
                fcn_scope.set_primary_parent (m_primary_fcn_scope);

                pscope.install_nestfunction (fcn_nm, ov_fcn, fcn_scope);

                // For nested functions, the list of parent functions is
                // set in symbol_scope::update_nest.
              }
            else
              {
                fcn->mark_as_subfunction ();
                m_subfunction_names.push_back (fcn_nm);

                fcn_scope.set_parent (m_primary_fcn_scope);
                if (m_parsing_subfunctions)
                  fcn_scope.set_primary_parent (m_primary_fcn_scope);

                m_primary_fcn_scope.install_subfunction (fcn_nm, ov_fcn);
              }
          }

        if (m_curr_fcn_depth == 0)
          fcn_scope.update_nest ();

        if (! m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0)
          {
            // We are either reading a script file or defining a function
            // at the command line, so this definition creates a
            // tree_function object that is placed in the parse tree.
            // Otherwise, it is just inserted in the symbol table,
            // either as a subfunction or nested function (see above),
            // or as the primary function for the file, via
            // m_primary_fcn (see also load_fcn_from_file,,
            // parse_fcn_file, and
            // fcn_info::fcn_info_rep::find_user_function).

            if (m_lexer.m_buffer_function_text)
              {
                fcn->cache_function_text (m_lexer.m_function_text,
                                          fcn->time_parsed ());
                m_lexer.m_buffer_function_text = false;
              }

            retval = new tree_function_def (fcn, l, c);
          }
      }

    return retval;
  }

  tree_statement_list *
  base_parser::append_function_body (tree_statement_list *body,
                                     tree_statement_list *list)
  {
    if (list)
      {
        for (const auto& elt : *list)
          list_append (body, elt);

        list->clear ();
        delete (list);
      }

    return body;
  }

  tree_arguments_block *
  base_parser::make_arguments_block (token *arguments_tok,
                                     tree_args_block_attribute_list *attr_list,
                                     tree_args_block_validation_list *validation_list,
                                     token *end_tok,
                                     comment_list *lc, comment_list *tc)
  {
    tree_arguments_block *retval = nullptr;

    if (end_token_ok (end_tok, token::arguments_end))
      {
        filepos beg_pos = arguments_tok->beg_pos ();

        int l = beg_pos.line ();
        int c = beg_pos.column ();

        retval = new tree_arguments_block (attr_list, validation_list, l, c);
      }
    else
      {
        delete attr_list;
        delete validation_list;

        delete lc;
        delete tc;
      }

    return retval;
  }

  tree_arg_validation *
  base_parser::make_arg_validation (tree_arg_size_spec *size_spec,
                                    tree_identifier *class_name,
                                    tree_arg_validation_fcns *validation_fcns,
                                    tree_expression *default_value)
  {
    // FIXME: Validate arguments and convert to more specific types
    // (std::string for arg_name and class_name, etc).

    return new tree_arg_validation (size_spec, class_name,
                                    validation_fcns, default_value);
  }

  tree_args_block_attribute_list *
  base_parser::make_args_attribute_list (tree_identifier *attribute_name)
  {
    // FIXME: Validate argument and convert to more specific type
    // (std::string for attribute_name).

    return new tree_args_block_attribute_list (attribute_name);
  }

  tree_args_block_validation_list *
  base_parser::make_args_validation_list (tree_arg_validation *arg_validation)
  {
    return new tree_args_block_validation_list (arg_validation);
  }

  tree_args_block_validation_list *
  base_parser::append_args_validation_list (tree_args_block_validation_list *list,
                                            tree_arg_validation *arg_validation)
  {
    return list_append (list, arg_validation);
  }

  tree_arg_size_spec *
  base_parser::make_arg_size_spec (tree_argument_list *size_args)
  {
    // FIXME: Validate argument.

    return new tree_arg_size_spec (size_args);
  }

  tree_arg_validation_fcns *
  base_parser::make_arg_validation_fcns (tree_argument_list *fcn_args)
  {
    // FIXME: Validate argument.

    return new tree_arg_validation_fcns (fcn_args);
  }

  void
  base_parser::recover_from_parsing_function (void)
  {
    m_lexer.m_symtab_context.pop ();

    if (m_lexer.m_reading_fcn_file && m_curr_fcn_depth == 0
        && ! m_parsing_subfunctions)
      m_parsing_subfunctions = true;

    m_curr_fcn_depth--;
    m_function_scopes.pop ();

    m_lexer.m_defining_fcn--;
    m_lexer.m_parsed_function_name.pop ();
    m_lexer.m_looking_at_return_list = false;
    m_lexer.m_looking_at_parameter_list = false;
  }

  // A CLASSDEF block defines a class that has a constructor and other
  // methods, but it is not an executable command.  Parsing the block
  // makes some changes in the symbol table (inserting the constructor
  // and methods, and adding to the list of known objects) and creates
  // a parse tree containing meta information about the class.

  // LC contains comments appearing before the classdef keyword.
  // TC contains comments appearing between the classdef elements
  // and the final end token for the classdef block.

  tree_classdef *
  base_parser::make_classdef (token *tok_val,
                              tree_classdef_attribute_list *a,
                              tree_identifier *id,
                              tree_classdef_superclass_list *sc,
                              tree_classdef_body *body, token *end_tok,
                              comment_list *lc, comment_list *tc)
  {
    tree_classdef *retval = nullptr;

    m_lexer.m_symtab_context.pop ();

    std::string cls_name = id->name ();

    std::string full_name = m_lexer.m_fcn_file_full_name;
    std::string short_name = m_lexer.m_fcn_file_name;

    std::size_t pos
      = short_name.find_last_of (sys::file_ops::dir_sep_chars ());

    if (pos != std::string::npos)
      short_name = short_name.substr (pos+1);

    if (short_name != cls_name)
      {
        int l = id->line ();
        int c = id->column ();

        delete a;
        delete id;
        delete sc;
        delete body;
        delete lc;
        delete tc;

        bison_error ("invalid classdef definition, the class name must match the filename", l, c);

      }
    else
      {
        if (end_token_ok (end_tok, token::classdef_end))
          {
            int l = tok_val->line ();
            int c = tok_val->column ();

            if (! body)
              body = new tree_classdef_body ();

            retval = new tree_classdef (m_lexer.m_symtab_context.curr_scope (),
                                        a, id, sc, body, lc, tc,
                                        m_curr_package_name, full_name, l, c);
          }
        else
          {
            delete a;
            delete id;
            delete sc;
            delete body;
            delete lc;
            delete tc;

            end_token_error (end_tok, token::switch_end);
          }
      }

    return retval;
  }

  // LC contains comments appearing before the properties keyword.
  // If this properties block appears first in the list of classdef
  // elements, this comment list will be used for the help text for the
  // classdef block.

  // TC contains comments appearing between the list of properties
  // and the final end token for the properties block and may be used to
  // find the doc string for the final property in the list.

  tree_classdef_properties_block *
  base_parser::make_classdef_properties_block (token *tok_val,
                                               tree_classdef_attribute_list *a,
                                               tree_classdef_property_list *plist,
                                               token *end_tok,
                                               comment_list *lc,
                                               comment_list *tc)
  {
    tree_classdef_properties_block *retval = nullptr;

    if (end_token_ok (end_tok, token::properties_end))
      {
        int l = tok_val->line ();
        int c = tok_val->column ();

        if (plist)
          {
            // If the element at the end of the list doesn't have a doc
            // string, see whether the first element of TC is an
            // end-of-line comment for us to use.

            if (tc)
              {
                tree_classdef_property *last_elt = plist->back ();

                if (! last_elt->have_doc_string ())
                  {
                    comment_elt first_comment_elt = tc->front ();

                    if (first_comment_elt.is_end_of_line ())
                      {
                        std::string eol_comment = first_comment_elt.text ();

                        last_elt->doc_string (eol_comment);
                      }
                  }
              }
          }
        else
          plist = new tree_classdef_property_list ();

        retval = new tree_classdef_properties_block (a, plist, lc, tc, l, c);
      }
    else
      {
        delete a;
        delete plist;
        delete lc;
        delete tc;

        end_token_error (end_tok, token::properties_end);
      }

    return retval;
  }

  tree_classdef_property_list *
  base_parser::make_classdef_property_list (tree_classdef_property *prop)
  {
    return new tree_classdef_property_list (prop);
  }

  tree_classdef_property *
  base_parser::make_classdef_property (comment_list *lc, tree_identifier *id,
                                       tree_arg_validation *av)
  {
    av->arg_name (id);

    if (av->size_spec () || av->class_name () || av->validation_fcns ())
      warning ("size, class, and validation function specifications are not yet supported for classdef properties; INCORRECT RESULTS ARE POSSIBLE!");

    return new tree_classdef_property (av, lc);
  }

  // LC contains comments appearing before the methods keyword.
  // If this methods block appears first in the list of classdef
  // elements, this comment list will be used for the help text for the
  // classdef block.

  tree_classdef_methods_block *
  base_parser::make_classdef_methods_block (token *tok_val,
                                            tree_classdef_attribute_list *a,
                                            tree_classdef_methods_list *mlist,
                                            token *end_tok, comment_list *lc,
                                            comment_list *tc)
  {
    tree_classdef_methods_block *retval = nullptr;

    if (end_token_ok (end_tok, token::methods_end))
      {
        int l = tok_val->line ();
        int c = tok_val->column ();

        if (! mlist)
          mlist = new tree_classdef_methods_list ();

        retval = new tree_classdef_methods_block (a, mlist, lc, tc, l, c);
      }
    else
      {
        delete a;
        delete mlist;
        delete lc;
        delete tc;

        end_token_error (end_tok, token::methods_end);
      }

    return retval;
  }

  // LC contains comments appearing before the events keyword.
  // If this events block appears first in the list of classdef
  // elements, this comment list will be used for the help text for the
  // classdef block.

  // TC contains comments appearing between the list of events and
  // the final end token for the events block and may be used to find
  // the doc string for the final event in the list.

  tree_classdef_events_block *
  base_parser::make_classdef_events_block (token *tok_val,
                                           tree_classdef_attribute_list *a,
                                           tree_classdef_events_list *elist,
                                           token *end_tok,
                                           comment_list *lc,
                                           comment_list *tc)
  {
    tree_classdef_events_block *retval = nullptr;

    if (end_token_ok (end_tok, token::events_end))
      {
        int l = tok_val->line ();
        int c = tok_val->column ();

        if (! elist)
          elist = new tree_classdef_events_list ();

        retval = new tree_classdef_events_block (a, elist, lc, tc, l, c);
      }
    else
      {
        delete a;
        delete elist;
        delete lc;
        delete tc;

        end_token_error (end_tok, token::events_end);
      }

    return retval;
  }

  tree_classdef_events_list *
  base_parser::make_classdef_events_list (tree_classdef_event *e)
  {
    return new tree_classdef_events_list (e);
  }

  tree_classdef_event *
  base_parser::make_classdef_event (comment_list *lc, tree_identifier *id)
  {
    return new tree_classdef_event (id, lc);
  }

  // LC contains comments appearing before the enumeration keyword.
  // If this enumeration block appears first in the list of classdef
  // elements, this comment list will be used for the help text for the
  // classdef block.

  // TC contains comments appearing between the list of
  // enumerations and the final end token for the enumeration block and
  // may be used to find the doc string for the final enumeration in the
  // list.

  tree_classdef_enum_block *
  base_parser::make_classdef_enum_block (token *tok_val,
                                         tree_classdef_attribute_list *a,
                                         tree_classdef_enum_list *elist,
                                         token *end_tok,
                                         comment_list *lc,
                                         comment_list *tc)
  {
    tree_classdef_enum_block *retval = nullptr;

    if (end_token_ok (end_tok, token::enumeration_end))
      {
        int l = tok_val->line ();
        int c = tok_val->column ();

        if (! elist)
          elist = new tree_classdef_enum_list ();

        retval = new tree_classdef_enum_block (a, elist, lc, tc, l, c);
      }
    else
      {
        delete a;
        delete elist;
        delete lc;
        delete tc;

        end_token_error (end_tok, token::enumeration_end);
      }

    return retval;
  }

  tree_classdef_enum_list *
  base_parser::make_classdef_enum_list (tree_classdef_enum *e)
  {
    return new tree_classdef_enum_list (e);
  }

  tree_classdef_enum *
  base_parser::make_classdef_enum (tree_identifier *id, tree_expression *expr,
                                   comment_list *lc)
  {
    return new tree_classdef_enum (id, expr, lc);
  }

  tree_classdef_property_list *
  base_parser::append_classdef_property (tree_classdef_property_list *list,
                                         tree_classdef_property *elt)
  {
    return list_append (list, elt);
  }

  tree_classdef_events_list *
  base_parser::append_classdef_event (tree_classdef_events_list *list,
                                      tree_classdef_event *elt)
  {
    return list_append (list, elt);
  }

  tree_classdef_enum_list *
  base_parser::append_classdef_enum (tree_classdef_enum_list *list,
                                     tree_classdef_enum *elt)
  {
    return list_append (list, elt);
  }

  tree_classdef_superclass_list *
  base_parser::make_classdef_superclass_list (tree_classdef_superclass *sc)
  {
    return new tree_classdef_superclass_list (sc);
  }

  tree_classdef_superclass *
  base_parser::make_classdef_superclass (token *fqident)
  {
    return new tree_classdef_superclass (fqident->text ());
  }

  tree_classdef_superclass_list *
  base_parser::append_classdef_superclass (tree_classdef_superclass_list *list,
                                           tree_classdef_superclass *elt)
  {
    return list_append (list, elt);
  }

  tree_classdef_attribute_list *
  base_parser::make_classdef_attribute_list (tree_classdef_attribute *attr)
  {
    return new tree_classdef_attribute_list (attr);
  }

  tree_classdef_attribute *
  base_parser::make_classdef_attribute (tree_identifier *id,
                                        tree_expression *expr)
  {
    return (expr
            ? new tree_classdef_attribute (id, expr)
            : new tree_classdef_attribute (id));
  }

  tree_classdef_attribute *
  base_parser::make_not_classdef_attribute (tree_identifier *id)
  {
    return new tree_classdef_attribute (id, false);
  }

  tree_classdef_attribute_list *
  base_parser::append_classdef_attribute (tree_classdef_attribute_list *list,
                                          tree_classdef_attribute *elt)
  {
    return list_append (list, elt);
  }

  tree_classdef_body *
  base_parser::make_classdef_body (tree_classdef_properties_block *pb)
  {
    return new tree_classdef_body (pb);
  }

  tree_classdef_body *
  base_parser::make_classdef_body (tree_classdef_methods_block *mb)
  {
    return new tree_classdef_body (mb);
  }

  tree_classdef_body *
  base_parser::make_classdef_body (tree_classdef_events_block *evb)
  {
    return new tree_classdef_body (evb);
  }

  tree_classdef_body *
  base_parser::make_classdef_body  (tree_classdef_enum_block *enb)
  {
    return new tree_classdef_body (enb);
  }

  tree_classdef_body *
  base_parser::append_classdef_properties_block (tree_classdef_body *body,
                                                 tree_classdef_properties_block *block)
  {
    return list_append (body, block);
  }

  tree_classdef_body *
  base_parser::append_classdef_methods_block (tree_classdef_body *body,
                                              tree_classdef_methods_block *block)
  {
    return list_append (body, block);
  }

  tree_classdef_body *
  base_parser::append_classdef_events_block (tree_classdef_body *body,
                                             tree_classdef_events_block *block)
  {
    return list_append (body, block);
  }

  tree_classdef_body *
  base_parser::append_classdef_enum_block (tree_classdef_body *body,
                                           tree_classdef_enum_block *block)
  {
    return list_append (body, block);
  }

  octave_user_function*
  base_parser::start_classdef_external_method (tree_identifier *id,
                                               tree_parameter_list *pl)
  {
    octave_user_function* retval = nullptr;

    // External methods are only allowed within @-folders. In this case,
    // m_curr_class_name will be non-empty.

    if (! m_curr_class_name.empty ())
      {

        std::string mname = id->name ();

        // Methods that cannot be declared outside the classdef file:
        // - methods with '.' character (e.g. property accessors)
        // - class constructor
        // - 'delete'

        if (mname.find_first_of (".") == std::string::npos
            && mname != "delete"
            && mname != m_curr_class_name)
          {
            // Create a dummy function that is used until the real method
            // is loaded.

            retval = new octave_user_function (symbol_scope (), pl);

            retval->stash_function_name (mname);

            int l = id->line ();
            int c = id->column ();

            retval->stash_fcn_location (l, c);
          }
        else
          bison_error ("invalid external method declaration, an external "
                       "method cannot be the class constructor, 'delete' "
                       "or have a dot (.) character in its name");
      }
    else
      bison_error ("external methods are only allowed in @-folders");

    if (! retval)
      delete id;

    return retval;
  }

  tree_function_def *
  base_parser::finish_classdef_external_method (octave_user_function *fcn,
                                                tree_parameter_list *ret_list,
                                                comment_list *cl)
  {
    if (! ret_list)
      ret_list = new tree_parameter_list (tree_parameter_list::out);

    fcn->define_ret_list (ret_list);

    if (cl)
      fcn->stash_leading_comment (cl);

    int l = fcn->beginning_line ();
    int c = fcn->beginning_column ();

    return new tree_function_def (fcn, l, c);
  }

  tree_classdef_methods_list *
  base_parser::make_classdef_methods_list (tree_function_def *fcn_def)
  {
    octave_value fcn;

    if (fcn_def)
      fcn = fcn_def->function ();

    delete fcn_def;

    return new tree_classdef_methods_list (fcn);
  }

  tree_classdef_methods_list *
  base_parser::append_classdef_method (tree_classdef_methods_list *list,
                                       tree_function_def *fcn_def)
  {
    octave_value fcn;

    if (fcn_def)
      {
        fcn = fcn_def->function ();

        delete fcn_def;
      }

    return list_append (list, fcn);
  }

  bool
  base_parser::finish_classdef_file (tree_classdef *cls,
                                     tree_statement_list *local_fcns)
  {
    parse_tree_validator validator;

    cls->accept (validator);

    if (local_fcns)
      {
        for (tree_statement *elt : *local_fcns)
          {
            tree_command *cmd = elt->command ();

            tree_function_def *fcn_def
              = dynamic_cast<tree_function_def *> (cmd);

            fcn_def->accept (validator);
          }
      }

    if (! validator.ok ())
      {
        delete cls;
        delete local_fcns;

        bison_error (validator.error_list ());

        return false;
      }

    // Require all validations to succeed before installing any local
    // functions or defining the classdef object for later use.

    if (local_fcns)
      {
        symbol_table& symtab = __get_symbol_table__ ();

        for (tree_statement *elt : *local_fcns)
          {
            tree_command *cmd = elt->command ();

            tree_function_def *fcn_def
              = dynamic_cast<tree_function_def *> (cmd);

            octave_value ov_fcn = fcn_def->function ();
            octave_user_function *fcn = ov_fcn.user_function_value ();

            std::string nm = fcn->name ();
            std::string file = fcn->fcn_file_name ();

            symtab.install_local_function (nm, ov_fcn, file);
          }

        delete local_fcns;
      }

    // FIXME: Is it possible for the following condition to be false?
    if (m_lexer.m_reading_classdef_file)
      m_classdef_object = std::shared_ptr<tree_classdef> (cls);

    return true;
  }

  // Make an index expression.

  tree_index_expression *
  base_parser::make_index_expression (tree_expression *expr,
                                      tree_argument_list *args,
                                      char type)
  {
    tree_index_expression *retval = nullptr;

    if (args && args->has_magic_tilde ())
      {
        delete expr;
        delete args;

        bison_error ("invalid use of empty argument (~) in index expression");
      }
    else
      {
        int l = expr->line ();
        int c = expr->column ();

        if (! expr->is_postfix_indexed ())
          expr->set_postfix_index (type);

        if (expr->is_index_expression ())
          {
            tree_index_expression *tmp
              = dynamic_cast<tree_index_expression *> (expr);

            retval = tmp->append (args, type);
          }
        else
          retval = new tree_index_expression (expr, args, l, c, type);
      }

    return retval;
  }

  // Make an indirect reference expression.

  tree_index_expression *
  base_parser::make_indirect_ref (tree_expression *expr,
                                  const std::string& elt)
  {
    tree_index_expression *retval = nullptr;

    int l = expr->line ();
    int c = expr->column ();

    if (! expr->is_postfix_indexed ())
      expr->set_postfix_index ('.');

    if (expr->is_index_expression ())
      {
        tree_index_expression *tmp
          = dynamic_cast<tree_index_expression *> (expr);

        retval = tmp->append (elt);
      }
    else
      retval = new tree_index_expression (expr, elt, l, c);

    m_lexer.m_looking_at_indirect_ref = false;

    return retval;
  }

  // Make an indirect reference expression with dynamic field name.

  tree_index_expression *
  base_parser::make_indirect_ref (tree_expression *expr,
                                  tree_expression *elt)
  {
    tree_index_expression *retval = nullptr;

    int l = expr->line ();
    int c = expr->column ();

    if (! expr->is_postfix_indexed ())
      expr->set_postfix_index ('.');

    if (expr->is_index_expression ())
      {
        tree_index_expression *tmp
          = dynamic_cast<tree_index_expression *> (expr);

        retval = list_append (tmp, elt);
      }
    else
      retval = new tree_index_expression (expr, elt, l, c);

    m_lexer.m_looking_at_indirect_ref = false;

    return retval;
  }

  // Make a declaration command.

  tree_decl_command *
  base_parser::make_decl_command (int tok, token *tok_val,
                                  tree_decl_init_list *lst)
  {
    tree_decl_command *retval = nullptr;

    int l = tok_val->line ();
    int c = tok_val->column ();

    if (lst)
      m_lexer.mark_as_variables (lst->variable_names ());

    switch (tok)
      {
      case GLOBAL:
        {
          retval = new tree_decl_command ("global", lst, l, c);
          retval->mark_global ();
        }
        break;

      case PERSISTENT:
        if (m_curr_fcn_depth >= 0)
          {
            retval = new tree_decl_command ("persistent", lst, l, c);
            retval->mark_persistent ();
          }
        else
          {
            if (m_lexer.m_reading_script_file)
              warning ("ignoring persistent declaration near line %d of file '%s'",
                       l, m_lexer.m_fcn_file_full_name.c_str ());
            else
              warning ("ignoring persistent declaration near line %d", l);
          }
        break;

      default:
        panic_impossible ();
        break;
      }

    return retval;
  }

  tree_decl_init_list *
  base_parser::make_decl_init_list (tree_decl_elt *elt)
  {
    return new tree_decl_init_list (elt);
  }

  tree_decl_init_list *
  base_parser::append_decl_init_list (tree_decl_init_list *list,
                                      tree_decl_elt *elt)
  {
    return list_append (list, elt);
  }

  tree_decl_elt *
  base_parser::make_decl_elt (tree_identifier *id, token */*eq_op*/,
                              tree_expression *expr)
  {
    return expr ? new tree_decl_elt (id, expr) : new tree_decl_elt (id);
  }

  bool
  base_parser::validate_param_list (tree_parameter_list *lst,
                                    tree_parameter_list::in_or_out type)
  {
    std::set<std::string> dict;

    for (tree_decl_elt *elt : *lst)
      {
        tree_identifier *id = elt->ident ();

        if (id)
          {
            std::string name = id->name ();

            if (id->is_black_hole ())
              {
                if (type != tree_parameter_list::in)
                  {
                    bison_error ("invalid use of ~ in output list");
                    return false;
                  }
              }
            else if (iskeyword (name))
              {
                bison_error ("invalid use of keyword '" + name
                             + "' in parameter list");
                return false;
              }
            else if (dict.find (name) != dict.end ())
              {
                bison_error ("'" + name
                             + "' appears more than once in parameter list");
                return false;
              }
            else
              dict.insert (name);
          }
      }

    std::string va_type = (type == tree_parameter_list::in
                           ? "varargin" : "varargout");

    std::size_t len = lst->length ();

    if (len > 0)
      {
        tree_decl_elt *elt = lst->back ();

        tree_identifier *id = elt->ident ();

        if (id && id->name () == va_type)
          {
            if (len == 1)
              lst->mark_varargs_only ();
            else
              lst->mark_varargs ();

            tree_parameter_list::iterator p = lst->end ();
            --p;
            delete *p;
            lst->erase (p);
          }
      }

    return true;
  }

  bool
  base_parser::validate_array_list (tree_expression *e)
  {
    bool retval = true;

    tree_array_list *al = dynamic_cast<tree_array_list *> (e);

    for (tree_argument_list* row : *al)
      {
        if (row && row->has_magic_tilde ())
          {
            retval = false;

            if (e->is_matrix ())
              bison_error ("invalid use of tilde (~) in matrix expression");
            else
              bison_error ("invalid use of tilde (~) in cell expression");

            break;
          }
      }

    return retval;
  }

  tree_argument_list *
  base_parser::validate_matrix_for_assignment (tree_expression *e)
  {
    tree_argument_list *retval = nullptr;

    if (e->is_constant ())
      {
        tree_evaluator& tw = __get_evaluator__ ();

        octave_value ov = e->evaluate (tw);

        delete e;

        if (ov.isempty ())
          bison_error ("invalid empty left hand side of assignment");
        else
          bison_error ("invalid constant left hand side of assignment");
      }
    else
      {
        bool is_simple_assign = true;

        tree_argument_list *tmp = nullptr;

        if (e->is_matrix ())
          {
            tree_matrix *mat = dynamic_cast<tree_matrix *> (e);

            if (mat && mat->size () == 1)
              {
                tmp = mat->front ();
                mat->pop_front ();
                delete e;
                is_simple_assign = false;
              }
          }
        else
          tmp = new tree_argument_list (e);

        if (tmp && tmp->is_valid_lvalue_list ())
          {
            m_lexer.mark_as_variables (tmp->variable_names ());
            retval = tmp;
          }
        else
          {
            delete tmp;

            bison_error ("invalid left hand side of assignment");
          }

        if (retval && is_simple_assign)
          retval->mark_as_simple_assign_lhs ();
      }

    return retval;
  }

  // Finish building an array_list.

  tree_expression *
  base_parser::finish_array_list (tree_array_list *array_list,
                                  token */*open_delim*/, token *close_delim)
  {
    tree_expression *retval = array_list;

    array_list->set_location (close_delim->line (), close_delim->column ());

    if (array_list->all_elements_are_constant ())
      {
        interpreter& interp = __get_interpreter__ ();

        try
          {
            // If the evaluation generates a warning message, restore
            // the previous value of last_warning_message and skip the
            // conversion to a constant value.

            error_system& es = interp.get_error_system ();

            unwind_action restore_last_warning_message
              (&error_system::set_last_warning_message, &es,
               es.last_warning_message (""));

            unwind_action restore_discard_warning_messages
              (&error_system::set_discard_warning_messages, &es,
               es.discard_warning_messages (true));

            tree_evaluator& tw = interp.get_evaluator ();

            octave_value tmp = array_list->evaluate (tw);

            std::string msg = es.last_warning_message ();

            if (msg.empty ())
              {
                tree_constant *tc_retval
                  = new tree_constant (tmp, close_delim->line (),
                                       close_delim->column ());

                std::ostringstream buf;

                tree_print_code tpc (buf);

                array_list->accept (tpc);

                tc_retval->stash_original_text (buf.str ());

                delete array_list;

                retval = tc_retval;
              }
          }
        catch (const execution_exception&)
          {
            interp.recover_from_exception ();
          }
      }

    return retval;
  }

  // Finish building a matrix list.

  tree_expression *
  base_parser::finish_matrix (tree_matrix *m, token *open_delim,
                              token *close_delim)
  {
    return (m
            ? finish_array_list (m, open_delim, close_delim)
            : new tree_constant (octave_null_matrix::instance,
                                 close_delim->line (), close_delim->column ()));
  }

  tree_matrix *
  base_parser::make_matrix (tree_argument_list *row)
  {
    return row ? new tree_matrix (row) : nullptr;
  }

  tree_matrix *
  base_parser::append_matrix_row (tree_matrix *matrix, tree_argument_list *row)
  {
    if (! matrix)
      return make_matrix (row);

    return row ? list_append (matrix, row) : matrix;
  }

  // Finish building a cell list.

  tree_expression *
  base_parser::finish_cell (tree_cell *c, token *open_delim,
                            token *close_delim)
  {
    return (c
            ? finish_array_list (c, open_delim, close_delim)
            : new tree_constant (octave_value (Cell ()),
                                 close_delim->line (), close_delim->column ()));
  }

  tree_cell *
  base_parser::make_cell (tree_argument_list *row)
  {
    return row ? new tree_cell (row) : nullptr;
  }

  tree_cell *
  base_parser::append_cell_row (tree_cell *cell, tree_argument_list *row)
  {
    if (! cell)
      return make_cell (row);

    return row ? list_append (cell, row) : cell;
  }

  tree_identifier *
  base_parser::make_identifier (token *ident)
  {
    // Find the token in the symbol table.
    symbol_scope scope = m_lexer.m_symtab_context.curr_scope ();

    std::string nm = ident->text ();

    symbol_record sr = (scope ? scope.insert (nm) : symbol_record (nm));


    int l = ident->line ();
    int c = ident->column ();

    return new tree_identifier (sr, l, c);
  }

  tree_superclass_ref *
  base_parser::make_superclass_ref (token *superclassref)
  {
    std::string meth = superclassref->superclass_method_name ();
    std::string cls = superclassref->superclass_class_name ();

    int l = superclassref->line ();
    int c = superclassref->column ();

    return new tree_superclass_ref (meth, cls, l, c);
  }

  tree_metaclass_query *
  base_parser::make_metaclass_query (token *metaquery)
  {
    std::string cls = metaquery->text ();

    int l = metaquery->line ();
    int c = metaquery->column ();

    return new tree_metaclass_query (cls, l, c);
  }

  tree_statement_list *
  base_parser::set_stmt_print_flag (tree_statement_list *list,
                                    char sep, bool warn_missing_semi)
  {
    tree_statement *tmp = list->back ();

    switch (sep)
      {
      case ';':
        tmp->set_print_flag (false);
        break;

      case 0:
      case ',':
      case '\n':
        tmp->set_print_flag (true);
        if (warn_missing_semi)
          maybe_warn_missing_semi (list);
        break;

      default:
        warning ("unrecognized separator type!");
        break;
      }

    // Even if a statement is null, we add it to the list then remove it
    // here so that the print flag is applied to the correct statement.

    if (tmp->is_null_statement ())
      {
        list->pop_back ();
        delete tmp;
      }

    return list;
  }

  // Finish building a statement.
  template <typename T>
  tree_statement *
  base_parser::make_statement (T *arg)
  {
    comment_list *comment = m_lexer.get_comment ();

    return new tree_statement (arg, comment);
  }

  tree_statement_list *
  base_parser::make_statement_list (tree_statement *stmt)
  {
    return new tree_statement_list (stmt);
  }

  tree_statement_list *
  base_parser::append_statement_list (tree_statement_list *list,
                                      char sep, tree_statement *stmt,
                                      bool warn_missing_semi)
  {
    set_stmt_print_flag (list, sep, warn_missing_semi);

    return list_append (list, stmt);
  }

  tree_argument_list *
  base_parser::make_argument_list (tree_expression *expr)
  {
    return new tree_argument_list (expr);
  }

  tree_argument_list *
  base_parser::append_argument_list (tree_argument_list *list,
                                     tree_expression *expr)
  {
    return list_append (list, expr);
  }

  tree_parameter_list *
  base_parser::make_parameter_list (tree_parameter_list::in_or_out io)
  {
    return new tree_parameter_list (io);
  }

  tree_parameter_list *
  base_parser::make_parameter_list (tree_parameter_list::in_or_out io,
                                    tree_decl_elt *t)
  {
    return new tree_parameter_list (io, t);
  }

  tree_parameter_list *
  base_parser::make_parameter_list (tree_parameter_list::in_or_out io,
                                    tree_identifier *id)
  {
    return new tree_parameter_list (io, id);
  }

  tree_parameter_list *
  base_parser::append_parameter_list (tree_parameter_list *list,
                                      tree_decl_elt *t)
  {
    return list_append (list, t);
  }

  tree_parameter_list *
  base_parser::append_parameter_list (tree_parameter_list *list,
                                      tree_identifier *id)
  {
    return list_append (list, new tree_decl_elt (id));
  }

  void
  base_parser::disallow_command_syntax (void)
  {
    m_lexer.m_allow_command_syntax = false;
  }

  // FIXME: this function partially duplicates do_dbtype in debug.cc.
  static std::string
  get_file_line (const std::string& name, int line)
  {
    // NAME should be an absolute file name and the file should exist.

    std::ifstream fs = sys::ifstream (name.c_str (), std::ios::in);

    std::string text;

    if (fs)
      {
        int i = 1;

        do
          {
            if (! std::getline (fs, text))
              {
                text = "";
                break;
              }
          }
        while (i++ < line);
      }

    return text;
  }

  void
  base_parser::bison_error (const std::string& str)
  {
    bison_error (str, m_lexer.m_filepos);
  }

  void
  base_parser::bison_error (const std::string& str, const filepos& pos)
  {
    bison_error (str, pos.line (), pos.column ());
  }

  void
  base_parser::bison_error (const std::string& str, int err_line, int err_col)
  {
    std::ostringstream output_buf;

    if (m_lexer.m_reading_fcn_file || m_lexer.m_reading_script_file
        || m_lexer.m_reading_classdef_file)
      output_buf << "parse error near line " << err_line
                 << " of file " << m_lexer.m_fcn_file_full_name;
    else
      output_buf << "parse error:";

    if (str != "parse error")
      output_buf << "\n\n  " << str;

    output_buf << "\n\n";

    std::string curr_line;

    if (m_lexer.m_reading_fcn_file || m_lexer.m_reading_script_file
        || m_lexer.m_reading_classdef_file)
      curr_line = get_file_line (m_lexer.m_fcn_file_full_name, err_line);
    else
      curr_line = m_lexer.m_current_input_line;

    // Adjust the error column for display because it is 1-based in the
    // lexer for easier reporting.
    err_col--;

    if (! curr_line.empty ())
      {
        // FIXME: we could do better if we just cached lines from the
        // input file in a list.  See also functions for managing input
        // buffers in lex.ll.

        std::size_t len = curr_line.length ();

        if (curr_line[len-1] == '\n')
          curr_line.resize (len-1);

        // Print the line, maybe with a pointer near the error token.

        output_buf << ">>> " << curr_line << "\n";

        if (err_col == 0)
          err_col = len;

        for (int i = 0; i < err_col + 3; i++)
          output_buf << " ";

        output_buf << "^";
      }

    output_buf << "\n";

    m_parse_error_msg = output_buf.str ();
  }

  void
  base_parser::bison_error (const parse_exception& pe)
  {
    bison_error (pe.message (), pe.line (), pe.column ());
  }

  void
  base_parser::bison_error (const std::list<parse_exception>& pe_list)
  {
    // For now, we just report the first error found.  Reporting all
    // errors will require a bit more refactoring.

    parse_exception pe = pe_list.front ();

    bison_error (pe.message (), pe.line (), pe.column ());
  }

  int
  parser::run (void)
  {
    int status = -1;

    yypstate *pstate = static_cast<yypstate *> (m_parser_state);

    try
      {
        status = octave_pull_parse (pstate, *this);
      }
    catch (const execution_exception&)
      {
        // FIXME: In previous versions, we emitted a parse error here
        // but that is not always correct because the error could have
        // happened inside a GUI callback functions executing in the
        // readline event_hook loop.  Maybe we need a separate exception
        // class for parse errors?

        throw;
      }
    catch (const exit_exception&)
      {
        throw;
      }
    catch (const interrupt_exception&)
      {
        throw;
      }
    catch (...)
      {
        std::string file = m_lexer.m_fcn_file_full_name;

        if (file.empty ())
          error ("unexpected exception while parsing input");
        else
          error ("unexpected exception while parsing %s", file.c_str ());
      }

    if (status != 0)
      parse_error ("%s", m_parse_error_msg.c_str ());

    return status;
  }

  // Parse input from INPUT.  Pass TRUE for EOF if the end of INPUT should
  // finish the parse.

  int
  push_parser::run (const std::string& input, bool eof)
  {
    int status = -1;

    dynamic_cast<push_lexer&> (m_lexer).append_input (input, eof);

    do
      {
        YYSTYPE lval;

        int token = octave_lex (&lval, m_lexer.m_scanner);

        if (token < 0)
          {
            // TOKEN == -2 means that the lexer recognized a comment
            // and we should be at the end of the buffer but not the
            // end of the file so we should return 0 to indicate
            // "complete input" instead of -1 to request more input.

            status = (token == -2 ? 0 : -1);

            if (! eof && m_lexer.at_end_of_buffer ())
              return status;

            break;
          }

        yypstate *pstate = static_cast<yypstate *> (m_parser_state);

        try
          {
            status = octave_push_parse (pstate, token, &lval, *this);
          }
        catch (execution_exception& e)
          {
            std::string file = m_lexer.m_fcn_file_full_name;

            if (file.empty ())
              error (e, "parse error");
            else
              error (e, "parse error in %s", file.c_str ());
          }
        catch (const exit_exception&)
          {
            throw;
          }
        catch (interrupt_exception &)
          {
            throw;
          }
        catch (...)
          {
            std::string file = m_lexer.m_fcn_file_full_name;

            if (file.empty ())
              error ("unexpected exception while parsing input");
            else
              error ("unexpected exception while parsing %s", file.c_str ());
          }
      }
    while (status == YYPUSH_MORE || ! m_lexer.at_end_of_buffer ());

    if (status != 0)
      parse_error ("%s", m_parse_error_msg.c_str ());

    return status;
  }

  int
  push_parser::run (void)
  {
    if (! m_reader)
      error ("push_parser::run requires valid input_reader");

    int exit_status = 0;

    input_system&  input_sys = m_interpreter.get_input_system ();

    std::string prompt
      = command_editor::decode_prompt_string (input_sys.PS1 ());

    do
      {
        // Reset status each time through the read loop so that
        // it won't be set to -1 and cause us to exit the outer
        // loop early if there is an exception while reading
        // input or parsing.

        exit_status = 0;

        bool eof = false;
        std::string input_line = m_reader->get_input (prompt, eof);

        if (eof)
          {
            exit_status = EOF;
            break;
          }

        exit_status = run (input_line, false);

        prompt = command_editor::decode_prompt_string (input_sys.PS2 ());
      }
    while (exit_status < 0);

    return exit_status;
  }

  octave_value
  parse_fcn_file (interpreter& interp, const std::string& full_file,
                  const std::string& file, const std::string& dir_name,
                  const std::string& dispatch_type,
                  const std::string& package_name, bool require_file,
                  bool force_script, bool autoload, bool relative_lookup)
  {
    octave_value retval;

    FILE *ffile = nullptr;

    if (! full_file.empty ())
    {
      // Check that m-file is not overly large which can segfault interpreter.
      const int max_file_size = 512 * 1024 * 1024;  // 512 MB
      sys::file_stat fs (full_file);

      if (fs && fs.size () > max_file_size)
        {
          error ("file '%s' is too large, > 512 MB", full_file.c_str ());

          return octave_value ();
        }

      ffile = sys::fopen (full_file, "rb");
    }

    if (! ffile)
      {
        if (require_file)
          error ("no such file, '%s'", full_file.c_str ());

        return octave_value ();
      }

    unwind_action act ([=] (void) { ::fclose (ffile); });

    // get the encoding for this folder
    input_system& input_sys = interp.get_input_system ();
    parser parser (ffile, interp, input_sys.dir_encoding (dir_name));

    parser.m_curr_class_name = dispatch_type;
    parser.m_curr_package_name = package_name;
    parser.m_autoloading = autoload;
    parser.m_fcn_file_from_relative_lookup = relative_lookup;

    parser.m_lexer.m_force_script = force_script;
    parser.m_lexer.prep_for_file ();
    parser.m_lexer.m_parsing_class_method = ! dispatch_type.empty ();

    parser.m_lexer.m_fcn_file_name = file;
    parser.m_lexer.m_fcn_file_full_name = full_file;
    parser.m_lexer.m_dir_name = dir_name;
    parser.m_lexer.m_package_name = package_name;

    int err = parser.run ();

    if (err)
      error ("parse error while reading file %s", full_file.c_str ());

    octave_value ov_fcn = parser.m_primary_fcn;

    if (parser.m_lexer.m_reading_classdef_file
        && parser.classdef_object ())
      {
        // Convert parse tree for classdef object to
        // meta.class info (and stash it in the symbol
        // table?).  Return pointer to constructor?

        if (ov_fcn.is_defined ())
          panic_impossible ();

        bool is_at_folder = ! dispatch_type.empty ();

        std::shared_ptr<tree_classdef> cdef_obj
          = parser.classdef_object();

        return cdef_obj->make_meta_class (interp, is_at_folder);
      }
    else if (ov_fcn.is_defined ())
      {
        octave_function *fcn = ov_fcn.function_value ();

        fcn->maybe_relocate_end ();

        if (parser.m_parsing_subfunctions)
          {
            if (! parser.m_endfunction_found)
              parser.m_subfunction_names.reverse ();

            fcn->stash_subfunction_names (parser.m_subfunction_names);
          }

        return ov_fcn;
      }

    return octave_value ();
  }

  bool
  base_parser::finish_input (tree_statement_list *lst, bool at_eof)
  {
    m_lexer.m_end_of_input = at_eof;

    if (lst)
      {
        parse_tree_validator validator;

        lst->accept (validator);

        if (! validator.ok ())
          {
            delete lst;

            bison_error (validator.error_list ());

            return false;
          }
      }

    std::shared_ptr<tree_statement_list> tmp_lst (lst);

    statement_list (tmp_lst);

    return true;
  }

  // Check script or function for semantic errors.
  bool
  base_parser::validate_primary_fcn (void)
  {
    octave_user_code *code = m_primary_fcn.user_code_value ();

    if (code)
      {
        parse_tree_validator validator;

        code->accept (validator);

        if (! validator.ok ())
          {
            bison_error (validator.error_list ());

            return false;
          }
      }

    return true;
  }

  // Maybe print a warning if an assignment expression is used as the
  // test in a logical expression.

  void
  base_parser::maybe_warn_assign_as_truth_value (tree_expression *expr)
  {
    if (expr->is_assignment_expression ()
        && expr->paren_count () < 2)
      {
        if (m_lexer.m_fcn_file_full_name.empty ())
          warning_with_id
            ("Octave:assign-as-truth-value",
             "suggest parenthesis around assignment used as truth value");
        else
          warning_with_id
            ("Octave:assign-as-truth-value",
             "suggest parenthesis around assignment used as truth value near line %d, column %d in file '%s'",
             expr->line (), expr->column (), m_lexer.m_fcn_file_full_name.c_str ());
      }
  }

  // Maybe print a warning about switch labels that aren't constants.

  void
  base_parser::maybe_warn_variable_switch_label (tree_expression *expr)
  {
    if (! expr->is_constant ())
      {
        if (m_lexer.m_fcn_file_full_name.empty ())
          warning_with_id ("Octave:variable-switch-label",
                           "variable switch label");
        else
          warning_with_id
            ("Octave:variable-switch-label",
             "variable switch label near line %d, column %d in file '%s'",
             expr->line (), expr->column (), m_lexer.m_fcn_file_full_name.c_str ());
      }
  }

  void
  base_parser::maybe_warn_missing_semi (tree_statement_list *t)
  {
    if (m_curr_fcn_depth >= 0)
      {
        tree_statement *tmp = t->back ();

        if (tmp->is_expression ())
          warning_with_id
            ("Octave:missing-semicolon",
             "missing semicolon near line %d, column %d in file '%s'",
             tmp->line (), tmp->column (), m_lexer.m_fcn_file_full_name.c_str ());
      }
  }

  std::string
  get_help_from_file (const std::string& nm, bool& symbol_found,
                      std::string& full_file)
  {
    std::string retval;

    full_file = fcn_file_in_path (nm);

    std::string file = full_file;

    std::size_t file_len = file.length ();

    if ((file_len > 4 && file.substr (file_len-4) == ".oct")
        || (file_len > 4 && file.substr (file_len-4) == ".mex")
        || (file_len > 2 && file.substr (file_len-2) == ".m"))
      {
        file = sys::env::base_pathname (file);
        file = file.substr (0, file.find_last_of ('.'));

        std::size_t pos = file.find_last_of (sys::file_ops::dir_sep_str ());
        if (pos != std::string::npos)
          file = file.substr (pos+1);
      }

    if (! file.empty ())
      {
        interpreter& interp = __get_interpreter__ ();

        symbol_found = true;

        octave_value ov_fcn
          = parse_fcn_file (interp, full_file, file, "", "", "", true,
                            false, false, false);

        if (ov_fcn.is_defined ())
          {
            octave_function *fcn = ov_fcn.function_value ();

            if (fcn)
              retval = fcn->doc_string ();
          }
      }

    return retval;
  }

  std::string
  get_help_from_file (const std::string& nm, bool& symbol_found)
  {
    std::string file;
    return get_help_from_file (nm, symbol_found, file);
  }

  octave_value
  load_fcn_from_file (const std::string& file_name,
                      const std::string& dir_name,
                      const std::string& dispatch_type,
                      const std::string& package_name,
                      const std::string& fcn_name, bool autoload)
  {
    octave_value retval;

    unwind_protect frame;

    std::string nm = file_name;

    std::size_t nm_len = nm.length ();

    std::string file;

    bool relative_lookup = false;

    file = nm;

    if ((nm_len > 4 && nm.substr (nm_len-4) == ".oct")
        || (nm_len > 4 && nm.substr (nm_len-4) == ".mex")
        || (nm_len > 2 && nm.substr (nm_len-2) == ".m"))
      {
        nm = sys::env::base_pathname (file);
        nm = nm.substr (0, nm.find_last_of ('.'));

        std::size_t pos = nm.find_last_of (sys::file_ops::dir_sep_str ());
        if (pos != std::string::npos)
          nm = nm.substr (pos+1);
      }

    relative_lookup = ! sys::env::absolute_pathname (file);

    file = sys::env::make_absolute (file);

    int len = file.length ();

    interpreter& interp = __get_interpreter__ ();

    dynamic_loader& dyn_loader = interp.get_dynamic_loader ();

    if (len > 4 && file.substr (len-4, len-1) == ".oct")
      {
        if (autoload && ! fcn_name.empty ())
          nm = fcn_name;

        octave_function *tmpfcn
          = dyn_loader.load_oct (nm, file, relative_lookup);

        if (tmpfcn)
          {
            tmpfcn->stash_package_name (package_name);
            retval = octave_value (tmpfcn);
          }
      }
    else if (len > 4 && file.substr (len-4, len-1) == ".mex")
      {
        // Temporarily load m-file version of mex-file, if it exists,
        // to get the help-string to use.

        std::string doc_string;

        octave_value ov_fcn
          = parse_fcn_file (interp, file.substr (0, len - 2), nm, dir_name,
                            dispatch_type, package_name, false,
                            autoload, autoload, relative_lookup);

        if (ov_fcn.is_defined ())
          {
            octave_function *tmpfcn = ov_fcn.function_value ();

            if (tmpfcn)
              doc_string = tmpfcn->doc_string ();
          }

        octave_function *tmpfcn
          = dyn_loader.load_mex (nm, file, relative_lookup);

        if (tmpfcn)
          {
            tmpfcn->document (doc_string);
            tmpfcn->stash_package_name (package_name);

            retval = octave_value (tmpfcn);
          }
      }
    else if (len > 2)
      {
        retval = parse_fcn_file (interp, file, nm, dir_name,
                                 dispatch_type, package_name, true,
                                 autoload, autoload, relative_lookup);
      }

    return retval;
  }

DEFMETHOD (autoload, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {@var{autoload_map} =} autoload ()
@deftypefnx {} {} autoload (@var{function}, @var{file})
@deftypefnx {} {} autoload (@dots{}, "remove")
Define @var{function} to autoload from @var{file}.

The second argument, @var{file}, should be an absolute filename or a file
name in the same directory as the function or script from which the autoload
command was run.  @var{file} @emph{should not} depend on the Octave load
path.

Normally, calls to @code{autoload} appear in PKG_ADD script files that are
evaluated when a directory is added to Octave's load path.  To avoid having
to hardcode directory names in @var{file}, if @var{file} is in the same
directory as the PKG_ADD script then

@example
autoload ("foo", "bar.oct");
@end example

@noindent
will load the function @code{foo} from the file @code{bar.oct}.  The above
usage when @code{bar.oct} is not in the same directory, or usages such as

@example
autoload ("foo", file_in_loadpath ("bar.oct"))
@end example

@noindent
are strongly discouraged, as their behavior may be unpredictable.

With no arguments, return a structure containing the current autoload map.

If a third argument @qcode{"remove"} is given, the function is cleared and
not loaded anymore during the current Octave session.

@seealso{PKG_ADD}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin == 1 || nargin > 3)
    print_usage ();

  tree_evaluator& tw = interp.get_evaluator ();

  if (nargin == 0)
    return octave_value (tw.get_autoload_map ());
  else
    {
      string_vector argv = args.make_argv ("autoload");

      if (nargin == 2)
        tw.add_autoload (argv[1], argv[2]);
      else if (nargin == 3)
        {
          if (argv[3] != "remove")
            error_with_id ("Octave:invalid-input-arg",
                           "autoload: third argument can only be 'remove'");

          tw.remove_autoload (argv[1], argv[2]);
        }
    }

  return octave_value_list ();
}

DEFMETHOD (mfilename, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} mfilename ()
@deftypefnx {} {} mfilename ("fullpath")
@deftypefnx {} {} mfilename ("fullpathext")
Return the name of the currently executing file.

The base name of the currently executing script or function is returned without
any extension.  If called from outside an m-file, such as the command line,
return the empty string.

Given the argument @qcode{"fullpath"}, include the directory part of the
filename, but not the extension.

Given the argument @qcode{"fullpathext"}, include the directory part of
the filename and the extension.
@seealso{inputname, dbstack}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin > 1)
    print_usage ();

  std::string opt;

  if (nargin == 1)
    opt = args(0).xstring_value ("mfilename: option argument must be a string");

  return octave_value (interp.mfilename (opt));
}

  // Execute the contents of a script file.  For compatibility with
  // Matlab, also execute a function file by calling the function it
  // defines with no arguments and nargout = 0.

  void
  source_file (const std::string& file_name, const std::string& context,
               bool verbose, bool require_file)
  {
    interpreter& interp = __get_interpreter__ ();

    interp.source_file (file_name, context, verbose, require_file);
  }

DEFMETHOD (source, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} source (@var{file})
@deftypefnx {} {} source (@var{file}, @var{context})
Parse and execute the contents of @var{file}.

Without specifying @var{context}, this is equivalent to executing commands
from a script file, but without requiring the file to be named
@file{@var{file}.m} or to be on the execution path.

Instead of the current context, the script may be executed in either the
context of the function that called the present function
(@qcode{"caller"}), or the top-level context (@qcode{"base"}).
@seealso{run}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  std::string file_name
    = args(0).xstring_value ("source: FILE must be a string");

  std::string context;
  if (nargin == 2)
    context = args(1).xstring_value ("source: CONTEXT must be a string");

  interp.source_file (file_name, context);

  return octave_value_list ();
}

  //! Evaluate an Octave function (built-in or interpreted) and return
  //! the list of result values.
  //!
  //! @param name The name of the function to call.
  //! @param args The arguments to the function.
  //! @param nargout The number of output arguments expected.
  //! @return A list of output values.  The length of the list is not
  //!         necessarily the same as @c nargout.

  octave_value_list
  feval (const char *name, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (name, args, nargout);
  }

  octave_value_list
  feval (const std::string& name, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (name, args, nargout);
  }

  octave_value_list
  feval (octave_function *fcn, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (fcn, args, nargout);
  }

  octave_value_list
  feval (const octave_value& val, const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (val, args, nargout);
  }

  octave_value_list
  feval (const octave_value_list& args, int nargout)
  {
    interpreter& interp = __get_interpreter__ ();

    return interp.feval (args, nargout);
  }

DEFMETHOD (feval, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn {} {} feval (@var{name}, @dots{})
Evaluate the function named @var{name}.

Any arguments after the first are passed as inputs to the named function.
For example,

@example
@group
feval ("acos", -1)
     @result{} 3.1416
@end group
@end example

@noindent
calls the function @code{acos} with the argument @samp{-1}.

The function @code{feval} can also be used with function handles of any sort
(@pxref{Function Handles}).  Historically, @code{feval} was the only way to
call user-supplied functions in strings, but function handles are now
preferred due to the cleaner syntax they offer.  For example,

@example
@group
@var{f} = @@exp;
feval (@var{f}, 1)
    @result{} 2.7183
@var{f} (1)
    @result{} 2.7183
@end group
@end example

@noindent
are equivalent ways to call the function referred to by @var{f}.  If it
cannot be predicted beforehand whether @var{f} is a function handle,
function name in a string, or inline function then @code{feval} can be used
instead.
@end deftypefn */)
{
  if (args.length () == 0)
    print_usage ();

  return interp.feval (args, nargout);
}

DEFMETHOD (builtin, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn {} {[@dots{}] =} builtin (@var{f}, @dots{})
Call the base function @var{f} even if @var{f} is overloaded to another
function for the given type signature.

This is normally useful when doing object-oriented programming and there is
a requirement to call one of Octave's base functions rather than the
overloaded one of a new class.

A trivial example which redefines the @code{sin} function to be the
@code{cos} function shows how @code{builtin} works.

@example
@group
sin (0)
  @result{} 0
function y = sin (x), y = cos (x); endfunction
sin (0)
  @result{} 1
builtin ("sin", 0)
  @result{} 0
@end group
@end example
@end deftypefn */)
{
  octave_value_list retval;

  if (args.length () == 0)
    print_usage ();

  const std::string name (args(0).xstring_value ("builtin: function name (F) must be a string"));

  symbol_table& symtab = interp.get_symbol_table ();

  octave_value fcn = symtab.builtin_find (name);

  if (fcn.is_defined ())
    retval = interp.feval (fcn.function_value (), args.splice (0, 1), nargout);
  else
    error ("builtin: lookup for symbol '%s' failed", name.c_str ());

  return retval;
}

  void
  cleanup_statement_list (tree_statement_list **lst)
  {
    if (*lst)
      {
        delete *lst;
        *lst = nullptr;
      }
  }

DEFMETHOD (eval, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} eval (@var{try})
@deftypefnx {} {} eval (@var{try}, @var{catch})
Parse the string @var{try} and evaluate it as if it were an Octave
program.

If execution fails, evaluate the optional string @var{catch}.

The string @var{try} is evaluated in the current context, so any results
remain available after @code{eval} returns.

The following example creates the variable @var{A} with the approximate
value of 3.1416 in the current workspace.

@example
eval ("A = acos(-1);");
@end example

If an error occurs during the evaluation of @var{try} then the @var{catch}
string is evaluated, as the following example shows:

@example
@group
eval ('error ("This is a bad example");',
      'printf ("This error occurred:\n%s\n", lasterr ());');
     @print{} This error occurred:
        This is a bad example
@end group
@end example

Programming Note: if you are only using @code{eval} as an error-capturing
mechanism, rather than for the execution of arbitrary code strings,
Consider using try/catch blocks or unwind_protect/unwind_protect_cleanup
blocks instead.  These techniques have higher performance and don't
introduce the security considerations that the evaluation of arbitrary code
does.
@seealso{evalin, evalc, assignin, feval}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  if (! args(0).is_string () || args(0).rows () > 1 || args(0).ndims () != 2)
    error ("eval: TRY must be a string");

  std::string try_code = args(0).string_value ();

  if (nargin == 1)
    return interp.eval (try_code, nargout);
  else
    {
      if (! args(1).is_string () || args(1).rows () > 1
          || args(1).ndims () != 2)
        error ("eval: CATCH must be a string");

      std::string catch_code = args(1).string_value ();

      return interp.eval (try_code, catch_code, nargout);
    }
}

/*

%!shared x
%! x = 1;

%!assert (eval ("x"), 1)
%!assert (eval ("x;"))
%!assert (eval ("x;"), 1)

%!test
%! y = eval ("x");
%! assert (y, 1);

%!test
%! y = eval ("x;");
%! assert (y, 1);

%!test
%! eval ("x = 1;");
%! assert (x,1);

%!test
%! eval ("flipud = 2;");
%! assert (flipud, 2);

%!function y = __f ()
%!  eval ("flipud = 2;");
%!  y = flipud;
%!endfunction
%!assert (__f(), 2)

%!test <*35645>
%! [a,] = gcd (1,2);
%! [a,b,] = gcd (1, 2);

## Can't assign to a keyword
%!error eval ("switch = 13;")

%!shared str
%! str = "disp ('hello');";
%! str(:,:,2) = str(:,:,1);

%!error <TRY must be a string> eval (1)
%!error <TRY must be a string> eval (['a';'b'])
%!error <TRY must be a string> eval (str)

%!error <CATCH must be a string> eval (str(:,:,1), 1)
%!error <CATCH must be a string> eval (str(:,:,1), ['a';'b'])
%!error <CATCH must be a string> eval (str(:,:,1), str)

*/

DEFMETHOD (assignin, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn {} {} assignin (@var{context}, @var{varname}, @var{value})
Assign @var{value} to @var{varname} in context @var{context}, which
may be either @qcode{"base"} or @qcode{"caller"}.
@seealso{evalin}
@end deftypefn */)
{
  if (args.length () != 3)
    print_usage ();

  std::string context
    = args(0).xstring_value ("assignin: CONTEXT must be a string");

  std::string varname
    = args(1).xstring_value ("assignin: VARNAME must be a string");

  interp.assignin (context, varname, args(2));

  return octave_value_list ();
}

/*

%!error assignin ("base", "switch", "13")

*/

DEFMETHOD (evalin, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {} evalin (@var{context}, @var{try})
@deftypefnx {} {} evalin (@var{context}, @var{try}, @var{catch})
Like @code{eval}, except that the expressions are evaluated in the context
@var{context}, which may be either @qcode{"caller"} or @qcode{"base"}.
@seealso{eval, assignin}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin < 2 || nargin > 3)
    print_usage ();

  std::string context
    = args(0).xstring_value ("evalin: CONTEXT must be a string");

  std::string try_code
    = args(1).xstring_value ("evalin: TRY must be a string");

  if (nargin == 3)
    {
      std::string catch_code
        = args(2).xstring_value ("evalin: CATCH must be a string");

      return interp.evalin (context, try_code, catch_code, nargout);
    }

  return interp.evalin (context, try_code, nargout);
}

DEFMETHOD (evalc, interp, args, nargout,
           doc: /* -*- texinfo -*-
@deftypefn  {} {@var{s} =} evalc (@var{try})
@deftypefnx {} {@var{s} =} evalc (@var{try}, @var{catch})
Parse and evaluate the string @var{try} as if it were an Octave program,
while capturing the output into the return variable @var{s}.

If execution fails, evaluate the optional string @var{catch}.

This function behaves like @code{eval}, but any output or warning messages
which would normally be written to the console are captured and returned in
the string @var{s}.

The @code{diary} is disabled during the execution of this function.  When
@code{system} is used, any output produced by external programs is
@emph{not} captured, unless their output is captured by the @code{system}
function itself.

@example
@group
s = evalc ("t = 42"), t
  @result{} s = t =  42

  @result{} t =  42
@end group
@end example
@seealso{eval, diary}
@end deftypefn */)
{
  int nargin = args.length ();

  if (nargin == 0 || nargin > 2)
    print_usage ();

  // Flush pending output and redirect stdout/stderr to capturing
  // buffer.

  octave_stdout.flush ();
  std::cerr.flush ();

  std::stringbuf buffer;

  std::streambuf *old_out_buf = octave_stdout.rdbuf (&buffer);
  std::streambuf *old_err_buf = std::cerr.rdbuf (&buffer);

  // Restore previous output buffers no matter how control exits this
  // function.  There's no need to flush here.  That has already
  // happened for the normal execution path.  If an error happens during
  // the eval, then the message is stored in the exception object and we
  // will display it later, after the buffers have been restored.

  unwind_action act ([=] (void)
                             {
                               octave_stdout.rdbuf (old_out_buf);
                               std::cerr.rdbuf (old_err_buf);
                             });

  // Call standard eval function.

  int eval_nargout = std::max (0, nargout - 1);

  octave_value_list retval = Feval (interp, args, eval_nargout);

  // Make sure we capture all pending output.

  octave_stdout.flush ();
  std::cerr.flush ();

  retval.prepend (buffer.str ());

  return retval;
}

/*

%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   str = evalc ("1");
%!   assert (str, "ans = 1\n");
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!assert (evalc ("1;"), "")

%!test
%! [s, y] = evalc ("1");
%! assert (s, "");
%! assert (y, 1);

%!test
%! [s, y] = evalc ("1;");
%! assert (s, "");
%! assert (y, 1);

%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   str = evalc ("y = 2");
%!   assert (str, "y = 2\n");
%!   assert (y, 2);
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!test
%! assert (evalc ("y = 3;"), "");
%! assert (y, 3);

%!test
%! [s, a, b] = evalc ("deal (1, 2)");
%! assert (s, "");
%! assert (a, 1);
%! assert (b, 2);

%!function [a, b] = __f_evalc ()
%!  printf ("foo");
%!  fprintf (stdout, "bar ");
%!  disp (pi);
%!  a = 1;
%!  b = 2;
%!endfunction
%!test
%! [old_fmt, old_spacing] = format ();
%! unwind_protect
%!   format short;
%!   [s, a, b] = evalc ("__f_evalc ()");
%!   assert (s, "foobar 3.1416\n");
%!   assert (a, 1);
%!   assert (b, 2);
%! unwind_protect_cleanup
%!   format (old_fmt);
%!   format (old_spacing);
%! end_unwind_protect

%!error <foo> (evalc ("error ('foo')"))
%!error <bar> (evalc ("error ('foo')", "error ('bar')"))

%!test
%! warning ("off", "quiet", "local");
%! str = evalc ("warning ('foo')");
%! assert (str(1:13), "warning: foo\n");

%!test
%! warning ("off", "quiet", "local");
%! str = evalc ("error ('foo')", "warning ('bar')");
%! assert (str(1:13), "warning: bar\n");

%!error evalc ("switch = 13;")

*/

DEFUN (__parser_debug_flag__, args, nargout,
       doc: /* -*- texinfo -*-
@deftypefn  {} {@var{val} =} __parser_debug_flag__ ()
@deftypefnx {} {@var{old_val} =} __parser_debug_flag__ (@var{new_val})
Query or set the internal flag that determines whether Octave's parser
prints debug information as it processes an expression.
@seealso{__lexer_debug_flag__}
@end deftypefn */)
{
  octave_value retval;

  bool debug_flag = octave_debug;

  retval = set_internal_variable (debug_flag, args, nargout,
                                  "__parser_debug_flag__");

  octave_debug = debug_flag;

  return retval;
}

DEFMETHOD (__parse_file__, interp, args, ,
           doc: /* -*- texinfo -*-
@deftypefn {} {} __parse_file__ (@var{file}, @var{verbose})
Undocumented internal function.
@end deftypefn */)
{
  octave_value retval;

  int nargin = args.length ();

  if (nargin < 1 || nargin > 2)
    print_usage ();

  std::string file
    = args(0).xstring_value ("__parse_file__: expecting filename as argument");

  std::string full_file = sys::file_ops::tilde_expand (file);

  full_file = sys::env::make_absolute (full_file);

  std::string dir_name;

  std::size_t file_len = file.length ();

  if ((file_len > 4 && file.substr (file_len-4) == ".oct")
      || (file_len > 4 && file.substr (file_len-4) == ".mex")
      || (file_len > 2 && file.substr (file_len-2) == ".m"))
    {
      file = sys::env::base_pathname (file);
      file = file.substr (0, file.find_last_of ('.'));

      std::size_t pos = file.find_last_of (sys::file_ops::dir_sep_str ());
      if (pos != std::string::npos)
        {
          dir_name = file.substr (0, pos);
          file = file.substr (pos+1);
        }
    }

  if (nargin == 2)
    octave_stdout << "parsing " << full_file << std::endl;

  octave_value ov_fcn
    = parse_fcn_file (interp, full_file, file, dir_name, "", "", true,
                      false, false, false);

  return retval;
}

OCTAVE_END_NAMESPACE(octave)
