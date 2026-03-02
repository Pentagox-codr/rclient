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
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         _mesa_glsl_parse
#define yylex           _mesa_glsl_lex
#define yyerror         _mesa_glsl_error
#define yydebug         _mesa_glsl_debug
#define yynerrs         _mesa_glsl_nerrs

/* First part of user prologue.  */
#line 1 "src/glsl/glsl_parser.yy"

/*
 * Copyright © 2008, 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _MSC_VER
#include <strings.h>
#endif
#include <assert.h>

#include "ast.h"
#include "glsl_parser_extras.h"
#include "glsl_types.h"
#include "main/context.h"

#if defined(_MSC_VER)
#	pragma warning(disable: 4065) // warning C4065: switch statement contains 'default' but no 'case' labels
#	pragma warning(disable: 4244) // warning C4244: '=' : conversion from 'double' to 'float', possible loss of data
#endif // defined(_MSC_VER)

#undef yyerror

static void yyerror(YYLTYPE *loc, _mesa_glsl_parse_state *st, const char *msg)
{
   _mesa_glsl_error(loc, st, "%s", msg);
}

static int
_mesa_glsl_lex(YYSTYPE *val, YYLTYPE *loc, _mesa_glsl_parse_state *state)
{
   return _mesa_glsl_lexer_lex(val, loc, state->scanner);
}

static bool match_layout_qualifier(const char *s1, const char *s2,
                                   _mesa_glsl_parse_state *state)
{
   /* From the GLSL 1.50 spec, section 4.3.8 (Layout Qualifiers):
    *
    *     "The tokens in any layout-qualifier-id-list ... are not case
    *     sensitive, unless explicitly noted otherwise."
    *
    * The text "unless explicitly noted otherwise" appears to be
    * vacuous--no desktop GLSL spec (up through GLSL 4.40) notes
    * otherwise.
    *
    * However, the GLSL ES 3.00 spec says, in section 4.3.8 (Layout
    * Qualifiers):
    *
    *     "As for other identifiers, they are case sensitive."
    *
    * So we need to do a case-sensitive or a case-insensitive match,
    * depending on whether we are compiling for GLSL ES.
    */
   if (state->es_shader)
      return strcmp(s1, s2);
   else
      return strcasecmp(s1, s2);
}

#line 157 "src/glsl/glsl_parser.cpp"

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

#include "glsl_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ATTRIBUTE = 3,                  /* ATTRIBUTE  */
  YYSYMBOL_CONST_TOK = 4,                  /* CONST_TOK  */
  YYSYMBOL_BOOL_TOK = 5,                   /* BOOL_TOK  */
  YYSYMBOL_FLOAT_TOK = 6,                  /* FLOAT_TOK  */
  YYSYMBOL_INT_TOK = 7,                    /* INT_TOK  */
  YYSYMBOL_UINT_TOK = 8,                   /* UINT_TOK  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_FOR = 13,                       /* FOR  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_DISCARD = 15,                   /* DISCARD  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_DEFAULT = 19,                   /* DEFAULT  */
  YYSYMBOL_BVEC2 = 20,                     /* BVEC2  */
  YYSYMBOL_BVEC3 = 21,                     /* BVEC3  */
  YYSYMBOL_BVEC4 = 22,                     /* BVEC4  */
  YYSYMBOL_IVEC2 = 23,                     /* IVEC2  */
  YYSYMBOL_IVEC3 = 24,                     /* IVEC3  */
  YYSYMBOL_IVEC4 = 25,                     /* IVEC4  */
  YYSYMBOL_UVEC2 = 26,                     /* UVEC2  */
  YYSYMBOL_UVEC3 = 27,                     /* UVEC3  */
  YYSYMBOL_UVEC4 = 28,                     /* UVEC4  */
  YYSYMBOL_VEC2 = 29,                      /* VEC2  */
  YYSYMBOL_VEC3 = 30,                      /* VEC3  */
  YYSYMBOL_VEC4 = 31,                      /* VEC4  */
  YYSYMBOL_CENTROID = 32,                  /* CENTROID  */
  YYSYMBOL_IN_TOK = 33,                    /* IN_TOK  */
  YYSYMBOL_OUT_TOK = 34,                   /* OUT_TOK  */
  YYSYMBOL_INOUT_TOK = 35,                 /* INOUT_TOK  */
  YYSYMBOL_UNIFORM = 36,                   /* UNIFORM  */
  YYSYMBOL_VARYING = 37,                   /* VARYING  */
  YYSYMBOL_SAMPLE = 38,                    /* SAMPLE  */
  YYSYMBOL_NOPERSPECTIVE = 39,             /* NOPERSPECTIVE  */
  YYSYMBOL_FLAT = 40,                      /* FLAT  */
  YYSYMBOL_SMOOTH = 41,                    /* SMOOTH  */
  YYSYMBOL_MAT2X2 = 42,                    /* MAT2X2  */
  YYSYMBOL_MAT2X3 = 43,                    /* MAT2X3  */
  YYSYMBOL_MAT2X4 = 44,                    /* MAT2X4  */
  YYSYMBOL_MAT3X2 = 45,                    /* MAT3X2  */
  YYSYMBOL_MAT3X3 = 46,                    /* MAT3X3  */
  YYSYMBOL_MAT3X4 = 47,                    /* MAT3X4  */
  YYSYMBOL_MAT4X2 = 48,                    /* MAT4X2  */
  YYSYMBOL_MAT4X3 = 49,                    /* MAT4X3  */
  YYSYMBOL_MAT4X4 = 50,                    /* MAT4X4  */
  YYSYMBOL_SAMPLER1D = 51,                 /* SAMPLER1D  */
  YYSYMBOL_SAMPLER2D = 52,                 /* SAMPLER2D  */
  YYSYMBOL_SAMPLER3D = 53,                 /* SAMPLER3D  */
  YYSYMBOL_SAMPLERCUBE = 54,               /* SAMPLERCUBE  */
  YYSYMBOL_SAMPLER1DSHADOW = 55,           /* SAMPLER1DSHADOW  */
  YYSYMBOL_SAMPLER2DSHADOW = 56,           /* SAMPLER2DSHADOW  */
  YYSYMBOL_SAMPLERCUBESHADOW = 57,         /* SAMPLERCUBESHADOW  */
  YYSYMBOL_SAMPLER1DARRAY = 58,            /* SAMPLER1DARRAY  */
  YYSYMBOL_SAMPLER2DARRAY = 59,            /* SAMPLER2DARRAY  */
  YYSYMBOL_SAMPLER1DARRAYSHADOW = 60,      /* SAMPLER1DARRAYSHADOW  */
  YYSYMBOL_SAMPLER2DARRAYSHADOW = 61,      /* SAMPLER2DARRAYSHADOW  */
  YYSYMBOL_SAMPLERCUBEARRAY = 62,          /* SAMPLERCUBEARRAY  */
  YYSYMBOL_SAMPLERCUBEARRAYSHADOW = 63,    /* SAMPLERCUBEARRAYSHADOW  */
  YYSYMBOL_ISAMPLER1D = 64,                /* ISAMPLER1D  */
  YYSYMBOL_ISAMPLER2D = 65,                /* ISAMPLER2D  */
  YYSYMBOL_ISAMPLER3D = 66,                /* ISAMPLER3D  */
  YYSYMBOL_ISAMPLERCUBE = 67,              /* ISAMPLERCUBE  */
  YYSYMBOL_ISAMPLER1DARRAY = 68,           /* ISAMPLER1DARRAY  */
  YYSYMBOL_ISAMPLER2DARRAY = 69,           /* ISAMPLER2DARRAY  */
  YYSYMBOL_ISAMPLERCUBEARRAY = 70,         /* ISAMPLERCUBEARRAY  */
  YYSYMBOL_USAMPLER1D = 71,                /* USAMPLER1D  */
  YYSYMBOL_USAMPLER2D = 72,                /* USAMPLER2D  */
  YYSYMBOL_USAMPLER3D = 73,                /* USAMPLER3D  */
  YYSYMBOL_USAMPLERCUBE = 74,              /* USAMPLERCUBE  */
  YYSYMBOL_USAMPLER1DARRAY = 75,           /* USAMPLER1DARRAY  */
  YYSYMBOL_USAMPLER2DARRAY = 76,           /* USAMPLER2DARRAY  */
  YYSYMBOL_USAMPLERCUBEARRAY = 77,         /* USAMPLERCUBEARRAY  */
  YYSYMBOL_SAMPLER2DRECT = 78,             /* SAMPLER2DRECT  */
  YYSYMBOL_ISAMPLER2DRECT = 79,            /* ISAMPLER2DRECT  */
  YYSYMBOL_USAMPLER2DRECT = 80,            /* USAMPLER2DRECT  */
  YYSYMBOL_SAMPLER2DRECTSHADOW = 81,       /* SAMPLER2DRECTSHADOW  */
  YYSYMBOL_SAMPLERBUFFER = 82,             /* SAMPLERBUFFER  */
  YYSYMBOL_ISAMPLERBUFFER = 83,            /* ISAMPLERBUFFER  */
  YYSYMBOL_USAMPLERBUFFER = 84,            /* USAMPLERBUFFER  */
  YYSYMBOL_SAMPLER2DMS = 85,               /* SAMPLER2DMS  */
  YYSYMBOL_ISAMPLER2DMS = 86,              /* ISAMPLER2DMS  */
  YYSYMBOL_USAMPLER2DMS = 87,              /* USAMPLER2DMS  */
  YYSYMBOL_SAMPLER2DMSARRAY = 88,          /* SAMPLER2DMSARRAY  */
  YYSYMBOL_ISAMPLER2DMSARRAY = 89,         /* ISAMPLER2DMSARRAY  */
  YYSYMBOL_USAMPLER2DMSARRAY = 90,         /* USAMPLER2DMSARRAY  */
  YYSYMBOL_SAMPLEREXTERNALOES = 91,        /* SAMPLEREXTERNALOES  */
  YYSYMBOL_IMAGE1D = 92,                   /* IMAGE1D  */
  YYSYMBOL_IMAGE2D = 93,                   /* IMAGE2D  */
  YYSYMBOL_IMAGE3D = 94,                   /* IMAGE3D  */
  YYSYMBOL_IMAGE2DRECT = 95,               /* IMAGE2DRECT  */
  YYSYMBOL_IMAGECUBE = 96,                 /* IMAGECUBE  */
  YYSYMBOL_IMAGEBUFFER = 97,               /* IMAGEBUFFER  */
  YYSYMBOL_IMAGE1DARRAY = 98,              /* IMAGE1DARRAY  */
  YYSYMBOL_IMAGE2DARRAY = 99,              /* IMAGE2DARRAY  */
  YYSYMBOL_IMAGECUBEARRAY = 100,           /* IMAGECUBEARRAY  */
  YYSYMBOL_IMAGE2DMS = 101,                /* IMAGE2DMS  */
  YYSYMBOL_IMAGE2DMSARRAY = 102,           /* IMAGE2DMSARRAY  */
  YYSYMBOL_IIMAGE1D = 103,                 /* IIMAGE1D  */
  YYSYMBOL_IIMAGE2D = 104,                 /* IIMAGE2D  */
  YYSYMBOL_IIMAGE3D = 105,                 /* IIMAGE3D  */
  YYSYMBOL_IIMAGE2DRECT = 106,             /* IIMAGE2DRECT  */
  YYSYMBOL_IIMAGECUBE = 107,               /* IIMAGECUBE  */
  YYSYMBOL_IIMAGEBUFFER = 108,             /* IIMAGEBUFFER  */
  YYSYMBOL_IIMAGE1DARRAY = 109,            /* IIMAGE1DARRAY  */
  YYSYMBOL_IIMAGE2DARRAY = 110,            /* IIMAGE2DARRAY  */
  YYSYMBOL_IIMAGECUBEARRAY = 111,          /* IIMAGECUBEARRAY  */
  YYSYMBOL_IIMAGE2DMS = 112,               /* IIMAGE2DMS  */
  YYSYMBOL_IIMAGE2DMSARRAY = 113,          /* IIMAGE2DMSARRAY  */
  YYSYMBOL_UIMAGE1D = 114,                 /* UIMAGE1D  */
  YYSYMBOL_UIMAGE2D = 115,                 /* UIMAGE2D  */
  YYSYMBOL_UIMAGE3D = 116,                 /* UIMAGE3D  */
  YYSYMBOL_UIMAGE2DRECT = 117,             /* UIMAGE2DRECT  */
  YYSYMBOL_UIMAGECUBE = 118,               /* UIMAGECUBE  */
  YYSYMBOL_UIMAGEBUFFER = 119,             /* UIMAGEBUFFER  */
  YYSYMBOL_UIMAGE1DARRAY = 120,            /* UIMAGE1DARRAY  */
  YYSYMBOL_UIMAGE2DARRAY = 121,            /* UIMAGE2DARRAY  */
  YYSYMBOL_UIMAGECUBEARRAY = 122,          /* UIMAGECUBEARRAY  */
  YYSYMBOL_UIMAGE2DMS = 123,               /* UIMAGE2DMS  */
  YYSYMBOL_UIMAGE2DMSARRAY = 124,          /* UIMAGE2DMSARRAY  */
  YYSYMBOL_IMAGE1DSHADOW = 125,            /* IMAGE1DSHADOW  */
  YYSYMBOL_IMAGE2DSHADOW = 126,            /* IMAGE2DSHADOW  */
  YYSYMBOL_IMAGE1DARRAYSHADOW = 127,       /* IMAGE1DARRAYSHADOW  */
  YYSYMBOL_IMAGE2DARRAYSHADOW = 128,       /* IMAGE2DARRAYSHADOW  */
  YYSYMBOL_COHERENT = 129,                 /* COHERENT  */
  YYSYMBOL_VOLATILE = 130,                 /* VOLATILE  */
  YYSYMBOL_RESTRICT = 131,                 /* RESTRICT  */
  YYSYMBOL_READONLY = 132,                 /* READONLY  */
  YYSYMBOL_WRITEONLY = 133,                /* WRITEONLY  */
  YYSYMBOL_ATOMIC_UINT = 134,              /* ATOMIC_UINT  */
  YYSYMBOL_STRUCT = 135,                   /* STRUCT  */
  YYSYMBOL_VOID_TOK = 136,                 /* VOID_TOK  */
  YYSYMBOL_WHILE = 137,                    /* WHILE  */
  YYSYMBOL_IDENTIFIER = 138,               /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 139,          /* TYPE_IDENTIFIER  */
  YYSYMBOL_NEW_IDENTIFIER = 140,           /* NEW_IDENTIFIER  */
  YYSYMBOL_FLOATCONSTANT = 141,            /* FLOATCONSTANT  */
  YYSYMBOL_INTCONSTANT = 142,              /* INTCONSTANT  */
  YYSYMBOL_UINTCONSTANT = 143,             /* UINTCONSTANT  */
  YYSYMBOL_BOOLCONSTANT = 144,             /* BOOLCONSTANT  */
  YYSYMBOL_FIELD_SELECTION = 145,          /* FIELD_SELECTION  */
  YYSYMBOL_LEFT_OP = 146,                  /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 147,                 /* RIGHT_OP  */
  YYSYMBOL_INC_OP = 148,                   /* INC_OP  */
  YYSYMBOL_DEC_OP = 149,                   /* DEC_OP  */
  YYSYMBOL_LE_OP = 150,                    /* LE_OP  */
  YYSYMBOL_GE_OP = 151,                    /* GE_OP  */
  YYSYMBOL_EQ_OP = 152,                    /* EQ_OP  */
  YYSYMBOL_NE_OP = 153,                    /* NE_OP  */
  YYSYMBOL_AND_OP = 154,                   /* AND_OP  */
  YYSYMBOL_OR_OP = 155,                    /* OR_OP  */
  YYSYMBOL_XOR_OP = 156,                   /* XOR_OP  */
  YYSYMBOL_MUL_ASSIGN = 157,               /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 158,               /* DIV_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 159,               /* ADD_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 160,               /* MOD_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 161,              /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 162,             /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 163,               /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 164,               /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 165,                /* OR_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 166,               /* SUB_ASSIGN  */
  YYSYMBOL_INVARIANT = 167,                /* INVARIANT  */
  YYSYMBOL_PRECISE = 168,                  /* PRECISE  */
  YYSYMBOL_LOWP = 169,                     /* LOWP  */
  YYSYMBOL_MEDIUMP = 170,                  /* MEDIUMP  */
  YYSYMBOL_HIGHP = 171,                    /* HIGHP  */
  YYSYMBOL_SUPERP = 172,                   /* SUPERP  */
  YYSYMBOL_PRECISION = 173,                /* PRECISION  */
  YYSYMBOL_VERSION_TOK = 174,              /* VERSION_TOK  */
  YYSYMBOL_EXTENSION = 175,                /* EXTENSION  */
  YYSYMBOL_LINE = 176,                     /* LINE  */
  YYSYMBOL_COLON = 177,                    /* COLON  */
  YYSYMBOL_EOL = 178,                      /* EOL  */
  YYSYMBOL_INTERFACE = 179,                /* INTERFACE  */
  YYSYMBOL_OUTPUT = 180,                   /* OUTPUT  */
  YYSYMBOL_PRAGMA_DEBUG_ON = 181,          /* PRAGMA_DEBUG_ON  */
  YYSYMBOL_PRAGMA_DEBUG_OFF = 182,         /* PRAGMA_DEBUG_OFF  */
  YYSYMBOL_PRAGMA_OPTIMIZE_ON = 183,       /* PRAGMA_OPTIMIZE_ON  */
  YYSYMBOL_PRAGMA_OPTIMIZE_OFF = 184,      /* PRAGMA_OPTIMIZE_OFF  */
  YYSYMBOL_PRAGMA_INVARIANT_ALL = 185,     /* PRAGMA_INVARIANT_ALL  */
  YYSYMBOL_LAYOUT_TOK = 186,               /* LAYOUT_TOK  */
  YYSYMBOL_ASM = 187,                      /* ASM  */
  YYSYMBOL_CLASS = 188,                    /* CLASS  */
  YYSYMBOL_UNION = 189,                    /* UNION  */
  YYSYMBOL_ENUM = 190,                     /* ENUM  */
  YYSYMBOL_TYPEDEF = 191,                  /* TYPEDEF  */
  YYSYMBOL_TEMPLATE = 192,                 /* TEMPLATE  */
  YYSYMBOL_THIS = 193,                     /* THIS  */
  YYSYMBOL_PACKED_TOK = 194,               /* PACKED_TOK  */
  YYSYMBOL_GOTO = 195,                     /* GOTO  */
  YYSYMBOL_INLINE_TOK = 196,               /* INLINE_TOK  */
  YYSYMBOL_NOINLINE = 197,                 /* NOINLINE  */
  YYSYMBOL_PUBLIC_TOK = 198,               /* PUBLIC_TOK  */
  YYSYMBOL_STATIC = 199,                   /* STATIC  */
  YYSYMBOL_EXTERN = 200,                   /* EXTERN  */
  YYSYMBOL_EXTERNAL = 201,                 /* EXTERNAL  */
  YYSYMBOL_LONG_TOK = 202,                 /* LONG_TOK  */
  YYSYMBOL_SHORT_TOK = 203,                /* SHORT_TOK  */
  YYSYMBOL_DOUBLE_TOK = 204,               /* DOUBLE_TOK  */
  YYSYMBOL_HALF = 205,                     /* HALF  */
  YYSYMBOL_FIXED_TOK = 206,                /* FIXED_TOK  */
  YYSYMBOL_UNSIGNED = 207,                 /* UNSIGNED  */
  YYSYMBOL_INPUT_TOK = 208,                /* INPUT_TOK  */
  YYSYMBOL_HVEC2 = 209,                    /* HVEC2  */
  YYSYMBOL_HVEC3 = 210,                    /* HVEC3  */
  YYSYMBOL_HVEC4 = 211,                    /* HVEC4  */
  YYSYMBOL_DVEC2 = 212,                    /* DVEC2  */
  YYSYMBOL_DVEC3 = 213,                    /* DVEC3  */
  YYSYMBOL_DVEC4 = 214,                    /* DVEC4  */
  YYSYMBOL_FVEC2 = 215,                    /* FVEC2  */
  YYSYMBOL_FVEC3 = 216,                    /* FVEC3  */
  YYSYMBOL_FVEC4 = 217,                    /* FVEC4  */
  YYSYMBOL_SAMPLER3DRECT = 218,            /* SAMPLER3DRECT  */
  YYSYMBOL_SIZEOF = 219,                   /* SIZEOF  */
  YYSYMBOL_CAST = 220,                     /* CAST  */
  YYSYMBOL_NAMESPACE = 221,                /* NAMESPACE  */
  YYSYMBOL_USING = 222,                    /* USING  */
  YYSYMBOL_RESOURCE = 223,                 /* RESOURCE  */
  YYSYMBOL_PATCH = 224,                    /* PATCH  */
  YYSYMBOL_SUBROUTINE = 225,               /* SUBROUTINE  */
  YYSYMBOL_ERROR_TOK = 226,                /* ERROR_TOK  */
  YYSYMBOL_COMMON = 227,                   /* COMMON  */
  YYSYMBOL_PARTITION = 228,                /* PARTITION  */
  YYSYMBOL_ACTIVE = 229,                   /* ACTIVE  */
  YYSYMBOL_FILTER = 230,                   /* FILTER  */
  YYSYMBOL_ROW_MAJOR = 231,                /* ROW_MAJOR  */
  YYSYMBOL_THEN = 232,                     /* THEN  */
  YYSYMBOL_233_ = 233,                     /* '('  */
  YYSYMBOL_234_ = 234,                     /* ')'  */
  YYSYMBOL_235_ = 235,                     /* '['  */
  YYSYMBOL_236_ = 236,                     /* ']'  */
  YYSYMBOL_237_ = 237,                     /* '.'  */
  YYSYMBOL_238_ = 238,                     /* ','  */
  YYSYMBOL_239_ = 239,                     /* '+'  */
  YYSYMBOL_240_ = 240,                     /* '-'  */
  YYSYMBOL_241_ = 241,                     /* '!'  */
  YYSYMBOL_242_ = 242,                     /* '~'  */
  YYSYMBOL_243_ = 243,                     /* '*'  */
  YYSYMBOL_244_ = 244,                     /* '/'  */
  YYSYMBOL_245_ = 245,                     /* '%'  */
  YYSYMBOL_246_ = 246,                     /* '<'  */
  YYSYMBOL_247_ = 247,                     /* '>'  */
  YYSYMBOL_248_ = 248,                     /* '&'  */
  YYSYMBOL_249_ = 249,                     /* '^'  */
  YYSYMBOL_250_ = 250,                     /* '|'  */
  YYSYMBOL_251_ = 251,                     /* '?'  */
  YYSYMBOL_252_ = 252,                     /* ':'  */
  YYSYMBOL_253_ = 253,                     /* '='  */
  YYSYMBOL_254_ = 254,                     /* ';'  */
  YYSYMBOL_255_ = 255,                     /* '{'  */
  YYSYMBOL_256_ = 256,                     /* '}'  */
  YYSYMBOL_YYACCEPT = 257,                 /* $accept  */
  YYSYMBOL_translation_unit = 258,         /* translation_unit  */
  YYSYMBOL_259_1 = 259,                    /* $@1  */
  YYSYMBOL_version_statement = 260,        /* version_statement  */
  YYSYMBOL_pragma_statement = 261,         /* pragma_statement  */
  YYSYMBOL_extension_statement_list = 262, /* extension_statement_list  */
  YYSYMBOL_any_identifier = 263,           /* any_identifier  */
  YYSYMBOL_extension_statement = 264,      /* extension_statement  */
  YYSYMBOL_external_declaration_list = 265, /* external_declaration_list  */
  YYSYMBOL_variable_identifier = 266,      /* variable_identifier  */
  YYSYMBOL_primary_expression = 267,       /* primary_expression  */
  YYSYMBOL_postfix_expression = 268,       /* postfix_expression  */
  YYSYMBOL_integer_expression = 269,       /* integer_expression  */
  YYSYMBOL_function_call = 270,            /* function_call  */
  YYSYMBOL_function_call_or_method = 271,  /* function_call_or_method  */
  YYSYMBOL_function_call_generic = 272,    /* function_call_generic  */
  YYSYMBOL_function_call_header_no_parameters = 273, /* function_call_header_no_parameters  */
  YYSYMBOL_function_call_header_with_parameters = 274, /* function_call_header_with_parameters  */
  YYSYMBOL_function_call_header = 275,     /* function_call_header  */
  YYSYMBOL_function_identifier = 276,      /* function_identifier  */
  YYSYMBOL_method_call_generic = 277,      /* method_call_generic  */
  YYSYMBOL_method_call_header_no_parameters = 278, /* method_call_header_no_parameters  */
  YYSYMBOL_method_call_header_with_parameters = 279, /* method_call_header_with_parameters  */
  YYSYMBOL_method_call_header = 280,       /* method_call_header  */
  YYSYMBOL_unary_expression = 281,         /* unary_expression  */
  YYSYMBOL_unary_operator = 282,           /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 283, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 284,      /* additive_expression  */
  YYSYMBOL_shift_expression = 285,         /* shift_expression  */
  YYSYMBOL_relational_expression = 286,    /* relational_expression  */
  YYSYMBOL_equality_expression = 287,      /* equality_expression  */
  YYSYMBOL_and_expression = 288,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 289,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 290,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 291,   /* logical_and_expression  */
  YYSYMBOL_logical_xor_expression = 292,   /* logical_xor_expression  */
  YYSYMBOL_logical_or_expression = 293,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 294,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 295,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 296,      /* assignment_operator  */
  YYSYMBOL_expression = 297,               /* expression  */
  YYSYMBOL_constant_expression = 298,      /* constant_expression  */
  YYSYMBOL_declaration = 299,              /* declaration  */
  YYSYMBOL_function_prototype = 300,       /* function_prototype  */
  YYSYMBOL_function_declarator = 301,      /* function_declarator  */
  YYSYMBOL_function_header_with_parameters = 302, /* function_header_with_parameters  */
  YYSYMBOL_function_header = 303,          /* function_header  */
  YYSYMBOL_parameter_declarator = 304,     /* parameter_declarator  */
  YYSYMBOL_parameter_declaration = 305,    /* parameter_declaration  */
  YYSYMBOL_parameter_qualifier = 306,      /* parameter_qualifier  */
  YYSYMBOL_parameter_direction_qualifier = 307, /* parameter_direction_qualifier  */
  YYSYMBOL_parameter_type_specifier = 308, /* parameter_type_specifier  */
  YYSYMBOL_init_declarator_list = 309,     /* init_declarator_list  */
  YYSYMBOL_single_declaration = 310,       /* single_declaration  */
  YYSYMBOL_fully_specified_type = 311,     /* fully_specified_type  */
  YYSYMBOL_layout_qualifier = 312,         /* layout_qualifier  */
  YYSYMBOL_layout_qualifier_id_list = 313, /* layout_qualifier_id_list  */
  YYSYMBOL_integer_constant = 314,         /* integer_constant  */
  YYSYMBOL_layout_qualifier_id = 315,      /* layout_qualifier_id  */
  YYSYMBOL_interface_block_layout_qualifier = 316, /* interface_block_layout_qualifier  */
  YYSYMBOL_interpolation_qualifier = 317,  /* interpolation_qualifier  */
  YYSYMBOL_type_qualifier = 318,           /* type_qualifier  */
  YYSYMBOL_auxiliary_storage_qualifier = 319, /* auxiliary_storage_qualifier  */
  YYSYMBOL_storage_qualifier = 320,        /* storage_qualifier  */
  YYSYMBOL_array_specifier = 321,          /* array_specifier  */
  YYSYMBOL_type_specifier = 322,           /* type_specifier  */
  YYSYMBOL_type_specifier_nonarray = 323,  /* type_specifier_nonarray  */
  YYSYMBOL_basic_type_specifier_nonarray = 324, /* basic_type_specifier_nonarray  */
  YYSYMBOL_precision_qualifier = 325,      /* precision_qualifier  */
  YYSYMBOL_struct_specifier = 326,         /* struct_specifier  */
  YYSYMBOL_struct_declaration_list = 327,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 328,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 329,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 330,        /* struct_declarator  */
  YYSYMBOL_initializer = 331,              /* initializer  */
  YYSYMBOL_initializer_list = 332,         /* initializer_list  */
  YYSYMBOL_declaration_statement = 333,    /* declaration_statement  */
  YYSYMBOL_statement = 334,                /* statement  */
  YYSYMBOL_simple_statement = 335,         /* simple_statement  */
  YYSYMBOL_compound_statement = 336,       /* compound_statement  */
  YYSYMBOL_337_2 = 337,                    /* $@2  */
  YYSYMBOL_statement_no_new_scope = 338,   /* statement_no_new_scope  */
  YYSYMBOL_compound_statement_no_new_scope = 339, /* compound_statement_no_new_scope  */
  YYSYMBOL_statement_list = 340,           /* statement_list  */
  YYSYMBOL_expression_statement = 341,     /* expression_statement  */
  YYSYMBOL_selection_statement = 342,      /* selection_statement  */
  YYSYMBOL_selection_rest_statement = 343, /* selection_rest_statement  */
  YYSYMBOL_condition = 344,                /* condition  */
  YYSYMBOL_switch_statement = 345,         /* switch_statement  */
  YYSYMBOL_switch_body = 346,              /* switch_body  */
  YYSYMBOL_case_label = 347,               /* case_label  */
  YYSYMBOL_case_label_list = 348,          /* case_label_list  */
  YYSYMBOL_case_statement = 349,           /* case_statement  */
  YYSYMBOL_case_statement_list = 350,      /* case_statement_list  */
  YYSYMBOL_iteration_statement = 351,      /* iteration_statement  */
  YYSYMBOL_for_init_statement = 352,       /* for_init_statement  */
  YYSYMBOL_conditionopt = 353,             /* conditionopt  */
  YYSYMBOL_for_rest_statement = 354,       /* for_rest_statement  */
  YYSYMBOL_jump_statement = 355,           /* jump_statement  */
  YYSYMBOL_external_declaration = 356,     /* external_declaration  */
  YYSYMBOL_function_definition = 357,      /* function_definition  */
  YYSYMBOL_interface_block = 358,          /* interface_block  */
  YYSYMBOL_basic_interface_block = 359,    /* basic_interface_block  */
  YYSYMBOL_interface_qualifier = 360,      /* interface_qualifier  */
  YYSYMBOL_instance_name_opt = 361,        /* instance_name_opt  */
  YYSYMBOL_member_list = 362,              /* member_list  */
  YYSYMBOL_member_declaration = 363,       /* member_declaration  */
  YYSYMBOL_layout_defaults = 364           /* layout_defaults  */
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

