/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_OCTAVE_LIBINTERP_PARSE_TREE_OCT_PARSE_H_INCLUDED
# define YY_OCTAVE_LIBINTERP_PARSE_TREE_OCT_PARSE_H_INCLUDED
/* Debug traces.  */
#ifndef OCTAVE_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define OCTAVE_DEBUG 1
#  else
#   define OCTAVE_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define OCTAVE_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined OCTAVE_DEBUG */
#if OCTAVE_DEBUG
extern int octave_debug;
#endif

/* Token kinds.  */
#ifndef OCTAVE_TOKENTYPE
# define OCTAVE_TOKENTYPE
  enum octave_tokentype
  {
    OCTAVE_EMPTY = -2,
    OCTAVE_EOF = 0,                /* "end of file"  */
    OCTAVE_error = 256,            /* error  */
    OCTAVE_UNDEF = 257,            /* "invalid token"  */
    ADD_EQ = 258,                  /* ADD_EQ  */
    SUB_EQ = 259,                  /* SUB_EQ  */
    MUL_EQ = 260,                  /* MUL_EQ  */
    DIV_EQ = 261,                  /* DIV_EQ  */
    LEFTDIV_EQ = 262,              /* LEFTDIV_EQ  */
    POW_EQ = 263,                  /* POW_EQ  */
    EMUL_EQ = 264,                 /* EMUL_EQ  */
    EDIV_EQ = 265,                 /* EDIV_EQ  */
    ELEFTDIV_EQ = 266,             /* ELEFTDIV_EQ  */
    EPOW_EQ = 267,                 /* EPOW_EQ  */
    AND_EQ = 268,                  /* AND_EQ  */
    OR_EQ = 269,                   /* OR_EQ  */
    EXPR_AND_AND = 270,            /* EXPR_AND_AND  */
    EXPR_OR_OR = 271,              /* EXPR_OR_OR  */
    EXPR_AND = 272,                /* EXPR_AND  */
    EXPR_OR = 273,                 /* EXPR_OR  */
    EXPR_LT = 274,                 /* EXPR_LT  */
    EXPR_LE = 275,                 /* EXPR_LE  */
    EXPR_EQ = 276,                 /* EXPR_EQ  */
    EXPR_NE = 277,                 /* EXPR_NE  */
    EXPR_GE = 278,                 /* EXPR_GE  */
    EXPR_GT = 279,                 /* EXPR_GT  */
    LEFTDIV = 280,                 /* LEFTDIV  */
    EMUL = 281,                    /* EMUL  */
    EDIV = 282,                    /* EDIV  */
    ELEFTDIV = 283,                /* ELEFTDIV  */
    HERMITIAN = 284,               /* HERMITIAN  */
    TRANSPOSE = 285,               /* TRANSPOSE  */
    PLUS_PLUS = 286,               /* PLUS_PLUS  */
    MINUS_MINUS = 287,             /* MINUS_MINUS  */
    POW = 288,                     /* POW  */
    EPOW = 289,                    /* EPOW  */
    NUMBER = 290,                  /* NUMBER  */
    STRUCT_ELT = 291,              /* STRUCT_ELT  */
    NAME = 292,                    /* NAME  */
    END = 293,                     /* END  */
    DQ_STRING = 294,               /* DQ_STRING  */
    SQ_STRING = 295,               /* SQ_STRING  */
    FOR = 296,                     /* FOR  */
    PARFOR = 297,                  /* PARFOR  */
    WHILE = 298,                   /* WHILE  */
    DO = 299,                      /* DO  */
    UNTIL = 300,                   /* UNTIL  */
    SPMD = 301,                    /* SPMD  */
    IF = 302,                      /* IF  */
    ELSEIF = 303,                  /* ELSEIF  */
    ELSE = 304,                    /* ELSE  */
    SWITCH = 305,                  /* SWITCH  */
    CASE = 306,                    /* CASE  */
    OTHERWISE = 307,               /* OTHERWISE  */
    BREAK = 308,                   /* BREAK  */
    CONTINUE = 309,                /* CONTINUE  */
    FUNC_RET = 310,                /* FUNC_RET  */
    UNWIND = 311,                  /* UNWIND  */
    CLEANUP = 312,                 /* CLEANUP  */
    TRY = 313,                     /* TRY  */
    CATCH = 314,                   /* CATCH  */
    GLOBAL = 315,                  /* GLOBAL  */
    PERSISTENT = 316,              /* PERSISTENT  */
    FCN_HANDLE = 317,              /* FCN_HANDLE  */
    CLASSDEF = 318,                /* CLASSDEF  */
    PROPERTIES = 319,              /* PROPERTIES  */
    METHODS = 320,                 /* METHODS  */
    EVENTS = 321,                  /* EVENTS  */
    ENUMERATION = 322,             /* ENUMERATION  */
    METAQUERY = 323,               /* METAQUERY  */
    SUPERCLASSREF = 324,           /* SUPERCLASSREF  */
    FQ_IDENT = 325,                /* FQ_IDENT  */
    GET = 326,                     /* GET  */
    SET = 327,                     /* SET  */
    FCN = 328,                     /* FCN  */
    ARGUMENTS = 329,               /* ARGUMENTS  */
    LEXICAL_ERROR = 330,           /* LEXICAL_ERROR  */
    END_OF_INPUT = 331,            /* END_OF_INPUT  */
    INPUT_FILE = 332,              /* INPUT_FILE  */
    UNARY = 333                    /* UNARY  */
  };
  typedef enum octave_tokentype octave_token_kind_t;
