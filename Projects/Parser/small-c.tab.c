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
#line 1 "small-c.y"

#include <stdio.h>
#include <string.h>

int yylex (void);
void yyerror (char const *);
extern char *yytext;


#line 81 "small-c.tab.c"

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
    YYUNDEF = 1047,                /* "invalid token"  */
    AND = 1001,                    /* AND  */
    AND_AND = 1002,                /* AND_AND  */
    BANG = 1003,                   /* BANG  */
    BREAK = 1004,                  /* BREAK  */
    COLON = 1005,                  /* COLON  */
    COMMA = 1006,                  /* COMMA  */
    CONST = 1007,                  /* CONST  */
    CONTINUE = 1008,               /* CONTINUE  */
    DIVIDE = 1009,                 /* DIVIDE  */
    DO = 1010,                     /* DO  */
    ELSE = 1011,                   /* ELSE  */
    EQUALS = 1012,                 /* EQUALS  */
    EQUALS_EQUALS = 1013,          /* EQUALS_EQUALS  */
    FLOAT = 1014,                  /* FLOAT  */
    FOR = 1015,                    /* FOR  */
    GE = 1016,                     /* GE  */
    GREATER = 1017,                /* GREATER  */
    IDENTIFIER = 1018,             /* IDENTIFIER  */
    IF = 1019,                     /* IF  */
    INT = 1020,                    /* INT  */
    INT_CONST = 1021,              /* INT_CONST  */
    LBRACE = 1022,                 /* LBRACE  */
    LE = 1023,                     /* LE  */
    LESS = 1024,                   /* LESS  */
    LPAREN = 1025,                 /* LPAREN  */
    MINUS = 1026,                  /* MINUS  */
    MINUS_MINUS = 1027,            /* MINUS_MINUS  */
    MOD = 1028,                    /* MOD  */
    NE = 1029,                     /* NE  */
    NEWLINE = 1030,                /* NEWLINE  */
    OR = 1031,                     /* OR  */
    OR_OR = 1032,                  /* OR_OR  */
    PLUS = 1033,                   /* PLUS  */
    PLUS_PLUS = 1034,              /* PLUS_PLUS  */
    QUESTION = 1035,               /* QUESTION  */
    RBRACE = 1036,                 /* RBRACE  */
    READINT = 1037,                /* READINT  */
    REAL_CONST = 1038,             /* REAL_CONST  */
    RETURN = 1039,                 /* RETURN  */
    RPAREN = 1040,                 /* RPAREN  */
    SEMICOLON = 1041,              /* SEMICOLON  */
    STRING_CONST = 1042,           /* STRING_CONST  */
    TIMES = 1043,                  /* TIMES  */
    WHILE = 1044,                  /* WHILE  */
    WRITEINT = 1045,               /* WRITEINT  */
    WRITESTRING = 1046             /* WRITESTRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "small-c.y"

	char* id;

#line 180 "small-c.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_AND_AND = 4,                    /* AND_AND  */
  YYSYMBOL_BANG = 5,                       /* BANG  */
  YYSYMBOL_BREAK = 6,                      /* BREAK  */
  YYSYMBOL_COLON = 7,                      /* COLON  */
  YYSYMBOL_COMMA = 8,                      /* COMMA  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_DIVIDE = 11,                    /* DIVIDE  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_EQUALS = 14,                    /* EQUALS  */
  YYSYMBOL_EQUALS_EQUALS = 15,             /* EQUALS_EQUALS  */
  YYSYMBOL_FLOAT = 16,                     /* FLOAT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_GE = 18,                        /* GE  */
  YYSYMBOL_GREATER = 19,                   /* GREATER  */
  YYSYMBOL_IDENTIFIER = 20,                /* IDENTIFIER  */
  YYSYMBOL_IF = 21,                        /* IF  */
  YYSYMBOL_INT = 22,                       /* INT  */
  YYSYMBOL_INT_CONST = 23,                 /* INT_CONST  */
  YYSYMBOL_LBRACE = 24,                    /* LBRACE  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_LESS = 26,                      /* LESS  */
  YYSYMBOL_LPAREN = 27,                    /* LPAREN  */
  YYSYMBOL_MINUS = 28,                     /* MINUS  */
  YYSYMBOL_MINUS_MINUS = 29,               /* MINUS_MINUS  */
  YYSYMBOL_MOD = 30,                       /* MOD  */
  YYSYMBOL_NE = 31,                        /* NE  */
  YYSYMBOL_NEWLINE = 32,                   /* NEWLINE  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_OR_OR = 34,                     /* OR_OR  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_PLUS_PLUS = 36,                 /* PLUS_PLUS  */
  YYSYMBOL_QUESTION = 37,                  /* QUESTION  */
  YYSYMBOL_RBRACE = 38,                    /* RBRACE  */
  YYSYMBOL_READINT = 39,                   /* READINT  */
  YYSYMBOL_REAL_CONST = 40,                /* REAL_CONST  */
  YYSYMBOL_RETURN = 41,                    /* RETURN  */
  YYSYMBOL_RPAREN = 42,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 43,                 /* SEMICOLON  */
  YYSYMBOL_STRING_CONST = 44,              /* STRING_CONST  */
  YYSYMBOL_TIMES = 45,                     /* TIMES  */
  YYSYMBOL_WHILE = 46,                     /* WHILE  */
  YYSYMBOL_WRITEINT = 47,                  /* WRITEINT  */
  YYSYMBOL_WRITESTRING = 48,               /* WRITESTRING  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_smallc_program = 50,            /* smallc_program  */
  YYSYMBOL_global_decl_list = 51,          /* global_decl_list  */
  YYSYMBOL_global_decl = 52,               /* global_decl  */
  YYSYMBOL_function_decl = 53,             /* function_decl  */
  YYSYMBOL_type_specifier = 54,            /* type_specifier  */
  YYSYMBOL_id = 55,                        /* id  */
  YYSYMBOL_opt_params = 56,                /* opt_params  */
  YYSYMBOL_param_decl_list = 57,           /* param_decl_list  */
  YYSYMBOL_param_decl = 58,                /* param_decl  */
  YYSYMBOL_compound_stmt = 59,             /* compound_stmt  */
  YYSYMBOL_var_decl_list = 60,             /* var_decl_list  */
  YYSYMBOL_var_decl = 61,                  /* var_decl  */
  YYSYMBOL_var_id_list = 62,               /* var_id_list  */
  YYSYMBOL_variable_id = 63,               /* variable_id  */
  YYSYMBOL_stmt_list = 64,                 /* stmt_list  */
  YYSYMBOL_stmt = 65,                      /* stmt  */
  YYSYMBOL_cond_stmt = 66,                 /* cond_stmt  */
  YYSYMBOL_while_stmt = 67,                /* while_stmt  */
  YYSYMBOL_do_stmt = 68,                   /* do_stmt  */
  YYSYMBOL_for_stmt = 69,                  /* for_stmt  */
  YYSYMBOL_expr_list = 70,                 /* expr_list  */
  YYSYMBOL_expr = 71,                      /* expr  */
  YYSYMBOL_float_constant = 72,            /* float_constant  */
  YYSYMBOL_integer_constant = 73,          /* integer_constant  */
  YYSYMBOL_string_constant = 74,           /* string_constant  */
  YYSYMBOL_arg_list = 75                   /* arg_list  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   1047


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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,     2
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    69,    70,    73,    74,    77,    81,    82,
      83,    84,    87,    91,    92,    95,    96,    99,   102,   106,
     107,   110,   113,   114,   116,   118,   122,   123,   126,   127,
     128,   129,   130,   131,   132,   134,   136,   138,   139,   140,
     143,   145,   149,   153,   157,   161,   162,   165,   167,   169,
     171,   173,   175,   177,   179,   181,   183,   185,   187,   189,
     191,   193,   195,   197,   199,   201,   202,   203,   204,   205,
     207,   209,   210,   212,   216,   219,   222,   225,   226
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
  "\"end of file\"", "error", "\"invalid token\"", "AND", "AND_AND",
  "BANG", "BREAK", "COLON", "COMMA", "CONST", "CONTINUE", "DIVIDE", "DO",
  "ELSE", "EQUALS", "EQUALS_EQUALS", "FLOAT", "FOR", "GE", "GREATER",
  "IDENTIFIER", "IF", "INT", "INT_CONST", "LBRACE", "LE", "LESS", "LPAREN",
  "MINUS", "MINUS_MINUS", "MOD", "NE", "NEWLINE", "OR", "OR_OR", "PLUS",
  "PLUS_PLUS", "QUESTION", "RBRACE", "READINT", "REAL_CONST", "RETURN",
  "RPAREN", "SEMICOLON", "STRING_CONST", "TIMES", "WHILE", "WRITEINT",
  "WRITESTRING", "$accept", "smallc_program", "global_decl_list",
  "global_decl", "function_decl", "type_specifier", "id", "opt_params",
  "param_decl_list", "param_decl", "compound_stmt", "var_decl_list",
  "var_decl", "var_id_list", "variable_id", "stmt_list", "stmt",
  "cond_stmt", "while_stmt", "do_stmt", "for_stmt", "expr_list", "expr",
  "float_constant", "integer_constant", "string_constant", "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    -5,   -89,   -89,    20,   -89,    -3,   -89,     1,   -89,
     -89,   -89,   -89,   -89,   -89,    -2,   -21,    16,    58,    -3,
     -89,     1,    58,    58,   -89,    58,    58,   -89,   -89,   -13,
     432,   -89,   -89,   -89,     1,     2,   -89,    21,    31,   -89,
     432,   432,   138,   432,    58,    47,   -89,   -89,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,   -89,    22,    -3,   -89,   432,   -89,   163,     5,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     432,   432,   188,   432,    -3,   -89,   -89,    58,   -89,    58,
       1,   104,    -3,   -89,   432,     6,    11,   104,    28,    29,
      30,    58,    32,    33,    35,   -89,    26,   104,   -89,   -89,
     -89,   -89,   213,   -89,   -89,   -89,    12,    58,    58,     1,
     242,    58,    58,    36,   -89,   -89,   -89,    38,    34,   278,
     303,    37,   -89,   328,   353,    40,    58,    58,    58,   104,
      45,   104,    49,    50,   378,   403,   -89,    59,   -89,   -89,
     -89,   -89,    51,   -89,   104,   -89,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    10,     8,     0,     2,     3,     5,     0,     6,
      11,     9,     1,     4,    12,    24,     0,    22,     0,    13,
      21,     0,     0,     0,    75,     0,     0,    74,    76,    68,
      25,    65,    66,    67,     0,     0,    14,    15,    24,    23,
      64,    62,     0,    63,     0,     0,    70,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,    71,    47,    72,    77,     0,
      50,    60,    51,    56,    54,    55,    53,    58,    61,    52,
      49,    57,     0,    59,    19,     7,    16,     0,    73,     0,
       0,    26,    19,    78,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,    26,    29,    30,
      31,    32,     0,    20,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    27,    33,     0,     0,    45,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    40,    37,    42,
      38,    39,     0,    44,     0,    43,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,    67,   -89,   -89,   -16,    -6,   -89,    41,   -89,
      27,     3,   -74,    75,   -89,   -10,   -88,   -89,   -89,   -89,
     -89,   -37,   -18,   -89,   -89,   -89,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,     8,    29,    35,    36,    37,
     105,    91,     9,    16,    17,   106,   107,   108,   109,   110,
     111,   128,   112,    31,    32,    33,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    44,    15,    34,    40,    41,     1,    42,    43,   116,
      92,    10,    18,     2,    45,    38,    46,    11,    92,     3,
      12,    14,    20,    47,    21,    19,    66,    68,    62,    64,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    63,    18,    84,    88,    34,   114,
      22,   147,    23,   149,   115,   117,   118,   119,   127,   121,
     122,    22,   123,    23,   124,   136,   156,    14,    90,    68,
      24,    94,   154,    13,    25,    26,    90,   137,    14,   140,
     135,    24,   143,   120,    38,    25,    26,    27,   148,    67,
      85,    28,   150,   151,   155,   113,    39,   125,    27,   129,
     130,   146,    28,   133,   134,    86,    93,    22,     0,    23,
      95,     0,     0,   131,    96,     0,    97,     0,   144,   145,
     129,    98,     0,     0,    14,    99,     0,    24,    84,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,   100,    27,   101,     0,     0,    28,    49,
     102,   103,   104,    50,     0,     0,    51,    52,     0,     0,
       0,     0,     0,    53,    54,     0,    55,    48,    56,    57,
       0,    87,    58,    59,    49,    60,     0,     0,    50,     0,
      65,    51,    52,    61,     0,     0,     0,     0,    53,    54,
       0,    55,    48,    56,    57,    89,     0,    58,    59,    49,
      60,     0,     0,    50,     0,     0,    51,    52,    61,     0,
       0,     0,     0,    53,    54,     0,    55,    48,    56,    57,
       0,     0,    58,    59,    49,    60,     0,     0,    50,     0,
       0,    51,    52,    61,     0,     0,     0,     0,    53,    54,
       0,    55,     0,    56,    57,     0,    48,    58,    59,     0,
      60,     0,     0,    49,     0,     0,   126,    50,    61,     0,
      51,    52,     0,     0,     0,     0,     0,    53,    54,     0,
      55,     0,    56,    57,     0,     0,    58,    59,     0,    60,
       0,     0,    48,     0,     0,   132,   138,    61,     0,    49,
       0,     0,     0,    50,     0,     0,    51,    52,     0,     0,
       0,     0,     0,    53,    54,     0,    55,    48,    56,    57,
       0,     0,    58,    59,    49,    60,     0,     0,    50,     0,
       0,    51,    52,    61,     0,     0,     0,     0,    53,    54,
       0,    55,    48,    56,    57,     0,     0,    58,    59,    49,
      60,     0,     0,    50,     0,   139,    51,    52,    61,     0,
       0,     0,     0,    53,    54,     0,    55,    48,    56,    57,
       0,     0,    58,    59,    49,    60,     0,     0,    50,     0,
     141,    51,    52,    61,     0,     0,     0,     0,    53,    54,
       0,    55,    48,    56,    57,     0,     0,    58,    59,    49,
      60,     0,     0,    50,     0,   142,    51,    52,    61,     0,
       0,     0,     0,    53,    54,     0,    55,    48,    56,    57,
       0,     0,    58,    59,    49,    60,     0,     0,    50,     0,
     152,    51,    52,    61,     0,     0,     0,     0,    53,    54,
       0,    55,     0,    56,    57,     0,    48,    58,    59,     0,
      60,     0,     0,    49,     0,     0,   153,    50,    61,     0,
      51,    52,     0,     0,     0,     0,     0,    53,    54,     0,
      55,     0,    56,    57,     0,     0,    58,    59,     0,    60,
       0,     0,     0,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
      18,    14,     8,    19,    22,    23,     9,    25,    26,    97,
      84,    16,    14,    16,    27,    21,    29,    22,    92,    22,
       0,    20,    43,    36,     8,    27,    44,    45,    34,     8,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    42,    14,    24,    42,    64,    43,
       3,   139,     5,   141,    43,    27,    27,    27,    46,    27,
      27,     3,    27,     5,    38,    27,   154,    20,    84,    87,
      23,    89,    13,     6,    27,    28,    92,    43,    20,    42,
      44,    23,    42,   101,    90,    27,    28,    40,    43,    42,
      63,    44,    43,    43,    43,    92,    21,   107,    40,   117,
     118,   138,    44,   121,   122,    64,    87,     3,    -1,     5,
       6,    -1,    -1,   119,    10,    -1,    12,    -1,   136,   137,
     138,    17,    -1,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    39,    40,    41,    -1,    -1,    44,    11,
      46,    47,    48,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,     4,    30,    31,
      -1,     8,    34,    35,    11,    37,    -1,    -1,    15,    -1,
      42,    18,    19,    45,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,     4,    30,    31,     7,    -1,    34,    35,    11,
      37,    -1,    -1,    15,    -1,    -1,    18,    19,    45,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,     4,    30,    31,
      -1,    -1,    34,    35,    11,    37,    -1,    -1,    15,    -1,
      -1,    18,    19,    45,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    31,    -1,     4,    34,    35,    -1,
      37,    -1,    -1,    11,    -1,    -1,    43,    15,    45,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    37,
      -1,    -1,     4,    -1,    -1,    43,     8,    45,    -1,    11,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,     4,    30,    31,
      -1,    -1,    34,    35,    11,    37,    -1,    -1,    15,    -1,
      -1,    18,    19,    45,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,     4,    30,    31,    -1,    -1,    34,    35,    11,
      37,    -1,    -1,    15,    -1,    42,    18,    19,    45,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,     4,    30,    31,
      -1,    -1,    34,    35,    11,    37,    -1,    -1,    15,    -1,
      42,    18,    19,    45,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,     4,    30,    31,    -1,    -1,    34,    35,    11,
      37,    -1,    -1,    15,    -1,    42,    18,    19,    45,    -1,
      -1,    -1,    -1,    25,    26,    -1,    28,     4,    30,    31,
      -1,    -1,    34,    35,    11,    37,    -1,    -1,    15,    -1,
      42,    18,    19,    45,    -1,    -1,    -1,    -1,    25,    26,
      -1,    28,    -1,    30,    31,    -1,     4,    34,    35,    -1,
      37,    -1,    -1,    11,    -1,    -1,    43,    15,    45,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    25,    26,    -1,
      28,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    16,    22,    50,    51,    52,    53,    54,    61,
      16,    22,     0,    51,    20,    55,    62,    63,    14,    27,
      43,     8,     3,     5,    23,    27,    28,    40,    44,    55,
      71,    72,    73,    74,    54,    56,    57,    58,    55,    62,
      71,    71,    71,    71,    14,    27,    29,    36,     4,    11,
      15,    18,    19,    25,    26,    28,    30,    31,    34,    35,
      37,    45,    55,    42,     8,    42,    71,    42,    71,    75,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    24,    59,    57,     8,    42,     7,
      54,    60,    61,    75,    71,     6,    10,    12,    17,    21,
      39,    41,    46,    47,    48,    59,    64,    65,    66,    67,
      68,    69,    71,    60,    43,    43,    65,    27,    27,    27,
      71,    27,    27,    27,    38,    64,    43,    46,    70,    71,
      71,    55,    43,    71,    71,    44,    27,    43,     8,    42,
      42,    42,    42,    42,    71,    71,    70,    65,    43,    65,
      43,    43,    42,    43,    13,    43,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      54,    54,    55,    56,    56,    57,    57,    58,    59,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    73,    74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     1,     2,
       1,     2,     1,     0,     1,     1,     3,     2,     4,     0,
       2,     3,     1,     3,     1,     3,     0,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     5,     5,     5,
       5,     7,     5,     7,     6,     1,     3,     3,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     3,     3,     4,     1,     1,     1,     1,     3
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
  case 7: /* function_decl: type_specifier id LPAREN opt_params RPAREN compound_stmt  */