#if 1

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  257
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  386
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  540

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   487


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   241,     2,     2,     2,   245,   248,     2,
     233,   234,   243,   239,   238,   240,   237,   244,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   252,   254,
     246,   253,   247,   251,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   235,     2,   236,   249,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   255,   250,   256,   242,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   303,   303,   302,   314,   316,   323,   333,   334,   335,
     336,   337,   350,   352,   356,   357,   358,   362,   371,   379,
     387,   398,   399,   403,   410,   417,   424,   431,   438,   445,
     446,   452,   456,   463,   469,   478,   482,   486,   487,   496,
     497,   501,   502,   506,   512,   524,   528,   534,   542,   553,
     554,   558,   559,   563,   569,   581,   593,   594,   600,   606,
     616,   617,   618,   619,   623,   624,   630,   636,   645,   646,
     652,   661,   662,   668,   677,   678,   684,   690,   696,   705,
     706,   712,   721,   722,   731,   732,   741,   742,   751,   752,
     761,   762,   771,   772,   781,   782,   791,   792,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   815,
     819,   835,   839,   844,   848,   853,   860,   864,   865,   869,
     874,   882,   896,   906,   920,   925,   939,   943,   951,   959,
     971,   984,   990,   996,  1006,  1011,  1012,  1022,  1032,  1042,
    1056,  1063,  1073,  1083,  1093,  1103,  1115,  1130,  1137,  1148,
    1155,  1156,  1166,  1167,  1171,  1357,  1497,  1523,  1529,  1538,
    1544,  1550,  1560,  1566,  1571,  1572,  1573,  1574,  1575,  1594,
    1602,  1614,  1638,  1655,  1671,  1691,  1705,  1711,  1719,  1725,
    1731,  1737,  1743,  1749,  1770,  1776,  1781,  1786,  1792,  1797,
    1805,  1811,  1817,  1831,  1846,  1847,  1855,  1861,  1867,  1876,
    1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,
    1887,  1888,  1889,  1890,  1891,  1892,  1893,  1894,  1895,  1896,
    1897,  1898,  1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,
    1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,  1915,  1916,
    1917,  1918,  1919,  1920,  1921,  1922,  1923,  1924,  1925,  1926,
    1927,  1928,  1929,  1930,  1931,  1932,  1933,  1934,  1935,  1936,
    1937,  1938,  1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,
    1947,  1948,  1949,  1950,  1951,  1952,  1953,  1954,  1955,  1956,
    1957,  1958,  1959,  1960,  1961,  1962,  1963,  1964,  1965,  1966,
    1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,  1975,  1976,
    1980,  1985,  1990,  1998,  2005,  2014,  2019,  2027,  2046,  2051,
    2059,  2065,  2074,  2075,  2079,  2086,  2093,  2100,  2106,  2107,
    2111,  2112,  2113,  2114,  2115,  2116,  2120,  2127,  2126,  2140,
    2141,  2145,  2151,  2160,  2170,  2182,  2188,  2197,  2206,  2211,
    2219,  2223,  2241,  2249,  2254,  2262,  2267,  2275,  2283,  2291,
    2299,  2307,  2315,  2323,  2330,  2337,  2347,  2348,  2352,  2354,
    2360,  2365,  2374,  2380,  2386,  2392,  2398,  2407,  2408,  2409,
    2410,  2414,  2428,  2432,  2455,  2560,  2566,  2572,  2582,  2586,
    2592,  2601,  2606,  2614,  2638,  2646,  2654
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ATTRIBUTE",
  "CONST_TOK", "BOOL_TOK", "FLOAT_TOK", "INT_TOK", "UINT_TOK", "BREAK",
  "CONTINUE", "DO", "ELSE", "FOR", "IF", "DISCARD", "RETURN", "SWITCH",
  "CASE", "DEFAULT", "BVEC2", "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4",
  "UVEC2", "UVEC3", "UVEC4", "VEC2", "VEC3", "VEC4", "CENTROID", "IN_TOK",
  "OUT_TOK", "INOUT_TOK", "UNIFORM", "VARYING", "SAMPLE", "NOPERSPECTIVE",
  "FLAT", "SMOOTH", "MAT2X2", "MAT2X3", "MAT2X4", "MAT3X2", "MAT3X3",
  "MAT3X4", "MAT4X2", "MAT4X3", "MAT4X4", "SAMPLER1D", "SAMPLER2D",
  "SAMPLER3D", "SAMPLERCUBE", "SAMPLER1DSHADOW", "SAMPLER2DSHADOW",
  "SAMPLERCUBESHADOW", "SAMPLER1DARRAY", "SAMPLER2DARRAY",
  "SAMPLER1DARRAYSHADOW", "SAMPLER2DARRAYSHADOW", "SAMPLERCUBEARRAY",
  "SAMPLERCUBEARRAYSHADOW", "ISAMPLER1D", "ISAMPLER2D", "ISAMPLER3D",
  "ISAMPLERCUBE", "ISAMPLER1DARRAY", "ISAMPLER2DARRAY",
  "ISAMPLERCUBEARRAY", "USAMPLER1D", "USAMPLER2D", "USAMPLER3D",
  "USAMPLERCUBE", "USAMPLER1DARRAY", "USAMPLER2DARRAY",
  "USAMPLERCUBEARRAY", "SAMPLER2DRECT", "ISAMPLER2DRECT", "USAMPLER2DRECT",
  "SAMPLER2DRECTSHADOW", "SAMPLERBUFFER", "ISAMPLERBUFFER",
  "USAMPLERBUFFER", "SAMPLER2DMS", "ISAMPLER2DMS", "USAMPLER2DMS",
  "SAMPLER2DMSARRAY", "ISAMPLER2DMSARRAY", "USAMPLER2DMSARRAY",
  "SAMPLEREXTERNALOES", "IMAGE1D", "IMAGE2D", "IMAGE3D", "IMAGE2DRECT",
  "IMAGECUBE", "IMAGEBUFFER", "IMAGE1DARRAY", "IMAGE2DARRAY",
  "IMAGECUBEARRAY", "IMAGE2DMS", "IMAGE2DMSARRAY", "IIMAGE1D", "IIMAGE2D",
  "IIMAGE3D", "IIMAGE2DRECT", "IIMAGECUBE", "IIMAGEBUFFER",
  "IIMAGE1DARRAY", "IIMAGE2DARRAY", "IIMAGECUBEARRAY", "IIMAGE2DMS",
  "IIMAGE2DMSARRAY", "UIMAGE1D", "UIMAGE2D", "UIMAGE3D", "UIMAGE2DRECT",
  "UIMAGECUBE", "UIMAGEBUFFER", "UIMAGE1DARRAY", "UIMAGE2DARRAY",
  "UIMAGECUBEARRAY", "UIMAGE2DMS", "UIMAGE2DMSARRAY", "IMAGE1DSHADOW",
  "IMAGE2DSHADOW", "IMAGE1DARRAYSHADOW", "IMAGE2DARRAYSHADOW", "COHERENT",
  "VOLATILE", "RESTRICT", "READONLY", "WRITEONLY", "ATOMIC_UINT", "STRUCT",
  "VOID_TOK", "WHILE", "IDENTIFIER", "TYPE_IDENTIFIER", "NEW_IDENTIFIER",
  "FLOATCONSTANT", "INTCONSTANT", "UINTCONSTANT", "BOOLCONSTANT",
  "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "INVARIANT",
  "PRECISE", "LOWP", "MEDIUMP", "HIGHP", "SUPERP", "PRECISION",
  "VERSION_TOK", "EXTENSION", "LINE", "COLON", "EOL", "INTERFACE",
  "OUTPUT", "PRAGMA_DEBUG_ON", "PRAGMA_DEBUG_OFF", "PRAGMA_OPTIMIZE_ON",
  "PRAGMA_OPTIMIZE_OFF", "PRAGMA_INVARIANT_ALL", "LAYOUT_TOK", "ASM",
  "CLASS", "UNION", "ENUM", "TYPEDEF", "TEMPLATE", "THIS", "PACKED_TOK",
  "GOTO", "INLINE_TOK", "NOINLINE", "PUBLIC_TOK", "STATIC", "EXTERN",
  "EXTERNAL", "LONG_TOK", "SHORT_TOK", "DOUBLE_TOK", "HALF", "FIXED_TOK",
  "UNSIGNED", "INPUT_TOK", "HVEC2", "HVEC3", "HVEC4", "DVEC2", "DVEC3",
  "DVEC4", "FVEC2", "FVEC3", "FVEC4", "SAMPLER3DRECT", "SIZEOF", "CAST",
  "NAMESPACE", "USING", "RESOURCE", "PATCH", "SUBROUTINE", "ERROR_TOK",
  "COMMON", "PARTITION", "ACTIVE", "FILTER", "ROW_MAJOR", "THEN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'+'", "'-'", "'!'", "'~'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "'{'", "'}'", "$accept", "translation_unit", "$@1",
  "version_statement", "pragma_statement", "extension_statement_list",
  "any_identifier", "extension_statement", "external_declaration_list",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "method_call_generic",
  "method_call_header_no_parameters", "method_call_header_with_parameters",
  "method_call_header", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_direction_qualifier",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "layout_qualifier", "layout_qualifier_id_list",
  "integer_constant", "layout_qualifier_id",
  "interface_block_layout_qualifier", "interpolation_qualifier",
  "type_qualifier", "auxiliary_storage_qualifier", "storage_qualifier",
  "array_specifier", "type_specifier", "type_specifier_nonarray",
  "basic_type_specifier_nonarray", "precision_qualifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@2",
  "statement_no_new_scope", "compound_statement_no_new_scope",
  "statement_list", "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_body", "case_label", "case_label_list", "case_statement",
  "case_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "external_declaration", "function_definition", "interface_block",
  "basic_interface_block", "interface_qualifier", "instance_name_opt",
  "member_list", "member_declaration", "layout_defaults", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-414)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-378)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -129,   -92,    53,  -414,  -103,  -414,   -57,  -414,  -414,  -414,
    -414,   -58,   -54,  4836,  -414,  -414,   -51,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,   -17,   -12,  -414,    13,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -119,  -414,  -414,   266,   266,  -414,
    -414,  -414,    15,   -33,   -14,    -8,    -3,    10,   -37,  -414,
    4652,  -414,  -196,   -26,   -27,    30,  -199,  -414,    54,   314,
    5129,  5301,  5129,  5129,  -414,   -15,  -414,  5129,  -414,  -414,
    -414,  -414,  -414,    82,  -414,   -54,  5007,   -31,  -414,  -414,
    -414,  -414,  -414,  5129,  5129,  -414,  5129,  -414,  -414,  -414,
    5301,  -414,  -414,  -414,  -414,  -414,  -107,  -414,  -414,  -414,
     525,  -414,  -414,    36,    36,  -414,  -414,  -414,    36,  -414,
    5301,    36,    36,   -54,  -414,     3,    11,  -197,    12,  -123,
    -116,  -114,  -414,  -414,  -414,  -414,  -414,  -414,  3625,    -5,
    -414,   -23,    68,   -54,  1273,  -414,  5007,   -16,  -414,  -414,
      -2,  -143,  -414,  -414,     0,     1,  2007,    16,    20,     2,
    3184,    24,    28,  -414,  -414,  -414,  -414,  -414,  4027,  4027,
    4027,  -414,  -414,  -414,  -414,  -414,     6,  -414,    32,  -414,
    -105,  -414,  -414,  -414,    14,  -122,  4228,    34,   222,  4027,
     -18,   -73,    26,  -104,    27,    23,    25,    22,   119,   121,
    -126,  -414,  -414,  -160,  -414,    21,  5149,    46,  -414,  -414,
    -414,  -414,   779,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,   -54,  -414,  -414,  -193,  2961,  -186,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,    47,  -414,  3826,  5007,
    -414,   -15,  -155,  -414,  -414,  -414,  1510,  -414,    60,  -414,
    -107,  -414,  -414,   147,  2500,  4027,  -414,  -414,  -146,  4027,
    3424,  -414,  -414,  -121,  -414,  2007,  -414,  -414,  4027,    54,
    -414,  -414,  4027,    51,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  4027,  -414,  4027,
    4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,
    4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,  4027,
    -414,  -414,  -414,   -15,  2961,  -174,  2961,  -414,  -414,  2961,
    -414,  -414,    50,   -54,    38,  5007,    -5,   -54,  -414,  -414,
    -414,  -414,  -414,  -414,    55,  -414,  -414,  3424,   -88,  -414,
     -87,    52,   -54,    58,  -414,  1033,    59,    52,  -414,    63,
    -414,    74,   -76,  4429,  -414,  -414,  -414,  -414,  -414,   -18,
     -18,   -73,   -73,    26,    26,    26,    26,  -104,  -104,    27,
      23,    25,    22,   119,   121,  -156,  -414,    -5,  -414,  2961,
    -414,  -176,  -414,  -414,  -145,   157,  -414,  -414,  4027,  -414,
      56,    77,  2007,    64,    61,  2260,  -414,  -414,  -414,  -414,
    -414,  4027,    79,  -414,  4027,  -414,  2738,  -414,  -414,   -15,
      66,   -69,  4027,  2260,   303,  -414,    -6,  -414,  2961,  -414,
    -414,  -414,  -414,  -414,  -414,  -414,    -5,  -414,    67,    52,
    -414,  2007,  4027,    70,  -414,  -414,  1754,  2007,    -4,  -414,
    -414,  -414,  -117,  -414,  -414,  -414,  -414,  -414,  2007,  -414
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     0,    12,     0,     1,     2,    14,    15,    16,
       5,     0,     0,     0,    13,     6,     0,   179,   178,   203,
     200,   201,   202,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   204,   205,   206,   176,   181,   182,   183,   184,
     180,   177,   161,   160,   159,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   228,   229,   231,   232,
     234,   235,   236,   237,   238,   240,   241,   242,   243,   245,
     246,   247,   248,   250,   251,   252,   254,   255,   256,   257,
     259,   227,   244,   253,   233,   239,   249,   258,   260,   261,
     262,   263,   264,   265,   230,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   185,   186,
     187,   188,   189,   299,     0,   199,   198,   162,   163,   302,
     301,   300,     0,     0,     0,     0,     0,     0,     0,   369,
       3,   368,     0,     0,   118,   126,     0,   135,   140,   167,
     166,     0,   164,   165,   147,   194,   196,   168,   197,    18,
     367,   115,   372,     0,   370,     0,     0,     0,   181,   182,
     184,    21,    22,   162,   163,   145,   167,   170,   146,   169,
       0,     7,     8,     9,    10,    11,     0,    20,    19,   112,
       0,   371,   116,   126,   126,   131,   132,   133,   126,   119,
       0,   126,   126,     0,   113,    14,    16,   141,     0,   181,
     182,   184,   172,   373,   171,   148,   173,   174,     0,   195,
     175,     0,     0,     0,     0,   305,     0,     0,   158,   157,
     154,     0,   150,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    24,    25,    27,    48,     0,     0,
       0,    60,    61,    62,    63,   335,   327,   331,    23,    29,
      56,    31,    36,    37,     0,     0,    42,     0,    64,     0,
      68,    71,    74,    79,    82,    84,    86,    88,    90,    92,
      94,    96,   109,     0,   317,     0,   167,   147,   320,   333,
     319,   318,     0,   321,   322,   323,   324,   325,   120,   127,
     128,   124,   125,   134,   129,   130,   136,     0,   142,   121,
     385,   386,   384,   190,    64,   111,     0,    46,     0,     0,
      17,   310,     0,   308,   304,   306,     0,   114,     0,   149,
       0,   363,   362,     0,     0,     0,   366,   364,     0,     0,
       0,    57,    58,     0,   326,     0,    33,    34,     0,     0,
      40,    39,     0,   199,    43,    45,    99,   100,   102,   101,
     104,   105,   106,   107,   108,   103,    98,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     336,   332,   334,   122,     0,   137,     0,   312,   144,     0,
     191,   192,     0,     0,     0,   381,   311,     0,   307,   303,
     152,   153,   155,   151,     0,   357,   356,   359,     0,   365,
       0,   340,     0,     0,    28,     0,     0,    35,    32,     0,
      38,     0,     0,    52,    44,    97,    65,    66,    67,    69,
      70,    72,    73,    77,    78,    75,    76,    80,    81,    83,
      85,    87,    89,    91,    93,     0,   110,   123,   139,     0,
     315,     0,   143,   193,     0,   378,   382,   309,     0,   358,
       0,     0,     0,     0,     0,     0,   328,    30,    55,    50,
      49,     0,   199,    53,     0,   138,     0,   313,   383,   379,
       0,     0,   360,     0,   339,   337,     0,   342,     0,   330,
     353,   329,    54,    95,   314,   316,   380,   374,     0,   361,
     355,     0,     0,     0,   343,   347,     0,   351,     0,   341,
     354,   338,     0,   346,   349,   348,   350,   344,   352,   345
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -414,  -414,  -414,  -414,  -414,  -414,    -1,   174,  -414,  -128,
    -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,  -414,
    -414,  -414,  -414,  -414,   -19,  -414,  -169,  -142,  -170,  -162,
     -67,   -66,   -68,   -65,   -64,   -63,  -414,  -206,  -228,  -414,
    -244,     7,    -9,     5,  -414,  -414,  -414,  -414,   125,   -52,
    -414,  -414,  -414,  -414,  -168,   -11,  -414,  -414,    17,  -414,
    -414,   -86,  -414,  -414,  -212,   -13,  -414,  -414,  -101,  -414,
      93,  -207,   -77,   -79,  -381,  -414,    45,  -245,  -413,  -414,
    -414,  -163,   189,   -10,    48,  -414,  -414,   -84,  -414,  -414,
    -167,  -414,  -172,  -414,  -414,  -414,  -414,  -414,  -414,   240,
    -414,  -414,  -152,  -414,  -414,   -24,  -414,  -414
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    13,     3,   149,     6,   331,    14,   150,   268,
     269,   270,   436,   271,   272,   273,   274,   275,   276,   277,
     440,   441,   442,   443,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   377,
     293,   326,   294,   295,   153,   154,   155,   311,   209,   210,
     211,   312,   156,   157,   158,   186,   241,   422,   242,   243,
     160,   161,   162,   163,   229,   327,   165,   166,   167,   168,
     234,   235,   332,   333,   408,   471,   298,   299,   300,   301,
     355,   510,   511,   302,   303,   304,   505,   433,   305,   507,
     525,   526,   527,   528,   306,   427,   480,   481,   307,   169,
     170,   171,   172,   173,   500,   414,   415,   174
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     164,   343,   159,    11,   151,   318,   348,   223,   233,   185,
     188,    16,   522,   523,   522,   523,   353,  -375,   152,     7,
       8,     9,   325,   468,  -376,   470,  -377,   335,   472,   397,
     218,     7,     8,     9,   204,     7,     8,     9,   228,   213,
     204,   190,   228,   356,   357,     1,   386,   387,   364,   328,
       4,   187,   189,     5,   212,   214,   317,   402,   199,   200,
     404,   328,   496,   205,   206,   207,   233,   409,   233,   205,
     206,   207,   509,   222,   224,    10,   226,   227,   399,   469,
     497,   230,   399,   417,     7,     8,     9,   238,   495,   407,
     509,   339,   399,   417,   400,   340,   494,   187,   189,   418,
     222,   428,   212,   212,   405,   430,   431,   212,   429,   498,
     212,   212,   361,   434,   437,   515,   362,   399,    12,   416,
      15,   399,   325,  -375,   239,   398,   175,   529,  -376,   335,
     358,   320,   359,   177,   444,   539,   176,   164,   321,   159,
     322,   151,   388,   389,   223,   191,   482,   483,   225,   445,
     399,   399,   309,  -377,   465,   152,   310,   217,   490,   314,
     315,   413,   491,   164,   192,   518,   382,   383,   233,   399,
     193,   466,   384,   385,   232,   194,   407,   237,   407,   390,
     391,   407,   432,   431,   139,   140,   141,   297,   195,   296,
     402,   467,   215,     8,   216,   240,   196,   313,   208,   139,
     140,   141,   420,   421,   208,   139,   140,   141,   202,   324,
     222,   203,   316,   449,   450,   493,   453,   454,   455,   456,
     228,   164,   231,   164,   236,   379,   380,   381,   457,   458,
     328,   439,   329,   297,   501,   296,   -21,   504,   337,   351,
     352,   407,   451,   452,   -22,   319,   330,   413,   360,   344,
     524,   338,   537,   345,   341,   342,   346,   349,   519,   432,
     378,   350,   354,   512,  -117,   -47,   513,   365,   407,    17,
      18,   392,   394,   395,   393,   199,   531,   396,   532,   -46,
     407,   534,   536,   410,   424,   -41,   473,   516,   478,   297,
     399,   296,   485,   536,   475,   487,   488,   499,    35,   178,
     179,    38,   180,    40,    41,    42,    43,    44,   489,   324,
     502,   503,   403,   -51,   508,   521,   164,    17,    18,   506,
     517,   530,   533,   164,   197,   459,   461,   460,   308,   336,
     462,   297,   463,   296,   464,   412,   474,   297,   477,   240,
     520,   201,   297,   479,   296,   435,    35,   219,   220,    38,
     221,    40,    41,    42,    43,    44,   538,   423,   438,   535,
     446,   447,   448,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   425,
     198,   476,   426,     0,     0,   128,   129,   130,   131,   132,
       0,     0,   164,     0,   181,     0,   182,     0,     0,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,   297,     0,   296,     0,     0,     0,     0,     0,
       0,   484,     0,   183,   184,   139,   140,   141,     0,     0,
       0,     0,     0,   128,   129,   130,   131,   132,     0,     0,
       0,     0,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   297,
       0,   296,   297,     0,   296,   376,     0,     0,     0,     0,
       0,   183,   184,   139,   140,   141,     0,     0,     0,     0,
     297,     0,   296,     0,     0,     0,     0,     0,     0,     0,
     148,     0,     0,     0,     0,     0,     0,     0,   297,     0,
     296,     0,     0,   297,   297,   296,   296,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,   296,    17,    18,
      19,    20,    21,    22,   244,   245,   246,     0,   247,   248,
     249,   250,   251,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   252,   181,   136,   182,   253,   254,   255,   256,
     257,     0,     0,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   138,   139,   140,   141,     0,   142,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,     0,   261,   262,   263,   264,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   265,
     266,   267,    17,    18,    19,    20,    21,    22,   244,   245,
     246,     0,   247,   248,   249,   250,   251,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,   135,   252,   181,   136,   182,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,   138,   139,   140,
     141,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,     0,   261,   262,
     263,   264,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,   266,   401,    17,    18,    19,    20,
      21,    22,   244,   245,   246,     0,   247,   248,   249,   250,
     251,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     252,   181,   136,   182,   253,   254,   255,   256,   257,     0,
       0,   258,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   138,   139,   140,   141,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,   261,   262,   263,   264,    17,    18,    19,    20,
      21,    22,     0,     0,     0,     0,     0,   265,   266,   486,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,   178,   179,    38,   180,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,   136,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,   184,   139,   140,   141,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   178,   179,    38,   180,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   184,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,    19,
      20,    21,    22,   244,   245,   246,   419,   247,   248,   249,
     250,   251,   522,   523,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,   252,   181,   136,   182,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,   138,   139,   140,   141,     0,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   261,   262,   263,   264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   266,
      17,    18,    19,    20,    21,    22,   244,   245,   246,     0,
     247,   248,   249,   250,   251,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   252,   181,   136,   182,   253,   254,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   138,   139,   140,   141,     0,
     142,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,     0,   261,   262,   263,   264,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   265,   266,    17,    18,    19,    20,    21,    22,   244,
     245,   246,     0,   247,   248,   249,   250,   251,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,   252,   181,   136,
     182,   253,   254,   255,   256,   257,     0,     0,   258,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,   139,
     140,   141,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,     0,     0,   261,
     262,   263,   264,    17,    18,    19,    20,    21,    22,     0,
       0,     0,     0,     0,   265,   200,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,   135,     0,   181,   136,
     182,   253,   254,   255,   256,   257,     0,     0,   258,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,   139,
     140,   141,     0,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   260,     0,     0,     0,     0,     0,   261,
     262,   263,   264,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   135,     0,   181,   136,   182,   253,
     254,   255,   256,   257,     0,     0,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    20,    21,    22,
       0,   260,     0,     0,     0,     0,     0,   261,   262,   263,
     264,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   406,   514,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,     0,   181,
     136,   182,   253,   254,   255,   256,   257,     0,     0,   258,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    21,    22,     0,   260,     0,     0,     0,     0,     0,
     261,   262,   263,   264,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   406,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   134,
     135,     0,   181,   136,   182,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   260,     0,     0,
       0,     0,     0,   261,   262,   263,   264,    17,    18,    19,
      20,    21,    22,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   178,   179,    38,
     180,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,     0,   128,   129,   130,   131,   132,   133,   134,
     135,     0,   181,   136,   182,   253,   254,   255,   256,   257,
       0,     0,   258,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,   184,   139,   140,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   260,     0,     0,
       0,     0,     0,   261,   262,   263,   264,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     134,   135,     0,   181,   136,   182,   253,   254,   255,   256,
     257,     0,     0,   258,   259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   260,     0,
       0,   323,     0,     0,   261,   262,   263,   264,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,     0,   181,   136,   182,   253,   254,   255,
     256,   257,     0,     0,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,   260,
       0,     0,   411,     0,     0,   261,   262,   263,   264,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   134,   135,     0,   181,   136,   182,   253,   254,
     255,   256,   257,     0,     0,   258,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    20,    21,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     260,     0,     0,     0,     0,     0,   261,   262,   263,   264,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   133,   134,   363,     0,   181,   136,   182,   253,
     254,   255,   256,   257,     0,     0,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   260,     0,     0,     0,     0,     0,   261,   262,   263,
     264,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,   134,   492,     0,   181,   136,   182,
     253,   254,   255,   256,   257,     0,     0,   258,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    18,    19,    20,    21,
      22,     0,   260,     0,     0,     0,     0,     0,   261,   262,
     263,   264,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
       0,   128,   129,   130,   131,   132,   133,   134,   135,     0,
       0,   136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     138,   139,   140,   141,     0,   142,     0,    12,     0,     0,
       0,     0,     0,   143,   144,   145,   146,   147,   148,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,     0,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   137,   138,   139,   140,   141,     0,   142,
      17,    18,    19,    20,    21,    22,     0,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     178,   179,    38,   180,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    17,    18,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,     0,     0,   136,     0,     0,     0,
       0,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,    35,   178,   179,    38,   180,    40,    41,    42,    43,
      44,     0,     0,     0,   183,   184,   139,   140,   141,     0,
       0,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   183,   184,   139,   140,
     141,     0,     0,     0,     0,     0,    19,    20,    21,    22,
       0,     0,     0,     0,     0,   148,   183,   184,   139,   140,
     141,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,     0,     0,
     136
};

