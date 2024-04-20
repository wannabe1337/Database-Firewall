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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sql.ypp"

/* C declarations */

#include <stdio.h>
#include <string.h> // for strcmp

//#include <iostream>
#include "expression.hpp"
#include "parser.hpp"

int yylex();
int yyerror( char * s);
int yy_scan_string ( char *yy_str  );
int scan_buffer(const char * data);
static void cmp_fn(Expression * xp1, Expression * xp2);


#line 89 "sql.tab.cpp"

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

#include "sql.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SELECT = 3,                     /* SELECT  */
  YYSYMBOL_DISTINCT = 4,                   /* DISTINCT  */
  YYSYMBOL_SELECT_OPT = 5,                 /* SELECT_OPT  */
  YYSYMBOL_FROM = 6,                       /* FROM  */
  YYSYMBOL_WHERE = 7,                      /* WHERE  */
  YYSYMBOL_JOIN_TYPE = 8,                  /* JOIN_TYPE  */
  YYSYMBOL_JOIN = 9,                       /* JOIN  */
  YYSYMBOL_STRAIGHT_JOIN = 10,             /* STRAIGHT_JOIN  */
  YYSYMBOL_INDEX = 11,                     /* INDEX  */
  YYSYMBOL_USE = 12,                       /* USE  */
  YYSYMBOL_ON = 13,                        /* ON  */
  YYSYMBOL_USING = 14,                     /* USING  */
  YYSYMBOL_IGNORE = 15,                    /* IGNORE  */
  YYSYMBOL_FORCE = 16,                     /* FORCE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_QUICK = 18,                     /* QUICK  */
  YYSYMBOL_LOW_PRIORITY = 19,              /* LOW_PRIORITY  */
  YYSYMBOL_GROUP = 20,                     /* GROUP  */
  YYSYMBOL_ORDER = 21,                     /* ORDER  */
  YYSYMBOL_BY = 22,                        /* BY  */
  YYSYMBOL_ASC = 23,                       /* ASC  */
  YYSYMBOL_DESC = 24,                      /* DESC  */
  YYSYMBOL_INSERT = 25,                    /* INSERT  */
  YYSYMBOL_UPDATE = 26,                    /* UPDATE  */
  YYSYMBOL_DELETE = 27,                    /* DELETE  */
  YYSYMBOL_SHOW = 28,                      /* SHOW  */
  YYSYMBOL_INTO = 29,                      /* INTO  */
  YYSYMBOL_AS = 30,                        /* AS  */
  YYSYMBOL_IN = 31,                        /* IN  */
  YYSYMBOL_ANY = 32,                       /* ANY  */
  YYSYMBOL_EXISTS = 33,                    /* EXISTS  */
  YYSYMBOL_IS = 34,                        /* IS  */
  YYSYMBOL_NULLX = 35,                     /* NULLX  */
  YYSYMBOL_UNKNOWN = 36,                   /* UNKNOWN  */
  YYSYMBOL_FALSEX = 37,                    /* FALSEX  */
  YYSYMBOL_TRUEX = 38,                     /* TRUEX  */
  YYSYMBOL_DEFAULT = 39,                   /* DEFAULT  */
  YYSYMBOL_EQUAL = 40,                     /* EQUAL  */
  YYSYMBOL_N_EQUAL = 41,                   /* N_EQUAL  */
  YYSYMBOL_MULTIPLY = 42,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 43,                    /* DIVIDE  */
  YYSYMBOL_POWER = 44,                     /* POWER  */
  YYSYMBOL_NEWLINE = 45,                   /* NEWLINE  */
  YYSYMBOL_SHIFT = 46,                     /* SHIFT  */
  YYSYMBOL_BASIC_OP = 47,                  /* BASIC_OP  */
  YYSYMBOL_BETWEEN = 48,                   /* BETWEEN  */
  YYSYMBOL_CASE = 49,                      /* CASE  */
  YYSYMBOL_WHEN = 50,                      /* WHEN  */
  YYSYMBOL_THEN = 51,                      /* THEN  */
  YYSYMBOL_ELSE = 52,                      /* ELSE  */
  YYSYMBOL_END_CASE = 53,                  /* END_CASE  */
  YYSYMBOL_CAST = 54,                      /* CAST  */
  YYSYMBOL_DATA_TYPE = 55,                 /* DATA_TYPE  */
  YYSYMBOL_BINARY = 56,                    /* BINARY  */
  YYSYMBOL_CHAR_TYPE = 57,                 /* CHAR_TYPE  */
  YYSYMBOL_REGEXP = 58,                    /* REGEXP  */
  YYSYMBOL_HAVING = 59,                    /* HAVING  */
  YYSYMBOL_LIMIT = 60,                     /* LIMIT  */
  YYSYMBOL_OFFSET = 61,                    /* OFFSET  */
  YYSYMBOL_PROCEDURE = 62,                 /* PROCEDURE  */
  YYSYMBOL_UNION = 63,                     /* UNION  */
  YYSYMBOL_SET = 64,                       /* SET  */
  YYSYMBOL_INTEGER = 65,                   /* INTEGER  */
  YYSYMBOL_STRING = 66,                    /* STRING  */
  YYSYMBOL_Q_STRING = 67,                  /* Q_STRING  */
  YYSYMBOL_DQ_STRING = 68,                 /* DQ_STRING  */
  YYSYMBOL_NAME = 69,                      /* NAME  */
  YYSYMBOL_VARIABLE = 70,                  /* VARIABLE  */
  YYSYMBOL_O_BRACE = 71,                   /* O_BRACE  */
  YYSYMBOL_C_BRACE = 72,                   /* C_BRACE  */
  YYSYMBOL_BIT_OR = 73,                    /* BIT_OR  */
  YYSYMBOL_BIT_AND = 74,                   /* BIT_AND  */
  YYSYMBOL_NEG = 75,                       /* NEG  */
  YYSYMBOL_END = 76,                       /* END  */
  YYSYMBOL_COMMA = 77,                     /* COMMA  */
  YYSYMBOL_DOT = 78,                       /* DOT  */
  YYSYMBOL_AND = 79,                       /* AND  */
  YYSYMBOL_OR = 80,                        /* OR  */
  YYSYMBOL_NOT = 81,                       /* NOT  */
  YYSYMBOL_XOR = 82,                       /* XOR  */
  YYSYMBOL_LIKE = 83,                      /* LIKE  */
  YYSYMBOL_YYACCEPT = 84,                  /* $accept  */
  YYSYMBOL_command = 85,                   /* command  */
  YYSYMBOL_select_cmd = 86,                /* select_cmd  */
  YYSYMBOL_insert_cmd = 87,                /* insert_cmd  */
  YYSYMBOL_show_cmd = 88,                  /* show_cmd  */
  YYSYMBOL_delete_cmd = 89,                /* delete_cmd  */
  YYSYMBOL_update_cmd = 90,                /* update_cmd  */
  YYSYMBOL_select_options = 91,            /* select_options  */
  YYSYMBOL_select_opts = 92,               /* select_opts  */
  YYSYMBOL_delete_option_list = 93,        /* delete_option_list  */
  YYSYMBOL_delete_option = 94,             /* delete_option  */
  YYSYMBOL_delete_table_list = 95,         /* delete_table_list  */
  YYSYMBOL_delete_table = 96,              /* delete_table  */
  YYSYMBOL_where_cond = 97,                /* where_cond  */
  YYSYMBOL_select_exps = 98,               /* select_exps  */
  YYSYMBOL_select_exp = 99,                /* select_exp  */
  YYSYMBOL_math_op = 100,                  /* math_op  */
  YYSYMBOL_logical_exp = 101,              /* logical_exp  */
  YYSYMBOL_math_exp = 102,                 /* math_exp  */
  YYSYMBOL_field = 103,                    /* field  */
  YYSYMBOL_table_field = 104,              /* table_field  */
  YYSYMBOL_const_value = 105,              /* const_value  */
  YYSYMBOL_table_references = 106,         /* table_references  */
  YYSYMBOL_table_reference = 107,          /* table_reference  */
  YYSYMBOL_join_table = 108,               /* join_table  */
  YYSYMBOL_join_ops = 109,                 /* join_ops  */
  YYSYMBOL_join_types = 110,               /* join_types  */
  YYSYMBOL_join_cond = 111,                /* join_cond  */
  YYSYMBOL_table_factor = 112,             /* table_factor  */
  YYSYMBOL_simple_table = 113,             /* simple_table  */
  YYSYMBOL_alias = 114,                    /* alias  */
  YYSYMBOL_alias_str = 115,                /* alias_str  */
  YYSYMBOL_index_hint = 116,               /* index_hint  */
  YYSYMBOL_index_use = 117,                /* index_use  */
  YYSYMBOL_index_list = 118,               /* index_list  */
  YYSYMBOL_fn = 119,                       /* fn  */
  YYSYMBOL_simple_fn = 120,                /* simple_fn  */
  YYSYMBOL_fn_args = 121,                  /* fn_args  */
  YYSYMBOL_logical_operator = 122,         /* logical_operator  */
  YYSYMBOL_logical_exp_list = 123,         /* logical_exp_list  */
  YYSYMBOL_comp_operator = 124,            /* comp_operator  */
  YYSYMBOL_group_cond = 125,               /* group_cond  */
  YYSYMBOL_groupby_column_list = 126,      /* groupby_column_list  */
  YYSYMBOL_sort_order = 127,               /* sort_order  */
  YYSYMBOL_having_cond = 128,              /* having_cond  */
  YYSYMBOL_order_cond = 129,               /* order_cond  */
  YYSYMBOL_orderby_column_list = 130,      /* orderby_column_list  */
  YYSYMBOL_limit_cond = 131,               /* limit_cond  */
  YYSYMBOL_procedure_cond = 132,           /* procedure_cond  */
  YYSYMBOL_union_cond = 133,               /* union_cond  */
  YYSYMBOL_end_cond = 134,                 /* end_cond  */
  YYSYMBOL_set_cond = 135,                 /* set_cond  */
  YYSYMBOL_case_fn = 136,                  /* case_fn  */
  YYSYMBOL_case_cases = 137,               /* case_cases  */
  YYSYMBOL_case_case = 138,                /* case_case  */
  YYSYMBOL_cast_fn = 139                   /* cast_fn  */
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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  369

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   338


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   100,   101,   104,   105,
     108,   111,   114,   117,   120,   121,   124,   125,   126,   127,
     128,   131,   132,   135,   136,   137,   138,   139,   140,   143,
     144,   145,   148,   149,   150,   151,   154,   155,   158,   159,
     162,   163,   164,   165,   166,   167,   168,   169,   172,   173,
     174,   175,   176,   177,   178,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   213,   217,   218,   219,   222,   223,   224,
     225,   226,   227,   230,   231,   232,   233,   234,   235,   236,
     237,   240,   241,   244,   245,   248,   251,   252,   253,   256,
     257,   260,   261,   262,   265,   266,   269,   270,   274,   277,
     278,   279,   282,   283,   284,   285,   289,   290,   291,   293,
     294,   295,   298,   299,   302,   303,   304,   307,   308,   309,
     312,   313,   316,   317,   319,   322,   324,   325,   328,   329,
     330,   331,   332,   333,   336,   337,   340,   341,   344,   345,
     346,   349,   350,   353,   354,   357,   358,   359,   360,   363,
     364,   365,   366,   369,   370,   373,   374,   377,   378,   381,
     382,   383,   384,   387,   388,   389,   390,   394,   395,   398,
     401,   402,   403,   404,   405,   406,   407
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "SELECT", "DISTINCT",
  "SELECT_OPT", "FROM", "WHERE", "JOIN_TYPE", "JOIN", "STRAIGHT_JOIN",
  "INDEX", "USE", "ON", "USING", "IGNORE", "FORCE", "FOR", "QUICK",
  "LOW_PRIORITY", "GROUP", "ORDER", "BY", "ASC", "DESC", "INSERT",
  "UPDATE", "DELETE", "SHOW", "INTO", "AS", "IN", "ANY", "EXISTS", "IS",
  "NULLX", "UNKNOWN", "FALSEX", "TRUEX", "DEFAULT", "EQUAL", "N_EQUAL",
  "MULTIPLY", "DIVIDE", "POWER", "NEWLINE", "SHIFT", "BASIC_OP", "BETWEEN",
  "CASE", "WHEN", "THEN", "ELSE", "END_CASE", "CAST", "DATA_TYPE",
  "BINARY", "CHAR_TYPE", "REGEXP", "HAVING", "LIMIT", "OFFSET",
  "PROCEDURE", "UNION", "SET", "INTEGER", "STRING", "Q_STRING",
  "DQ_STRING", "NAME", "VARIABLE", "O_BRACE", "C_BRACE", "BIT_OR",
  "BIT_AND", "NEG", "END", "COMMA", "DOT", "AND", "OR", "NOT", "XOR",
  "LIKE", "$accept", "command", "select_cmd", "insert_cmd", "show_cmd",
  "delete_cmd", "update_cmd", "select_options", "select_opts",
  "delete_option_list", "delete_option", "delete_table_list",
  "delete_table", "where_cond", "select_exps", "select_exp", "math_op",
  "logical_exp", "math_exp", "field", "table_field", "const_value",
  "table_references", "table_reference", "join_table", "join_ops",
  "join_types", "join_cond", "table_factor", "simple_table", "alias",
  "alias_str", "index_hint", "index_use", "index_list", "fn", "simple_fn",
  "fn_args", "logical_operator", "logical_exp_list", "comp_operator",
  "group_cond", "groupby_column_list", "sort_order", "having_cond",
  "order_cond", "orderby_column_list", "limit_cond", "procedure_cond",
  "union_cond", "end_cond", "set_cond", "case_fn", "case_cases",
  "case_case", "cast_fn", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-275)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     169,   161,    26,   243,   243,  -275,    32,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,   558,   106,  -275,  -275,  -275,
    -275,    80,   260,    80,  -275,  -275,  -275,  -275,  -275,  -275,
     687,   608,    -8,   664,    -2,  -275,   -33,  -275,  -275,    85,
    -275,   236,     9,  -275,   323,   757,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,   116,   -38,   235,
    -275,  -275,    37,  -275,  -275,  -275,    14,  -275,    89,   -22,
     120,  -275,   583,   695,   258,  -275,   664,   757,   516,   166,
      56,    75,   133,   704,    80,   558,    86,   151,   171,  -275,
    -275,   664,  -275,  -275,  -275,  -275,  -275,   159,  -275,  -275,
    -275,   664,   687,   687,   687,   687,   687,   687,   687,   182,
      54,    80,  -275,  -275,  -275,    80,   183,    80,   273,    80,
      80,    65,    66,    73,   399,   276,   664,  -275,  -275,   292,
    -275,   757,   -42,   664,   196,  -275,    41,  -275,   199,   213,
    -275,   242,   245,  -275,  -275,    15,  -275,  -275,   664,  -275,
     422,   664,   757,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,   247,   274,    16,   235,   205,  -275,  -275,   -16,  -275,
    -275,  -275,  -275,   319,    15,  -275,  -275,   255,  -275,  -275,
    -275,  -275,   664,   664,  -275,   717,    -9,  -275,   664,   -11,
    -275,  -275,   301,   302,   310,   313,   475,   338,   103,   664,
     757,   624,   687,   335,   475,   288,  -275,   273,    -1,   335,
     318,   757,   739,  -275,   157,   210,   269,  -275,   339,   296,
    -275,  -275,  -275,  -275,   298,    91,   501,  -275,   380,   127,
    -275,  -275,   350,   314,  -275,   757,  -275,   757,   334,   315,
     127,   664,  -275,   376,   320,   315,  -275,  -275,   664,  -275,
     664,  -275,   664,  -275,    64,  -275,   116,   316,   336,  -275,
     322,   664,   229,   664,  -275,  -275,  -275,   501,    54,   475,
     335,   649,   330,   311,   751,   325,  -275,   109,   311,   111,
     112,   143,  -275,   326,    38,  -275,  -275,    13,   327,  -275,
     236,   518,   329,   757,   664,   402,  -275,  -275,    19,   127,
     315,  -275,   757,   -36,  -275,  -275,  -275,   320,  -275,   320,
    -275,   331,   333,   340,   341,   -18,  -275,  -275,    64,  -275,
    -275,   343,   149,   664,   236,   447,   159,   664,    54,  -275,
     345,   337,   351,   153,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,   757,   346,   174,   159,   664,   664,   757,  -275,   -26,
     362,  -275,  -275,  -275,  -275,  -275,   664,   757,   757,   358,
     360,  -275,   116,   311,   757,   664,   280,  -275,  -275
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    14,     0,    21,    21,    11,     0,     3,     4,     5,
       6,     7,    18,    16,    17,     0,    15,    10,    24,    25,
      23,     0,    22,    29,     1,    97,    98,   100,    99,    41,
       0,     0,     0,     0,     0,    93,    87,    95,    96,    88,
      94,     0,     9,    38,   119,    48,    72,    83,    84,    85,
      86,    51,    52,    20,    19,   116,   117,     0,     0,   101,
     104,   103,   119,    27,    28,    26,     0,    30,    32,    87,
      88,    79,     0,     0,     0,   187,     0,   196,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   153,   148,
     149,     0,   151,   122,   124,   125,   123,     0,   150,    40,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,   107,   108,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   188,     0,
     139,   140,     0,     0,     0,   138,     0,    42,    89,    90,
      43,    91,    92,    82,    81,    36,    39,   121,     0,   152,
       0,     0,    49,    74,    75,    80,    76,    73,    77,    78,
     118,    87,     0,    36,   102,   111,   109,   106,   119,   129,
     130,   131,   114,     0,    36,    31,    35,    33,    89,    90,
      91,    92,     0,     0,   185,     0,     0,   136,     0,   163,
     137,   134,     0,     0,     0,     0,     0,   154,     0,     0,
      50,     0,     0,   163,     0,     0,   105,   126,     0,   163,
       0,   189,     0,   184,     0,     0,     0,   141,     0,     0,
      44,    45,    46,    47,     0,     0,     0,   147,    55,    37,
      70,    71,     0,   161,    54,    53,   180,   179,     0,   169,
     112,     0,   115,     0,     0,   169,    34,   186,     0,   190,
       0,   194,     0,   192,     0,   135,     0,     0,     0,   146,
       0,     0,     0,     0,   142,   143,   144,     0,     0,     0,
     163,     0,     0,   177,     0,     0,   132,     0,   177,     0,
       0,     0,   167,     0,    87,   165,   166,   158,     0,    68,
       0,     0,     0,    58,     0,    56,   145,   156,   158,   162,
     169,   182,   181,   170,   178,    13,   113,     0,   127,     0,
      12,     0,     0,     0,     0,     0,   159,   160,     0,   164,
      69,     0,     0,     0,     0,    57,     0,     0,     0,   155,
     173,     0,     0,     0,   133,   191,   195,   193,   168,    65,
      63,    67,     0,     0,     0,     0,     0,    59,   157,     0,
     175,   172,   171,   128,    66,    64,     0,    60,    61,     0,
       0,   174,     0,   177,    62,     0,     0,   176,     8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -275,  -275,     0,  -275,  -275,  -275,  -275,  -275,  -275,   394,
    -275,  -275,   281,  -130,  -275,   347,   363,  -165,   -14,   -23,
    -104,  -275,   -55,   344,  -275,  -275,  -275,  -275,   352,   -20,
     -60,   348,   230,  -275,    12,    92,  -245,   -74,  -275,  -193,
     -85,  -275,  -275,   154,  -275,  -175,   138,  -232,  -275,  -275,
    -274,  -275,    -7,   378,   -53,     3
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     6,    82,     8,     9,    10,    11,    15,    16,    21,
      22,    66,    67,   197,    42,    43,    44,   227,   131,    46,
      47,    48,    58,    59,    60,   115,   116,   206,    61,    62,
      99,   100,   172,   173,   277,    49,    50,   132,   267,   229,
     101,   233,   298,   319,   270,   219,   287,   273,   350,   363,
     305,   163,   230,    74,    75,   231
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    45,   118,    68,   310,   136,   162,    71,    51,   286,
     218,   240,   151,   278,    86,    84,   243,    73,    52,    77,
     119,   128,   196,   196,   134,   331,   110,    83,   239,   145,
     187,   359,    24,   203,   245,   188,   316,   317,    79,   111,
     360,   332,   316,   317,   209,    80,   214,   215,   216,    79,
      93,    94,    95,    96,   135,    17,   122,   109,    45,   189,
     257,   259,   129,    76,   174,    51,   188,    86,   330,    78,
     244,    45,   128,   286,   198,    52,   299,   150,    51,   153,
     154,   155,   156,   157,   158,   159,    85,   152,    52,   368,
     318,   120,   111,   202,     1,   300,   328,   168,   137,   282,
      68,   177,   296,    93,    94,    95,    96,   176,   207,   315,
      53,    54,   185,   191,   217,   117,   122,   140,   188,     1,
     161,   283,   138,    70,   224,   139,    25,    26,    27,    28,
     284,    55,   178,    70,    56,   179,    57,   200,    30,   180,
      31,   141,   181,   263,   142,    32,    55,    33,    34,    56,
     285,    57,    93,    94,    95,    96,    35,    69,    37,    38,
      70,    40,   225,    81,   297,    12,    13,   121,   211,   212,
     133,    14,     1,   263,   279,   234,   280,   294,   281,   238,
     188,   308,   228,   311,   312,   235,   309,   237,   188,   188,
     228,   166,   167,    88,     2,     3,     4,     5,   123,    89,
      90,    25,    26,    27,    28,   143,   264,   265,   134,   266,
     327,   258,   228,    30,   285,   313,   322,    92,   204,   205,
     188,   340,   148,    34,   348,   353,   188,   274,   248,   249,
     309,    35,    69,    37,    38,    70,    40,    41,   135,     1,
     345,   346,    98,   112,   113,   114,   355,   291,   293,   295,
     343,   188,   149,   228,   160,   228,   288,   302,    18,   356,
     292,    19,    20,    88,    25,    26,    27,    28,   190,    89,
      90,    25,    26,    27,    28,    63,    30,   192,    64,    65,
     325,   250,   251,    30,   133,   169,    34,    92,   170,   171,
     321,   193,   136,    34,    35,    69,    37,    38,    70,    40,
      41,    35,    69,    37,    38,    70,    40,    41,    72,   341,
     126,   127,    98,   347,   201,    25,    26,    27,    28,   333,
     194,   334,   186,   195,   342,   122,    72,    30,   183,   184,
     208,   357,   358,   210,   102,   103,   104,    34,   105,   106,
     252,   253,   364,   220,   221,    35,    69,    37,    38,    70,
      40,    41,   222,    86,    87,   223,   218,    88,   232,   241,
     246,   254,   367,    89,    90,   107,   108,   260,   255,   256,
      88,    91,   268,   269,   271,   272,    89,    90,   102,   103,
     104,    92,   105,   106,   261,   275,   276,   304,   289,    93,
      94,    95,    96,   290,    92,   303,   307,   314,    23,   320,
     324,   175,   351,   335,    97,   336,    98,   349,   144,   107,
     108,   260,   337,   130,    88,   339,   352,   262,   354,    98,
      89,    90,   102,   103,   104,   362,   105,   106,   261,   365,
      87,   366,   146,    88,   147,   124,    88,   242,    92,    89,
      90,   361,    89,    90,   102,   103,   104,    91,   105,   106,
     182,   125,   329,   107,   108,   164,   338,    92,     0,     0,
      92,   262,     0,    98,   102,   103,   104,   165,   105,   106,
       0,     0,     0,     0,     0,   107,   108,     0,     0,     0,
      97,    88,    98,   326,     0,    98,     0,    89,    90,   102,
     103,   104,     0,   105,   106,   107,   108,     0,     0,     0,
       0,   199,     0,     0,     0,    92,     0,     0,   224,     0,
      25,    26,    27,    28,     0,     0,     0,     0,     0,     0,
     107,   108,    30,     0,    31,     0,     0,     0,   344,    32,
      98,    33,    34,     0,   224,     0,    25,    26,    27,    28,
      35,    69,    37,    38,    70,    40,   225,     0,    30,     0,
      31,    25,    26,    27,    28,    32,   226,    33,    34,     0,
     102,   103,   104,    30,   105,   106,    35,    69,    37,    38,
      70,    40,   225,    34,     0,     0,     0,     0,     0,     0,
       0,    35,    69,    37,    38,    70,    40,    41,   130,     0,
       0,   107,   108,    25,    26,    27,    28,   323,     0,     0,
      29,     0,     0,     0,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,    33,    34,     0,     0,    25,    26,
      27,    28,     0,    35,    36,    37,    38,    39,    40,    41,
      30,     0,    31,     0,     0,     0,     0,    32,     0,    33,
      34,     0,     0,    25,    26,    27,    28,     0,    35,    69,
      37,    38,    70,    40,    41,    30,     0,     0,    72,    25,
      26,    27,    28,   236,     0,    34,     0,     0,     0,     0,
       0,    30,     0,    35,    69,    37,    38,    70,    40,    41,
       0,    34,     0,     0,    25,    26,    27,    28,   301,    35,
      69,    37,    38,    70,    40,    41,    30,     0,     0,    25,
      26,    27,    28,     0,     0,     0,    34,     0,     0,     0,
       0,    30,     0,     0,    35,    69,    37,    38,    70,    40,
      41,    34,    25,    26,    27,    28,     0,     0,     0,    35,
      69,    37,    38,    70,    40,    41,     0,   102,   103,   104,
       0,   105,   106,     0,    34,    72,   102,   103,   104,     0,
     105,   106,    35,    69,    37,    38,    70,    40,     0,   102,
     103,   104,     0,   105,   106,     0,     0,     0,   107,   108,
     213,     0,     0,     0,     0,     0,   144,   107,   108,     0,
       0,   102,   103,   104,     0,   105,   106,     0,     0,     0,
     107,   108,   247,   102,   103,   104,     0,   105,   106,   102,
     103,   104,     0,   105,   106,     0,     0,     0,     0,     0,
       0,     0,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   107,   108,     0,     0,     0,     0,
     107,   108
};

