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

#ifndef YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED
# define YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int _mesa_glsl_debug;
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
    ATTRIBUTE = 258,               /* ATTRIBUTE  */
    CONST_TOK = 259,               /* CONST_TOK  */
    BOOL_TOK = 260,                /* BOOL_TOK  */
    FLOAT_TOK = 261,               /* FLOAT_TOK  */
    INT_TOK = 262,                 /* INT_TOK  */
    UINT_TOK = 263,                /* UINT_TOK  */
    BREAK = 264,                   /* BREAK  */
    CONTINUE = 265,                /* CONTINUE  */
    DO = 266,                      /* DO  */
    ELSE = 267,                    /* ELSE  */
    FOR = 268,                     /* FOR  */
    IF = 269,                      /* IF  */
    DISCARD = 270,                 /* DISCARD  */
    RETURN = 271,                  /* RETURN  */
    SWITCH = 272,                  /* SWITCH  */
    CASE = 273,                    /* CASE  */
    DEFAULT = 274,                 /* DEFAULT  */
    BVEC2 = 275,                   /* BVEC2  */
    BVEC3 = 276,                   /* BVEC3  */
    BVEC4 = 277,                   /* BVEC4  */
    IVEC2 = 278,                   /* IVEC2  */
    IVEC3 = 279,                   /* IVEC3  */
    IVEC4 = 280,                   /* IVEC4  */
    UVEC2 = 281,                   /* UVEC2  */
    UVEC3 = 282,                   /* UVEC3  */
    UVEC4 = 283,                   /* UVEC4  */
    VEC2 = 284,                    /* VEC2  */
    VEC3 = 285,                    /* VEC3  */
    VEC4 = 286,                    /* VEC4  */
    CENTROID = 287,                /* CENTROID  */
    IN_TOK = 288,                  /* IN_TOK  */
    OUT_TOK = 289,                 /* OUT_TOK  */
    INOUT_TOK = 290,               /* INOUT_TOK  */
    UNIFORM = 291,                 /* UNIFORM  */
    VARYING = 292,                 /* VARYING  */
    SAMPLE = 293,                  /* SAMPLE  */
    NOPERSPECTIVE = 294,           /* NOPERSPECTIVE  */
    FLAT = 295,                    /* FLAT  */
    SMOOTH = 296,                  /* SMOOTH  */
    MAT2X2 = 297,                  /* MAT2X2  */
    MAT2X3 = 298,                  /* MAT2X3  */
    MAT2X4 = 299,                  /* MAT2X4  */
    MAT3X2 = 300,                  /* MAT3X2  */
    MAT3X3 = 301,                  /* MAT3X3  */
    MAT3X4 = 302,                  /* MAT3X4  */
    MAT4X2 = 303,                  /* MAT4X2  */
    MAT4X3 = 304,                  /* MAT4X3  */
    MAT4X4 = 305,                  /* MAT4X4  */
    SAMPLER1D = 306,               /* SAMPLER1D  */
    SAMPLER2D = 307,               /* SAMPLER2D  */
    SAMPLER3D = 308,               /* SAMPLER3D  */
    SAMPLERCUBE = 309,             /* SAMPLERCUBE  */
    SAMPLER1DSHADOW = 310,         /* SAMPLER1DSHADOW  */
    SAMPLER2DSHADOW = 311,         /* SAMPLER2DSHADOW  */
    SAMPLERCUBESHADOW = 312,       /* SAMPLERCUBESHADOW  */
    SAMPLER1DARRAY = 313,          /* SAMPLER1DARRAY  */
    SAMPLER2DARRAY = 314,          /* SAMPLER2DARRAY  */
    SAMPLER1DARRAYSHADOW = 315,    /* SAMPLER1DARRAYSHADOW  */
    SAMPLER2DARRAYSHADOW = 316,    /* SAMPLER2DARRAYSHADOW  */
    SAMPLERCUBEARRAY = 317,        /* SAMPLERCUBEARRAY  */
    SAMPLERCUBEARRAYSHADOW = 318,  /* SAMPLERCUBEARRAYSHADOW  */
    ISAMPLER1D = 319,              /* ISAMPLER1D  */
    ISAMPLER2D = 320,              /* ISAMPLER2D  */
    ISAMPLER3D = 321,              /* ISAMPLER3D  */
    ISAMPLERCUBE = 322,            /* ISAMPLERCUBE  */
    ISAMPLER1DARRAY = 323,         /* ISAMPLER1DARRAY  */
    ISAMPLER2DARRAY = 324,         /* ISAMPLER2DARRAY  */
    ISAMPLERCUBEARRAY = 325,       /* ISAMPLERCUBEARRAY  */
    USAMPLER1D = 326,              /* USAMPLER1D  */
    USAMPLER2D = 327,              /* USAMPLER2D  */
    USAMPLER3D = 328,              /* USAMPLER3D  */
    USAMPLERCUBE = 329,            /* USAMPLERCUBE  */
    USAMPLER1DARRAY = 330,         /* USAMPLER1DARRAY  */
    USAMPLER2DARRAY = 331,         /* USAMPLER2DARRAY  */
    USAMPLERCUBEARRAY = 332,       /* USAMPLERCUBEARRAY  */
    SAMPLER2DRECT = 333,           /* SAMPLER2DRECT  */
    ISAMPLER2DRECT = 334,          /* ISAMPLER2DRECT  */
    USAMPLER2DRECT = 335,          /* USAMPLER2DRECT  */
    SAMPLER2DRECTSHADOW = 336,     /* SAMPLER2DRECTSHADOW  */
    SAMPLERBUFFER = 337,           /* SAMPLERBUFFER  */
    ISAMPLERBUFFER = 338,          /* ISAMPLERBUFFER  */
    USAMPLERBUFFER = 339,          /* USAMPLERBUFFER  */
    SAMPLER2DMS = 340,             /* SAMPLER2DMS  */
    ISAMPLER2DMS = 341,            /* ISAMPLER2DMS  */
    USAMPLER2DMS = 342,            /* USAMPLER2DMS  */
    SAMPLER2DMSARRAY = 343,        /* SAMPLER2DMSARRAY  */
    ISAMPLER2DMSARRAY = 344,       /* ISAMPLER2DMSARRAY  */
    USAMPLER2DMSARRAY = 345,       /* USAMPLER2DMSARRAY  */
    SAMPLEREXTERNALOES = 346,      /* SAMPLEREXTERNALOES  */
    IMAGE1D = 347,                 /* IMAGE1D  */
    IMAGE2D = 348,                 /* IMAGE2D  */
    IMAGE3D = 349,                 /* IMAGE3D  */
    IMAGE2DRECT = 350,             /* IMAGE2DRECT  */
    IMAGECUBE = 351,               /* IMAGECUBE  */
    IMAGEBUFFER = 352,             /* IMAGEBUFFER  */
    IMAGE1DARRAY = 353,            /* IMAGE1DARRAY  */
    IMAGE2DARRAY = 354,            /* IMAGE2DARRAY  */
    IMAGECUBEARRAY = 355,          /* IMAGECUBEARRAY  */
    IMAGE2DMS = 356,               /* IMAGE2DMS  */
    IMAGE2DMSARRAY = 357,          /* IMAGE2DMSARRAY  */
    IIMAGE1D = 358,                /* IIMAGE1D  */
    IIMAGE2D = 359,                /* IIMAGE2D  */
    IIMAGE3D = 360,                /* IIMAGE3D  */
    IIMAGE2DRECT = 361,            /* IIMAGE2DRECT  */
    IIMAGECUBE = 362,              /* IIMAGECUBE  */
    IIMAGEBUFFER = 363,            /* IIMAGEBUFFER  */
    IIMAGE1DARRAY = 364,           /* IIMAGE1DARRAY  */
    IIMAGE2DARRAY = 365,           /* IIMAGE2DARRAY  */
    IIMAGECUBEARRAY = 366,         /* IIMAGECUBEARRAY  */
    IIMAGE2DMS = 367,              /* IIMAGE2DMS  */
    IIMAGE2DMSARRAY = 368,         /* IIMAGE2DMSARRAY  */
    UIMAGE1D = 369,                /* UIMAGE1D  */
    UIMAGE2D = 370,                /* UIMAGE2D  */
    UIMAGE3D = 371,                /* UIMAGE3D  */
    UIMAGE2DRECT = 372,            /* UIMAGE2DRECT  */
    UIMAGECUBE = 373,              /* UIMAGECUBE  */
    UIMAGEBUFFER = 374,            /* UIMAGEBUFFER  */
    UIMAGE1DARRAY = 375,           /* UIMAGE1DARRAY  */
    UIMAGE2DARRAY = 376,           /* UIMAGE2DARRAY  */
    UIMAGECUBEARRAY = 377,         /* UIMAGECUBEARRAY  */
    UIMAGE2DMS = 378,              /* UIMAGE2DMS  */
    UIMAGE2DMSARRAY = 379,         /* UIMAGE2DMSARRAY  */
    IMAGE1DSHADOW = 380,           /* IMAGE1DSHADOW  */
    IMAGE2DSHADOW = 381,           /* IMAGE2DSHADOW  */
    IMAGE1DARRAYSHADOW = 382,      /* IMAGE1DARRAYSHADOW  */
    IMAGE2DARRAYSHADOW = 383,      /* IMAGE2DARRAYSHADOW  */
    COHERENT = 384,                /* COHERENT  */
    VOLATILE = 385,                /* VOLATILE  */
    RESTRICT = 386,                /* RESTRICT  */
    READONLY = 387,                /* READONLY  */
    WRITEONLY = 388,               /* WRITEONLY  */
    ATOMIC_UINT = 389,             /* ATOMIC_UINT  */
    STRUCT = 390,                  /* STRUCT  */
    VOID_TOK = 391,                /* VOID_TOK  */
    WHILE = 392,                   /* WHILE  */
    IDENTIFIER = 393,              /* IDENTIFIER  */
    TYPE_IDENTIFIER = 394,         /* TYPE_IDENTIFIER  */
    NEW_IDENTIFIER = 395,          /* NEW_IDENTIFIER  */
    FLOATCONSTANT = 396,           /* FLOATCONSTANT  */
    INTCONSTANT = 397,             /* INTCONSTANT  */
    UINTCONSTANT = 398,            /* UINTCONSTANT  */
    BOOLCONSTANT = 399,            /* BOOLCONSTANT  */
    FIELD_SELECTION = 400,         /* FIELD_SELECTION  */
    LEFT_OP = 401,                 /* LEFT_OP  */
    RIGHT_OP = 402,                /* RIGHT_OP  */
    INC_OP = 403,                  /* INC_OP  */
    DEC_OP = 404,                  /* DEC_OP  */
    LE_OP = 405,                   /* LE_OP  */
    GE_OP = 406,                   /* GE_OP  */
    EQ_OP = 407,                   /* EQ_OP  */
    NE_OP = 408,                   /* NE_OP  */
    AND_OP = 409,                  /* AND_OP  */
    OR_OP = 410,                   /* OR_OP  */
    XOR_OP = 411,                  /* XOR_OP  */
    MUL_ASSIGN = 412,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 413,              /* DIV_ASSIGN  */
    ADD_ASSIGN = 414,              /* ADD_ASSIGN  */
    MOD_ASSIGN = 415,              /* MOD_ASSIGN  */
    LEFT_ASSIGN = 416,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 417,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 418,              /* AND_ASSIGN  */
    XOR_ASSIGN = 419,              /* XOR_ASSIGN  */
    OR_ASSIGN = 420,               /* OR_ASSIGN  */
    SUB_ASSIGN = 421,              /* SUB_ASSIGN  */
    INVARIANT = 422,               /* INVARIANT  */
    PRECISE = 423,                 /* PRECISE  */
    LOWP = 424,                    /* LOWP  */
    MEDIUMP = 425,                 /* MEDIUMP  */
    HIGHP = 426,                   /* HIGHP  */
    SUPERP = 427,                  /* SUPERP  */
    PRECISION = 428,               /* PRECISION  */
    VERSION_TOK = 429,             /* VERSION_TOK  */
    EXTENSION = 430,               /* EXTENSION  */
    LINE = 431,                    /* LINE  */
    COLON = 432,                   /* COLON  */
    EOL = 433,                     /* EOL  */
    INTERFACE = 434,               /* INTERFACE  */
    OUTPUT = 435,                  /* OUTPUT  */
    PRAGMA_DEBUG_ON = 436,         /* PRAGMA_DEBUG_ON  */
    PRAGMA_DEBUG_OFF = 437,        /* PRAGMA_DEBUG_OFF  */
    PRAGMA_OPTIMIZE_ON = 438,      /* PRAGMA_OPTIMIZE_ON  */
    PRAGMA_OPTIMIZE_OFF = 439,     /* PRAGMA_OPTIMIZE_OFF  */
    PRAGMA_INVARIANT_ALL = 440,    /* PRAGMA_INVARIANT_ALL  */
    LAYOUT_TOK = 441,              /* LAYOUT_TOK  */
    ASM = 442,                     /* ASM  */
    CLASS = 443,                   /* CLASS  */
    UNION = 444,                   /* UNION  */
    ENUM = 445,                    /* ENUM  */
    TYPEDEF = 446,                 /* TYPEDEF  */
    TEMPLATE = 447,                /* TEMPLATE  */
    THIS = 448,                    /* THIS  */
    PACKED_TOK = 449,              /* PACKED_TOK  */
    GOTO = 450,                    /* GOTO  */
    INLINE_TOK = 451,              /* INLINE_TOK  */
    NOINLINE = 452,                /* NOINLINE  */
    PUBLIC_TOK = 453,              /* PUBLIC_TOK  */
    STATIC = 454,                  /* STATIC  */
    EXTERN = 455,                  /* EXTERN  */
    EXTERNAL = 456,                /* EXTERNAL  */
    LONG_TOK = 457,                /* LONG_TOK  */
    SHORT_TOK = 458,               /* SHORT_TOK  */
    DOUBLE_TOK = 459,              /* DOUBLE_TOK  */
    HALF = 460,                    /* HALF  */
    FIXED_TOK = 461,               /* FIXED_TOK  */
    UNSIGNED = 462,                /* UNSIGNED  */
    INPUT_TOK = 463,               /* INPUT_TOK  */
    HVEC2 = 464,                   /* HVEC2  */
    HVEC3 = 465,                   /* HVEC3  */
    HVEC4 = 466,                   /* HVEC4  */
    DVEC2 = 467,                   /* DVEC2  */
    DVEC3 = 468,                   /* DVEC3  */
    DVEC4 = 469,                   /* DVEC4  */
    FVEC2 = 470,                   /* FVEC2  */
    FVEC3 = 471,                   /* FVEC3  */
    FVEC4 = 472,                   /* FVEC4  */
    SAMPLER3DRECT = 473,           /* SAMPLER3DRECT  */
    SIZEOF = 474,                  /* SIZEOF  */
    CAST = 475,                    /* CAST  */
    NAMESPACE = 476,               /* NAMESPACE  */
    USING = 477,                   /* USING  */
    RESOURCE = 478,                /* RESOURCE  */
    PATCH = 479,                   /* PATCH  */
    SUBROUTINE = 480,              /* SUBROUTINE  */
    ERROR_TOK = 481,               /* ERROR_TOK  */
    COMMON = 482,                  /* COMMON  */
    PARTITION = 483,               /* PARTITION  */
    ACTIVE = 484,                  /* ACTIVE  */
    FILTER = 485,                  /* FILTER  */
    ROW_MAJOR = 486,               /* ROW_MAJOR  */
    THEN = 487                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 99 "src/glsl/glsl_parser.yy"

   int n;
   float real;
   const char *identifier;

   struct ast_type_qualifier type_qualifier;

   ast_node *node;
   ast_type_specifier *type_specifier;
   ast_array_specifier *array_specifier;
   ast_fully_specified_type *fully_specified_type;
   ast_function *function;
   ast_parameter_declarator *parameter_declarator;
   ast_function_definition *function_definition;
   ast_compound_statement *compound_statement;
   ast_expression *expression;
   ast_declarator_list *declarator_list;
   ast_struct_specifier *struct_specifier;
   ast_declaration *declaration;
   ast_switch_body *switch_body;
   ast_case_label *case_label;
   ast_case_label_list *case_label_list;
   ast_case_statement *case_statement;
   ast_case_statement_list *case_statement_list;
   ast_interface_block *interface_block;

   struct {
      ast_node *cond;
      ast_expression *rest;
   } for_rest_statement;

   struct {
      ast_node *then_statement;
      ast_node *else_statement;
   } selection_rest_statement;

#line 333 "src/glsl/glsl_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int _mesa_glsl_parse (struct _mesa_glsl_parse_state *state);


#endif /* !YY__MESA_GLSL_SRC_GLSL_GLSL_PARSER_H_INCLUDED  */