static const yytype_int16 yycheck[] =
{
      13,   246,    13,     4,    13,   217,   250,   159,   176,   137,
     138,    12,    18,    19,    18,    19,   260,   140,    13,   138,
     139,   140,   228,   404,   140,   406,   140,   234,   409,   155,
     158,   138,   139,   140,     4,   138,   139,   140,   235,   238,
       4,   142,   235,   148,   149,   174,   150,   151,   276,   235,
     142,   137,   138,     0,   155,   254,   253,   302,   254,   255,
     253,   235,   238,    33,    34,    35,   234,   253,   236,    33,
      34,    35,   485,   159,   160,   178,   162,   163,   238,   253,
     256,   167,   238,   238,   138,   139,   140,   194,   469,   317,
     503,   234,   238,   238,   254,   238,   252,   183,   184,   254,
     186,   345,   203,   204,   316,   349,   350,   208,   254,   254,
     211,   212,   234,   234,   358,   496,   238,   238,   175,   331,
     178,   238,   328,   140,   231,   251,   177,   508,   140,   336,
     235,   254,   237,   134,   362,   252,   255,   150,   254,   150,
     254,   150,   246,   247,   296,   178,   234,   234,   161,   377,
     238,   238,   204,   140,   398,   150,   208,   158,   234,   211,
     212,   329,   238,   176,   178,   234,   239,   240,   336,   238,
     178,   399,   146,   147,   175,   178,   404,   190,   406,   152,
     153,   409,   350,   427,   169,   170,   171,   200,   178,   200,
     435,   403,   138,   139,   140,   196,   233,   210,   168,   169,
     170,   171,   142,   143,   168,   169,   170,   171,   234,   228,
     296,   238,   213,   382,   383,   443,   386,   387,   388,   389,
     235,   234,   140,   236,   255,   243,   244,   245,   390,   391,
     235,   359,   255,   246,   478,   246,   233,   482,   254,   258,
     259,   469,   384,   385,   233,   233,   178,   415,   234,   233,
     256,   253,   256,   233,   254,   254,   254,   233,   502,   427,
     279,   233,   256,   491,   234,   233,   494,   233,   496,     3,
       4,   248,   250,   154,   249,   254,   521,   156,   522,   233,
     508,   526,   527,   236,   137,   234,   236,   499,   233,   302,
     238,   302,   234,   538,   256,   236,   233,   140,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   234,   328,
     254,   234,   313,   234,   253,    12,   329,     3,     4,   255,
     254,   254,   252,   336,   150,   392,   394,   393,   203,   236,
     395,   344,   396,   344,   397,   328,   413,   350,   417,   340,
     503,   152,   355,   427,   355,   355,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   528,   340,   359,   526,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   344,
     150,   415,   344,    -1,    -1,   129,   130,   131,   132,   133,
      -1,    -1,   415,    -1,   138,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,   435,    -1,    -1,    -1,    -1,    -1,
      -1,   432,    -1,   167,   168,   169,   170,   171,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,    -1,    -1,
      -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,
      -1,   482,   485,    -1,   485,   253,    -1,    -1,    -1,    -1,
      -1,   167,   168,   169,   170,   171,    -1,    -1,    -1,    -1,
     503,    -1,   503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   521,    -1,
     521,    -1,    -1,   526,   527,   526,   527,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   538,    -1,   538,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,   168,   169,   170,   171,    -1,   173,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
     255,   256,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,   170,
     171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   254,   255,   256,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,    -1,
      -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,   168,   169,   170,   171,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,   242,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,   254,   255,   256,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     167,   168,   169,   170,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,
     170,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   256,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,   168,   169,   170,   171,    -1,   173,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,   255,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   167,   168,   169,   170,   171,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,   255,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,
     170,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   254,   255,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,
     170,   171,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   255,   256,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,     7,     8,    -1,   233,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,   168,   169,   170,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   233,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,   233,    -1,
      -1,   236,    -1,    -1,   239,   240,   241,   242,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,   143,
     144,   145,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,   233,
      -1,    -1,   236,    -1,    -1,   239,   240,   241,   242,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
     143,   144,   145,    -1,    -1,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,   233,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,
     168,   169,   170,   171,    -1,   173,    -1,   175,    -1,    -1,
      -1,    -1,    -1,   181,   182,   183,   184,   185,   186,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,   168,   169,   170,   171,    -1,   173,
       3,     4,     5,     6,     7,     8,    -1,   181,   182,   183,
     184,   185,   186,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     3,     4,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,    -1,   139,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   167,   168,   169,   170,   171,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,   170,
     171,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,   186,   167,   168,   169,   170,
     171,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,    -1,    -1,
     139
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   174,   258,   260,   142,     0,   262,   138,   139,   140,
     178,   263,   175,   259,   264,   178,   263,     3,     4,     5,
       6,     7,     8,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   129,   130,
     131,   132,   133,   134,   135,   136,   139,   167,   168,   169,
     170,   171,   173,   181,   182,   183,   184,   185,   186,   261,
     265,   299,   300,   301,   302,   303,   309,   310,   311,   312,
     317,   318,   319,   320,   322,   323,   324,   325,   326,   356,
     357,   358,   359,   360,   364,   177,   255,   263,    33,    34,
      36,   138,   140,   167,   168,   266,   312,   318,   266,   318,
     325,   178,   178,   178,   178,   178,   233,   264,   356,   254,
     255,   339,   234,   238,     4,    33,    34,    35,   168,   305,
     306,   307,   325,   238,   254,   138,   140,   263,   266,    33,
      34,    36,   318,   359,   318,   322,   318,   318,   235,   321,
     318,   140,   263,   311,   327,   328,   255,   322,   194,   231,
     263,   313,   315,   316,     9,    10,    11,    13,    14,    15,
      16,    17,   137,   141,   142,   143,   144,   145,   148,   149,
     233,   239,   240,   241,   242,   254,   255,   256,   266,   267,
     268,   270,   271,   272,   273,   274,   275,   276,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   297,   299,   300,   312,   322,   333,   334,
     335,   336,   340,   341,   342,   345,   351,   355,   305,   306,
     306,   304,   308,   322,   306,   306,   263,   253,   321,   233,
     254,   254,   254,   236,   281,   294,   298,   322,   235,   255,
     178,   263,   329,   330,   256,   328,   327,   254,   253,   234,
     238,   254,   254,   334,   233,   233,   254,   254,   297,   233,
     233,   281,   281,   297,   256,   337,   148,   149,   235,   237,
     234,   234,   238,   136,   295,   233,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   253,   296,   281,   243,
     244,   245,   239,   240,   146,   147,   150,   151,   246,   247,
     152,   153,   248,   249,   250,   154,   156,   155,   251,   238,
     254,   256,   334,   263,   253,   321,   255,   295,   331,   253,
     236,   236,   298,   311,   362,   363,   321,   238,   254,   256,
     142,   143,   314,   315,   137,   333,   341,   352,   297,   254,
     297,   297,   311,   344,   234,   340,   269,   297,   263,   266,
     277,   278,   279,   280,   295,   295,   281,   281,   281,   283,
     283,   284,   284,   285,   285,   285,   285,   286,   286,   287,
     288,   289,   290,   291,   292,   297,   295,   321,   331,   253,
     331,   332,   331,   236,   329,   256,   362,   330,   233,   344,
     353,   354,   234,   234,   263,   234,   256,   236,   233,   234,
     234,   238,   136,   295,   252,   331,   238,   256,   254,   140,
     361,   297,   254,   234,   334,   343,   255,   346,   253,   335,
     338,   339,   295,   295,   256,   331,   321,   254,   234,   297,
     338,    12,    18,    19,   256,   347,   348,   349,   350,   331,
     254,   334,   297,   252,   334,   347,   334,   256,   349,   252
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   257,   259,   258,   260,   260,   260,   261,   261,   261,
     261,   261,   262,   262,   263,   263,   263,   264,   265,   265,
     265,   266,   266,   267,   267,   267,   267,   267,   267,   268,
     268,   268,   268,   268,   268,   269,   270,   271,   271,   272,
     272,   273,   273,   274,   274,   275,   276,   276,   276,   277,
     277,   278,   278,   279,   279,   280,   281,   281,   281,   281,
     282,   282,   282,   282,   283,   283,   283,   283,   284,   284,
     284,   285,   285,   285,   286,   286,   286,   286,   286,   287,
     287,   287,   288,   288,   289,   289,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   297,
     297,   298,   299,   299,   299,   299,   300,   301,   301,   302,
     302,   303,   304,   304,   305,   305,   306,   306,   306,   306,
     306,   307,   307,   307,   308,   309,   309,   309,   309,   309,
     310,   310,   310,   310,   310,   310,   310,   311,   311,   312,
     313,   313,   314,   314,   315,   315,   315,   316,   316,   317,
     317,   317,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   319,   319,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     321,   321,   321,   321,   322,   322,   323,   323,   323,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     325,   325,   325,   326,   326,   327,   327,   328,   329,   329,
     330,   330,   331,   331,   331,   332,   332,   333,   334,   334,
     335,   335,   335,   335,   335,   335,   336,   337,   336,   338,
     338,   339,   339,   340,   340,   341,   341,   342,   343,   343,
     344,   344,   345,   346,   346,   347,   347,   348,   348,   349,
     349,   350,   350,   351,   351,   351,   352,   352,   353,   353,
     354,   354,   355,   355,   355,   355,   355,   356,   356,   356,
     356,   357,   358,   358,   359,   360,   360,   360,   361,   361,
     361,   362,   362,   363,   364,   364,   364
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     4,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     5,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     3,     2,     2,     1,     1,     1,     3,     2,
       2,     2,     1,     2,     3,     2,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     4,     1,     2,     1,     1,     2,
       3,     3,     2,     3,     2,     2,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     4,     6,     5,
       1,     2,     3,     5,     4,     2,     2,     1,     2,     4,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     4,     1,     2,     3,     1,     3,
       1,     2,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     4,     1,
       1,     2,     3,     1,     2,     1,     2,     5,     3,     1,
       1,     4,     5,     2,     3,     3,     2,     1,     2,     2,
       2,     1,     2,     5,     7,     6,     1,     1,     1,     0,
       2,     3,     2,     2,     2,     3,     2,     1,     1,     1,
       1,     2,     1,     2,     7,     1,     1,     1,     0,     1,
       2,     1,     2,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, state); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (state);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, state);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, struct _mesa_glsl_parse_state *state)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, state); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct _mesa_glsl_parse_state *state)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (state);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (struct _mesa_glsl_parse_state *state)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 88 "src/glsl/glsl_parser.yy"
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
   yylloc.source = 0;
}