#endif

/* Value type.  */
#if ! defined OCTAVE_STYPE && ! defined OCTAVE_STYPE_IS_DECLARED
union OCTAVE_STYPE
{
#line 139 "../libinterp/parse-tree/oct-parse.yy"

  int dummy_type;

  // The type of the basic tokens returned by the lexer.
  octave::token *tok_val;

  // Comment strings that we need to deal with mid-rule.
  octave::comment_list *comment_type;

  // Types for the nonterminals we generate.
  char punct_type;
  octave::tree *tree_type;
  octave::tree_matrix *tree_matrix_type;
  octave::tree_cell *tree_cell_type;
  octave::tree_expression *tree_expression_type;
  octave::tree_constant *tree_constant_type;
  octave::tree_fcn_handle *tree_fcn_handle_type;
  octave::tree_superclass_ref *tree_superclass_ref_type;
  octave::tree_metaclass_query *tree_metaclass_query_type;
  octave::tree_function_def *tree_function_def_type;
  octave::tree_anon_fcn_handle *tree_anon_fcn_handle_type;
  octave::tree_identifier *tree_identifier_type;
  octave::tree_index_expression *tree_index_expression_type;
  octave::tree_colon_expression *tree_colon_expression_type;
  octave::tree_argument_list *tree_argument_list_type;
  octave::tree_parameter_list *tree_parameter_list_type;
  octave::tree_command *tree_command_type;
  octave::tree_if_command *tree_if_command_type;
  octave::tree_if_clause *tree_if_clause_type;
  octave::tree_if_command_list *tree_if_command_list_type;
  octave::tree_switch_command *tree_switch_command_type;
  octave::tree_switch_case *tree_switch_case_type;
  octave::tree_switch_case_list *tree_switch_case_list_type;
  octave::tree_decl_elt *tree_decl_elt_type;
  octave::tree_decl_init_list *tree_decl_init_list_type;
  octave::tree_decl_command *tree_decl_command_type;
  octave::tree_statement *tree_statement_type;
  octave::tree_statement_list *tree_statement_list_type;
  octave::tree_arguments_block *tree_arguments_block_type;
  octave::tree_args_block_attribute_list *tree_args_block_attribute_list_type;
  octave::tree_args_block_validation_list *tree_args_block_validation_list_type;
  octave::tree_arg_size_spec *tree_arg_size_spec_type;
  octave::tree_arg_validation *tree_arg_validation_type;
  octave::tree_arg_validation_fcns *tree_arg_validation_fcns_type;
  octave_user_function *octave_user_function_type;

  octave::tree_classdef *tree_classdef_type;
  octave::tree_classdef_attribute* tree_classdef_attribute_type;
  octave::tree_classdef_attribute_list* tree_classdef_attribute_list_type;
  octave::tree_classdef_superclass* tree_classdef_superclass_type;
  octave::tree_classdef_superclass_list* tree_classdef_superclass_list_type;
  octave::tree_classdef_body* tree_classdef_body_type;
  octave::tree_classdef_property* tree_classdef_property_type;
  octave::tree_classdef_property_list* tree_classdef_property_list_type;
  octave::tree_classdef_properties_block* tree_classdef_properties_block_type;
  octave::tree_classdef_methods_list* tree_classdef_methods_list_type;
  octave::tree_classdef_methods_block* tree_classdef_methods_block_type;
  octave::tree_classdef_event* tree_classdef_event_type;
  octave::tree_classdef_events_list* tree_classdef_events_list_type;
  octave::tree_classdef_events_block* tree_classdef_events_block_type;
  octave::tree_classdef_enum* tree_classdef_enum_type;
  octave::tree_classdef_enum_list* tree_classdef_enum_list_type;
  octave::tree_classdef_enum_block* tree_classdef_enum_block_type;

#line 215 "libinterp/parse-tree/oct-parse.h"

};
typedef union OCTAVE_STYPE OCTAVE_STYPE;
# define OCTAVE_STYPE_IS_TRIVIAL 1
# define OCTAVE_STYPE_IS_DECLARED 1
#endif




#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct octave_pstate octave_pstate;


int octave_parse (octave::base_parser& parser);
int octave_push_parse (octave_pstate *ps,
                  int pushed_char, OCTAVE_STYPE const *pushed_val, octave::base_parser& parser);
int octave_pull_parse (octave_pstate *ps, octave::base_parser& parser);
octave_pstate *octave_pstate_new (void);
void octave_pstate_delete (octave_pstate *ps);


#endif /* !YY_OCTAVE_LIBINTERP_PARSE_TREE_OCT_PARSE_H_INCLUDED  */
