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

#ifndef YY_YY_HLSLANG_TAB_HPP_INCLUDED
# define YY_YY_HLSLANG_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST_QUAL = 258,              /* CONST_QUAL  */
    STATIC_QUAL = 259,             /* STATIC_QUAL  */
    BOOL_TYPE = 260,               /* BOOL_TYPE  */
    FLOAT_TYPE = 261,              /* FLOAT_TYPE  */
    INT_TYPE = 262,                /* INT_TYPE  */
    STRING_TYPE = 263,             /* STRING_TYPE  */
    FIXED_TYPE = 264,              /* FIXED_TYPE  */
    HALF_TYPE = 265,               /* HALF_TYPE  */
    BREAK = 266,                   /* BREAK  */
    CONTINUE = 267,                /* CONTINUE  */
    DO = 268,                      /* DO  */
    ELSE = 269,                    /* ELSE  */
    FOR = 270,                     /* FOR  */
    IF = 271,                      /* IF  */
    DISCARD = 272,                 /* DISCARD  */
    RETURN = 273,                  /* RETURN  */
    BVEC2 = 274,                   /* BVEC2  */
    BVEC3 = 275,                   /* BVEC3  */
    BVEC4 = 276,                   /* BVEC4  */
    IVEC2 = 277,                   /* IVEC2  */
    IVEC3 = 278,                   /* IVEC3  */
    IVEC4 = 279,                   /* IVEC4  */
    VEC2 = 280,                    /* VEC2  */
    VEC3 = 281,                    /* VEC3  */
    VEC4 = 282,                    /* VEC4  */
    HVEC2 = 283,                   /* HVEC2  */
    HVEC3 = 284,                   /* HVEC3  */
    HVEC4 = 285,                   /* HVEC4  */
    FVEC2 = 286,                   /* FVEC2  */
    FVEC3 = 287,                   /* FVEC3  */
    FVEC4 = 288,                   /* FVEC4  */
    MATRIX2x2 = 289,               /* MATRIX2x2  */
    MATRIX2x3 = 290,               /* MATRIX2x3  */
    MATRIX2x4 = 291,               /* MATRIX2x4  */
    MATRIX3x2 = 292,               /* MATRIX3x2  */
    MATRIX3x3 = 293,               /* MATRIX3x3  */
    MATRIX3x4 = 294,               /* MATRIX3x4  */
    MATRIX4x2 = 295,               /* MATRIX4x2  */
    MATRIX4x3 = 296,               /* MATRIX4x3  */
    MATRIX4x4 = 297,               /* MATRIX4x4  */
    HMATRIX2x2 = 298,              /* HMATRIX2x2  */
    HMATRIX2x3 = 299,              /* HMATRIX2x3  */
    HMATRIX2x4 = 300,              /* HMATRIX2x4  */
    HMATRIX3x2 = 301,              /* HMATRIX3x2  */
    HMATRIX3x3 = 302,              /* HMATRIX3x3  */
    HMATRIX3x4 = 303,              /* HMATRIX3x4  */
    HMATRIX4x2 = 304,              /* HMATRIX4x2  */
    HMATRIX4x3 = 305,              /* HMATRIX4x3  */
    HMATRIX4x4 = 306,              /* HMATRIX4x4  */
    FMATRIX2x2 = 307,              /* FMATRIX2x2  */
    FMATRIX2x3 = 308,              /* FMATRIX2x3  */
    FMATRIX2x4 = 309,              /* FMATRIX2x4  */
    FMATRIX3x2 = 310,              /* FMATRIX3x2  */
    FMATRIX3x3 = 311,              /* FMATRIX3x3  */
    FMATRIX3x4 = 312,              /* FMATRIX3x4  */
    FMATRIX4x2 = 313,              /* FMATRIX4x2  */
    FMATRIX4x3 = 314,              /* FMATRIX4x3  */
    FMATRIX4x4 = 315,              /* FMATRIX4x4  */
    IN_QUAL = 316,                 /* IN_QUAL  */
    OUT_QUAL = 317,                /* OUT_QUAL  */
    INOUT_QUAL = 318,              /* INOUT_QUAL  */
    UNIFORM = 319,                 /* UNIFORM  */
    STRUCT = 320,                  /* STRUCT  */
    VOID_TYPE = 321,               /* VOID_TYPE  */
    WHILE = 322,                   /* WHILE  */
    SAMPLER1D = 323,               /* SAMPLER1D  */
    SAMPLER2D = 324,               /* SAMPLER2D  */
    SAMPLER3D = 325,               /* SAMPLER3D  */
    SAMPLERCUBE = 326,             /* SAMPLERCUBE  */
    SAMPLER1DSHADOW = 327,         /* SAMPLER1DSHADOW  */
    SAMPLER2DSHADOW = 328,         /* SAMPLER2DSHADOW  */
    SAMPLER2DARRAY = 329,          /* SAMPLER2DARRAY  */
    SAMPLERRECTSHADOW = 330,       /* SAMPLERRECTSHADOW  */
    SAMPLERRECT = 331,             /* SAMPLERRECT  */
    SAMPLER2D_HALF = 332,          /* SAMPLER2D_HALF  */
    SAMPLER2D_FLOAT = 333,         /* SAMPLER2D_FLOAT  */
    SAMPLERCUBE_HALF = 334,        /* SAMPLERCUBE_HALF  */
    SAMPLERCUBE_FLOAT = 335,       /* SAMPLERCUBE_FLOAT  */
    SAMPLERGENERIC = 336,          /* SAMPLERGENERIC  */
    VECTOR = 337,                  /* VECTOR  */
    MATRIX = 338,                  /* MATRIX  */
    REGISTER = 339,                /* REGISTER  */
    TEXTURE = 340,                 /* TEXTURE  */
    SAMPLERSTATE = 341,            /* SAMPLERSTATE  */
    IDENTIFIER = 342,              /* IDENTIFIER  */
    TYPE_NAME = 343,               /* TYPE_NAME  */
    FLOATCONSTANT = 344,           /* FLOATCONSTANT  */
    INTCONSTANT = 345,             /* INTCONSTANT  */
    BOOLCONSTANT = 346,            /* BOOLCONSTANT  */
    STRINGCONSTANT = 347,          /* STRINGCONSTANT  */
    FIELD_SELECTION = 348,         /* FIELD_SELECTION  */
    LEFT_OP = 349,                 /* LEFT_OP  */
    RIGHT_OP = 350,                /* RIGHT_OP  */
    INC_OP = 351,                  /* INC_OP  */
    DEC_OP = 352,                  /* DEC_OP  */
    LE_OP = 353,                   /* LE_OP  */
    GE_OP = 354,                   /* GE_OP  */
    EQ_OP = 355,                   /* EQ_OP  */
    NE_OP = 356,                   /* NE_OP  */
    AND_OP = 357,                  /* AND_OP  */
    OR_OP = 358,                   /* OR_OP  */
    XOR_OP = 359,                  /* XOR_OP  */
    MUL_ASSIGN = 360,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 361,              /* DIV_ASSIGN  */
    ADD_ASSIGN = 362,              /* ADD_ASSIGN  */
    MOD_ASSIGN = 363,              /* MOD_ASSIGN  */
    LEFT_ASSIGN = 364,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 365,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 366,              /* AND_ASSIGN  */
    XOR_ASSIGN = 367,              /* XOR_ASSIGN  */
    OR_ASSIGN = 368,               /* OR_ASSIGN  */
    SUB_ASSIGN = 369,              /* SUB_ASSIGN  */
    LEFT_PAREN = 370,              /* LEFT_PAREN  */
    RIGHT_PAREN = 371,             /* RIGHT_PAREN  */
    LEFT_BRACKET = 372,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 373,           /* RIGHT_BRACKET  */
    LEFT_BRACE = 374,              /* LEFT_BRACE  */
    RIGHT_BRACE = 375,             /* RIGHT_BRACE  */
    DOT = 376,                     /* DOT  */
    COMMA = 377,                   /* COMMA  */
    COLON = 378,                   /* COLON  */
    EQUAL = 379,                   /* EQUAL  */
    SEMICOLON = 380,               /* SEMICOLON  */
    BANG = 381,                    /* BANG  */
    DASH = 382,                    /* DASH  */
    TILDE = 383,                   /* TILDE  */
    PLUS = 384,                    /* PLUS  */
    STAR = 385,                    /* STAR  */
    SLASH = 386,                   /* SLASH  */
    PERCENT = 387,                 /* PERCENT  */
    LEFT_ANGLE = 388,              /* LEFT_ANGLE  */
    RIGHT_ANGLE = 389,             /* RIGHT_ANGLE  */
    VERTICAL_BAR = 390,            /* VERTICAL_BAR  */
    CARET = 391,                   /* CARET  */
    AMPERSAND = 392,               /* AMPERSAND  */
    QUESTION = 393                 /* QUESTION  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "hlslang.y"

    struct {
        TSourceLoc line;
        union {
            TString *string;
            float f;
            int i;
            bool b;
        };
        TSymbol* symbol;
    } lex;
    struct {
        TSourceLoc line;
        TOperator op;
        union {
            TIntermNode* intermNode;
            TIntermNodePair nodePair;
            TIntermTyped* intermTypedNode;
            TIntermAggregate* intermAggregate;
			TIntermTyped* intermDeclaration;
        };
        union {
            TPublicType type;
            TQualifier qualifier;
            TFunction* function;
            TParameter param;
            TTypeLine typeLine;
            TTypeList* typeList;
	    TAnnotation* ann;
	    TTypeInfo* typeInfo;
        };
    } interm;

#line 236 "hlslang_tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (TParseContext& parseContext);


#endif /* !YY_YY_HLSLANG_TAB_HPP_INCLUDED  */