#line 3181 "src/glsl/glsl_parser.cpp"

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, state);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 303 "src/glsl/glsl_parser.yy"
   {
      _mesa_glsl_initialize_types(state);
   }
#line 3396 "src/glsl/glsl_parser.cpp"
    break;

  case 3: /* translation_unit: version_statement extension_statement_list $@1 external_declaration_list  */
#line 307 "src/glsl/glsl_parser.yy"
   {
      delete state->symbols;
      state->symbols = new(ralloc_parent(state)) glsl_symbol_table;
      _mesa_glsl_initialize_types(state);
   }
#line 3406 "src/glsl/glsl_parser.cpp"
    break;

  case 5: /* version_statement: VERSION_TOK INTCONSTANT EOL  */
#line 317 "src/glsl/glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-1]), (yyvsp[-1].n), NULL);
      if (state->error) {
         YYERROR;
      }
   }
#line 3417 "src/glsl/glsl_parser.cpp"
    break;

  case 6: /* version_statement: VERSION_TOK INTCONSTANT any_identifier EOL  */
#line 324 "src/glsl/glsl_parser.yy"
   {
      state->process_version_directive(&(yylsp[-2]), (yyvsp[-2].n), (yyvsp[-1].identifier));
      if (state->error) {
         YYERROR;
      }
   }
#line 3428 "src/glsl/glsl_parser.cpp"
    break;

  case 11: /* pragma_statement: PRAGMA_INVARIANT_ALL EOL  */
#line 338 "src/glsl/glsl_parser.yy"
   {
      if (!state->is_version(120, 100)) {
         _mesa_glsl_warning(& (yylsp[-1]), state,
                            "pragma `invariant(all)' not supported in %s "
                            "(GLSL ES 1.00 or GLSL 1.20 required)",
                            state->get_version_string());
      } else {
         state->all_invariant = true;
      }
   }
#line 3443 "src/glsl/glsl_parser.cpp"
    break;

  case 17: /* extension_statement: EXTENSION any_identifier COLON any_identifier EOL  */
#line 363 "src/glsl/glsl_parser.yy"
   {
      if (!_mesa_glsl_process_extension((yyvsp[-3].identifier), & (yylsp[-3]), (yyvsp[-1].identifier), & (yylsp[-1]), state)) {
         YYERROR;
      }
   }
#line 3453 "src/glsl/glsl_parser.cpp"
    break;

  case 18: /* external_declaration_list: external_declaration  */
#line 372 "src/glsl/glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3465 "src/glsl/glsl_parser.cpp"
    break;

  case 19: /* external_declaration_list: external_declaration_list external_declaration  */
#line 380 "src/glsl/glsl_parser.yy"
   {
      /* FINISHME: The NULL test is required because pragmas are set to
       * FINISHME: NULL. (See production rule for external_declaration.)
       */
      if ((yyvsp[0].node) != NULL)
         state->translation_unit.push_tail(& (yyvsp[0].node)->link);
   }
#line 3477 "src/glsl/glsl_parser.cpp"
    break;

  case 20: /* external_declaration_list: external_declaration_list extension_statement  */
#line 387 "src/glsl/glsl_parser.yy"
                                                   {
      if (!state->allow_extension_directive_midshader) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#extension directive is not allowed "
                          "in the middle of a shader");
         YYERROR;
      }
   }
#line 3490 "src/glsl/glsl_parser.cpp"
    break;

  case 23: /* primary_expression: variable_identifier  */
#line 404 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_identifier, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3501 "src/glsl/glsl_parser.cpp"
    break;

  case 24: /* primary_expression: INTCONSTANT  */
#line 411 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_int_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.int_constant = (yyvsp[0].n);
   }
#line 3512 "src/glsl/glsl_parser.cpp"
    break;

  case 25: /* primary_expression: UINTCONSTANT  */
#line 418 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_uint_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.uint_constant = (yyvsp[0].n);
   }
#line 3523 "src/glsl/glsl_parser.cpp"
    break;

  case 26: /* primary_expression: FLOATCONSTANT  */
#line 425 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_float_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.float_constant = (yyvsp[0].real);
   }
#line 3534 "src/glsl/glsl_parser.cpp"
    break;

  case 27: /* primary_expression: BOOLCONSTANT  */
#line 432 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_bool_constant, NULL, NULL, NULL);
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->primary_expression.bool_constant = (yyvsp[0].n);
   }
#line 3545 "src/glsl/glsl_parser.cpp"
    break;

  case 28: /* primary_expression: '(' expression ')'  */
#line 439 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 3553 "src/glsl/glsl_parser.cpp"
    break;

  case 30: /* postfix_expression: postfix_expression '[' integer_expression ']'  */
#line 447 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_array_index, (yyvsp[-3].expression), (yyvsp[-1].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-3]), (yylsp[0]));
   }
#line 3563 "src/glsl/glsl_parser.cpp"
    break;

  case 31: /* postfix_expression: function_call  */
#line 453 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 3571 "src/glsl/glsl_parser.cpp"
    break;

  case 32: /* postfix_expression: postfix_expression '.' any_identifier  */
#line 457 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[-2].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.expression)->primary_expression.identifier = (yyvsp[0].identifier);
   }
#line 3582 "src/glsl/glsl_parser.cpp"
    break;

  case 33: /* postfix_expression: postfix_expression INC_OP  */
#line 464 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_post_inc, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3592 "src/glsl/glsl_parser.cpp"
    break;

  case 34: /* postfix_expression: postfix_expression DEC_OP  */
#line 470 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_post_dec, (yyvsp[-1].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3602 "src/glsl/glsl_parser.cpp"
    break;

  case 38: /* function_call_or_method: postfix_expression '.' method_call_generic  */
#line 488 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[-2].expression), (yyvsp[0].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3612 "src/glsl/glsl_parser.cpp"
    break;

  case 43: /* function_call_header_with_parameters: function_call_header assignment_expression  */
#line 507 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_location((yylsp[-1]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3622 "src/glsl/glsl_parser.cpp"
    break;

  case 44: /* function_call_header_with_parameters: function_call_header_with_parameters ',' assignment_expression  */
#line 513 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
      (yyval.expression)->set_location((yylsp[-2]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3632 "src/glsl/glsl_parser.cpp"
    break;

  case 46: /* function_identifier: type_specifier  */
#line 529 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_function_expression((yyvsp[0].type_specifier));
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3642 "src/glsl/glsl_parser.cpp"
    break;

  case 47: /* function_identifier: variable_identifier  */
#line 535 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[0].identifier));
      callee->set_location((yylsp[0]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3654 "src/glsl/glsl_parser.cpp"
    break;

  case 48: /* function_identifier: FIELD_SELECTION  */
#line 543 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[0].identifier));
      callee->set_location((yylsp[0]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[0]));
      }
#line 3666 "src/glsl/glsl_parser.cpp"
    break;

  case 53: /* method_call_header_with_parameters: method_call_header assignment_expression  */
#line 564 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
      (yyval.expression)->set_location((yylsp[-1]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3676 "src/glsl/glsl_parser.cpp"
    break;

  case 54: /* method_call_header_with_parameters: method_call_header_with_parameters ',' assignment_expression  */
#line 570 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
      (yyval.expression)->set_location((yylsp[-2]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 3686 "src/glsl/glsl_parser.cpp"
    break;

  case 55: /* method_call_header: variable_identifier '('  */
#line 582 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_expression *callee = new(ctx) ast_expression((yyvsp[-1].identifier));
      callee->set_location((yylsp[-1]));
      (yyval.expression) = new(ctx) ast_function_expression(callee);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3698 "src/glsl/glsl_parser.cpp"
    break;

  case 57: /* unary_expression: INC_OP unary_expression  */
#line 595 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_inc, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3708 "src/glsl/glsl_parser.cpp"
    break;

  case 58: /* unary_expression: DEC_OP unary_expression  */
#line 601 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_pre_dec, (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location((yylsp[-1]));
   }
#line 3718 "src/glsl/glsl_parser.cpp"
    break;

  case 59: /* unary_expression: unary_operator unary_expression  */
#line 607 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[0].expression), NULL, NULL);
      (yyval.expression)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 3728 "src/glsl/glsl_parser.cpp"
    break;

  case 60: /* unary_operator: '+'  */
#line 616 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_plus; }
#line 3734 "src/glsl/glsl_parser.cpp"
    break;

  case 61: /* unary_operator: '-'  */
#line 617 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_neg; }
#line 3740 "src/glsl/glsl_parser.cpp"
    break;

  case 62: /* unary_operator: '!'  */
#line 618 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_logic_not; }
#line 3746 "src/glsl/glsl_parser.cpp"
    break;

  case 63: /* unary_operator: '~'  */
#line 619 "src/glsl/glsl_parser.yy"
         { (yyval.n) = ast_bit_not; }
#line 3752 "src/glsl/glsl_parser.cpp"
    break;

  case 65: /* multiplicative_expression: multiplicative_expression '*' unary_expression  */
#line 625 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mul, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3762 "src/glsl/glsl_parser.cpp"
    break;

  case 66: /* multiplicative_expression: multiplicative_expression '/' unary_expression  */
#line 631 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_div, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3772 "src/glsl/glsl_parser.cpp"
    break;

  case 67: /* multiplicative_expression: multiplicative_expression '%' unary_expression  */
#line 637 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_mod, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3782 "src/glsl/glsl_parser.cpp"
    break;

  case 69: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 647 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_add, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3792 "src/glsl/glsl_parser.cpp"
    break;

  case 70: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 653 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_sub, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3802 "src/glsl/glsl_parser.cpp"
    break;

  case 72: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 663 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3812 "src/glsl/glsl_parser.cpp"
    break;

  case 73: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 669 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_rshift, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3822 "src/glsl/glsl_parser.cpp"
    break;

  case 75: /* relational_expression: relational_expression '<' shift_expression  */
#line 679 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_less, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3832 "src/glsl/glsl_parser.cpp"
    break;

  case 76: /* relational_expression: relational_expression '>' shift_expression  */
#line 685 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_greater, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3842 "src/glsl/glsl_parser.cpp"
    break;

  case 77: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 691 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_lequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3852 "src/glsl/glsl_parser.cpp"
    break;

  case 78: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 697 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_gequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3862 "src/glsl/glsl_parser.cpp"
    break;

  case 80: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 707 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_equal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3872 "src/glsl/glsl_parser.cpp"
    break;

  case 81: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 713 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_nequal, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3882 "src/glsl/glsl_parser.cpp"
    break;

  case 83: /* and_expression: and_expression '&' equality_expression  */
#line 723 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3892 "src/glsl/glsl_parser.cpp"
    break;

  case 85: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 733 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3902 "src/glsl/glsl_parser.cpp"
    break;

  case 87: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 743 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3912 "src/glsl/glsl_parser.cpp"
    break;

  case 89: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 753 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_and, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3922 "src/glsl/glsl_parser.cpp"
    break;

  case 91: /* logical_xor_expression: logical_xor_expression XOR_OP logical_and_expression  */
#line 763 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_xor, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3932 "src/glsl/glsl_parser.cpp"
    break;

  case 93: /* logical_or_expression: logical_or_expression OR_OP logical_xor_expression  */
#line 773 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_or, (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3942 "src/glsl/glsl_parser.cpp"
    break;

  case 95: /* conditional_expression: logical_or_expression '?' expression ':' assignment_expression  */
#line 783 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression(ast_conditional, (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].expression));
      (yyval.expression)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 3952 "src/glsl/glsl_parser.cpp"
    break;

  case 97: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 793 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_expression((yyvsp[-1].n), (yyvsp[-2].expression), (yyvsp[0].expression), NULL);
      (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 3962 "src/glsl/glsl_parser.cpp"
    break;

  case 98: /* assignment_operator: '='  */
#line 801 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_assign; }
#line 3968 "src/glsl/glsl_parser.cpp"
    break;

  case 99: /* assignment_operator: MUL_ASSIGN  */
#line 802 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_mul_assign; }
#line 3974 "src/glsl/glsl_parser.cpp"
    break;

  case 100: /* assignment_operator: DIV_ASSIGN  */
#line 803 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_div_assign; }
#line 3980 "src/glsl/glsl_parser.cpp"
    break;

  case 101: /* assignment_operator: MOD_ASSIGN  */
#line 804 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_mod_assign; }
#line 3986 "src/glsl/glsl_parser.cpp"
    break;

  case 102: /* assignment_operator: ADD_ASSIGN  */
#line 805 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_add_assign; }
#line 3992 "src/glsl/glsl_parser.cpp"
    break;

  case 103: /* assignment_operator: SUB_ASSIGN  */
#line 806 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_sub_assign; }
#line 3998 "src/glsl/glsl_parser.cpp"
    break;

  case 104: /* assignment_operator: LEFT_ASSIGN  */
#line 807 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_ls_assign; }
#line 4004 "src/glsl/glsl_parser.cpp"
    break;

  case 105: /* assignment_operator: RIGHT_ASSIGN  */
#line 808 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_rs_assign; }
#line 4010 "src/glsl/glsl_parser.cpp"
    break;

  case 106: /* assignment_operator: AND_ASSIGN  */
#line 809 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_and_assign; }
#line 4016 "src/glsl/glsl_parser.cpp"
    break;

  case 107: /* assignment_operator: XOR_ASSIGN  */
#line 810 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_xor_assign; }
#line 4022 "src/glsl/glsl_parser.cpp"
    break;

  case 108: /* assignment_operator: OR_ASSIGN  */
#line 811 "src/glsl/glsl_parser.yy"
                      { (yyval.n) = ast_or_assign; }
#line 4028 "src/glsl/glsl_parser.cpp"
    break;

  case 109: /* expression: assignment_expression  */
#line 816 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[0].expression);
   }
#line 4036 "src/glsl/glsl_parser.cpp"
    break;

  case 110: /* expression: expression ',' assignment_expression  */
#line 820 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      if ((yyvsp[-2].expression)->oper != ast_sequence) {
         (yyval.expression) = new(ctx) ast_expression(ast_sequence, NULL, NULL, NULL);
         (yyval.expression)->set_location_range((yylsp[-2]), (yylsp[0]));
         (yyval.expression)->expressions.push_tail(& (yyvsp[-2].expression)->link);
      } else {
         (yyval.expression) = (yyvsp[-2].expression);
      }

      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 4053 "src/glsl/glsl_parser.cpp"
    break;

  case 112: /* declaration: function_prototype ';'  */
#line 840 "src/glsl/glsl_parser.yy"
   {
      state->symbols->pop_scope();
      (yyval.node) = (yyvsp[-1].function);
   }
#line 4062 "src/glsl/glsl_parser.cpp"
    break;

  case 113: /* declaration: init_declarator_list ';'  */
#line 845 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[-1].declarator_list);
   }
#line 4070 "src/glsl/glsl_parser.cpp"
    break;

  case 114: /* declaration: PRECISION precision_qualifier type_specifier ';'  */
#line 849 "src/glsl/glsl_parser.yy"
   {
      (yyvsp[-1].type_specifier)->default_precision = (yyvsp[-2].n);
      (yyval.node) = (yyvsp[-1].type_specifier);
   }
#line 4079 "src/glsl/glsl_parser.cpp"
    break;

  case 115: /* declaration: interface_block  */
#line 854 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[0].node);
   }
#line 4087 "src/glsl/glsl_parser.cpp"
    break;

  case 119: /* function_header_with_parameters: function_header parameter_declaration  */
#line 870 "src/glsl/glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-1].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 4096 "src/glsl/glsl_parser.cpp"
    break;

  case 120: /* function_header_with_parameters: function_header_with_parameters ',' parameter_declaration  */
#line 875 "src/glsl/glsl_parser.yy"
   {
      (yyval.function) = (yyvsp[-2].function);
      (yyval.function)->parameters.push_tail(& (yyvsp[0].parameter_declarator)->link);
   }
#line 4105 "src/glsl/glsl_parser.cpp"
    break;

  case 121: /* function_header: fully_specified_type variable_identifier '('  */
#line 883 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.function) = new(ctx) ast_function();
      (yyval.function)->set_location((yylsp[-1]));
      (yyval.function)->return_type = (yyvsp[-2].fully_specified_type);
      (yyval.function)->identifier = (yyvsp[-1].identifier);

      state->symbols->add_function(new(state) ir_function((yyvsp[-1].identifier)));
      state->symbols->push_scope();
   }
#line 4120 "src/glsl/glsl_parser.cpp"
    break;

  case 122: /* parameter_declarator: type_specifier any_identifier  */
#line 897 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-1]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-1].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[0].identifier);
   }
#line 4134 "src/glsl/glsl_parser.cpp"
    break;

  case 123: /* parameter_declarator: type_specifier any_identifier array_specifier  */
#line 907 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location((yylsp[-2]));
      (yyval.parameter_declarator)->type->specifier = (yyvsp[-2].type_specifier);
      (yyval.parameter_declarator)->identifier = (yyvsp[-1].identifier);
      (yyval.parameter_declarator)->array_specifier = (yyvsp[0].array_specifier);
   }