static const yytype_int16 yycheck[] =
{
       0,    15,    62,    23,   278,    79,   110,    30,    15,   254,
      21,   204,    97,   245,    30,     6,    17,    31,    15,    33,
       6,    74,     7,     7,    42,    61,    64,    41,   203,    84,
      72,    57,     0,   163,   209,    77,    23,    24,    71,    77,
      66,    77,    23,    24,   174,    78,    55,    56,    57,    71,
      66,    67,    68,    69,    72,    29,    78,    57,    72,   133,
     225,   226,    76,    71,   119,    72,    77,    30,   300,    71,
      71,    85,   125,   318,   148,    72,   269,    91,    85,   102,
     103,   104,   105,   106,   107,   108,    77,   101,    85,   363,
      77,    77,    77,    77,     3,   270,    77,   117,    42,    35,
     120,   121,   267,    66,    67,    68,    69,    42,   168,    71,
       4,     5,   126,    72,   188,    78,    78,    42,    77,     3,
      66,    57,    66,    69,    33,    69,    35,    36,    37,    38,
      66,    66,    66,    69,    69,    69,    71,   151,    47,    66,
      49,    66,    69,   228,    69,    54,    66,    56,    57,    69,
     254,    71,    66,    67,    68,    69,    65,    66,    67,    68,
      69,    70,    71,    78,   268,     4,     5,    78,   182,   183,
       4,    10,     3,   258,   248,    72,   250,   262,   252,   202,
      77,    72,   196,    72,    72,   199,    77,   201,    77,    77,
     204,     8,     9,    34,    25,    26,    27,    28,    78,    40,
      41,    35,    36,    37,    38,    72,    79,    80,    42,    82,
     295,   225,   226,    47,   318,    72,   290,    58,    13,    14,
      77,    72,    71,    57,   328,    72,    77,   241,    71,    72,
      77,    65,    66,    67,    68,    69,    70,    71,    72,     3,
     325,   326,    83,     8,     9,    10,    72,   261,   262,   263,
     324,    77,    81,   267,    72,   269,   256,   271,    15,   344,
      31,    18,    19,    34,    35,    36,    37,    38,    72,    40,
      41,    35,    36,    37,    38,    15,    47,    78,    18,    19,
     294,    71,    72,    47,     4,    12,    57,    58,    15,    16,
     290,    78,   366,    57,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    71,    50,   323,
      52,    53,    83,   327,    40,    35,    36,    37,    38,   307,
      78,   309,    30,    78,   324,    78,    50,    47,    52,    53,
      11,   345,   346,    78,    42,    43,    44,    57,    46,    47,
      71,    72,   356,    42,    42,    65,    66,    67,    68,    69,
      70,    71,    42,    30,    31,    42,    21,    34,    20,    71,
      42,    22,   362,    40,    41,    73,    74,    31,    72,    71,
      34,    48,    22,    59,    40,    60,    40,    41,    42,    43,
      44,    58,    46,    47,    48,     9,    66,    76,    72,    66,
      67,    68,    69,    71,    58,    65,    71,    71,     4,    72,
      71,   120,    65,    72,    81,    72,    83,    62,    72,    73,
      74,    31,    72,    72,    34,    72,    65,    81,    72,    83,
      40,    41,    42,    43,    44,    63,    46,    47,    48,    71,
      31,    71,    85,    34,    86,    72,    34,   207,    58,    40,
      41,   349,    40,    41,    42,    43,    44,    48,    46,    47,
      51,    73,   298,    73,    74,   111,   318,    58,    -1,    -1,
      58,    81,    -1,    83,    42,    43,    44,   115,    46,    47,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,
      81,    34,    83,    81,    -1,    83,    -1,    40,    41,    42,
      43,    44,    -1,    46,    47,    73,    74,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    58,    -1,    -1,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    47,    -1,    49,    -1,    -1,    -1,    81,    54,
      83,    56,    57,    -1,    33,    -1,    35,    36,    37,    38,
      65,    66,    67,    68,    69,    70,    71,    -1,    47,    -1,
      49,    35,    36,    37,    38,    54,    81,    56,    57,    -1,
      42,    43,    44,    47,    46,    47,    65,    66,    67,    68,
      69,    70,    71,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      -1,    73,    74,    35,    36,    37,    38,    79,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    57,    -1,    -1,    35,    36,
      37,    38,    -1,    65,    66,    67,    68,    69,    70,    71,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      57,    -1,    -1,    35,    36,    37,    38,    -1,    65,    66,
      67,    68,    69,    70,    71,    47,    -1,    -1,    50,    35,
      36,    37,    38,    39,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    57,    -1,    -1,    35,    36,    37,    38,    39,    65,
      66,    67,    68,    69,    70,    71,    47,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    57,    35,    36,    37,    38,    -1,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    42,    43,    44,
      -1,    46,    47,    -1,    57,    50,    42,    43,    44,    -1,
      46,    47,    65,    66,    67,    68,    69,    70,    -1,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    73,    74,
      53,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      73,    74,    53,    42,    43,    44,    -1,    46,    47,    42,
      43,    44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      73,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    25,    26,    27,    28,    85,    86,    87,    88,
      89,    90,     4,     5,    10,    91,    92,    29,    15,    18,
      19,    93,    94,    93,     0,    35,    36,    37,    38,    42,
      47,    49,    54,    56,    57,    65,    66,    67,    68,    69,
      70,    71,    98,    99,   100,   102,   103,   104,   105,   119,
     120,   136,   139,     4,     5,    66,    69,    71,   106,   107,
     108,   112,   113,    15,    18,    19,    95,    96,   113,    66,
      69,   103,    50,   102,   137,   138,    71,   102,    71,    71,
      78,    78,    86,   102,     6,    77,    30,    31,    34,    40,
      41,    48,    58,    66,    67,    68,    69,    81,    83,   114,
     115,   124,    42,    43,    44,    46,    47,    73,    74,    86,
      64,    77,     8,     9,    10,   109,   110,    78,   114,     6,
      77,    78,    78,    78,   100,   137,    52,    53,   138,   102,
      72,   102,   121,     4,    42,    72,   121,    42,    66,    69,
      42,    66,    69,    72,    72,   106,    99,   115,    71,    81,
     102,   124,   102,   103,   103,   103,   103,   103,   103,   103,
      72,    66,   104,   135,   107,   112,     8,     9,   113,    12,
      15,    16,   116,   117,   106,    96,    42,   113,    66,    69,
      66,    69,    51,    52,    53,   102,    30,    72,    77,   121,
      72,    72,    78,    78,    78,    78,     7,    97,   121,    79,
     102,    40,    77,    97,    13,    14,   111,   114,    11,    97,
      78,   102,   102,    53,    55,    56,    57,   121,    21,   129,
      42,    42,    42,    42,    33,    71,    81,   101,   102,   123,
     136,   139,    20,   125,    72,   102,    39,   102,   103,   129,
     123,    71,   116,    17,    71,   129,    42,    53,    71,    72,
      71,    72,    71,    72,    22,    72,    71,   101,   102,   101,
      31,    48,    81,   124,    79,    80,    82,   122,    22,    59,
     128,    40,    60,   131,   102,     9,    66,   118,   131,   121,
     121,   121,    35,    57,    66,   104,   120,   130,    86,    72,
      71,   102,    31,   102,   124,   102,   101,   104,   126,   123,
     129,    39,   102,    65,    76,   134,    72,    71,    72,    77,
     134,    72,    72,    72,    71,    71,    23,    24,    77,   127,
      72,    86,   121,    79,    71,   102,    81,   124,    77,   127,
     131,    61,    77,   118,   118,    72,    72,    72,   130,    72,
      72,   102,    86,   121,    81,   124,   124,   102,   104,    62,
     132,    65,    65,    72,    72,    72,   124,   102,   102,    57,
      66,   119,    63,   133,   102,    71,    71,    86,   134
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    85,    85,    85,    85,    85,    86,    86,
      87,    88,    89,    90,    91,    91,    92,    92,    92,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   108,   109,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   115,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   119,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     124,   124,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   130,   130,   131,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   136,   136,   136,   136,   137,   137,   138,
     139,   139,   139,   139,   139,   139,   139
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,    13,     3,
       2,     1,     9,     9,     0,     1,     1,     1,     1,     2,
       2,     0,     1,     1,     1,     1,     2,     2,     2,     0,
       1,     3,     1,     3,     5,     3,     0,     2,     1,     3,
       2,     1,     3,     3,     5,     5,     5,     5,     1,     3,
       4,     1,     1,     5,     5,     1,     3,     4,     3,     5,
       6,     6,     7,     5,     6,     5,     6,     5,     3,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     4,     2,     1,     1,     2,
       1,     0,     2,     4,     3,     5,     1,     1,     3,     0,
       1,     2,     1,     1,     1,     1,     0,     5,     7,     1,
       1,     1,     1,     3,     4,     6,     4,     4,     3,     3,
       1,     3,     1,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     2,     1,     0,     4,     1,     3,     0,     1,
       1,     0,     2,     0,     4,     1,     1,     1,     3,     0,
       2,     4,     4,     0,     2,     0,     2,     0,     1,     3,
       3,     5,     5,     3,     5,     4,     6,     1,     2,     4,
       6,     9,     6,     9,     6,     9,     2
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 8: /* select_cmd: SELECT select_options select_exps FROM table_references where_cond group_cond having_cond order_cond limit_cond procedure_cond union_cond end_cond  */
#line 104 "sql.ypp"
                                                                                                                                                                 { (yyval.exp_val)=(yyvsp[-10].exp_val); }
#line 1573 "sql.tab.cpp"
    break;

  case 9: /* select_cmd: SELECT select_options select_exps  */
#line 105 "sql.ypp"
                                                { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1579 "sql.tab.cpp"
    break;

  case 38: /* select_exps: select_exp  */
#line 158 "sql.ypp"
                                              { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1585 "sql.tab.cpp"
    break;

  case 39: /* select_exps: select_exps COMMA select_exp  */
#line 159 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1591 "sql.tab.cpp"
    break;

  case 40: /* select_exp: math_op alias  */
#line 162 "sql.ypp"
                                              { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 1597 "sql.tab.cpp"
    break;

  case 41: /* select_exp: MULTIPLY  */
#line 163 "sql.ypp"
                                              { (yyval.exp_val)=new Expression(); }
#line 1603 "sql.tab.cpp"
    break;

  case 42: /* select_exp: STRING DOT MULTIPLY  */
#line 164 "sql.ypp"
                                  { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val)); }
#line 1609 "sql.tab.cpp"
    break;

  case 43: /* select_exp: NAME DOT MULTIPLY  */
#line 165 "sql.ypp"
                                { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val));  }