#line 78 "small-c.y"
                        { printf("Found function definition: %s\n", (yyvsp[-4].id)); }
#line 1474 "small-c.tab.c"
    break;

  case 12: /* id: IDENTIFIER  */
#line 88 "small-c.y"
                { (yyval.id) = strdup(yytext); }
#line 1480 "small-c.tab.c"
    break;

  case 18: /* compound_stmt: LBRACE var_decl_list stmt_list RBRACE  */
#line 103 "small-c.y"
                                { printf("Found a compound statement\n"); }
#line 1486 "small-c.tab.c"
    break;

  case 24: /* variable_id: id  */
#line 117 "small-c.y"
                        { printf("Defined variable %s\n", (yyvsp[0].id)); }
#line 1492 "small-c.tab.c"
    break;

  case 25: /* variable_id: id EQUALS expr  */
#line 119 "small-c.y"
                                { printf("Defined variable %s (with inititalization)\n", (yyvsp[-2].id)); }
#line 1498 "small-c.tab.c"
    break;

  case 34: /* stmt: BREAK SEMICOLON  */
#line 133 "small-c.y"
                                { printf("Found a break statement\n"); }
#line 1504 "small-c.tab.c"
    break;

  case 35: /* stmt: CONTINUE SEMICOLON  */
#line 135 "small-c.y"
                                { printf("Found a continue statement\n"); }