#line 4149 "src/glsl/glsl_parser.cpp"
    break;

  case 124: /* parameter_declaration: parameter_qualifier parameter_declarator  */
#line 921 "src/glsl/glsl_parser.yy"
   {
      (yyval.parameter_declarator) = (yyvsp[0].parameter_declarator);
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
   }
#line 4158 "src/glsl/glsl_parser.cpp"
    break;

  case 125: /* parameter_declaration: parameter_qualifier parameter_type_specifier  */
#line 926 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
      (yyval.parameter_declarator)->set_location((yylsp[0]));
      (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
      (yyval.parameter_declarator)->type->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.parameter_declarator)->type->qualifier = (yyvsp[-1].type_qualifier);
      (yyval.parameter_declarator)->type->specifier = (yyvsp[0].type_specifier);
   }
#line 4172 "src/glsl/glsl_parser.cpp"
    break;

  case 126: /* parameter_qualifier: %empty  */
#line 939 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
   }
#line 4181 "src/glsl/glsl_parser.cpp"
    break;

  case 127: /* parameter_qualifier: CONST_TOK parameter_qualifier  */
#line 944 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate const qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 4193 "src/glsl/glsl_parser.cpp"
    break;

  case 128: /* parameter_qualifier: PRECISE parameter_qualifier  */
#line 952 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precise qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4205 "src/glsl/glsl_parser.cpp"
    break;

  case 129: /* parameter_qualifier: parameter_direction_qualifier parameter_qualifier  */
#line 960 "src/glsl/glsl_parser.yy"
   {
      if (((yyvsp[-1].type_qualifier).flags.q.in || (yyvsp[-1].type_qualifier).flags.q.out) && ((yyvsp[0].type_qualifier).flags.q.in || (yyvsp[0].type_qualifier).flags.q.out))
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate in/out/inout qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.q.constant)
         _mesa_glsl_error(&(yylsp[-1]), state, "in/out/inout must come after const "
                                      "or precise");

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4221 "src/glsl/glsl_parser.cpp"
    break;

  case 130: /* parameter_qualifier: precision_qualifier parameter_qualifier  */
#line 972 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 4236 "src/glsl/glsl_parser.cpp"
    break;

  case 131: /* parameter_direction_qualifier: IN_TOK  */
#line 985 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 4246 "src/glsl/glsl_parser.cpp"
    break;

  case 132: /* parameter_direction_qualifier: OUT_TOK  */
#line 991 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 4256 "src/glsl/glsl_parser.cpp"
    break;

  case 133: /* parameter_direction_qualifier: INOUT_TOK  */
#line 997 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 4267 "src/glsl/glsl_parser.cpp"
    break;

  case 136: /* init_declarator_list: init_declarator_list ',' any_identifier  */
#line 1013 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-2].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[0].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4281 "src/glsl/glsl_parser.cpp"
    break;

  case 137: /* init_declarator_list: init_declarator_list ',' any_identifier array_specifier  */
#line 1023 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = (yyvsp[-3].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-1].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4295 "src/glsl/glsl_parser.cpp"
    break;

  case 138: /* init_declarator_list: init_declarator_list ',' any_identifier array_specifier '=' initializer  */
#line 1033 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-5].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-3].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4309 "src/glsl/glsl_parser.cpp"
    break;

  case 139: /* init_declarator_list: init_declarator_list ',' any_identifier '=' initializer  */
#line 1043 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = (yyvsp[-4].declarator_list);
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
      state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[-2].identifier), ir_var_auto, glsl_precision_undefined));
   }
#line 4323 "src/glsl/glsl_parser.cpp"
    break;

  case 140: /* single_declaration: fully_specified_type  */
#line 1057 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      /* Empty declaration list is valid. */
      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[0].fully_specified_type));
      (yyval.declarator_list)->set_location((yylsp[0]));
   }
#line 4334 "src/glsl/glsl_parser.cpp"
    break;

  case 141: /* single_declaration: fully_specified_type any_identifier  */
#line 1064 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-1].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4348 "src/glsl/glsl_parser.cpp"
    break;

  case 142: /* single_declaration: fully_specified_type any_identifier array_specifier  */
#line 1074 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      decl->set_location_range((yylsp[-1]), (yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-2].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-2]), (yylsp[0]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4362 "src/glsl/glsl_parser.cpp"
    break;

  case 143: /* single_declaration: fully_specified_type any_identifier array_specifier '=' initializer  */
#line 1084 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-3].identifier), (yyvsp[-2].array_specifier), (yyvsp[0].expression));
      decl->set_location_range((yylsp[-3]), (yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-4].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-4]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4376 "src/glsl/glsl_parser.cpp"
    break;

  case 144: /* single_declaration: fully_specified_type any_identifier '=' initializer  */
#line 1094 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      decl->set_location((yylsp[-2]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      (yyval.declarator_list)->set_location_range((yylsp[-3]), (yylsp[-2]));
      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4390 "src/glsl/glsl_parser.cpp"
    break;

  case 145: /* single_declaration: INVARIANT variable_identifier  */
#line 1104 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->invariant = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4406 "src/glsl/glsl_parser.cpp"
    break;

  case 146: /* single_declaration: PRECISE variable_identifier  */
#line 1116 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      decl->set_location((yylsp[0]));

      (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
      (yyval.declarator_list)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.declarator_list)->precise = true;

      (yyval.declarator_list)->declarations.push_tail(&decl->link);
   }
#line 4422 "src/glsl/glsl_parser.cpp"
    break;

  case 147: /* fully_specified_type: type_specifier  */
#line 1131 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location((yylsp[0]));
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
   }
#line 4433 "src/glsl/glsl_parser.cpp"
    break;

  case 148: /* fully_specified_type: type_qualifier type_specifier  */
#line 1138 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
      (yyval.fully_specified_type)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.fully_specified_type)->qualifier = (yyvsp[-1].type_qualifier);
      (yyval.fully_specified_type)->specifier = (yyvsp[0].type_specifier);
   }
#line 4445 "src/glsl/glsl_parser.cpp"
    break;

  case 149: /* layout_qualifier: LAYOUT_TOK '(' layout_qualifier_id_list ')'  */
#line 1149 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
   }
#line 4453 "src/glsl/glsl_parser.cpp"
    break;

  case 151: /* layout_qualifier_id_list: layout_qualifier_id_list ',' layout_qualifier_id  */
#line 1157 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[-2].type_qualifier);
      if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[0]), state, (yyvsp[0].type_qualifier))) {
         YYERROR;
      }
   }
#line 4464 "src/glsl/glsl_parser.cpp"
    break;

  case 152: /* integer_constant: INTCONSTANT  */
#line 1166 "src/glsl/glsl_parser.yy"
               { (yyval.n) = (yyvsp[0].n); }
#line 4470 "src/glsl/glsl_parser.cpp"
    break;

  case 153: /* integer_constant: UINTCONSTANT  */
#line 1167 "src/glsl/glsl_parser.yy"
                  { (yyval.n) = (yyvsp[0].n); }
#line 4476 "src/glsl/glsl_parser.cpp"
    break;

  case 154: /* layout_qualifier_id: any_identifier  */
#line 1172 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;

      /* Layout qualifiers for ARB_fragment_coord_conventions. */
      if (!(yyval.type_qualifier).flags.i && (state->ARB_fragment_coord_conventions_enable ||
                          state->is_version(150, 0))) {
         if (match_layout_qualifier((yyvsp[0].identifier), "origin_upper_left", state) == 0) {
            (yyval.type_qualifier).flags.q.origin_upper_left = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "pixel_center_integer",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.pixel_center_integer = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_fragment_coord_conventions layout "
                               "identifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for AMD/ARB_conservative_depth. */
      if (!(yyval.type_qualifier).flags.i &&
          (state->AMD_conservative_depth_enable ||
           state->ARB_conservative_depth_enable)) {
         if (match_layout_qualifier((yyvsp[0].identifier), "depth_any", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_any = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_greater", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_greater = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_less", state) == 0) {
            (yyval.type_qualifier).flags.q.depth_less = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "depth_unchanged",
                                           state) == 0) {
            (yyval.type_qualifier).flags.q.depth_unchanged = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->AMD_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_AMD_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
         if ((yyval.type_qualifier).flags.i && state->ARB_conservative_depth_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "GL_ARB_conservative_depth "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* See also interface_block_layout_qualifier. */
      if (!(yyval.type_qualifier).flags.i && state->has_uniform_buffer_objects()) {
         if (match_layout_qualifier((yyvsp[0].identifier), "std140", state) == 0) {
            (yyval.type_qualifier).flags.q.std140 = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "shared", state) == 0) {
            (yyval.type_qualifier).flags.q.shared = 1;
         } else if (match_layout_qualifier((yyvsp[0].identifier), "column_major", state) == 0) {
            (yyval.type_qualifier).flags.q.column_major = 1;
         /* "row_major" is a reserved word in GLSL 1.30+. Its token is parsed
          * below in the interface_block_layout_qualifier rule.
          *
          * It is not a reserved word in GLSL ES 3.00, so it's handled here as
          * an identifier.
          *
          * Also, this takes care of alternate capitalizations of
          * "row_major" (which is necessary because layout qualifiers
          * are case-insensitive in desktop GLSL).
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "row_major", state) == 0) {
            (yyval.type_qualifier).flags.q.row_major = 1;
         /* "packed" is a reserved word in GLSL, and its token is
          * parsed below in the interface_block_layout_qualifier rule.
          * However, we must take care of alternate capitalizations of
          * "packed", because layout qualifiers are case-insensitive
          * in desktop GLSL.
          */
         } else if (match_layout_qualifier((yyvsp[0].identifier), "packed", state) == 0) {
           (yyval.type_qualifier).flags.q.packed = 1;
         }

         if ((yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[0]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "layout qualifier `%s' is used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for GLSL 1.50 geometry shaders. */
      if (!(yyval.type_qualifier).flags.i) {
         static const struct {
            const char *s;
            GLenum e;
         } map[] = {
                 { "points", GL_POINTS },
                 { "lines", GL_LINES },
                 { "lines_adjacency", GL_LINES_ADJACENCY },
                 { "line_strip", GL_LINE_STRIP },
                 { "triangles", GL_TRIANGLES },
                 { "triangles_adjacency", GL_TRIANGLES_ADJACENCY },
                 { "triangle_strip", GL_TRIANGLE_STRIP },
         };
         for (unsigned i = 0; i < Elements(map); i++) {
            if (match_layout_qualifier((yyvsp[0].identifier), map[i].s, state) == 0) {
               (yyval.type_qualifier).flags.q.prim_type = 1;
               (yyval.type_qualifier).prim_type = map[i].e;
               break;
            }
         }

         if ((yyval.type_qualifier).flags.i && !state->is_version(150, 0)) {
            _mesa_glsl_error(& (yylsp[0]), state, "#version 150 layout "
                             "qualifier `%s' used", (yyvsp[0].identifier));
         }
      }

      /* Layout qualifiers for ARB_shader_image_load_store. */
      if (state->ARB_shader_image_load_store_enable ||
          state->is_version(420, 0)) {
         if (!(yyval.type_qualifier).flags.i) {
            static const struct {
               const char *name;
               GLenum format;
               glsl_base_type base_type;
            } map[] = {
               { "rgba32f", GL_RGBA32F, GLSL_TYPE_FLOAT },
               { "rgba16f", GL_RGBA16F, GLSL_TYPE_FLOAT },
               { "rg32f", GL_RG32F, GLSL_TYPE_FLOAT },
               { "rg16f", GL_RG16F, GLSL_TYPE_FLOAT },
               { "r11f_g11f_b10f", GL_R11F_G11F_B10F, GLSL_TYPE_FLOAT },
               { "r32f", GL_R32F, GLSL_TYPE_FLOAT },
               { "r16f", GL_R16F, GLSL_TYPE_FLOAT },
               { "rgba32ui", GL_RGBA32UI, GLSL_TYPE_UINT },
               { "rgba16ui", GL_RGBA16UI, GLSL_TYPE_UINT },
               { "rgb10_a2ui", GL_RGB10_A2UI, GLSL_TYPE_UINT },
               { "rgba8ui", GL_RGBA8UI, GLSL_TYPE_UINT },
               { "rg32ui", GL_RG32UI, GLSL_TYPE_UINT },
               { "rg16ui", GL_RG16UI, GLSL_TYPE_UINT },
               { "rg8ui", GL_RG8UI, GLSL_TYPE_UINT },
               { "r32ui", GL_R32UI, GLSL_TYPE_UINT },
               { "r16ui", GL_R16UI, GLSL_TYPE_UINT },
               { "r8ui", GL_R8UI, GLSL_TYPE_UINT },
               { "rgba32i", GL_RGBA32I, GLSL_TYPE_INT },
               { "rgba16i", GL_RGBA16I, GLSL_TYPE_INT },
               { "rgba8i", GL_RGBA8I, GLSL_TYPE_INT },
               { "rg32i", GL_RG32I, GLSL_TYPE_INT },
               { "rg16i", GL_RG16I, GLSL_TYPE_INT },
               { "rg8i", GL_RG8I, GLSL_TYPE_INT },
               { "r32i", GL_R32I, GLSL_TYPE_INT },
               { "r16i", GL_R16I, GLSL_TYPE_INT },
               { "r8i", GL_R8I, GLSL_TYPE_INT },
               { "rgba16", GL_RGBA16, GLSL_TYPE_FLOAT },
               { "rgb10_a2", GL_RGB10_A2, GLSL_TYPE_FLOAT },
               { "rgba8", GL_RGBA8, GLSL_TYPE_FLOAT },
               { "rg16", GL_RG16, GLSL_TYPE_FLOAT },
               { "rg8", GL_RG8, GLSL_TYPE_FLOAT },
               { "r16", GL_R16, GLSL_TYPE_FLOAT },
               { "r8", GL_R8, GLSL_TYPE_FLOAT },
               { "rgba16_snorm", GL_RGBA16_SNORM, GLSL_TYPE_FLOAT },
               { "rgba8_snorm", GL_RGBA8_SNORM, GLSL_TYPE_FLOAT },
               { "rg16_snorm", GL_RG16_SNORM, GLSL_TYPE_FLOAT },
               { "rg8_snorm", GL_RG8_SNORM, GLSL_TYPE_FLOAT },
               { "r16_snorm", GL_R16_SNORM, GLSL_TYPE_FLOAT },
               { "r8_snorm", GL_R8_SNORM, GLSL_TYPE_FLOAT }
            };

            for (unsigned i = 0; i < Elements(map); i++) {
               if (match_layout_qualifier((yyvsp[0].identifier), map[i].name, state) == 0) {
                  (yyval.type_qualifier).flags.q.explicit_image_format = 1;
                  (yyval.type_qualifier).image_format = map[i].format;
                  (yyval.type_qualifier).image_base_type = map[i].base_type;
                  break;
               }
            }
         }

         if (!(yyval.type_qualifier).flags.i &&
             match_layout_qualifier((yyvsp[0].identifier), "early_fragment_tests", state) == 0) {
            (yyval.type_qualifier).flags.q.early_fragment_tests = 1;
         }
      }

      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[0]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[0].identifier));
         YYERROR;
      }
   }
#line 4666 "src/glsl/glsl_parser.cpp"
    break;

  case 155: /* layout_qualifier_id: any_identifier '=' integer_constant  */
#line 1358 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;

      if (match_layout_qualifier("location", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_location = 1;

         if ((yyval.type_qualifier).flags.q.attribute == 1 &&
             state->ARB_explicit_attrib_location_warn) {
            _mesa_glsl_warning(& (yylsp[-2]), state,
                               "GL_ARB_explicit_attrib_location layout "
                               "identifier `%s' used", (yyvsp[-2].identifier));
         }

         if ((yyvsp[0].n) >= 0) {
            (yyval.type_qualifier).location = (yyvsp[0].n);
         } else {
             _mesa_glsl_error(& (yylsp[0]), state, "invalid location %d specified", (yyvsp[0].n));
             YYERROR;
         }
      }

      if (match_layout_qualifier("index", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_index = 1;

         if ((yyvsp[0].n) >= 0) {
            (yyval.type_qualifier).index = (yyvsp[0].n);
         } else {
            _mesa_glsl_error(& (yylsp[0]), state, "invalid index %d specified", (yyvsp[0].n));
            YYERROR;
         }
      }

      if ((state->ARB_shading_language_420pack_enable ||
           state->ARB_shader_atomic_counters_enable) &&
          match_layout_qualifier("binding", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_binding = 1;
         (yyval.type_qualifier).binding = (yyvsp[0].n);
      }

      if (state->ARB_shader_atomic_counters_enable &&
          match_layout_qualifier("offset", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.explicit_offset = 1;
         (yyval.type_qualifier).offset = (yyvsp[0].n);
      }

      if (match_layout_qualifier("max_vertices", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.max_vertices = 1;

         if ((yyvsp[0].n) < 0) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invalid max_vertices %d specified", (yyvsp[0].n));
            YYERROR;
         } else {
            (yyval.type_qualifier).max_vertices = (yyvsp[0].n);
            if (!state->is_version(150, 0)) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "#version 150 max_vertices qualifier "
                                "specified", (yyvsp[0].n));
            }
         }
      }

      if (state->stage == MESA_SHADER_GEOMETRY) {
         if (match_layout_qualifier("stream", (yyvsp[-2].identifier), state) == 0 &&
             state->check_explicit_attrib_stream_allowed(& (yylsp[0]))) {
            (yyval.type_qualifier).flags.q.stream = 1;

            if ((yyvsp[0].n) < 0) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "invalid stream %d specified", (yyvsp[0].n));
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.explicit_stream = 1;
               (yyval.type_qualifier).stream = (yyvsp[0].n);
            }
         }
      }

      static const char * const local_size_qualifiers[3] = {
         "local_size_x",
         "local_size_y",
         "local_size_z",
      };
      for (int i = 0; i < 3; i++) {
         if (match_layout_qualifier(local_size_qualifiers[i], (yyvsp[-2].identifier),
                                    state) == 0) {
            if ((yyvsp[0].n) <= 0) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "invalid %s of %d specified",
                                local_size_qualifiers[i], (yyvsp[0].n));
               YYERROR;
            } else if (!state->is_version(430, 0) &&
                       !state->ARB_compute_shader_enable) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "%s qualifier requires GLSL 4.30 or "
                                "ARB_compute_shader",
                                local_size_qualifiers[i]);
               YYERROR;
            } else {
               (yyval.type_qualifier).flags.q.local_size |= (1 << i);
               (yyval.type_qualifier).local_size[i] = (yyvsp[0].n);
            }
            break;
         }
      }

      if (match_layout_qualifier("invocations", (yyvsp[-2].identifier), state) == 0) {
         (yyval.type_qualifier).flags.q.invocations = 1;

         if ((yyvsp[0].n) <= 0) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invalid invocations %d specified", (yyvsp[0].n));
            YYERROR;
         } else if ((yyvsp[0].n) > MAX_GEOMETRY_SHADER_INVOCATIONS) {
            _mesa_glsl_error(& (yylsp[0]), state,
                             "invocations (%d) exceeds "
                             "GL_MAX_GEOMETRY_SHADER_INVOCATIONS", (yyvsp[0].n));
            YYERROR;
         } else {
            (yyval.type_qualifier).invocations = (yyvsp[0].n);
            if (!state->is_version(400, 0) &&
                !state->ARB_gpu_shader5_enable) {
               _mesa_glsl_error(& (yylsp[0]), state,
                                "GL_ARB_gpu_shader5 invocations "
                                "qualifier specified", (yyvsp[0].n));
            }
         }
      }

      /* If the identifier didn't match any known layout identifiers,
       * emit an error.
       */
      if (!(yyval.type_qualifier).flags.i) {
         _mesa_glsl_error(& (yylsp[-2]), state, "unrecognized layout identifier "
                          "`%s'", (yyvsp[-2].identifier));
         YYERROR;
      }
   }