#line 1615 "sql.tab.cpp"
    break;

  case 44: /* select_exp: STRING DOT STRING DOT MULTIPLY  */
#line 166 "sql.ypp"
                                             { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val)); }
#line 1621 "sql.tab.cpp"
    break;

  case 45: /* select_exp: STRING DOT NAME DOT MULTIPLY  */
#line 167 "sql.ypp"
                                           { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val)); }
#line 1627 "sql.tab.cpp"
    break;

  case 46: /* select_exp: NAME DOT STRING DOT MULTIPLY  */
#line 168 "sql.ypp"
                                           { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val)); }
#line 1633 "sql.tab.cpp"
    break;

  case 47: /* select_exp: NAME DOT NAME DOT MULTIPLY  */
#line 169 "sql.ypp"
                                         { clb_found_table((yyvsp[-2].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[-2].str_val)); }
#line 1639 "sql.tab.cpp"
    break;

  case 48: /* math_op: math_exp  */
#line 172 "sql.ypp"
                                                    { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1645 "sql.tab.cpp"
    break;

  case 49: /* math_op: math_op comp_operator math_exp  */
#line 173 "sql.ypp"
                                                    { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1651 "sql.tab.cpp"
    break;

  case 50: /* math_op: math_op NOT comp_operator math_exp  */
#line 174 "sql.ypp"
                                                    { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1657 "sql.tab.cpp"
    break;

  case 51: /* math_op: case_fn  */
#line 175 "sql.ypp"
                                                    { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1663 "sql.tab.cpp"
    break;

  case 52: /* math_op: cast_fn  */
#line 176 "sql.ypp"
                                                    { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1669 "sql.tab.cpp"
    break;

  case 53: /* math_op: math_op BETWEEN math_exp AND math_exp  */
#line 177 "sql.ypp"
                                                    { (yyval.exp_val)=(yyvsp[-4].exp_val); }
#line 1675 "sql.tab.cpp"
    break;

  case 54: /* math_op: math_op IN O_BRACE fn_args C_BRACE  */
#line 178 "sql.ypp"
                                                    { (yyval.exp_val)=(yyvsp[-4].exp_val); }
#line 1681 "sql.tab.cpp"
    break;

  case 55: /* logical_exp: math_exp  */
#line 181 "sql.ypp"
                                                    { if ((yyvsp[0].exp_val)->IsTrue()) clb_found_tautology(); }
#line 1687 "sql.tab.cpp"
    break;

  case 56: /* logical_exp: math_exp comp_operator math_exp  */
#line 182 "sql.ypp"
                                                    { cmp_fn((yyvsp[-2].exp_val),(yyvsp[0].exp_val)); }
#line 1693 "sql.tab.cpp"
    break;

  case 57: /* logical_exp: math_exp NOT comp_operator math_exp  */
#line 183 "sql.ypp"
                                                    { cmp_fn((yyvsp[-3].exp_val),(yyvsp[0].exp_val)); }
#line 1699 "sql.tab.cpp"
    break;

  case 58: /* logical_exp: math_exp NOT math_exp  */
#line 184 "sql.ypp"
                                                    { cmp_fn((yyvsp[-2].exp_val),(yyvsp[0].exp_val)); }
#line 1705 "sql.tab.cpp"
    break;

  case 59: /* logical_exp: math_exp comp_operator math_exp comp_operator math_exp  */
#line 185 "sql.ypp"
                                                                         { clb_found_tautology(); }
#line 1711 "sql.tab.cpp"
    break;

  case 60: /* logical_exp: math_exp NOT comp_operator math_exp comp_operator math_exp  */
#line 186 "sql.ypp"
                                                                         { clb_found_tautology(); }
#line 1717 "sql.tab.cpp"
    break;

  case 61: /* logical_exp: math_exp comp_operator math_exp NOT comp_operator math_exp  */
#line 187 "sql.ypp"
                                                                         { clb_found_tautology(); }
#line 1723 "sql.tab.cpp"
    break;

  case 62: /* logical_exp: math_exp NOT comp_operator math_exp NOT comp_operator math_exp  */
#line 188 "sql.ypp"
                                                                             { clb_found_tautology(); }
#line 1729 "sql.tab.cpp"
    break;

  case 63: /* logical_exp: math_exp IN O_BRACE fn_args C_BRACE  */
#line 189 "sql.ypp"
                                                      { cmp_fn((yyvsp[-4].exp_val),(yyvsp[-1].exp_val)); }
#line 1735 "sql.tab.cpp"
    break;

  case 64: /* logical_exp: math_exp NOT IN O_BRACE fn_args C_BRACE  */
#line 190 "sql.ypp"
                                                      { cmp_fn((yyvsp[-5].exp_val),(yyvsp[-1].exp_val)); }
#line 1741 "sql.tab.cpp"
    break;

  case 65: /* logical_exp: math_exp IN O_BRACE select_cmd C_BRACE  */
#line 191 "sql.ypp"
                                                      { cmp_fn((yyvsp[-4].exp_val), (yyvsp[-1].exp_val)); }
#line 1747 "sql.tab.cpp"
    break;

  case 66: /* logical_exp: math_exp NOT IN O_BRACE select_cmd C_BRACE  */
#line 192 "sql.ypp"
                                                         { cmp_fn((yyvsp[-5].exp_val), (yyvsp[-1].exp_val)); }
#line 1753 "sql.tab.cpp"
    break;

  case 67: /* logical_exp: math_exp BETWEEN math_exp AND math_exp  */
#line 193 "sql.ypp"
                                                      { cmp_fn((yyvsp[-4].exp_val), (yyvsp[-2].exp_val)); cmp_fn((yyvsp[-4].exp_val), (yyvsp[0].exp_val)); }
#line 1759 "sql.tab.cpp"
    break;

  case 72: /* math_exp: field  */
#line 200 "sql.ypp"
                                              { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1765 "sql.tab.cpp"
    break;

  case 73: /* math_exp: math_exp BASIC_OP field  */
#line 201 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1771 "sql.tab.cpp"
    break;

  case 74: /* math_exp: math_exp MULTIPLY field  */
#line 202 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1777 "sql.tab.cpp"
    break;

  case 75: /* math_exp: math_exp DIVIDE field  */
#line 203 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1783 "sql.tab.cpp"
    break;

  case 76: /* math_exp: math_exp SHIFT field  */
#line 204 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1789 "sql.tab.cpp"
    break;

  case 77: /* math_exp: math_exp BIT_OR field  */
#line 205 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1795 "sql.tab.cpp"
    break;

  case 78: /* math_exp: math_exp BIT_AND field  */
#line 206 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 1801 "sql.tab.cpp"
    break;

  case 79: /* math_exp: BASIC_OP field  */
#line 207 "sql.ypp"
                                                 { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1807 "sql.tab.cpp"
    break;

  case 80: /* math_exp: math_exp POWER field  */
#line 208 "sql.ypp"
                                              { (yyval.exp_val)->Add((yyvsp[0].exp_val)); /*bit xor*/ }
#line 1813 "sql.tab.cpp"
    break;

  case 81: /* math_exp: O_BRACE math_exp C_BRACE  */
#line 209 "sql.ypp"
                                              { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 1819 "sql.tab.cpp"
    break;

  case 82: /* math_exp: O_BRACE select_cmd C_BRACE  */
#line 210 "sql.ypp"
                                              { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 1825 "sql.tab.cpp"
    break;

  case 83: /* field: table_field  */
#line 213 "sql.ypp"
                          { (yyval.exp_val)=new Expression(); 
                            clb_check_true_constant((yyvsp[0].str_val))? 
                              (yyval.exp_val)->AddConst(new SQLString("fn()")) : 
                              (yyval.exp_val)->AddField((yyvsp[0].str_val)); }
#line 1834 "sql.tab.cpp"
    break;

  case 84: /* field: const_value  */
#line 217 "sql.ypp"
                          { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1840 "sql.tab.cpp"
    break;

  case 85: /* field: fn  */
#line 218 "sql.ypp"
                          { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 1846 "sql.tab.cpp"
    break;

  case 86: /* field: simple_fn  */
#line 219 "sql.ypp"
                          { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(new SQLString("fn()")); }
#line 1852 "sql.tab.cpp"
    break;

  case 87: /* table_field: STRING  */
#line 222 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1858 "sql.tab.cpp"
    break;

  case 88: /* table_field: NAME  */
#line 223 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1864 "sql.tab.cpp"
    break;

  case 89: /* table_field: STRING DOT STRING  */
#line 224 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1870 "sql.tab.cpp"
    break;

  case 90: /* table_field: STRING DOT NAME  */
#line 225 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1876 "sql.tab.cpp"
    break;

  case 91: /* table_field: NAME DOT STRING  */
#line 226 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1882 "sql.tab.cpp"
    break;

  case 92: /* table_field: NAME DOT NAME  */
#line 227 "sql.ypp"
                                   { (yyval.str_val)=(yyvsp[0].str_val); }
#line 1888 "sql.tab.cpp"
    break;

  case 93: /* const_value: INTEGER  */
#line 230 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[0].int_val)); }
#line 1894 "sql.tab.cpp"
    break;

  case 94: /* const_value: VARIABLE  */
#line 231 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[0].int_val)); }
#line 1900 "sql.tab.cpp"
    break;

  case 95: /* const_value: Q_STRING  */
#line 232 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[0].str_val)); }
#line 1906 "sql.tab.cpp"
    break;

  case 96: /* const_value: DQ_STRING  */
#line 233 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst((yyvsp[0].str_val)); }
#line 1912 "sql.tab.cpp"
    break;

  case 97: /* const_value: NULLX  */
#line 234 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0);  }
#line 1918 "sql.tab.cpp"
    break;

  case 98: /* const_value: UNKNOWN  */
#line 235 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0); }
#line 1924 "sql.tab.cpp"
    break;

  case 99: /* const_value: TRUEX  */
#line 236 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(1); }
#line 1930 "sql.tab.cpp"
    break;

  case 100: /* const_value: FALSEX  */
#line 237 "sql.ypp"
                                { (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddConst(0); }
#line 1936 "sql.tab.cpp"
    break;

  case 116: /* simple_table: STRING  */
#line 269 "sql.ypp"
                     { clb_found_table((yyvsp[0].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[0].str_val)); }
#line 1942 "sql.tab.cpp"
    break;

  case 117: /* simple_table: NAME  */
#line 270 "sql.ypp"
                     { clb_found_table((yyvsp[0].str_val)); (yyval.exp_val)=new Expression(); (yyval.exp_val)->AddField((yyvsp[0].str_val)); }
#line 1948 "sql.tab.cpp"
    break;

  case 118: /* simple_table: O_BRACE select_cmd C_BRACE  */
#line 274 "sql.ypp"
                                         { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 1954 "sql.tab.cpp"
    break;

  case 119: /* alias: %empty  */
#line 277 "sql.ypp"
                        { }
#line 1960 "sql.tab.cpp"
    break;

  case 120: /* alias: alias_str  */
#line 278 "sql.ypp"
                        { }
#line 1966 "sql.tab.cpp"
    break;

  case 121: /* alias: AS alias_str  */
#line 279 "sql.ypp"
                           { }
#line 1972 "sql.tab.cpp"
    break;

  case 122: /* alias_str: STRING  */
#line 282 "sql.ypp"
                             { /* $$ = $1; printf("table: %s\n", $1); */ }
#line 1978 "sql.tab.cpp"
    break;

  case 123: /* alias_str: NAME  */
#line 283 "sql.ypp"
                             { /* $$ = $2; printf("table: %s\n", $2); */ }
#line 1984 "sql.tab.cpp"
    break;

  case 134: /* fn: STRING O_BRACE fn_args C_BRACE  */
#line 302 "sql.ypp"
                                             { (yyval.exp_val)=(yyvsp[-1].exp_val); clb_check_bruteforce_function((yyvsp[-3].str_val)); }
#line 1990 "sql.tab.cpp"
    break;

  case 135: /* fn: STRING O_BRACE DISTINCT fn_args order_cond C_BRACE  */
#line 303 "sql.ypp"
                                                                 { (yyval.exp_val)=(yyvsp[-2].exp_val); clb_check_bruteforce_function((yyvsp[-5].str_val)); /* printf("fn\n"); */ }
#line 1996 "sql.tab.cpp"
    break;

  case 136: /* fn: CHAR_TYPE O_BRACE fn_args C_BRACE  */
#line 304 "sql.ypp"
                                                { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 2002 "sql.tab.cpp"
    break;

  case 137: /* simple_fn: STRING O_BRACE MULTIPLY C_BRACE  */
#line 307 "sql.ypp"
                                              { clb_check_bruteforce_function((yyvsp[-3].str_val)); }
#line 2008 "sql.tab.cpp"
    break;

  case 138: /* simple_fn: STRING O_BRACE C_BRACE  */
#line 308 "sql.ypp"
                                     { clb_check_bruteforce_function((yyvsp[-2].str_val)); }
#line 2014 "sql.tab.cpp"
    break;

  case 139: /* simple_fn: CHAR_TYPE O_BRACE C_BRACE  */
#line 309 "sql.ypp"
                                        { /* $1 = new SQLString("char()"); */ }
#line 2020 "sql.tab.cpp"
    break;

  case 140: /* fn_args: math_exp  */
#line 312 "sql.ypp"
                                         { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 2026 "sql.tab.cpp"
    break;

  case 141: /* fn_args: fn_args COMMA fn_args  */
#line 313 "sql.ypp"
                                         { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 2032 "sql.tab.cpp"
    break;

  case 183: /* case_fn: CASE case_cases END_CASE  */
#line 387 "sql.ypp"
                                     { (yyval.exp_val)=(yyvsp[-1].exp_val); }
#line 2038 "sql.tab.cpp"
    break;

  case 184: /* case_fn: CASE case_cases ELSE math_exp END_CASE  */
#line 388 "sql.ypp"
                                                     { (yyval.exp_val) = (yyvsp[-3].exp_val); (yyval.exp_val)->Add((yyvsp[-1].exp_val)); }
#line 2044 "sql.tab.cpp"
    break;

  case 185: /* case_fn: CASE math_exp case_cases END_CASE  */
#line 389 "sql.ypp"
                                                { (yyval.exp_val)=(yyvsp[-2].exp_val); cmp_fn((yyvsp[-2].exp_val),(yyvsp[-1].exp_val)); }
#line 2050 "sql.tab.cpp"
    break;

  case 186: /* case_fn: CASE math_exp case_cases ELSE math_exp END_CASE  */
#line 390 "sql.ypp"
                                                              { (yyval.exp_val)=(yyvsp[-4].exp_val); cmp_fn((yyvsp[-4].exp_val),(yyvsp[-3].exp_val)); cmp_fn((yyvsp[-4].exp_val),(yyvsp[-1].exp_val)); (yyval.exp_val)->Add((yyvsp[-1].exp_val)); }
#line 2056 "sql.tab.cpp"
    break;

  case 187: /* case_cases: case_case  */
#line 394 "sql.ypp"
                                     { (yyval.exp_val) = (yyvsp[0].exp_val); }
#line 2062 "sql.tab.cpp"
    break;

  case 188: /* case_cases: case_cases case_case  */
#line 395 "sql.ypp"
                                     { (yyval.exp_val)->Add((yyvsp[0].exp_val)); }
#line 2068 "sql.tab.cpp"
    break;

  case 189: /* case_case: WHEN math_op THEN math_exp  */
#line 398 "sql.ypp"
                                      { (yyval.exp_val)=(yyvsp[-2].exp_val); }
#line 2074 "sql.tab.cpp"
    break;

  case 190: /* cast_fn: CAST O_BRACE math_exp AS DATA_TYPE C_BRACE  */
#line 401 "sql.ypp"
                                                       { (yyval.exp_val)=(yyvsp[-3].exp_val); }
#line 2080 "sql.tab.cpp"
    break;

  case 191: /* cast_fn: CAST O_BRACE math_exp AS DATA_TYPE O_BRACE fn_args C_BRACE C_BRACE  */
#line 402 "sql.ypp"
                                                                                 { (yyval.exp_val)=(yyvsp[-6].exp_val); }
#line 2086 "sql.tab.cpp"
    break;

  case 192: /* cast_fn: CAST O_BRACE math_exp AS CHAR_TYPE C_BRACE  */
#line 403 "sql.ypp"
                                                          { (yyval.exp_val)=(yyvsp[-3].exp_val); }
#line 2092 "sql.tab.cpp"
    break;

  case 193: /* cast_fn: CAST O_BRACE math_exp AS CHAR_TYPE O_BRACE fn_args C_BRACE C_BRACE  */
#line 404 "sql.ypp"
                                                                                 { (yyval.exp_val)=(yyvsp[-6].exp_val); }
#line 2098 "sql.tab.cpp"
    break;

  case 194: /* cast_fn: CAST O_BRACE math_exp AS BINARY C_BRACE  */
#line 405 "sql.ypp"
                                                       { (yyval.exp_val)=(yyvsp[-3].exp_val); }
#line 2104 "sql.tab.cpp"
    break;

  case 195: /* cast_fn: CAST O_BRACE math_exp AS BINARY O_BRACE fn_args C_BRACE C_BRACE  */
#line 406 "sql.ypp"
                                                                               { (yyval.exp_val)=(yyvsp[-6].exp_val); }
#line 2110 "sql.tab.cpp"
    break;

  case 196: /* cast_fn: BINARY math_exp  */
#line 407 "sql.ypp"
                                                       { (yyval.exp_val)=(yyvsp[0].exp_val); }
#line 2116 "sql.tab.cpp"
    break;


#line 2120 "sql.tab.cpp"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 410 "sql.ypp"

/*
int main()
{
  std::string s;
  while (std::cin)
  {
    std::getline(std::cin, s);
    //std::cout << "line: " << s << std::endl;
    scan_buffer(s.c_str());
  }
  return 1;
}

*/
int yyerror( char *s)
{
    extern char * yytext;
    //printf("error at char %s\n", yytext);
    //exit(1);
    return 1;
}

static void cmp_fn(Expression * xp1, Expression * xp2)
{
  if (xp1->Comp(xp2))
    clb_found_tautology();
  else if (xp1->IsEmptyPwd(xp2))
    clb_found_empty_pwd();
}