#line 1510 "small-c.tab.c"
    break;

  case 36: /* stmt: RETURN expr SEMICOLON  */
#line 137 "small-c.y"
                                { printf("Found a return statement\n"); }
#line 1516 "small-c.tab.c"
    break;

  case 40: /* cond_stmt: IF LPAREN expr RPAREN stmt  */
#line 144 "small-c.y"
                                { printf("Found an if statement\n"); }
#line 1522 "small-c.tab.c"
    break;

  case 41: /* cond_stmt: IF LPAREN expr RPAREN stmt ELSE stmt  */
#line 146 "small-c.y"
                                { printf("Found an if-else statement\n"); }
#line 1528 "small-c.tab.c"
    break;

  case 42: /* while_stmt: WHILE LPAREN expr RPAREN stmt  */
#line 150 "small-c.y"
                                { printf("Found a while loop\n"); }
#line 1534 "small-c.tab.c"
    break;

  case 43: /* do_stmt: DO stmt WHILE LPAREN expr RPAREN SEMICOLON  */
#line 154 "small-c.y"
                                { printf("Found a do loop\n"); }
#line 1540 "small-c.tab.c"
    break;

  case 44: /* for_stmt: FOR LPAREN expr_list SEMICOLON expr SEMICOLON  */
#line 158 "small-c.y"
                                { printf("Found a for loop\n"); }