#line 4810 "src/glsl/glsl_parser.cpp"
    break;

  case 156: /* layout_qualifier_id: interface_block_layout_qualifier  */
#line 1498 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      /* Layout qualifiers for ARB_uniform_buffer_object. */
      if ((yyval.type_qualifier).flags.q.uniform && !state->has_uniform_buffer_objects()) {
         _mesa_glsl_error(& (yylsp[0]), state,
                          "#version 140 / GL_ARB_uniform_buffer_object "
                          "layout qualifier `%s' is used", (yyvsp[0].type_qualifier));
      } else if ((yyval.type_qualifier).flags.q.uniform && state->ARB_uniform_buffer_object_warn) {
         _mesa_glsl_warning(& (yylsp[0]), state,
                            "#version 140 / GL_ARB_uniform_buffer_object "
                            "layout qualifier `%s' is used", (yyvsp[0].type_qualifier));
      }
   }
#line 4828 "src/glsl/glsl_parser.cpp"
    break;

  case 157: /* interface_block_layout_qualifier: ROW_MAJOR  */
#line 1524 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.row_major = 1;
   }
#line 4838 "src/glsl/glsl_parser.cpp"
    break;

  case 158: /* interface_block_layout_qualifier: PACKED_TOK  */
#line 1530 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.packed = 1;
   }
#line 4848 "src/glsl/glsl_parser.cpp"
    break;

  case 159: /* interpolation_qualifier: SMOOTH  */
#line 1539 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.smooth = 1;
   }
#line 4858 "src/glsl/glsl_parser.cpp"
    break;

  case 160: /* interpolation_qualifier: FLAT  */
#line 1545 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.flat = 1;
   }
#line 4868 "src/glsl/glsl_parser.cpp"
    break;

  case 161: /* interpolation_qualifier: NOPERSPECTIVE  */
#line 1551 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.noperspective = 1;
   }
#line 4878 "src/glsl/glsl_parser.cpp"
    break;

  case 162: /* type_qualifier: INVARIANT  */
#line 1561 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.invariant = 1;
   }
#line 4888 "src/glsl/glsl_parser.cpp"
    break;

  case 163: /* type_qualifier: PRECISE  */
#line 1567 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4897 "src/glsl/glsl_parser.cpp"
    break;

  case 168: /* type_qualifier: precision_qualifier  */
#line 1576 "src/glsl/glsl_parser.yy"
   {
      memset(&(yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).precision = (yyvsp[0].n);
   }
#line 4907 "src/glsl/glsl_parser.cpp"
    break;

  case 169: /* type_qualifier: PRECISE type_qualifier  */
#line 1595 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"precise\" qualifier");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.precise = 1;
   }
#line 4919 "src/glsl/glsl_parser.cpp"
    break;

  case 170: /* type_qualifier: INVARIANT type_qualifier  */
#line 1603 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).flags.q.invariant)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate \"invariant\" qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.q.precise)
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "\"invariant\" must come after \"precise\"");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).flags.q.invariant = 1;
   }
#line 4935 "src/glsl/glsl_parser.cpp"
    break;

  case 171: /* type_qualifier: interpolation_qualifier type_qualifier  */
#line 1615 "src/glsl/glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.40 specification states:
       * "...qualified with one of these interpolation qualifiers"
       *
       * GLSL 1.30 claims to allow "one or more", but insists that:
       * "These interpolation qualifiers may only precede the qualifiers in,
       *  centroid in, out, or centroid out in a declaration."
       *
       * ...which means that e.g. smooth can't precede smooth, so there can be
       * only one after all, and the 1.40 text is a clarification, not a change.
       */
      if ((yyvsp[0].type_qualifier).has_interpolation())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate interpolation qualifier");

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant)) {
         _mesa_glsl_error(&(yylsp[-1]), state, "interpolation qualifiers must come "
                          "after \"precise\" or \"invariant\"");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4963 "src/glsl/glsl_parser.cpp"
    break;

  case 172: /* type_qualifier: layout_qualifier type_qualifier  */
#line 1639 "src/glsl/glsl_parser.yy"
   {
      /* In the absence of ARB_shading_language_420pack, layout qualifiers may
       * appear no later than auxiliary storage qualifiers. There is no
       * particularly clear spec language mandating this, but in all examples
       * the layout qualifier precedes the storage qualifier.
       *
       * We allow combinations of layout with interpolation, invariant or
       * precise qualifiers since these are useful in ARB_separate_shader_objects.
       * There is no clear spec guidance on this either.
       */
      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).has_layout())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate layout(...) qualifiers");

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 4984 "src/glsl/glsl_parser.cpp"
    break;

  case 173: /* type_qualifier: auxiliary_storage_qualifier type_qualifier  */
#line 1656 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).has_auxiliary_storage()) {
         _mesa_glsl_error(&(yylsp[-1]), state,
                          "duplicate auxiliary storage qualifier (centroid or sample)");
      }

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant ||
           (yyvsp[0].type_qualifier).has_interpolation() || (yyvsp[0].type_qualifier).has_layout())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "auxiliary storage qualifiers must come "
                          "just before storage qualifiers");
      }
      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 5004 "src/glsl/glsl_parser.cpp"
    break;

  case 174: /* type_qualifier: storage_qualifier type_qualifier  */
#line 1672 "src/glsl/glsl_parser.yy"
   {
      /* Section 4.3 of the GLSL 1.20 specification states:
       * "Variable declarations may have a storage qualifier specified..."
       *  1.30 clarifies this to "may have one storage qualifier".
       */
      if ((yyvsp[0].type_qualifier).has_storage())
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate storage qualifier");

      if (!state->ARB_shading_language_420pack_enable &&
          ((yyvsp[0].type_qualifier).flags.q.precise || (yyvsp[0].type_qualifier).flags.q.invariant || (yyvsp[0].type_qualifier).has_interpolation() ||
           (yyvsp[0].type_qualifier).has_layout() || (yyvsp[0].type_qualifier).has_auxiliary_storage())) {
         _mesa_glsl_error(&(yylsp[-1]), state, "storage qualifiers must come after "
                          "precise, invariant, interpolation, layout and auxiliary "
                          "storage qualifiers");
      }

      (yyval.type_qualifier) = (yyvsp[-1].type_qualifier);
      (yyval.type_qualifier).merge_qualifier(&(yylsp[-1]), state, (yyvsp[0].type_qualifier));
   }
#line 5028 "src/glsl/glsl_parser.cpp"
    break;

  case 175: /* type_qualifier: precision_qualifier type_qualifier  */
#line 1692 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].type_qualifier).precision != ast_precision_none)
         _mesa_glsl_error(&(yylsp[-1]), state, "duplicate precision qualifier");

      if (!state->ARB_shading_language_420pack_enable && (yyvsp[0].type_qualifier).flags.i != 0)
         _mesa_glsl_error(&(yylsp[-1]), state, "precision qualifiers must come last");

      (yyval.type_qualifier) = (yyvsp[0].type_qualifier);
      (yyval.type_qualifier).precision = (yyvsp[-1].n);
   }
#line 5043 "src/glsl/glsl_parser.cpp"
    break;

  case 176: /* auxiliary_storage_qualifier: CENTROID  */
#line 1706 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.centroid = 1;
   }
#line 5053 "src/glsl/glsl_parser.cpp"
    break;

  case 177: /* auxiliary_storage_qualifier: SAMPLE  */
#line 1712 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.sample = 1;
   }
#line 5062 "src/glsl/glsl_parser.cpp"
    break;

  case 178: /* storage_qualifier: CONST_TOK  */
#line 1720 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.constant = 1;
   }
#line 5072 "src/glsl/glsl_parser.cpp"
    break;

  case 179: /* storage_qualifier: ATTRIBUTE  */
#line 1726 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.attribute = 1;
   }
#line 5082 "src/glsl/glsl_parser.cpp"
    break;

  case 180: /* storage_qualifier: VARYING  */
#line 1732 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.varying = 1;
   }
#line 5092 "src/glsl/glsl_parser.cpp"
    break;

  case 181: /* storage_qualifier: IN_TOK  */
#line 1738 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 5102 "src/glsl/glsl_parser.cpp"
    break;

  case 182: /* storage_qualifier: OUT_TOK  */
#line 1744 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 5112 "src/glsl/glsl_parser.cpp"
    break;

  case 183: /* storage_qualifier: INOUT_TOK  */
#line 1750 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
      (yyval.type_qualifier).flags.q.out = 1;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Section 4.3.8.2 (Output Layout Qualifiers) of the GLSL 4.00
          * spec says:
          *
          *     "If the block or variable is declared with the stream
          *     identifier, it is associated with the specified stream;
          *     otherwise, it is associated with the current default stream."
          */
          (yyval.type_qualifier).flags.q.stream = 1;
          (yyval.type_qualifier).flags.q.explicit_stream = 0;
          (yyval.type_qualifier).stream = state->out_qualifier->stream;
      }
   }
#line 5137 "src/glsl/glsl_parser.cpp"
    break;

  case 184: /* storage_qualifier: UNIFORM  */
#line 1771 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 5147 "src/glsl/glsl_parser.cpp"
    break;

  case 185: /* storage_qualifier: COHERENT  */
#line 1777 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.coherent = 1;
   }
#line 5156 "src/glsl/glsl_parser.cpp"
    break;

  case 186: /* storage_qualifier: VOLATILE  */
#line 1782 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q._volatile = 1;
   }
#line 5165 "src/glsl/glsl_parser.cpp"
    break;

  case 187: /* storage_qualifier: RESTRICT  */
#line 1787 "src/glsl/glsl_parser.yy"
   {
      STATIC_ASSERT(sizeof((yyval.type_qualifier).flags.q) <= sizeof((yyval.type_qualifier).flags.i));
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.restrict_flag = 1;
   }
#line 5175 "src/glsl/glsl_parser.cpp"
    break;

  case 188: /* storage_qualifier: READONLY  */
#line 1793 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.read_only = 1;
   }
#line 5184 "src/glsl/glsl_parser.cpp"
    break;

  case 189: /* storage_qualifier: WRITEONLY  */
#line 1798 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
      (yyval.type_qualifier).flags.q.write_only = 1;
   }
#line 5193 "src/glsl/glsl_parser.cpp"
    break;

  case 190: /* array_specifier: '[' ']'  */
#line 1806 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-1]));
      (yyval.array_specifier)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 5203 "src/glsl/glsl_parser.cpp"
    break;

  case 191: /* array_specifier: '[' constant_expression ']'  */
#line 1812 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.array_specifier) = new(ctx) ast_array_specifier((yylsp[-2]), (yyvsp[-1].expression));
      (yyval.array_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5213 "src/glsl/glsl_parser.cpp"
    break;

  case 192: /* array_specifier: array_specifier '[' ']'  */
#line 1818 "src/glsl/glsl_parser.yy"
   {
      (yyval.array_specifier) = (yyvsp[-2].array_specifier);

      if (!state->ARB_arrays_of_arrays_enable) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "GL_ARB_arrays_of_arrays "
                          "required for defining arrays of arrays");
      } else {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "only the outermost array dimension can "
                          "be unsized");
      }
   }
#line 5231 "src/glsl/glsl_parser.cpp"
    break;

  case 193: /* array_specifier: array_specifier '[' constant_expression ']'  */
#line 1832 "src/glsl/glsl_parser.yy"
   {
      (yyval.array_specifier) = (yyvsp[-3].array_specifier);

      if (!state->ARB_arrays_of_arrays_enable) {
         _mesa_glsl_error(& (yylsp[-3]), state,
                          "GL_ARB_arrays_of_arrays "
                          "required for defining arrays of arrays");
      }

      (yyval.array_specifier)->add_dimension((yyvsp[-1].expression));
   }
#line 5247 "src/glsl/glsl_parser.cpp"
    break;

  case 195: /* type_specifier: type_specifier_nonarray array_specifier  */
#line 1848 "src/glsl/glsl_parser.yy"
   {
      (yyval.type_specifier) = (yyvsp[-1].type_specifier);
      (yyval.type_specifier)->array_specifier = (yyvsp[0].array_specifier);
   }
#line 5256 "src/glsl/glsl_parser.cpp"
    break;

  case 196: /* type_specifier_nonarray: basic_type_specifier_nonarray  */
#line 1856 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].identifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5266 "src/glsl/glsl_parser.cpp"
    break;

  case 197: /* type_specifier_nonarray: struct_specifier  */
#line 1862 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].struct_specifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5276 "src/glsl/glsl_parser.cpp"
    break;

  case 198: /* type_specifier_nonarray: TYPE_IDENTIFIER  */
#line 1868 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[0].identifier));
      (yyval.type_specifier)->set_location((yylsp[0]));
   }
#line 5286 "src/glsl/glsl_parser.cpp"
    break;

  case 199: /* basic_type_specifier_nonarray: VOID_TOK  */
#line 1876 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "void"; }
#line 5292 "src/glsl/glsl_parser.cpp"
    break;

  case 200: /* basic_type_specifier_nonarray: FLOAT_TOK  */
#line 1877 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "float"; }
#line 5298 "src/glsl/glsl_parser.cpp"
    break;

  case 201: /* basic_type_specifier_nonarray: INT_TOK  */
#line 1878 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "int"; }
#line 5304 "src/glsl/glsl_parser.cpp"
    break;

  case 202: /* basic_type_specifier_nonarray: UINT_TOK  */
#line 1879 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uint"; }
#line 5310 "src/glsl/glsl_parser.cpp"
    break;

  case 203: /* basic_type_specifier_nonarray: BOOL_TOK  */
#line 1880 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bool"; }
#line 5316 "src/glsl/glsl_parser.cpp"
    break;

  case 204: /* basic_type_specifier_nonarray: VEC2  */
#line 1881 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec2"; }
#line 5322 "src/glsl/glsl_parser.cpp"
    break;

  case 205: /* basic_type_specifier_nonarray: VEC3  */
#line 1882 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec3"; }
#line 5328 "src/glsl/glsl_parser.cpp"
    break;

  case 206: /* basic_type_specifier_nonarray: VEC4  */
#line 1883 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "vec4"; }
#line 5334 "src/glsl/glsl_parser.cpp"
    break;

  case 207: /* basic_type_specifier_nonarray: BVEC2  */
#line 1884 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec2"; }
#line 5340 "src/glsl/glsl_parser.cpp"
    break;

  case 208: /* basic_type_specifier_nonarray: BVEC3  */
#line 1885 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec3"; }
#line 5346 "src/glsl/glsl_parser.cpp"
    break;

  case 209: /* basic_type_specifier_nonarray: BVEC4  */
#line 1886 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "bvec4"; }
#line 5352 "src/glsl/glsl_parser.cpp"
    break;

  case 210: /* basic_type_specifier_nonarray: IVEC2  */
#line 1887 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec2"; }
#line 5358 "src/glsl/glsl_parser.cpp"
    break;

  case 211: /* basic_type_specifier_nonarray: IVEC3  */
#line 1888 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec3"; }
#line 5364 "src/glsl/glsl_parser.cpp"
    break;

  case 212: /* basic_type_specifier_nonarray: IVEC4  */
#line 1889 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "ivec4"; }
#line 5370 "src/glsl/glsl_parser.cpp"
    break;

  case 213: /* basic_type_specifier_nonarray: UVEC2  */
#line 1890 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec2"; }
#line 5376 "src/glsl/glsl_parser.cpp"
    break;

  case 214: /* basic_type_specifier_nonarray: UVEC3  */
#line 1891 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec3"; }
#line 5382 "src/glsl/glsl_parser.cpp"
    break;

  case 215: /* basic_type_specifier_nonarray: UVEC4  */
#line 1892 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uvec4"; }
#line 5388 "src/glsl/glsl_parser.cpp"
    break;

  case 216: /* basic_type_specifier_nonarray: MAT2X2  */
#line 1893 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2"; }
#line 5394 "src/glsl/glsl_parser.cpp"
    break;

  case 217: /* basic_type_specifier_nonarray: MAT2X3  */
#line 1894 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2x3"; }
#line 5400 "src/glsl/glsl_parser.cpp"
    break;

  case 218: /* basic_type_specifier_nonarray: MAT2X4  */
#line 1895 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat2x4"; }
#line 5406 "src/glsl/glsl_parser.cpp"
    break;

  case 219: /* basic_type_specifier_nonarray: MAT3X2  */
#line 1896 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3x2"; }
#line 5412 "src/glsl/glsl_parser.cpp"
    break;

  case 220: /* basic_type_specifier_nonarray: MAT3X3  */
#line 1897 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3"; }
#line 5418 "src/glsl/glsl_parser.cpp"
    break;

  case 221: /* basic_type_specifier_nonarray: MAT3X4  */
#line 1898 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat3x4"; }
#line 5424 "src/glsl/glsl_parser.cpp"
    break;

  case 222: /* basic_type_specifier_nonarray: MAT4X2  */
#line 1899 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4x2"; }
#line 5430 "src/glsl/glsl_parser.cpp"
    break;

  case 223: /* basic_type_specifier_nonarray: MAT4X3  */
#line 1900 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4x3"; }
#line 5436 "src/glsl/glsl_parser.cpp"
    break;

  case 224: /* basic_type_specifier_nonarray: MAT4X4  */
#line 1901 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "mat4"; }
#line 5442 "src/glsl/glsl_parser.cpp"
    break;

  case 225: /* basic_type_specifier_nonarray: SAMPLER1D  */
#line 1902 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1D"; }
#line 5448 "src/glsl/glsl_parser.cpp"
    break;

  case 226: /* basic_type_specifier_nonarray: SAMPLER2D  */
#line 1903 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2D"; }
#line 5454 "src/glsl/glsl_parser.cpp"
    break;

  case 227: /* basic_type_specifier_nonarray: SAMPLER2DRECT  */
