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

#ifndef YY_YY_SQL_TAB_HPP_INCLUDED
# define YY_YY_SQL_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    SELECT = 258,                  /* SELECT  */
    DISTINCT = 259,                /* DISTINCT  */
    SELECT_OPT = 260,              /* SELECT_OPT  */
    FROM = 261,                    /* FROM  */
    WHERE = 262,                   /* WHERE  */
    JOIN_TYPE = 263,               /* JOIN_TYPE  */
    JOIN = 264,                    /* JOIN  */
    STRAIGHT_JOIN = 265,           /* STRAIGHT_JOIN  */
    INDEX = 266,                   /* INDEX  */
    USE = 267,                     /* USE  */
    ON = 268,                      /* ON  */
    USING = 269,                   /* USING  */
    IGNORE = 270,                  /* IGNORE  */
    FORCE = 271,                   /* FORCE  */
    FOR = 272,                     /* FOR  */
    QUICK = 273,                   /* QUICK  */
    LOW_PRIORITY = 274,            /* LOW_PRIORITY  */
    GROUP = 275,                   /* GROUP  */
    ORDER = 276,                   /* ORDER  */
    BY = 277,                      /* BY  */
    ASC = 278,                     /* ASC  */
    DESC = 279,                    /* DESC  */
    INSERT = 280,                  /* INSERT  */
    UPDATE = 281,                  /* UPDATE  */
    DELETE = 282,                  /* DELETE  */
    SHOW = 283,                    /* SHOW  */
    INTO = 284,                    /* INTO  */
    AS = 285,                      /* AS  */
    IN = 286,                      /* IN  */
    ANY = 287,                     /* ANY  */
    EXISTS = 288,                  /* EXISTS  */
    IS = 289,                      /* IS  */
    NULLX = 290,                   /* NULLX  */
    UNKNOWN = 291,                 /* UNKNOWN  */
    FALSEX = 292,                  /* FALSEX  */
    TRUEX = 293,                   /* TRUEX  */
    DEFAULT = 294,                 /* DEFAULT  */
    EQUAL = 295,                   /* EQUAL  */
    N_EQUAL = 296,                 /* N_EQUAL  */
    MULTIPLY = 297,                /* MULTIPLY  */
    DIVIDE = 298,                  /* DIVIDE  */
    POWER = 299,                   /* POWER  */
    NEWLINE = 300,                 /* NEWLINE  */
    SHIFT = 301,                   /* SHIFT  */
    BASIC_OP = 302,                /* BASIC_OP  */
    BETWEEN = 303,                 /* BETWEEN  */
    CASE = 304,                    /* CASE  */
    WHEN = 305,                    /* WHEN  */
    THEN = 306,                    /* THEN  */
    ELSE = 307,                    /* ELSE  */
    END_CASE = 308,                /* END_CASE  */
    CAST = 309,                    /* CAST  */
    DATA_TYPE = 310,               /* DATA_TYPE  */
    BINARY = 311,                  /* BINARY  */
    CHAR_TYPE = 312,               /* CHAR_TYPE  */
    REGEXP = 313,                  /* REGEXP  */
    HAVING = 314,                  /* HAVING  */
    LIMIT = 315,                   /* LIMIT  */
    OFFSET = 316,                  /* OFFSET  */
    PROCEDURE = 317,               /* PROCEDURE  */
    UNION = 318,                   /* UNION  */
    SET = 319,                     /* SET  */
    INTEGER = 320,                 /* INTEGER  */
    STRING = 321,                  /* STRING  */
    Q_STRING = 322,                /* Q_STRING  */
    DQ_STRING = 323,               /* DQ_STRING  */
    NAME = 324,                    /* NAME  */
    VARIABLE = 325,                /* VARIABLE  */
    O_BRACE = 326,                 /* O_BRACE  */
    C_BRACE = 327,                 /* C_BRACE  */
    BIT_OR = 328,                  /* BIT_OR  */
    BIT_AND = 329,                 /* BIT_AND  */
    NEG = 330,                     /* NEG  */
    END = 331,                     /* END  */
    COMMA = 332,                   /* COMMA  */
    DOT = 333,                     /* DOT  */
    AND = 334,                     /* AND  */
    OR = 335,                      /* OR  */
    NOT = 336,                     /* NOT  */
    XOR = 337,                     /* XOR  */
    LIKE = 338                     /* LIKE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "sql.ypp"

  int int_val;
  class SQLString * str_val;
  class Expression * exp_val;

#line 153 "sql.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SQL_TAB_HPP_INCLUDED  */