#line 1546 "small-c.tab.c"
    break;

  case 47: /* expr: id EQUALS expr  */
#line 166 "small-c.y"
                        { printf("Found assignment expression for: %s\n", (yyvsp[-2].id)); }
#line 1552 "small-c.tab.c"
    break;

  case 48: /* expr: expr QUESTION expr COLON expr  */
#line 168 "small-c.y"
                                { printf("Found ? expression\n"); }
#line 1558 "small-c.tab.c"
    break;

  case 49: /* expr: expr OR_OR expr  */
#line 170 "small-c.y"
                                { printf("Found || expression\n"); }
#line 1564 "small-c.tab.c"
    break;

  case 50: /* expr: expr AND_AND expr  */
#line 172 "small-c.y"
                                { printf("Found && expression\n"); }
#line 1570 "small-c.tab.c"
    break;

  case 51: /* expr: expr EQUALS_EQUALS expr  */
#line 174 "small-c.y"
                                { printf("Found == expression\n"); }
#line 1576 "small-c.tab.c"
    break;

  case 52: /* expr: expr NE expr  */
#line 176 "small-c.y"
                                { printf("Found != expression\n"); }
#line 1582 "small-c.tab.c"
    break;

  case 53: /* expr: expr LESS expr  */
#line 178 "small-c.y"
                                { printf("Found < expression\n"); }