#line 1904 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DRect"; }
#line 5460 "src/glsl/glsl_parser.cpp"
    break;

  case 228: /* basic_type_specifier_nonarray: SAMPLER3D  */
#line 1905 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler3D"; }
#line 5466 "src/glsl/glsl_parser.cpp"
    break;

  case 229: /* basic_type_specifier_nonarray: SAMPLERCUBE  */
#line 1906 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCube"; }
#line 5472 "src/glsl/glsl_parser.cpp"
    break;

  case 230: /* basic_type_specifier_nonarray: SAMPLEREXTERNALOES  */
#line 1907 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerExternalOES"; }
#line 5478 "src/glsl/glsl_parser.cpp"
    break;

  case 231: /* basic_type_specifier_nonarray: SAMPLER1DSHADOW  */
#line 1908 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DShadow"; }
#line 5484 "src/glsl/glsl_parser.cpp"
    break;

  case 232: /* basic_type_specifier_nonarray: SAMPLER2DSHADOW  */
#line 1909 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DShadow"; }
#line 5490 "src/glsl/glsl_parser.cpp"
    break;

  case 233: /* basic_type_specifier_nonarray: SAMPLER2DRECTSHADOW  */
#line 1910 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DRectShadow"; }
#line 5496 "src/glsl/glsl_parser.cpp"
    break;

  case 234: /* basic_type_specifier_nonarray: SAMPLERCUBESHADOW  */
#line 1911 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeShadow"; }
#line 5502 "src/glsl/glsl_parser.cpp"
    break;

  case 235: /* basic_type_specifier_nonarray: SAMPLER1DARRAY  */
#line 1912 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DArray"; }
#line 5508 "src/glsl/glsl_parser.cpp"
    break;

  case 236: /* basic_type_specifier_nonarray: SAMPLER2DARRAY  */
#line 1913 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DArray"; }
#line 5514 "src/glsl/glsl_parser.cpp"
    break;

  case 237: /* basic_type_specifier_nonarray: SAMPLER1DARRAYSHADOW  */
#line 1914 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler1DArrayShadow"; }
#line 5520 "src/glsl/glsl_parser.cpp"
    break;

  case 238: /* basic_type_specifier_nonarray: SAMPLER2DARRAYSHADOW  */
#line 1915 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DArrayShadow"; }
#line 5526 "src/glsl/glsl_parser.cpp"
    break;

  case 239: /* basic_type_specifier_nonarray: SAMPLERBUFFER  */
#line 1916 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerBuffer"; }
#line 5532 "src/glsl/glsl_parser.cpp"
    break;

  case 240: /* basic_type_specifier_nonarray: SAMPLERCUBEARRAY  */
#line 1917 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeArray"; }
#line 5538 "src/glsl/glsl_parser.cpp"
    break;

  case 241: /* basic_type_specifier_nonarray: SAMPLERCUBEARRAYSHADOW  */
#line 1918 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "samplerCubeArrayShadow"; }
#line 5544 "src/glsl/glsl_parser.cpp"
    break;

  case 242: /* basic_type_specifier_nonarray: ISAMPLER1D  */
#line 1919 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler1D"; }
#line 5550 "src/glsl/glsl_parser.cpp"
    break;

  case 243: /* basic_type_specifier_nonarray: ISAMPLER2D  */
#line 1920 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2D"; }
#line 5556 "src/glsl/glsl_parser.cpp"
    break;

  case 244: /* basic_type_specifier_nonarray: ISAMPLER2DRECT  */
#line 1921 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DRect"; }
#line 5562 "src/glsl/glsl_parser.cpp"
    break;

  case 245: /* basic_type_specifier_nonarray: ISAMPLER3D  */
#line 1922 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler3D"; }
#line 5568 "src/glsl/glsl_parser.cpp"
    break;

  case 246: /* basic_type_specifier_nonarray: ISAMPLERCUBE  */
#line 1923 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerCube"; }
#line 5574 "src/glsl/glsl_parser.cpp"
    break;

  case 247: /* basic_type_specifier_nonarray: ISAMPLER1DARRAY  */
#line 1924 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler1DArray"; }
#line 5580 "src/glsl/glsl_parser.cpp"
    break;

  case 248: /* basic_type_specifier_nonarray: ISAMPLER2DARRAY  */
#line 1925 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DArray"; }
#line 5586 "src/glsl/glsl_parser.cpp"
    break;

  case 249: /* basic_type_specifier_nonarray: ISAMPLERBUFFER  */
#line 1926 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerBuffer"; }
#line 5592 "src/glsl/glsl_parser.cpp"
    break;

  case 250: /* basic_type_specifier_nonarray: ISAMPLERCUBEARRAY  */
#line 1927 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isamplerCubeArray"; }
#line 5598 "src/glsl/glsl_parser.cpp"
    break;

  case 251: /* basic_type_specifier_nonarray: USAMPLER1D  */
#line 1928 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler1D"; }
#line 5604 "src/glsl/glsl_parser.cpp"
    break;

  case 252: /* basic_type_specifier_nonarray: USAMPLER2D  */
#line 1929 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2D"; }
#line 5610 "src/glsl/glsl_parser.cpp"
    break;

  case 253: /* basic_type_specifier_nonarray: USAMPLER2DRECT  */
#line 1930 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DRect"; }
#line 5616 "src/glsl/glsl_parser.cpp"
    break;

  case 254: /* basic_type_specifier_nonarray: USAMPLER3D  */
#line 1931 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler3D"; }
#line 5622 "src/glsl/glsl_parser.cpp"
    break;

  case 255: /* basic_type_specifier_nonarray: USAMPLERCUBE  */
#line 1932 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerCube"; }
#line 5628 "src/glsl/glsl_parser.cpp"
    break;

  case 256: /* basic_type_specifier_nonarray: USAMPLER1DARRAY  */
#line 1933 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler1DArray"; }
#line 5634 "src/glsl/glsl_parser.cpp"
    break;

  case 257: /* basic_type_specifier_nonarray: USAMPLER2DARRAY  */
#line 1934 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DArray"; }
#line 5640 "src/glsl/glsl_parser.cpp"
    break;

  case 258: /* basic_type_specifier_nonarray: USAMPLERBUFFER  */
#line 1935 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerBuffer"; }
#line 5646 "src/glsl/glsl_parser.cpp"
    break;

  case 259: /* basic_type_specifier_nonarray: USAMPLERCUBEARRAY  */
#line 1936 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usamplerCubeArray"; }
#line 5652 "src/glsl/glsl_parser.cpp"
    break;

  case 260: /* basic_type_specifier_nonarray: SAMPLER2DMS  */
#line 1937 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DMS"; }
#line 5658 "src/glsl/glsl_parser.cpp"
    break;

  case 261: /* basic_type_specifier_nonarray: ISAMPLER2DMS  */
#line 1938 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DMS"; }
#line 5664 "src/glsl/glsl_parser.cpp"
    break;

  case 262: /* basic_type_specifier_nonarray: USAMPLER2DMS  */
#line 1939 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DMS"; }
#line 5670 "src/glsl/glsl_parser.cpp"
    break;

  case 263: /* basic_type_specifier_nonarray: SAMPLER2DMSARRAY  */
#line 1940 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "sampler2DMSArray"; }
#line 5676 "src/glsl/glsl_parser.cpp"
    break;

  case 264: /* basic_type_specifier_nonarray: ISAMPLER2DMSARRAY  */
#line 1941 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "isampler2DMSArray"; }
#line 5682 "src/glsl/glsl_parser.cpp"
    break;

  case 265: /* basic_type_specifier_nonarray: USAMPLER2DMSARRAY  */
#line 1942 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "usampler2DMSArray"; }
#line 5688 "src/glsl/glsl_parser.cpp"
    break;

  case 266: /* basic_type_specifier_nonarray: IMAGE1D  */
#line 1943 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image1D"; }
#line 5694 "src/glsl/glsl_parser.cpp"
    break;

  case 267: /* basic_type_specifier_nonarray: IMAGE2D  */
#line 1944 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2D"; }
#line 5700 "src/glsl/glsl_parser.cpp"
    break;

  case 268: /* basic_type_specifier_nonarray: IMAGE3D  */
#line 1945 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image3D"; }
#line 5706 "src/glsl/glsl_parser.cpp"
    break;

  case 269: /* basic_type_specifier_nonarray: IMAGE2DRECT  */
#line 1946 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DRect"; }
#line 5712 "src/glsl/glsl_parser.cpp"
    break;

  case 270: /* basic_type_specifier_nonarray: IMAGECUBE  */
#line 1947 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageCube"; }
#line 5718 "src/glsl/glsl_parser.cpp"
    break;

  case 271: /* basic_type_specifier_nonarray: IMAGEBUFFER  */
#line 1948 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageBuffer"; }
#line 5724 "src/glsl/glsl_parser.cpp"
    break;

  case 272: /* basic_type_specifier_nonarray: IMAGE1DARRAY  */
#line 1949 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image1DArray"; }
#line 5730 "src/glsl/glsl_parser.cpp"
    break;

  case 273: /* basic_type_specifier_nonarray: IMAGE2DARRAY  */
#line 1950 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DArray"; }
#line 5736 "src/glsl/glsl_parser.cpp"
    break;

  case 274: /* basic_type_specifier_nonarray: IMAGECUBEARRAY  */
#line 1951 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "imageCubeArray"; }
#line 5742 "src/glsl/glsl_parser.cpp"
    break;

  case 275: /* basic_type_specifier_nonarray: IMAGE2DMS  */
#line 1952 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DMS"; }
#line 5748 "src/glsl/glsl_parser.cpp"
    break;

  case 276: /* basic_type_specifier_nonarray: IMAGE2DMSARRAY  */
#line 1953 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "image2DMSArray"; }
#line 5754 "src/glsl/glsl_parser.cpp"
    break;

  case 277: /* basic_type_specifier_nonarray: IIMAGE1D  */
#line 1954 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage1D"; }
#line 5760 "src/glsl/glsl_parser.cpp"
    break;

  case 278: /* basic_type_specifier_nonarray: IIMAGE2D  */
#line 1955 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2D"; }
#line 5766 "src/glsl/glsl_parser.cpp"
    break;

  case 279: /* basic_type_specifier_nonarray: IIMAGE3D  */
#line 1956 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage3D"; }
#line 5772 "src/glsl/glsl_parser.cpp"
    break;

  case 280: /* basic_type_specifier_nonarray: IIMAGE2DRECT  */
#line 1957 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DRect"; }
#line 5778 "src/glsl/glsl_parser.cpp"
    break;

  case 281: /* basic_type_specifier_nonarray: IIMAGECUBE  */
#line 1958 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageCube"; }
#line 5784 "src/glsl/glsl_parser.cpp"
    break;

  case 282: /* basic_type_specifier_nonarray: IIMAGEBUFFER  */
#line 1959 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageBuffer"; }
#line 5790 "src/glsl/glsl_parser.cpp"
    break;

  case 283: /* basic_type_specifier_nonarray: IIMAGE1DARRAY  */
#line 1960 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage1DArray"; }
#line 5796 "src/glsl/glsl_parser.cpp"
    break;

  case 284: /* basic_type_specifier_nonarray: IIMAGE2DARRAY  */
#line 1961 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DArray"; }
#line 5802 "src/glsl/glsl_parser.cpp"
    break;

  case 285: /* basic_type_specifier_nonarray: IIMAGECUBEARRAY  */
#line 1962 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimageCubeArray"; }
#line 5808 "src/glsl/glsl_parser.cpp"
    break;

  case 286: /* basic_type_specifier_nonarray: IIMAGE2DMS  */
#line 1963 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DMS"; }
#line 5814 "src/glsl/glsl_parser.cpp"
    break;

  case 287: /* basic_type_specifier_nonarray: IIMAGE2DMSARRAY  */
#line 1964 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "iimage2DMSArray"; }
#line 5820 "src/glsl/glsl_parser.cpp"
    break;

  case 288: /* basic_type_specifier_nonarray: UIMAGE1D  */
#line 1965 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage1D"; }
#line 5826 "src/glsl/glsl_parser.cpp"
    break;

  case 289: /* basic_type_specifier_nonarray: UIMAGE2D  */
#line 1966 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2D"; }
#line 5832 "src/glsl/glsl_parser.cpp"
    break;

  case 290: /* basic_type_specifier_nonarray: UIMAGE3D  */
#line 1967 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage3D"; }
#line 5838 "src/glsl/glsl_parser.cpp"
    break;

  case 291: /* basic_type_specifier_nonarray: UIMAGE2DRECT  */
#line 1968 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DRect"; }
#line 5844 "src/glsl/glsl_parser.cpp"
    break;

  case 292: /* basic_type_specifier_nonarray: UIMAGECUBE  */
#line 1969 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageCube"; }
#line 5850 "src/glsl/glsl_parser.cpp"
    break;

  case 293: /* basic_type_specifier_nonarray: UIMAGEBUFFER  */
#line 1970 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageBuffer"; }
#line 5856 "src/glsl/glsl_parser.cpp"
    break;

  case 294: /* basic_type_specifier_nonarray: UIMAGE1DARRAY  */
#line 1971 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage1DArray"; }
#line 5862 "src/glsl/glsl_parser.cpp"
    break;

  case 295: /* basic_type_specifier_nonarray: UIMAGE2DARRAY  */
#line 1972 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DArray"; }
#line 5868 "src/glsl/glsl_parser.cpp"
    break;

  case 296: /* basic_type_specifier_nonarray: UIMAGECUBEARRAY  */
#line 1973 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimageCubeArray"; }
#line 5874 "src/glsl/glsl_parser.cpp"
    break;

  case 297: /* basic_type_specifier_nonarray: UIMAGE2DMS  */
#line 1974 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DMS"; }
#line 5880 "src/glsl/glsl_parser.cpp"
    break;

  case 298: /* basic_type_specifier_nonarray: UIMAGE2DMSARRAY  */
#line 1975 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "uimage2DMSArray"; }
#line 5886 "src/glsl/glsl_parser.cpp"
    break;

  case 299: /* basic_type_specifier_nonarray: ATOMIC_UINT  */
#line 1976 "src/glsl/glsl_parser.yy"
                            { (yyval.identifier) = "atomic_uint"; }
#line 5892 "src/glsl/glsl_parser.cpp"
    break;

  case 300: /* precision_qualifier: HIGHP  */
#line 1981 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_high;
   }
#line 5901 "src/glsl/glsl_parser.cpp"
    break;

  case 301: /* precision_qualifier: MEDIUMP  */
#line 1986 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_medium;
   }
#line 5910 "src/glsl/glsl_parser.cpp"
    break;

  case 302: /* precision_qualifier: LOWP  */
#line 1991 "src/glsl/glsl_parser.yy"
   {
      state->check_precision_qualifiers_allowed(&(yylsp[0]));
      (yyval.n) = ast_precision_low;
   }
#line 5919 "src/glsl/glsl_parser.cpp"
    break;

  case 303: /* struct_specifier: STRUCT any_identifier '{' struct_declaration_list '}'  */
#line 1999 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier((yyvsp[-3].identifier), (yyvsp[-1].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->add_type((yyvsp[-3].identifier), glsl_type::void_type);
   }
#line 5930 "src/glsl/glsl_parser.cpp"
    break;

  case 304: /* struct_specifier: STRUCT '{' struct_declaration_list '}'  */
#line 2006 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.struct_specifier) = new(ctx) ast_struct_specifier(NULL, (yyvsp[-1].declarator_list));
      (yyval.struct_specifier)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 5940 "src/glsl/glsl_parser.cpp"
    break;

  case 305: /* struct_declaration_list: struct_declaration  */
#line 2015 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 5949 "src/glsl/glsl_parser.cpp"
    break;

  case 306: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 2020 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyval.declarator_list)->link.insert_before(& (yyvsp[0].declarator_list)->link);
   }
#line 5958 "src/glsl/glsl_parser.cpp"
    break;

  case 307: /* struct_declaration: fully_specified_type struct_declarator_list ';'  */
#line 2028 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_fully_specified_type *const type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (type->qualifier.flags.i != 0)
         _mesa_glsl_error(&(yylsp[-2]), state,
			  "only precision qualifiers may be applied to "
			  "structure members");

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 5978 "src/glsl/glsl_parser.cpp"
    break;

  case 308: /* struct_declarator_list: struct_declarator  */
#line 2047 "src/glsl/glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[0].declaration);
      (yyvsp[0].declaration)->link.self_link();
   }
#line 5987 "src/glsl/glsl_parser.cpp"
    break;

  case 309: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 2052 "src/glsl/glsl_parser.yy"
   {
      (yyval.declaration) = (yyvsp[-2].declaration);
      (yyval.declaration)->link.insert_before(& (yyvsp[0].declaration)->link);
   }
#line 5996 "src/glsl/glsl_parser.cpp"
    break;

  case 310: /* struct_declarator: any_identifier  */
#line 2060 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[0].identifier), NULL, NULL);
      (yyval.declaration)->set_location((yylsp[0]));
   }
#line 6006 "src/glsl/glsl_parser.cpp"
    break;

  case 311: /* struct_declarator: any_identifier array_specifier  */
#line 2066 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.declaration) = new(ctx) ast_declaration((yyvsp[-1].identifier), (yyvsp[0].array_specifier), NULL);
      (yyval.declaration)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6016 "src/glsl/glsl_parser.cpp"
    break;

  case 313: /* initializer: '{' initializer_list '}'  */
#line 2076 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-1].expression);
   }
#line 6024 "src/glsl/glsl_parser.cpp"
    break;

  case 314: /* initializer: '{' initializer_list ',' '}'  */
#line 2080 "src/glsl/glsl_parser.yy"
   {
      (yyval.expression) = (yyvsp[-2].expression);
   }
#line 6032 "src/glsl/glsl_parser.cpp"
    break;

  case 315: /* initializer_list: initializer  */
#line 2087 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.expression) = new(ctx) ast_aggregate_initializer();
      (yyval.expression)->set_location((yylsp[0]));
      (yyval.expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 6043 "src/glsl/glsl_parser.cpp"
    break;

  case 316: /* initializer_list: initializer_list ',' initializer  */
#line 2094 "src/glsl/glsl_parser.yy"
   {
      (yyvsp[-2].expression)->expressions.push_tail(& (yyvsp[0].expression)->link);
   }
#line 6051 "src/glsl/glsl_parser.cpp"
    break;

  case 318: /* statement: compound_statement  */
#line 2106 "src/glsl/glsl_parser.yy"
                             { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 6057 "src/glsl/glsl_parser.cpp"
    break;

  case 326: /* compound_statement: '{' '}'  */
#line 2121 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6067 "src/glsl/glsl_parser.cpp"
    break;

  case 327: /* $@2: %empty  */
#line 2127 "src/glsl/glsl_parser.yy"
   {
      state->symbols->push_scope();
   }
#line 6075 "src/glsl/glsl_parser.cpp"
    break;

  case 328: /* compound_statement: '{' $@2 statement_list '}'  */
#line 2131 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(true, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-3]), (yylsp[0]));
      state->symbols->pop_scope();
   }
#line 6086 "src/glsl/glsl_parser.cpp"
    break;

  case 329: /* statement_no_new_scope: compound_statement_no_new_scope  */
#line 2140 "src/glsl/glsl_parser.yy"
                                   { (yyval.node) = (ast_node *) (yyvsp[0].compound_statement); }
#line 6092 "src/glsl/glsl_parser.cpp"
    break;

  case 331: /* compound_statement_no_new_scope: '{' '}'  */
#line 2146 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, NULL);
      (yyval.compound_statement)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6102 "src/glsl/glsl_parser.cpp"
    break;

  case 332: /* compound_statement_no_new_scope: '{' statement_list '}'  */
#line 2152 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.compound_statement) = new(ctx) ast_compound_statement(false, (yyvsp[-1].node));
      (yyval.compound_statement)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 6112 "src/glsl/glsl_parser.cpp"
    break;

  case 333: /* statement_list: statement  */
#line 2161 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }

      (yyval.node) = (yyvsp[0].node);
      (yyval.node)->link.self_link();
   }
#line 6126 "src/glsl/glsl_parser.cpp"
    break;

  case 334: /* statement_list: statement_list statement  */
#line 2171 "src/glsl/glsl_parser.yy"
   {
      if ((yyvsp[0].node) == NULL) {
         _mesa_glsl_error(& (yylsp[0]), state, "<nil> statement");
         assert((yyvsp[0].node) != NULL);
      }
      (yyval.node) = (yyvsp[-1].node);
      (yyval.node)->link.insert_before(& (yyvsp[0].node)->link);
   }