#line 1588 "small-c.tab.c"
    break;

  case 54: /* expr: expr GREATER expr  */
#line 180 "small-c.y"
                                { printf("Found > expression\n"); }
#line 1594 "small-c.tab.c"
    break;

  case 55: /* expr: expr LE expr  */
#line 182 "small-c.y"
                                { printf("Found <= expression\n"); }
#line 1600 "small-c.tab.c"
    break;

  case 56: /* expr: expr GE expr  */
#line 184 "small-c.y"
                                { printf("Found >= expression\n"); }
#line 1606 "small-c.tab.c"
    break;

  case 57: /* expr: expr PLUS expr  */
#line 186 "small-c.y"
                                { printf("Found + expression\n"); }
#line 1612 "small-c.tab.c"
    break;

  case 58: /* expr: expr MINUS expr  */
#line 188 "small-c.y"
                                { printf("Found - expression\n"); }
#line 1618 "small-c.tab.c"
    break;

  case 59: /* expr: expr TIMES expr  */
#line 190 "small-c.y"
                                { printf("Found * expression\n"); }
#line 1624 "small-c.tab.c"
    break;

  case 60: /* expr: expr DIVIDE expr  */
#line 192 "small-c.y"
                                { printf("Found / expression\n"); }
#line 1630 "small-c.tab.c"
    break;

  case 61: /* expr: expr MOD expr  */