#line 6139 "src/glsl/glsl_parser.cpp"
    break;

  case 335: /* expression_statement: ';'  */
#line 2183 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_expression_statement(NULL);
      (yyval.node)->set_location((yylsp[0]));
   }
#line 6149 "src/glsl/glsl_parser.cpp"
    break;

  case 336: /* expression_statement: expression ';'  */
#line 2189 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_expression_statement((yyvsp[-1].expression));
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6159 "src/glsl/glsl_parser.cpp"
    break;

  case 337: /* selection_statement: IF '(' expression ')' selection_rest_statement  */
#line 2198 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = new(state) ast_selection_statement((yyvsp[-2].expression), (yyvsp[0].selection_rest_statement).then_statement,
                                              (yyvsp[0].selection_rest_statement).else_statement);
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 6169 "src/glsl/glsl_parser.cpp"
    break;

  case 338: /* selection_rest_statement: statement ELSE statement  */
#line 2207 "src/glsl/glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[-2].node);
      (yyval.selection_rest_statement).else_statement = (yyvsp[0].node);
   }
#line 6178 "src/glsl/glsl_parser.cpp"
    break;

  case 339: /* selection_rest_statement: statement  */
#line 2212 "src/glsl/glsl_parser.yy"
   {
      (yyval.selection_rest_statement).then_statement = (yyvsp[0].node);
      (yyval.selection_rest_statement).else_statement = NULL;
   }
#line 6187 "src/glsl/glsl_parser.cpp"
    break;

  case 340: /* condition: expression  */
#line 2220 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (ast_node *) (yyvsp[0].expression);
   }
#line 6195 "src/glsl/glsl_parser.cpp"
    break;

  case 341: /* condition: fully_specified_type any_identifier '=' initializer  */
#line 2224 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_declaration *decl = new(ctx) ast_declaration((yyvsp[-2].identifier), NULL, (yyvsp[0].expression));
      ast_declarator_list *declarator = new(ctx) ast_declarator_list((yyvsp[-3].fully_specified_type));
      decl->set_location_range((yylsp[-2]), (yylsp[0]));
      declarator->set_location((yylsp[-3]));

      declarator->declarations.push_tail(&decl->link);
      (yyval.node) = declarator;
   }
#line 6210 "src/glsl/glsl_parser.cpp"
    break;

  case 342: /* switch_statement: SWITCH '(' expression ')' switch_body  */
#line 2242 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = new(state) ast_switch_statement((yyvsp[-2].expression), (yyvsp[0].switch_body));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[0]));
   }
#line 6219 "src/glsl/glsl_parser.cpp"
    break;

  case 343: /* switch_body: '{' '}'  */
#line 2250 "src/glsl/glsl_parser.yy"
   {
      (yyval.switch_body) = new(state) ast_switch_body(NULL);
      (yyval.switch_body)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6228 "src/glsl/glsl_parser.cpp"
    break;

  case 344: /* switch_body: '{' case_statement_list '}'  */
#line 2255 "src/glsl/glsl_parser.yy"
   {
      (yyval.switch_body) = new(state) ast_switch_body((yyvsp[-1].case_statement_list));
      (yyval.switch_body)->set_location_range((yylsp[-2]), (yylsp[0]));
   }
#line 6237 "src/glsl/glsl_parser.cpp"
    break;

  case 345: /* case_label: CASE expression ':'  */
#line 2263 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label) = new(state) ast_case_label((yyvsp[-1].expression));
      (yyval.case_label)->set_location((yylsp[-1]));
   }
#line 6246 "src/glsl/glsl_parser.cpp"
    break;

  case 346: /* case_label: DEFAULT ':'  */
#line 2268 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label) = new(state) ast_case_label(NULL);
      (yyval.case_label)->set_location((yylsp[0]));
   }
#line 6255 "src/glsl/glsl_parser.cpp"
    break;

  case 347: /* case_label_list: case_label  */
#line 2276 "src/glsl/glsl_parser.yy"
   {
      ast_case_label_list *labels = new(state) ast_case_label_list();

      labels->labels.push_tail(& (yyvsp[0].case_label)->link);
      (yyval.case_label_list) = labels;
      (yyval.case_label_list)->set_location((yylsp[0]));
   }
#line 6267 "src/glsl/glsl_parser.cpp"
    break;

  case 348: /* case_label_list: case_label_list case_label  */
#line 2284 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_label_list) = (yyvsp[-1].case_label_list);
      (yyval.case_label_list)->labels.push_tail(& (yyvsp[0].case_label)->link);
   }
#line 6276 "src/glsl/glsl_parser.cpp"
    break;

  case 349: /* case_statement: case_label_list statement  */
#line 2292 "src/glsl/glsl_parser.yy"
   {
      ast_case_statement *stmts = new(state) ast_case_statement((yyvsp[-1].case_label_list));
      stmts->set_location((yylsp[0]));

      stmts->stmts.push_tail(& (yyvsp[0].node)->link);
      (yyval.case_statement) = stmts;
   }
#line 6288 "src/glsl/glsl_parser.cpp"
    break;

  case 350: /* case_statement: case_statement statement  */
#line 2300 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_statement) = (yyvsp[-1].case_statement);
      (yyval.case_statement)->stmts.push_tail(& (yyvsp[0].node)->link);
   }
#line 6297 "src/glsl/glsl_parser.cpp"
    break;

  case 351: /* case_statement_list: case_statement  */
#line 2308 "src/glsl/glsl_parser.yy"
   {
      ast_case_statement_list *cases= new(state) ast_case_statement_list();
      cases->set_location((yylsp[0]));

      cases->cases.push_tail(& (yyvsp[0].case_statement)->link);
      (yyval.case_statement_list) = cases;
   }
#line 6309 "src/glsl/glsl_parser.cpp"
    break;

  case 352: /* case_statement_list: case_statement_list case_statement  */
#line 2316 "src/glsl/glsl_parser.yy"
   {
      (yyval.case_statement_list) = (yyvsp[-1].case_statement_list);
      (yyval.case_statement_list)->cases.push_tail(& (yyvsp[0].case_statement)->link);
   }
#line 6318 "src/glsl/glsl_parser.cpp"
    break;

  case 353: /* iteration_statement: WHILE '(' condition ')' statement_no_new_scope  */
#line 2324 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_while,
                                            NULL, (yyvsp[-2].node), NULL, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-4]), (yylsp[-1]));
   }
#line 6329 "src/glsl/glsl_parser.cpp"
    break;

  case 354: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 2331 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_do_while,
                                            NULL, (yyvsp[-2].expression), NULL, (yyvsp[-5].node));
      (yyval.node)->set_location_range((yylsp[-6]), (yylsp[-1]));
   }
#line 6340 "src/glsl/glsl_parser.cpp"
    break;

  case 355: /* iteration_statement: FOR '(' for_init_statement for_rest_statement ')' statement_no_new_scope  */
#line 2338 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_for,
                                            (yyvsp[-3].node), (yyvsp[-2].for_rest_statement).cond, (yyvsp[-2].for_rest_statement).rest, (yyvsp[0].node));
      (yyval.node)->set_location_range((yylsp[-5]), (yylsp[0]));
   }
#line 6351 "src/glsl/glsl_parser.cpp"
    break;

  case 359: /* conditionopt: %empty  */
#line 2354 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = NULL;
   }
#line 6359 "src/glsl/glsl_parser.cpp"
    break;

  case 360: /* for_rest_statement: conditionopt ';'  */
#line 2361 "src/glsl/glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-1].node);
      (yyval.for_rest_statement).rest = NULL;
   }
#line 6368 "src/glsl/glsl_parser.cpp"
    break;

  case 361: /* for_rest_statement: conditionopt ';' expression  */
#line 2366 "src/glsl/glsl_parser.yy"
   {
      (yyval.for_rest_statement).cond = (yyvsp[-2].node);
      (yyval.for_rest_statement).rest = (yyvsp[0].expression);
   }
#line 6377 "src/glsl/glsl_parser.cpp"
    break;

  case 362: /* jump_statement: CONTINUE ';'  */
#line 2375 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_continue, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6387 "src/glsl/glsl_parser.cpp"
    break;

  case 363: /* jump_statement: BREAK ';'  */
#line 2381 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_break, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6397 "src/glsl/glsl_parser.cpp"
    break;

  case 364: /* jump_statement: RETURN ';'  */
#line 2387 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6407 "src/glsl/glsl_parser.cpp"
    break;

  case 365: /* jump_statement: RETURN expression ';'  */
#line 2393 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, (yyvsp[-1].expression));
      (yyval.node)->set_location_range((yylsp[-2]), (yylsp[-1]));
   }
#line 6417 "src/glsl/glsl_parser.cpp"
    break;

  case 366: /* jump_statement: DISCARD ';'  */
#line 2399 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_discard, NULL);
      (yyval.node)->set_location((yylsp[-1]));
   }
#line 6427 "src/glsl/glsl_parser.cpp"
    break;

  case 367: /* external_declaration: function_definition  */
#line 2407 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].function_definition); }
#line 6433 "src/glsl/glsl_parser.cpp"
    break;

  case 368: /* external_declaration: declaration  */
#line 2408 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 6439 "src/glsl/glsl_parser.cpp"
    break;

  case 369: /* external_declaration: pragma_statement  */
#line 2409 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = NULL; }
#line 6445 "src/glsl/glsl_parser.cpp"
    break;

  case 370: /* external_declaration: layout_defaults  */
#line 2410 "src/glsl/glsl_parser.yy"
                            { (yyval.node) = (yyvsp[0].node); }
#line 6451 "src/glsl/glsl_parser.cpp"
    break;

  case 371: /* function_definition: function_prototype compound_statement_no_new_scope  */
#line 2415 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      (yyval.function_definition) = new(ctx) ast_function_definition();
      (yyval.function_definition)->set_location_range((yylsp[-1]), (yylsp[0]));
      (yyval.function_definition)->prototype = (yyvsp[-1].function);
      (yyval.function_definition)->body = (yyvsp[0].compound_statement);

      state->symbols->pop_scope();
   }
#line 6465 "src/glsl/glsl_parser.cpp"
    break;

  case 372: /* interface_block: basic_interface_block  */
#line 2429 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = (yyvsp[0].interface_block);
   }
#line 6473 "src/glsl/glsl_parser.cpp"
    break;

  case 373: /* interface_block: layout_qualifier basic_interface_block  */
#line 2433 "src/glsl/glsl_parser.yy"
   {
      ast_interface_block *block = (yyvsp[0].interface_block);
      if (!block->layout.merge_qualifier(& (yylsp[-1]), state, (yyvsp[-1].type_qualifier))) {
         YYERROR;
      }

      foreach_list_typed (ast_declarator_list, member, link, &block->declarations) {
         ast_type_qualifier& qualifier = member->type->qualifier;
         if (qualifier.flags.q.stream && qualifier.stream != block->layout.stream) {
               _mesa_glsl_error(& (yylsp[-1]), state,
                             "stream layout qualifier on "
                             "interface block member does not match "
                             "the interface block (%d vs %d)",
                             qualifier.stream, block->layout.stream);
               YYERROR;
         }
      }
      (yyval.node) = block;
   }
#line 6497 "src/glsl/glsl_parser.cpp"
    break;

  case 374: /* basic_interface_block: interface_qualifier NEW_IDENTIFIER '{' member_list '}' instance_name_opt ';'  */
#line 2456 "src/glsl/glsl_parser.yy"
   {
      ast_interface_block *const block = (yyvsp[-1].interface_block);

      block->block_name = (yyvsp[-5].identifier);
      block->declarations.push_degenerate_list_at_head(& (yyvsp[-3].declarator_list)->link);

      if ((yyvsp[-6].type_qualifier).flags.q.uniform) {
         if (!state->has_uniform_buffer_objects()) {
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "#version 140 / GL_ARB_uniform_buffer_object "
                             "required for defining uniform blocks");
         } else if (state->ARB_uniform_buffer_object_warn) {
            _mesa_glsl_warning(& (yylsp[-6]), state,
                               "#version 140 / GL_ARB_uniform_buffer_object "
                               "required for defining uniform blocks");
         }
      } else {
         if (state->es_shader || state->language_version < 150) {
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "#version 150 required for using "
                             "interface blocks");
         }
      }

      /* From the GLSL 1.50.11 spec, section 4.3.7 ("Interface Blocks"):
       * "It is illegal to have an input block in a vertex shader
       *  or an output block in a fragment shader"
       */
      if ((state->stage == MESA_SHADER_VERTEX) && (yyvsp[-6].type_qualifier).flags.q.in) {
         _mesa_glsl_error(& (yylsp[-6]), state,
                          "`in' interface block is not allowed for "
                          "a vertex shader");
      } else if ((state->stage == MESA_SHADER_FRAGMENT) && (yyvsp[-6].type_qualifier).flags.q.out) {
         _mesa_glsl_error(& (yylsp[-6]), state,
                          "`out' interface block is not allowed for "
                          "a fragment shader");
      }

      /* Since block arrays require names, and both features are added in
       * the same language versions, we don't have to explicitly
       * version-check both things.
       */
      if (block->instance_name != NULL) {
         state->check_version(150, 300, & (yylsp[-6]), "interface blocks with "
                               "an instance name are not allowed");
      }

      uint64_t interface_type_mask;
      struct ast_type_qualifier temp_type_qualifier;

      /* Get a bitmask containing only the in/out/uniform flags, allowing us
       * to ignore other irrelevant flags like interpolation qualifiers.
       */
      temp_type_qualifier.flags.i = 0;
      temp_type_qualifier.flags.q.uniform = true;
      temp_type_qualifier.flags.q.in = true;
      temp_type_qualifier.flags.q.out = true;
      interface_type_mask = temp_type_qualifier.flags.i;

      /* Get the block's interface qualifier.  The interface_qualifier
       * production rule guarantees that only one bit will be set (and
       * it will be in/out/uniform).
       */
      uint64_t block_interface_qualifier = (yyvsp[-6].type_qualifier).flags.i;

      block->layout.flags.i |= block_interface_qualifier;

      if (state->stage == MESA_SHADER_GEOMETRY &&
          state->has_explicit_attrib_stream()) {
         /* Assign global layout's stream value. */
         block->layout.flags.q.stream = 1;
         block->layout.flags.q.explicit_stream = 0;
         block->layout.stream = state->out_qualifier->stream;
      }

      foreach_list_typed (ast_declarator_list, member, link, &block->declarations) {
         ast_type_qualifier& qualifier = member->type->qualifier;
         if ((qualifier.flags.i & interface_type_mask) == 0) {
            /* GLSLangSpec.1.50.11, 4.3.7 (Interface Blocks):
             * "If no optional qualifier is used in a member declaration, the
             *  qualifier of the variable is just in, out, or uniform as declared
             *  by interface-qualifier."
             */
            qualifier.flags.i |= block_interface_qualifier;
         } else if ((qualifier.flags.i & interface_type_mask) !=
                    block_interface_qualifier) {
            /* GLSLangSpec.1.50.11, 4.3.7 (Interface Blocks):
             * "If optional qualifiers are used, they can include interpolation
             *  and storage qualifiers and they must declare an input, output,
             *  or uniform variable consistent with the interface qualifier of
             *  the block."
             */
            _mesa_glsl_error(& (yylsp[-6]), state,
                             "uniform/in/out qualifier on "
                             "interface block member does not match "
                             "the interface block");
         }
      }

      (yyval.interface_block) = block;
   }
#line 6603 "src/glsl/glsl_parser.cpp"
    break;

  case 375: /* interface_qualifier: IN_TOK  */
#line 2561 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.in = 1;
   }
#line 6613 "src/glsl/glsl_parser.cpp"
    break;

  case 376: /* interface_qualifier: OUT_TOK  */
#line 2567 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.out = 1;
   }
#line 6623 "src/glsl/glsl_parser.cpp"
    break;

  case 377: /* interface_qualifier: UNIFORM  */
#line 2573 "src/glsl/glsl_parser.yy"
   {
      memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	  (yyval.type_qualifier).precision = ast_precision_none;
      (yyval.type_qualifier).flags.q.uniform = 1;
   }
#line 6633 "src/glsl/glsl_parser.cpp"
    break;

  case 378: /* instance_name_opt: %empty  */
#line 2582 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          NULL, NULL);
   }
#line 6642 "src/glsl/glsl_parser.cpp"
    break;

  case 379: /* instance_name_opt: NEW_IDENTIFIER  */
#line 2587 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          (yyvsp[0].identifier), NULL);
      (yyval.interface_block)->set_location((yylsp[0]));
   }
#line 6652 "src/glsl/glsl_parser.cpp"
    break;

  case 380: /* instance_name_opt: NEW_IDENTIFIER array_specifier  */
#line 2593 "src/glsl/glsl_parser.yy"
   {
      (yyval.interface_block) = new(state) ast_interface_block(*state->default_uniform_qualifier,
                                          (yyvsp[-1].identifier), (yyvsp[0].array_specifier));
      (yyval.interface_block)->set_location_range((yylsp[-1]), (yylsp[0]));
   }
#line 6662 "src/glsl/glsl_parser.cpp"
    break;

  case 381: /* member_list: member_declaration  */
#line 2602 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[0].declarator_list);
      (yyvsp[0].declarator_list)->link.self_link();
   }
#line 6671 "src/glsl/glsl_parser.cpp"
    break;

  case 382: /* member_list: member_declaration member_list  */
#line 2607 "src/glsl/glsl_parser.yy"
   {
      (yyval.declarator_list) = (yyvsp[-1].declarator_list);
      (yyvsp[0].declarator_list)->link.insert_before(& (yyval.declarator_list)->link);
   }
#line 6680 "src/glsl/glsl_parser.cpp"
    break;

  case 383: /* member_declaration: fully_specified_type struct_declarator_list ';'  */
#line 2615 "src/glsl/glsl_parser.yy"
   {
      void *ctx = state;
      ast_fully_specified_type *type = (yyvsp[-2].fully_specified_type);
      type->set_location((yylsp[-2]));

      if (type->qualifier.flags.q.attribute) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'attribute' cannot be used with "
                          "interface block member");
      } else if (type->qualifier.flags.q.varying) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "keyword 'varying' cannot be used with "
                          "interface block member");
      }

      (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
      (yyval.declarator_list)->set_location((yylsp[-1]));

      (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[-1].declaration)->link);
   }
#line 6705 "src/glsl/glsl_parser.cpp"
    break;

  case 384: /* layout_defaults: layout_qualifier UNIFORM ';'  */
#line 2639 "src/glsl/glsl_parser.yy"
   {
      if (!state->default_uniform_qualifier->merge_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier))) {
         YYERROR;
      }
      (yyval.node) = NULL;
   }
#line 6716 "src/glsl/glsl_parser.cpp"
    break;

  case 385: /* layout_defaults: layout_qualifier IN_TOK ';'  */
#line 2647 "src/glsl/glsl_parser.yy"
   {
      (yyval.node) = NULL;
      if (!state->in_qualifier->merge_in_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier), (yyval.node))) {
         YYERROR;
      }
   }
#line 6727 "src/glsl/glsl_parser.cpp"
    break;

  case 386: /* layout_defaults: layout_qualifier OUT_TOK ';'  */
#line 2655 "src/glsl/glsl_parser.yy"
   {
      if (state->stage != MESA_SHADER_GEOMETRY) {
         _mesa_glsl_error(& (yylsp[-2]), state,
                          "out layout qualifiers only valid in "
                          "geometry shaders");
      } else {
         if ((yyvsp[-2].type_qualifier).flags.q.prim_type) {
            /* Make sure this is a valid output primitive type. */
            switch ((yyvsp[-2].type_qualifier).prim_type) {
            case GL_POINTS:
            case GL_LINE_STRIP:
            case GL_TRIANGLE_STRIP:
               break;
            default:
               _mesa_glsl_error(&(yylsp[-2]), state, "invalid geometry shader output "
                                "primitive type");
               break;
            }
         }
         if (!state->out_qualifier->merge_qualifier(& (yylsp[-2]), state, (yyvsp[-2].type_qualifier)))
            YYERROR;

         /* Allow future assigments of global out's stream id value */
         state->out_qualifier->flags.q.explicit_stream = 0;
      }
      (yyval.node) = NULL;
   }
#line 6759 "src/glsl/glsl_parser.cpp"
    break;


#line 6763 "src/glsl/glsl_parser.cpp"

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
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, state, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, state);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, state, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, state);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