#line 194 "small-c.y"
                                { printf("Found %% expression\n"); }
#line 1636 "small-c.tab.c"
    break;

  case 62: /* expr: BANG expr  */
#line 196 "small-c.y"
                                { printf("Found ! expression\n"); }
#line 1642 "small-c.tab.c"
    break;

  case 63: /* expr: MINUS expr  */
#line 198 "small-c.y"
                                { printf("Found unary - expression\n"); }
#line 1648 "small-c.tab.c"
    break;

  case 64: /* expr: AND expr  */
#line 200 "small-c.y"
                                { printf("Found & expression\n"); }
#line 1654 "small-c.tab.c"
    break;

  case 69: /* expr: id PLUS_PLUS  */
#line 206 "small-c.y"
                                { printf("Found ++ expression\n"); }
#line 1660 "small-c.tab.c"
    break;

  case 70: /* expr: id MINUS_MINUS  */
#line 208 "small-c.y"
                                { printf("Found -- expression\n"); }
#line 1666 "small-c.tab.c"
    break;

  case 72: /* expr: id LPAREN RPAREN  */
#line 211 "small-c.y"
                                { printf("Found function call: %s\n", (yyvsp[-2].id)); }
#line 1672 "small-c.tab.c"
    break;

  case 73: /* expr: id LPAREN arg_list RPAREN  */
#line 213 "small-c.y"
                                { printf("Found function call: %s (with arguments)\n", (yyvsp[-3].id)); }
#line 1678 "small-c.tab.c"
    break;


#line 1682 "small-c.tab.c"

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

#line 229 "small-c.y"


