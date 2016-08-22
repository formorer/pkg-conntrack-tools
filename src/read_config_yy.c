/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "read_config_yy.y" /* yacc.c:339  */

/*
 * (C) 2006-2009 by Pablo Neira Ayuso <pablo@netfilter.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * Description: configuration file abstract grammar
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <errno.h>
#include <stdarg.h>
#include "conntrackd.h"
#include "bitops.h"
#include "cidr.h"
#include "helper.h"
#include "stack.h"
#include <syslog.h>
#include <sched.h>
#include <dlfcn.h>
#include <libnetfilter_conntrack/libnetfilter_conntrack.h>
#include <libnetfilter_conntrack/libnetfilter_conntrack_tcp.h>

extern char *yytext;
extern int   yylineno;

struct ct_conf conf;

enum {
	CTD_CFG_ERROR = 0,
	CTD_CFG_WARN,
};

static void print_err(int err, const char *msg, ...);

static void __kernel_filter_start(void);
static void __kernel_filter_add_state(int value);
static void __max_dedicated_links_reached(void);

struct stack symbol_stack;

enum {
	SYMBOL_HELPER_QUEUE_NUM,
	SYMBOL_HELPER_QUEUE_LEN,
	SYMBOL_HELPER_POLICY_EXPECT_ROOT,
	SYMBOL_HELPER_EXPECT_POLICY_LEAF,
};


#line 131 "read_config_yy.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_READ_CONFIG_YY_H_INCLUDED
# define YY_YY_READ_CONFIG_YY_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IPV4_ADDR = 258,
    T_IPV4_IFACE = 259,
    T_PORT = 260,
    T_HASHSIZE = 261,
    T_HASHLIMIT = 262,
    T_MULTICAST = 263,
    T_PATH = 264,
    T_UNIX = 265,
    T_REFRESH = 266,
    T_IPV6_ADDR = 267,
    T_IPV6_IFACE = 268,
    T_IGNORE_UDP = 269,
    T_IGNORE_ICMP = 270,
    T_IGNORE_TRAFFIC = 271,
    T_BACKLOG = 272,
    T_GROUP = 273,
    T_LOG = 274,
    T_UDP = 275,
    T_ICMP = 276,
    T_IGMP = 277,
    T_VRRP = 278,
    T_TCP = 279,
    T_IGNORE_PROTOCOL = 280,
    T_LOCK = 281,
    T_STRIP_NAT = 282,
    T_BUFFER_SIZE_MAX_GROWN = 283,
    T_EXPIRE = 284,
    T_TIMEOUT = 285,
    T_GENERAL = 286,
    T_SYNC = 287,
    T_STATS = 288,
    T_RELAX_TRANSITIONS = 289,
    T_BUFFER_SIZE = 290,
    T_DELAY = 291,
    T_SYNC_MODE = 292,
    T_LISTEN_TO = 293,
    T_FAMILY = 294,
    T_RESEND_BUFFER_SIZE = 295,
    T_ALARM = 296,
    T_FTFW = 297,
    T_CHECKSUM = 298,
    T_WINDOWSIZE = 299,
    T_ON = 300,
    T_OFF = 301,
    T_REPLICATE = 302,
    T_FOR = 303,
    T_IFACE = 304,
    T_PURGE = 305,
    T_RESEND_QUEUE_SIZE = 306,
    T_ESTABLISHED = 307,
    T_SYN_SENT = 308,
    T_SYN_RECV = 309,
    T_FIN_WAIT = 310,
    T_CLOSE_WAIT = 311,
    T_LAST_ACK = 312,
    T_TIME_WAIT = 313,
    T_CLOSE = 314,
    T_LISTEN = 315,
    T_SYSLOG = 316,
    T_WRITE_THROUGH = 317,
    T_STAT_BUFFER_SIZE = 318,
    T_DESTROY_TIMEOUT = 319,
    T_RCVBUFF = 320,
    T_SNDBUFF = 321,
    T_NOTRACK = 322,
    T_POLL_SECS = 323,
    T_FILTER = 324,
    T_ADDRESS = 325,
    T_PROTOCOL = 326,
    T_STATE = 327,
    T_ACCEPT = 328,
    T_IGNORE = 329,
    T_FROM = 330,
    T_USERSPACE = 331,
    T_KERNELSPACE = 332,
    T_EVENT_ITER_LIMIT = 333,
    T_DEFAULT = 334,
    T_NETLINK_OVERRUN_RESYNC = 335,
    T_NICE = 336,
    T_IPV4_DEST_ADDR = 337,
    T_IPV6_DEST_ADDR = 338,
    T_SCHEDULER = 339,
    T_TYPE = 340,
    T_PRIO = 341,
    T_NETLINK_EVENTS_RELIABLE = 342,
    T_DISABLE_INTERNAL_CACHE = 343,
    T_DISABLE_EXTERNAL_CACHE = 344,
    T_ERROR_QUEUE_LENGTH = 345,
    T_OPTIONS = 346,
    T_TCP_WINDOW_TRACKING = 347,
    T_EXPECT_SYNC = 348,
    T_HELPER = 349,
    T_HELPER_QUEUE_NUM = 350,
    T_HELPER_QUEUE_LEN = 351,
    T_HELPER_POLICY = 352,
    T_HELPER_EXPECT_TIMEOUT = 353,
    T_HELPER_EXPECT_MAX = 354,
    T_SYSTEMD = 355,
    T_IP = 356,
    T_PATH_VAL = 357,
    T_NUMBER = 358,
    T_SIGNED_NUMBER = 359,
    T_STRING = 360
  };
#endif
/* Tokens.  */
#define T_IPV4_ADDR 258
#define T_IPV4_IFACE 259
#define T_PORT 260
#define T_HASHSIZE 261
#define T_HASHLIMIT 262
#define T_MULTICAST 263
#define T_PATH 264
#define T_UNIX 265
#define T_REFRESH 266
#define T_IPV6_ADDR 267
#define T_IPV6_IFACE 268
#define T_IGNORE_UDP 269
#define T_IGNORE_ICMP 270
#define T_IGNORE_TRAFFIC 271
#define T_BACKLOG 272
#define T_GROUP 273
#define T_LOG 274
#define T_UDP 275
#define T_ICMP 276
#define T_IGMP 277
#define T_VRRP 278
#define T_TCP 279
#define T_IGNORE_PROTOCOL 280
#define T_LOCK 281
#define T_STRIP_NAT 282
#define T_BUFFER_SIZE_MAX_GROWN 283
#define T_EXPIRE 284
#define T_TIMEOUT 285
#define T_GENERAL 286
#define T_SYNC 287
#define T_STATS 288
#define T_RELAX_TRANSITIONS 289
#define T_BUFFER_SIZE 290
#define T_DELAY 291
#define T_SYNC_MODE 292
#define T_LISTEN_TO 293
#define T_FAMILY 294
#define T_RESEND_BUFFER_SIZE 295
#define T_ALARM 296
#define T_FTFW 297
#define T_CHECKSUM 298
#define T_WINDOWSIZE 299
#define T_ON 300
#define T_OFF 301
#define T_REPLICATE 302
#define T_FOR 303
#define T_IFACE 304
#define T_PURGE 305
#define T_RESEND_QUEUE_SIZE 306
#define T_ESTABLISHED 307
#define T_SYN_SENT 308
#define T_SYN_RECV 309
#define T_FIN_WAIT 310
#define T_CLOSE_WAIT 311
#define T_LAST_ACK 312
#define T_TIME_WAIT 313
#define T_CLOSE 314
#define T_LISTEN 315
#define T_SYSLOG 316
#define T_WRITE_THROUGH 317
#define T_STAT_BUFFER_SIZE 318
#define T_DESTROY_TIMEOUT 319
#define T_RCVBUFF 320
#define T_SNDBUFF 321
#define T_NOTRACK 322
#define T_POLL_SECS 323
#define T_FILTER 324
#define T_ADDRESS 325
#define T_PROTOCOL 326
#define T_STATE 327
#define T_ACCEPT 328
#define T_IGNORE 329
#define T_FROM 330
#define T_USERSPACE 331
#define T_KERNELSPACE 332
#define T_EVENT_ITER_LIMIT 333
#define T_DEFAULT 334
#define T_NETLINK_OVERRUN_RESYNC 335
#define T_NICE 336
#define T_IPV4_DEST_ADDR 337
#define T_IPV6_DEST_ADDR 338
#define T_SCHEDULER 339
#define T_TYPE 340
#define T_PRIO 341
#define T_NETLINK_EVENTS_RELIABLE 342
#define T_DISABLE_INTERNAL_CACHE 343
#define T_DISABLE_EXTERNAL_CACHE 344
#define T_ERROR_QUEUE_LENGTH 345
#define T_OPTIONS 346
#define T_TCP_WINDOW_TRACKING 347
#define T_EXPECT_SYNC 348
#define T_HELPER 349
#define T_HELPER_QUEUE_NUM 350
#define T_HELPER_QUEUE_LEN 351
#define T_HELPER_POLICY 352
#define T_HELPER_EXPECT_TIMEOUT 353
#define T_HELPER_EXPECT_MAX 354
#define T_SYSTEMD 355
#define T_IP 356
#define T_PATH_VAL 357
#define T_NUMBER 358
#define T_SIGNED_NUMBER 359
#define T_STRING 360

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 66 "read_config_yy.y" /* yacc.c:355  */

	int		val;
	char		*string;

#line 386 "read_config_yy.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_READ_CONFIG_YY_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 401 "read_config_yy.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  268
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   360

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
       2,     2,     2,   106,     2,   107,     2,     2,     2,     2,
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
     105
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   105,   106,   109,   110,   111,   112,
     113,   114,   115,   118,   123,   127,   132,   137,   142,   174,
     179,   184,   189,   194,   199,   204,   215,   226,   236,   237,
     239,   261,   287,   301,   317,   318,   320,   339,   379,   398,
     403,   423,   430,   436,   442,   448,   454,   460,   474,   490,
     491,   493,   504,   521,   532,   549,   564,   570,   576,   582,
     588,   594,   610,   628,   629,   631,   642,   659,   670,   687,
     702,   708,   714,   720,   726,   732,   738,   743,   748,   750,
     751,   754,   759,   764,   774,   775,   778,   786,   799,   809,
     810,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,   828,   829,   832,
     834,   835,   838,   843,   848,   860,   868,   880,   881,   883,
     888,   893,   898,   903,   904,   906,   907,   908,   909,   910,
     911,   914,   915,   917,   918,   919,   920,   921,   922,   925,
     926,   928,   929,   930,   931,   934,   939,   944,   949,   954,
     960,   965,   970,   975,   981,   987,   992,  1002,  1003,  1005,
    1012,  1014,  1015,  1017,  1025,  1033,  1041,  1049,  1057,  1065,
    1073,  1081,  1090,  1096,  1102,  1104,  1105,  1108,  1109,  1110,
    1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,
    1121,  1122,  1123,  1124,  1125,  1126,  1129,  1130,  1132,  1137,
    1142,  1147,  1152,  1157,  1162,  1167,  1172,  1174,  1175,  1178,
    1190,  1199,  1204,  1209,  1219,  1224,  1229,  1234,  1235,  1237,
    1246,  1259,  1260,  1262,  1281,  1300,  1319,  1328,  1350,  1351,
    1353,  1412,  1472,  1481,  1495,  1496,  1498,  1500,  1510,  1511,
    1514,  1515,  1516,  1517,  1518,  1521,  1526,  1530,  1535,  1540,
    1545,  1577,  1582,  1587,  1588,  1591,  1594,  1696,  1697,  1700,
    1703,  1714,  1725,  1747,  1748,  1751,  1752,  1755,  1770
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IPV4_ADDR", "T_IPV4_IFACE", "T_PORT",
  "T_HASHSIZE", "T_HASHLIMIT", "T_MULTICAST", "T_PATH", "T_UNIX",
  "T_REFRESH", "T_IPV6_ADDR", "T_IPV6_IFACE", "T_IGNORE_UDP",
  "T_IGNORE_ICMP", "T_IGNORE_TRAFFIC", "T_BACKLOG", "T_GROUP", "T_LOG",
  "T_UDP", "T_ICMP", "T_IGMP", "T_VRRP", "T_TCP", "T_IGNORE_PROTOCOL",
  "T_LOCK", "T_STRIP_NAT", "T_BUFFER_SIZE_MAX_GROWN", "T_EXPIRE",
  "T_TIMEOUT", "T_GENERAL", "T_SYNC", "T_STATS", "T_RELAX_TRANSITIONS",
  "T_BUFFER_SIZE", "T_DELAY", "T_SYNC_MODE", "T_LISTEN_TO", "T_FAMILY",
  "T_RESEND_BUFFER_SIZE", "T_ALARM", "T_FTFW", "T_CHECKSUM",
  "T_WINDOWSIZE", "T_ON", "T_OFF", "T_REPLICATE", "T_FOR", "T_IFACE",
  "T_PURGE", "T_RESEND_QUEUE_SIZE", "T_ESTABLISHED", "T_SYN_SENT",
  "T_SYN_RECV", "T_FIN_WAIT", "T_CLOSE_WAIT", "T_LAST_ACK", "T_TIME_WAIT",
  "T_CLOSE", "T_LISTEN", "T_SYSLOG", "T_WRITE_THROUGH",
  "T_STAT_BUFFER_SIZE", "T_DESTROY_TIMEOUT", "T_RCVBUFF", "T_SNDBUFF",
  "T_NOTRACK", "T_POLL_SECS", "T_FILTER", "T_ADDRESS", "T_PROTOCOL",
  "T_STATE", "T_ACCEPT", "T_IGNORE", "T_FROM", "T_USERSPACE",
  "T_KERNELSPACE", "T_EVENT_ITER_LIMIT", "T_DEFAULT",
  "T_NETLINK_OVERRUN_RESYNC", "T_NICE", "T_IPV4_DEST_ADDR",
  "T_IPV6_DEST_ADDR", "T_SCHEDULER", "T_TYPE", "T_PRIO",
  "T_NETLINK_EVENTS_RELIABLE", "T_DISABLE_INTERNAL_CACHE",
  "T_DISABLE_EXTERNAL_CACHE", "T_ERROR_QUEUE_LENGTH", "T_OPTIONS",
  "T_TCP_WINDOW_TRACKING", "T_EXPECT_SYNC", "T_HELPER",
  "T_HELPER_QUEUE_NUM", "T_HELPER_QUEUE_LEN", "T_HELPER_POLICY",
  "T_HELPER_EXPECT_TIMEOUT", "T_HELPER_EXPECT_MAX", "T_SYSTEMD", "T_IP",
  "T_PATH_VAL", "T_NUMBER", "T_SIGNED_NUMBER", "T_STRING", "'{'", "'}'",
  "$accept", "configfile", "lines", "line", "logfile_bool", "logfile_path",
  "syslog_bool", "syslog_facility", "lock", "strip_nat", "refreshtime",
  "expiretime", "timeout", "purge", "checksum", "ignore_traffic",
  "ignore_traffic_options", "ignore_traffic_option", "multicast_line",
  "multicast_options", "multicast_option", "udp_line", "udp_options",
  "udp_option", "tcp_line", "tcp_options", "tcp_option", "hashsize",
  "hashlimit", "unix_line", "unix_options", "unix_option",
  "ignore_protocol", "ignore_proto_list", "ignore_proto", "sync",
  "sync_list", "sync_line", "option_line", "options", "option",
  "expect_list", "expect_item", "sync_mode_alarm", "sync_mode_ftfw",
  "sync_mode_notrack", "sync_mode_alarm_list", "sync_mode_alarm_line",
  "sync_mode_ftfw_list", "sync_mode_ftfw_line", "sync_mode_notrack_list",
  "sync_mode_notrack_line", "disable_internal_cache",
  "disable_external_cache", "resend_buffer_size", "resend_queue_size",
  "window_size", "destroy_timeout", "relax_transitions",
  "delay_destroy_msgs", "listen_to", "state_replication", "states",
  "state_proto", "state", "tcp_states", "tcp_state", "cache_writethrough",
  "general", "general_list", "general_line", "systemd",
  "netlink_buffer_size", "netlink_buffer_size_max_grown",
  "netlink_overrun_resync", "netlink_events_reliable", "nice", "scheduler",
  "scheduler_options", "scheduler_line", "family",
  "event_iterations_limit", "poll_secs", "filter", "filter_list",
  "filter_item", "filter_protocol_list", "filter_protocol_item",
  "filter_address_list", "filter_address_item", "filter_state_list",
  "filter_state_item", "stats", "stats_list", "stat_line",
  "stat_logfile_bool", "stat_logfile_path", "stat_syslog_bool",
  "stat_syslog_facility", "buffer_size", "helper", "helper_list",
  "helper_line", "helper_type", "helper_type_list", "helper_type_line",
  "helper_policy_list", "helper_policy_line", "helper_policy_expect_max",
  "helper_policy_expect_timeout", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   123,   125
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,   -80,   -70,   -81,   -65,   -57,   -51,   -45,    80,   132,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,    17,   105,   107,   166,
      33,   140,   -15,    -9,   -81,   -81,   -81,   -81,   -81,   -81,
      -8,     2,    -6,   -27,    -4,     6,     9,    29,     5,    41,
     -72,    46,    -2,    49,    56,   -40,   -33,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -48,    57,
      39,    52,    81,    89,   -81,   -81,   178,    88,   208,   -81,
     102,   226,   114,   118,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   121,    42,   124,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   133,   139,   143,   154,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,    96,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   155,
     -81,   -81,   168,   -81,   198,   -81,   -81,   -81,   199,   200,
     201,   -81,   -81,   -81,   210,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   204,   -81,   -81,
     202,    18,   205,   206,    99,    44,   -81,    -3,   -81,    54,
     -81,    -1,   -81,   -81,   -81,   209,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,    86,   211,   -81,
     213,   207,   -81,   -81,   -81,   -81,   182,   203,   215,   -81,
     -81,   212,   216,   -81,   -81,     4,   217,   219,   220,   221,
     222,   223,   245,   218,   224,   225,   -81,   -81,    73,   228,
     229,   230,   247,   231,   232,   234,   233,   237,   -81,   -81,
      25,   238,   239,   240,   249,   235,   241,   242,   246,   248,
     243,   -81,   -81,    43,   171,    -5,   -81,   -81,   251,    -7,
     -81,   -81,   244,   145,   -81,   -81,   111,   127,   250,   252,
     254,   256,   257,   258,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   262,
     263,   264,   253,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   255,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   265,   266,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,    16,   144,   -81,   -81,    20,
      21,    36,    47,   236,   267,   -81,   -81,   -81,   -81,   -81,
     -81,   260,   269,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   227,   -81,   -81,   -81,   -81,   289,   -81,
     -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,    20,     0,     0,     0,     0,     0,     3,
       4,     8,     7,     6,    10,     9,    11,    12,    28,    84,
     175,    89,   238,   253,     1,     5,     0,     0,     0,     0,
       0,     0,     0,     0,    27,    29,    86,    87,    83,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   174,   179,   180,
     182,   181,   183,   177,   178,   184,   176,   195,   185,   186,
     191,   192,   193,   194,   187,   188,   189,   190,     0,     0,
       0,     0,     0,     0,   153,   154,     0,     0,     0,   157,
       0,     0,     0,     0,    88,    91,    92,    93,    94,    95,
      96,    97,    98,    90,   108,   101,   102,   103,   107,    99,
     100,   104,   105,   106,     0,     0,     0,   237,   239,   240,
     241,   242,   243,   244,     0,     0,     0,     0,   252,   254,
     255,    30,    31,    76,    77,    79,    13,    14,    15,    19,
     199,   198,   211,    16,    17,    18,   213,     0,   217,   212,
     200,   201,   202,   205,   207,   203,   204,   196,   197,     0,
      34,    21,     0,    49,     0,    63,    22,    23,     0,     0,
       0,   155,    25,    26,     0,    24,   172,   173,   152,   110,
     245,   246,   247,   248,   249,   250,   251,     0,   260,   261,
       0,     0,     0,     0,     0,     0,    34,     0,    49,     0,
      63,     0,   123,   131,   139,     0,   165,   163,   164,   166,
     167,   168,   169,   170,   171,   158,   160,     0,     0,   263,
       0,     0,    78,    80,   217,   217,     0,     0,     0,   214,
     218,     0,     0,   206,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    64,     0,     0,     0,   159,   156,     0,     0,
     109,   111,     0,     0,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,   209,   210,    33,    36,    38,    37,
      39,    41,    42,    45,    46,    40,    44,    43,    48,    51,
      56,    52,    59,    60,    55,    58,    57,    53,    54,    62,
      65,    70,    66,    73,    74,    69,    72,    71,    67,    68,
      75,   120,   125,   126,   127,   128,   124,   129,   130,     0,
       0,     0,     0,   121,   135,   136,   132,   138,   134,   133,
     137,     0,   122,   141,   142,   140,   143,   144,   112,   113,
     114,   115,   117,   257,     0,     0,   262,   264,   265,   266,
     215,   216,   228,   228,   221,   221,   234,   234,   149,   151,
     150,   147,   148,   145,   146,     0,     0,   268,   267,     0,
       0,     0,     0,   161,   161,   119,   116,   118,   256,   259,
     258,     0,     0,   226,   229,   227,   225,   224,   223,   219,
     222,   220,   232,     0,   235,   233,   230,   231,     0,   162,
     236
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   -81,   315,   -81,   -81,   -81,   -81,   -81,   -81,
      60,    75,   -42,   -25,   -81,   -81,   -81,   -81,   -81,   134,
     -81,   -81,   153,   -81,   -81,   152,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,    79,   -81,   -81,   -81,   -81,    82,    84,
     -81,   -81,   -81,   -81,   -81,   -81,   -60,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    78,   -81,   -16,   -81,     0,   -81,
       1,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -14,   -81,   -81,   -81,   -81,   -81,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    58,    59,    60,    61,    62,    11,
      95,    96,    97,    98,    99,    12,    26,    35,   100,   197,
     247,   101,   199,   259,   102,   201,   272,    63,    64,    65,
     191,   223,    13,    27,    39,    14,    29,   103,   104,   217,
     281,   385,   397,   105,   106,   107,   273,   336,   274,   346,
     275,   355,   356,   347,   348,   349,   350,   108,   109,   110,
     111,   112,   174,   277,   215,   413,   216,   113,    15,    28,
      66,    67,    68,    69,    70,    71,    72,    73,   195,   234,
      74,    75,    76,    77,   194,   230,   391,   410,   389,   404,
     393,   414,    16,    30,   118,   119,   120,   121,   122,   123,
      17,    31,   129,   130,   386,   400,   283,   367,   368,   369
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     236,   237,   261,   147,   262,   155,   156,   236,   237,   238,
     239,   263,   157,   158,   240,   241,   238,   239,   136,   137,
      32,   240,   241,   401,   401,    83,    18,   220,   261,    33,
     262,   159,   402,   402,   148,   221,    19,   263,   360,   361,
     242,    20,   264,   150,   151,    90,   243,   242,   265,    21,
     143,   144,   114,   243,    79,    22,   406,   249,   160,   250,
     407,    23,   244,   245,   266,   267,   251,   406,   264,   244,
     245,   407,    82,    83,   265,   138,   249,    84,   250,    85,
      24,   268,   269,   351,   342,   251,   131,   183,   184,   270,
     266,   267,   132,    90,   115,   133,   116,   252,   139,   362,
     135,   152,   352,   253,   246,   134,   271,   268,   269,   140,
     145,   296,   141,    40,    41,   270,   252,    42,   162,   254,
     255,   395,   253,   396,    34,   222,    43,   403,   405,   231,
     232,   164,   319,    44,   142,    45,   256,   257,   254,   255,
     117,   408,    46,   409,   146,   163,    47,   185,     1,   149,
     331,   233,   408,   153,   411,   256,   257,     2,   165,     3,
     161,   258,   154,     4,     5,     6,   180,   181,    48,   226,
     227,   228,   192,   193,    78,    49,    50,    79,   278,   279,
     308,   226,   227,   228,   166,    51,    80,    52,    53,   171,
      81,    54,   167,   280,    55,    82,    83,   226,   227,   228,
      84,    83,    85,    86,    87,   175,   229,    56,    36,    88,
      37,   339,    38,    89,    57,   340,    90,   178,   370,   168,
     169,    90,   341,   182,   179,   124,     7,   186,    91,   124,
      92,   334,   344,   353,   371,   125,   126,   127,   187,   125,
     126,   127,   188,   364,   365,   170,   189,   128,   335,   345,
     354,   398,   366,   172,   173,   288,   289,    93,   205,   190,
     342,   196,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   176,   177,    94,   198,   418,   290,   291,   343,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   292,   293,
     303,   304,   312,   313,   323,   324,   358,   359,   381,   382,
     383,   384,   286,   287,   200,   202,   203,   204,   219,   218,
     285,   224,   225,   420,   276,   284,   282,   294,   297,   295,
     298,   299,   300,   305,    25,   301,   302,   306,   307,   309,
     235,   311,   310,   332,   317,   315,   314,   316,   318,   320,
     325,   322,   321,   412,   326,   327,   330,   328,   333,   329,
     363,   248,   260,   419,   357,   337,   372,   338,   373,   392,
     374,   416,   375,   376,   377,   378,   379,   380,   387,   388,
     417,     0,   399,   390,   415,     0,     0,     0,   394
};

static const yytype_int16 yycheck[] =
{
       3,     4,     3,    75,     5,    45,    46,     3,     4,    12,
      13,    12,    45,    46,    17,    18,    12,    13,    45,    46,
       3,    17,    18,     3,     3,    30,   106,     9,     3,    12,
       5,    79,    12,    12,   106,    17,   106,    12,    45,    46,
      43,   106,    43,    45,    46,    50,    49,    43,    49,   106,
      45,    46,    19,    49,    11,   106,    20,     3,   106,     5,
      24,   106,    65,    66,    65,    66,    12,    20,    43,    65,
      66,    24,    29,    30,    49,   102,     3,    34,     5,    36,
       0,    82,    83,    88,    89,    12,   101,    45,    46,    90,
      65,    66,   101,    50,    61,   103,    63,    43,   102,   106,
     106,   103,   107,    49,   107,   103,   107,    82,    83,   103,
     105,   107,   103,     6,     7,    90,    43,    10,    79,    65,
      66,   105,    49,   107,   107,   107,    19,   107,   107,    85,
      86,    79,   107,    26,   105,    28,    82,    83,    65,    66,
     107,   105,    35,   107,   103,   106,    39,   105,    16,   103,
     107,   107,   105,   104,   107,    82,    83,    25,   106,    27,
     103,   107,   106,    31,    32,    33,    45,    46,    61,    70,
      71,    72,    76,    77,     8,    68,    69,    11,    92,    93,
     107,    70,    71,    72,   103,    78,    20,    80,    81,   101,
      24,    84,   103,   107,    87,    29,    30,    70,    71,    72,
      34,    30,    36,    37,    38,   103,   107,   100,   103,    43,
     105,    40,   107,    47,   107,    44,    50,   103,   107,    41,
      42,    50,    51,   102,   106,    85,    94,   103,    62,    85,
      64,   273,   274,   275,   107,    95,    96,    97,   105,    95,
      96,    97,   103,    98,    99,    67,   103,   107,   273,   274,
     275,   107,   107,    45,    46,    73,    74,    91,    48,   105,
      89,   106,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    45,    46,   107,   106,    48,    73,    74,   107,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    73,    74,
      45,    46,    45,    46,    45,    46,    45,    46,    45,    46,
      45,    46,   224,   225,   106,   106,   106,   106,   106,   105,
     103,   106,   106,    24,   105,   102,   105,   105,   101,   103,
     101,   101,   101,   105,     9,   103,   103,   103,   103,   101,
     196,   101,   103,   273,   101,   103,   105,   103,   101,   101,
     105,   101,   103,   107,   103,   103,   103,   101,   273,   101,
     106,   198,   200,   413,   275,   273,   106,   273,   106,   375,
     106,   101,   106,   106,   106,   103,   103,   103,   103,   103,
     101,    -1,   386,   373,   107,    -1,    -1,    -1,   377
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    25,    27,    31,    32,    33,    94,   109,   110,
     111,   117,   123,   140,   143,   176,   200,   208,   106,   106,
     106,   106,   106,   106,     0,   111,   124,   141,   177,   144,
     201,   209,     3,    12,   107,   125,   103,   105,   107,   142,
       6,     7,    10,    19,    26,    28,    35,    39,    61,    68,
      69,    78,    80,    81,    84,    87,   100,   107,   112,   113,
     114,   115,   116,   135,   136,   137,   178,   179,   180,   181,
     182,   183,   184,   185,   188,   189,   190,   191,     8,    11,
      20,    24,    29,    30,    34,    36,    37,    38,    43,    47,
      50,    62,    64,    91,   107,   118,   119,   120,   121,   122,
     126,   129,   132,   145,   146,   151,   152,   153,   165,   166,
     167,   168,   169,   175,    19,    61,    63,   107,   202,   203,
     204,   205,   206,   207,    85,    95,    96,    97,   107,   210,
     211,   101,   101,   103,   103,   106,    45,    46,   102,   102,
     103,   103,   105,    45,    46,   105,   103,    75,   106,   103,
      45,    46,   103,   104,   106,    45,    46,    45,    46,    79,
     106,   103,    79,   106,    79,   106,   103,   103,    41,    42,
      67,   101,    45,    46,   170,   103,    45,    46,   103,   106,
      45,    46,   102,    45,    46,   105,   103,   105,   103,   103,
     105,   138,    76,    77,   192,   186,   106,   127,   106,   130,
     106,   133,   106,   106,   106,    48,    52,    53,    54,    55,
      56,    57,    58,    59,    60,   172,   174,   147,   105,   106,
       9,    17,   107,   139,   106,   106,    70,    71,    72,   107,
     193,    85,    86,   107,   187,   127,     3,     4,    12,    13,
      17,    18,    43,    49,    65,    66,   107,   128,   130,     3,
       5,    12,    43,    49,    65,    66,    82,    83,   107,   131,
     133,     3,     5,    12,    43,    49,    65,    66,    82,    83,
      90,   107,   134,   154,   156,   158,   105,   171,    92,    93,
     107,   148,   105,   214,   102,   103,   192,   192,    73,    74,
      73,    74,    73,    74,   105,   103,   107,   101,   101,   101,
     101,   103,   103,    45,    46,   105,   103,   103,   107,   101,
     103,   101,    45,    46,   105,   103,   103,   101,   101,   107,
     101,   103,   101,    45,    46,   105,   103,   103,   101,   101,
     103,   107,   118,   119,   120,   121,   155,   166,   167,    40,
      44,    51,    89,   107,   120,   121,   157,   161,   162,   163,
     164,    88,   107,   120,   121,   159,   160,   161,    45,    46,
      45,    46,   106,   106,    98,    99,   107,   215,   216,   217,
     107,   107,   106,   106,   106,   106,   106,   106,   103,   103,
     103,    45,    46,    45,    46,   149,   212,   103,   103,   196,
     196,   194,   194,   198,   198,   105,   107,   150,   107,   211,
     213,     3,    12,   107,   197,   107,    20,    24,   105,   107,
     195,   107,   107,   173,   199,   107,   101,   101,    48,   174,
      24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   114,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   136,   137,   138,
     138,   139,   139,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     147,   147,   148,   148,   148,   148,   148,   149,   149,   150,
     151,   152,   153,   154,   154,   155,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   159,   159,   160,   160,   161,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   170,   171,
     172,   173,   173,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   176,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   180,   181,
     182,   182,   182,   183,   183,   184,   185,   186,   186,   187,
     187,   188,   189,   190,   191,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   195,   195,   193,   193,   196,   196,
     197,   197,   193,   193,   198,   198,   199,   200,   201,   201,
     202,   202,   202,   202,   202,   203,   203,   204,   205,   205,
     206,   207,   208,   209,   209,   210,   211,   212,   212,   213,
     211,   211,   211,   214,   214,   215,   215,   216,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     4,     0,     2,
       2,     2,     4,     5,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     5,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     5,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     4,     0,
       2,     2,     2,     4,     0,     2,     1,     1,     4,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     2,     2,     2,     2,     2,     4,     0,     2,     1,
       5,     5,     5,     0,     2,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     4,     0,     2,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     0,     2,     2,
       2,     2,     2,     2,     4,     6,     6,     0,     2,     5,
       5,     0,     2,     1,     1,     1,     5,     5,     0,     2,
       2,     2,     5,     5,     0,     2,     3,     4,     0,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     4,     0,     2,     1,     7,     0,     2,     1,
       2,     2,     5,     0,     2,     1,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 13:
#line 119 "read_config_yy.y" /* yacc.c:1646  */
    {
	strncpy(conf.logfile, DEFAULT_LOGFILE, FILENAME_MAXLEN);
}
#line 1840 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 14:
#line 124 "read_config_yy.y" /* yacc.c:1646  */
    {
}
#line 1847 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "read_config_yy.y" /* yacc.c:1646  */
    {
	strncpy(conf.logfile, (yyvsp[0].string), FILENAME_MAXLEN);
}
#line 1855 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.syslog_facility = DEFAULT_SYSLOG_FACILITY;
}
#line 1863 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 17:
#line 138 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.syslog_facility = -1;
}
#line 1871 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (!strcmp((yyvsp[0].string), "daemon"))
		conf.syslog_facility = LOG_DAEMON;
	else if (!strcmp((yyvsp[0].string), "local0"))
		conf.syslog_facility = LOG_LOCAL0;
	else if (!strcmp((yyvsp[0].string), "local1"))
		conf.syslog_facility = LOG_LOCAL1;
	else if (!strcmp((yyvsp[0].string), "local2"))
		conf.syslog_facility = LOG_LOCAL2;
	else if (!strcmp((yyvsp[0].string), "local3"))
		conf.syslog_facility = LOG_LOCAL3;
	else if (!strcmp((yyvsp[0].string), "local4"))
		conf.syslog_facility = LOG_LOCAL4;
	else if (!strcmp((yyvsp[0].string), "local5"))
		conf.syslog_facility = LOG_LOCAL5;
	else if (!strcmp((yyvsp[0].string), "local6"))
		conf.syslog_facility = LOG_LOCAL6;
	else if (!strcmp((yyvsp[0].string), "local7"))
		conf.syslog_facility = LOG_LOCAL7;
	else {
		print_err(CTD_CFG_WARN, "'%s' is not a known syslog facility, "
					"ignoring", (yyvsp[0].string));
		break;
	}

	if (conf.stats.syslog_facility != -1 &&
	    conf.syslog_facility != conf.stats.syslog_facility)
	    	print_err(CTD_CFG_WARN, "conflicting Syslog facility "
					"values, defaulting to General");
}
#line 1906 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 19:
#line 175 "read_config_yy.y" /* yacc.c:1646  */
    {
	strncpy(conf.lockfile, (yyvsp[0].string), FILENAME_MAXLEN);
}
#line 1914 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 20:
#line 180 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`StripNAT' clause is obsolete, ignoring");
}
#line 1922 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 21:
#line 185 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.refresh = (yyvsp[0].val);
}
#line 1930 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 22:
#line 190 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.cache_timeout = (yyvsp[0].val);
}
#line 1938 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 23:
#line 195 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.commit_timeout = (yyvsp[0].val);
}
#line 1946 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 24:
#line 200 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.purge_timeout = (yyvsp[0].val);
}
#line 1954 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 25:
#line 205 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "the use of `Checksum' outside the "
				"`Multicast' clause is ambiguous");
	/* 
	 * XXX: The use of Checksum outside of the Multicast clause is broken
	 *	if we have more than one dedicated links.
	 */
	conf.channel[0].u.mcast.checksum = 0;
}
#line 1968 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 26:
#line 216 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "the use of `Checksum' outside the "
				"`Multicast' clause is ambiguous");
	/*
	 * XXX: The use of Checksum outside of the Multicast clause is broken
	 *	if we have more than one dedicated links.
	 */
	conf.channel[0].u.mcast.checksum = 1;
}
#line 1982 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_ADDRESS,
			    CT_FILTER_NEGATIVE);

	print_err(CTD_CFG_WARN, "the clause `IgnoreTrafficFor' is obsolete. "
				"Use `Filter' instead");
}
#line 1995 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 30:
#line 240 "read_config_yy.y" /* yacc.c:1646  */
    {
	union inet_address ip;

	memset(&ip, 0, sizeof(union inet_address));

	if (!inet_aton((yyvsp[0].string), &ip.ipv4)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4, "
					"ignoring", (yyvsp[0].string));
		break;
	}

	if (!ct_filter_add_ip(STATE(us_filter), &ip, AF_INET)) {
		if (errno == EEXIST)
			print_err(CTD_CFG_WARN, "IP %s is repeated "
						"in the ignore pool", (yyvsp[0].string));
		if (errno == ENOSPC)
			print_err(CTD_CFG_WARN, "too many IP in the "
						"ignore pool!");
	}
}
#line 2020 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 31:
#line 262 "read_config_yy.y" /* yacc.c:1646  */
    {
	union inet_address ip;

	memset(&ip, 0, sizeof(union inet_address));

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string), &ip.ipv6) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6, ignoring", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
#endif

	if (!ct_filter_add_ip(STATE(us_filter), &ip, AF_INET6)) {
		if (errno == EEXIST)
			print_err(CTD_CFG_WARN, "IP %s is repeated "
						"in the ignore pool", (yyvsp[0].string));
		if (errno == ENOSPC)
			print_err(CTD_CFG_WARN, "too many IP in the "
						"ignore pool!");
	}

}
#line 2049 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 32:
#line 288 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_MCAST) {
		print_err(CTD_CFG_ERROR, "cannot use `Multicast' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_MCAST;
	conf.channel[conf.channel_num].channel_type = CHANNEL_MCAST;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_BUFFERED;
	conf.channel_num++;
}
#line 2066 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 33:
#line 302 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_MCAST) {
		print_err(CTD_CFG_ERROR, "cannot use `Multicast' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_MCAST;
	conf.channel[conf.channel_num].channel_type = CHANNEL_MCAST;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_DEFAULT |
						       CHANNEL_F_BUFFERED;
	conf.channel_default = conf.channel_num;
	conf.channel_num++;
}
#line 2085 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 36:
#line 321 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.mcast.in)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}

        if (conf.channel[conf.channel_num].u.mcast.ipproto == AF_INET6) {
		print_err(CTD_CFG_WARN, "your multicast address is IPv4 but "
					"is binded to an IPv6 interface? "
					"Surely, this is not what you want");
		break;
	}

	conf.channel[conf.channel_num].u.mcast.ipproto = AF_INET;
}
#line 2107 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 37:
#line 340 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string),
		      &conf.channel[conf.channel_num].u.mcast.in) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6 address", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif

	if (conf.channel[conf.channel_num].u.mcast.ipproto == AF_INET) {
		print_err(CTD_CFG_WARN, "your multicast address is IPv6 but "
					"is binded to an IPv4 interface? "
					"Surely this is not what you want");
		break;
	}

	conf.channel[conf.channel_num].u.mcast.ipproto = AF_INET6;

	if (conf.channel[conf.channel_num].channel_ifname[0] &&
	    !conf.channel[conf.channel_num].u.mcast.ifa.interface_index6) {
		unsigned int idx;

		idx = if_nametoindex((yyvsp[0].string));
		if (!idx) {
			print_err(CTD_CFG_WARN,
				  "%s is an invalid interface", (yyvsp[0].string));
			break;
		}

		conf.channel[conf.channel_num].u.mcast.ifa.interface_index6 = idx;
		conf.channel[conf.channel_num].u.mcast.ipproto = AF_INET6;
	}
}
#line 2150 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 38:
#line 380 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.mcast.ifa)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}

        if (conf.channel[conf.channel_num].u.mcast.ipproto == AF_INET6) {
		print_err(CTD_CFG_WARN, "your multicast interface is IPv4 but "
					"is binded to an IPv6 interface? "
					"Surely, this is not what you want");
		break;
	}

	conf.channel[conf.channel_num].u.mcast.ipproto = AF_INET;
}
#line 2172 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 39:
#line 399 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`IPv6_interface' not required, ignoring");
}
#line 2180 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 40:
#line 404 "read_config_yy.y" /* yacc.c:1646  */
    {
	unsigned int idx;

	__max_dedicated_links_reached();

	strncpy(conf.channel[conf.channel_num].channel_ifname, (yyvsp[0].string), IFNAMSIZ);

	idx = if_nametoindex((yyvsp[0].string));
	if (!idx) {
		print_err(CTD_CFG_WARN, "%s is an invalid interface", (yyvsp[0].string));
		break;
	}

	if (conf.channel[conf.channel_num].u.mcast.ipproto == AF_INET6) {
		conf.channel[conf.channel_num].u.mcast.ifa.interface_index6 = idx;
		conf.channel[conf.channel_num].u.mcast.ipproto = AF_INET6;
	}
}
#line 2203 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 41:
#line 424 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`Backlog' option inside Multicast clause is "
				"obsolete. Please, remove it from "
				"conntrackd.conf");
}
#line 2213 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 42:
#line 431 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.mcast.port = (yyvsp[0].val);
}
#line 2222 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 43:
#line 437 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.mcast.sndbuf = (yyvsp[0].val);
}
#line 2231 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 44:
#line 443 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.mcast.rcvbuf = (yyvsp[0].val);
}
#line 2240 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 45:
#line 449 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.mcast.checksum = 0;
}
#line 2249 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 46:
#line 455 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.mcast.checksum = 1;
}
#line 2258 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 47:
#line 461 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_UDP) {
		print_err(CTD_CFG_ERROR, "cannot use `UDP' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_UDP;
	conf.channel[conf.channel_num].channel_type = CHANNEL_UDP;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_BUFFERED;
	conf.channel_num++;
}
#line 2275 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 48:
#line 475 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_UDP) {
		print_err(CTD_CFG_ERROR, "cannot use `UDP' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_UDP;
	conf.channel[conf.channel_num].channel_type = CHANNEL_UDP;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_DEFAULT |
						       CHANNEL_F_BUFFERED;
	conf.channel_default = conf.channel_num;
	conf.channel_num++;
}
#line 2294 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 51:
#line 494 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.udp.server.ipv4)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.udp.ipproto = AF_INET;
}
#line 2308 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 52:
#line 505 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string),
		      &conf.channel[conf.channel_num].u.udp.server.ipv6) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6 address", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif
	conf.channel[conf.channel_num].u.udp.ipproto = AF_INET6;
}
#line 2328 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 53:
#line 522 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.udp.client)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.udp.ipproto = AF_INET;
}
#line 2342 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 54:
#line 533 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string),
		      &conf.channel[conf.channel_num].u.udp.client) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6 address", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif
	conf.channel[conf.channel_num].u.udp.ipproto = AF_INET6;
}
#line 2362 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 55:
#line 550 "read_config_yy.y" /* yacc.c:1646  */
    {
	int idx;

	__max_dedicated_links_reached();
	strncpy(conf.channel[conf.channel_num].channel_ifname, (yyvsp[0].string), IFNAMSIZ);

	idx = if_nametoindex((yyvsp[0].string));
	if (!idx) {
		print_err(CTD_CFG_WARN, "%s is an invalid interface", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.udp.server.ipv6.scope_id = idx;
}
#line 2380 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 56:
#line 565 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.udp.port = (yyvsp[0].val);
}
#line 2389 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 57:
#line 571 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.udp.sndbuf = (yyvsp[0].val);
}
#line 2398 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 58:
#line 577 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.udp.rcvbuf = (yyvsp[0].val);
}
#line 2407 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 59:
#line 583 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.udp.checksum = 0;
}
#line 2416 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 60:
#line 589 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.udp.checksum = 1;
}
#line 2425 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 61:
#line 595 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_TCP) {
		print_err(CTD_CFG_ERROR, "cannot use `TCP' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_TCP;
	conf.channel[conf.channel_num].channel_type = CHANNEL_TCP;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_BUFFERED |
						       CHANNEL_F_STREAM |
						       CHANNEL_F_ERRORS;
	conf.channel_num++;
}
#line 2444 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 62:
#line 611 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.channel_type_global != CHANNEL_NONE &&
	    conf.channel_type_global != CHANNEL_TCP) {
		print_err(CTD_CFG_ERROR, "cannot use `TCP' with other "
					 "dedicated link protocols!");
		exit(EXIT_FAILURE);
	}
	conf.channel_type_global = CHANNEL_TCP;
	conf.channel[conf.channel_num].channel_type = CHANNEL_TCP;
	conf.channel[conf.channel_num].channel_flags = CHANNEL_F_DEFAULT |
						       CHANNEL_F_BUFFERED |
						       CHANNEL_F_STREAM |
						       CHANNEL_F_ERRORS;
	conf.channel_default = conf.channel_num;
	conf.channel_num++;
}
#line 2465 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 65:
#line 632 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.tcp.server.ipv4)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.tcp.ipproto = AF_INET;
}
#line 2479 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 66:
#line 643 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string),
		      &conf.channel[conf.channel_num].u.tcp.server.ipv6) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6 address", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif
	conf.channel[conf.channel_num].u.tcp.ipproto = AF_INET6;
}
#line 2499 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 67:
#line 660 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

	if (!inet_aton((yyvsp[0].string), &conf.channel[conf.channel_num].u.tcp.client)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4 address", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.tcp.ipproto = AF_INET;
}
#line 2513 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 68:
#line 671 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string),
		      &conf.channel[conf.channel_num].u.tcp.client) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6 address", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif
	conf.channel[conf.channel_num].u.tcp.ipproto = AF_INET6;
}
#line 2533 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 69:
#line 688 "read_config_yy.y" /* yacc.c:1646  */
    {
	int idx;

	__max_dedicated_links_reached();
	strncpy(conf.channel[conf.channel_num].channel_ifname, (yyvsp[0].string), IFNAMSIZ);

	idx = if_nametoindex((yyvsp[0].string));
	if (!idx) {
		print_err(CTD_CFG_WARN, "%s is an invalid interface", (yyvsp[0].string));
		break;
	}
	conf.channel[conf.channel_num].u.tcp.server.ipv6.scope_id = idx;
}
#line 2551 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 70:
#line 703 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.tcp.port = (yyvsp[0].val);
}
#line 2560 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 71:
#line 709 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.tcp.sndbuf = (yyvsp[0].val);
}
#line 2569 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 72:
#line 715 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.tcp.rcvbuf = (yyvsp[0].val);
}
#line 2578 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 73:
#line 721 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.tcp.checksum = 0;
}
#line 2587 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 74:
#line 727 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	conf.channel[conf.channel_num].u.tcp.checksum = 1;
}
#line 2596 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 75:
#line 733 "read_config_yy.y" /* yacc.c:1646  */
    {
	__max_dedicated_links_reached();
	CONFIG(channelc).error_queue_length = (yyvsp[0].val);
}
#line 2605 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 76:
#line 739 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.hashsize = (yyvsp[0].val);
}
#line 2613 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 77:
#line 744 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.limit = (yyvsp[0].val);
}
#line 2621 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 81:
#line 755 "read_config_yy.y" /* yacc.c:1646  */
    {
	strcpy(conf.local.path, (yyvsp[0].string));
}
#line 2629 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 82:
#line 760 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.local.backlog = (yyvsp[0].val);
}
#line 2637 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 83:
#line 765 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_L4PROTO,
			    CT_FILTER_NEGATIVE);

	print_err(CTD_CFG_WARN, "the clause `IgnoreProtocol' is "
				"obsolete. Use `Filter' instead");
}
#line 2650 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 86:
#line 779 "read_config_yy.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0].val) < IPPROTO_MAX)
		ct_filter_add_proto(STATE(us_filter), (yyvsp[0].val));
	else
		print_err(CTD_CFG_WARN, "protocol number `%d' is freak", (yyvsp[0].val));
}
#line 2661 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 87:
#line 787 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct protoent *pent;

	pent = getprotobyname((yyvsp[0].string));
	if (pent == NULL) {
		print_err(CTD_CFG_WARN, "getprotobyname() cannot find "
					"protocol `%s' in /etc/protocols", (yyvsp[0].string));
		break;
	}
	ct_filter_add_proto(STATE(us_filter), pent->p_proto);
}
#line 2677 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 88:
#line 800 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.flags & CTD_STATS_MODE) {
		print_err(CTD_CFG_ERROR, "cannot use both `Stats' and `Sync' "
					 "clauses in conntrackd.conf");
		exit(EXIT_FAILURE);
	}
	conf.flags |= CTD_SYNC_MODE;
}
#line 2690 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 112:
#line 839 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(sync).tcp_window_tracking = 1;
}
#line 2698 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 113:
#line 844 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(sync).tcp_window_tracking = 0;
}
#line 2706 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 114:
#line 849 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(flags) |= CTD_EXPECT;
	CONFIG(netlink).subsys_id = NFNL_SUBSYS_NONE;
	CONFIG(netlink).groups = NF_NETLINK_CONNTRACK_NEW |
				 NF_NETLINK_CONNTRACK_UPDATE |
				 NF_NETLINK_CONNTRACK_DESTROY |
				 NF_NETLINK_CONNTRACK_EXP_NEW |
				 NF_NETLINK_CONNTRACK_EXP_UPDATE |
				 NF_NETLINK_CONNTRACK_EXP_DESTROY;
}
#line 2721 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 115:
#line 861 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(netlink).subsys_id = NFNL_SUBSYS_CTNETLINK;
	CONFIG(netlink).groups = NF_NETLINK_CONNTRACK_NEW |
				 NF_NETLINK_CONNTRACK_UPDATE |
				 NF_NETLINK_CONNTRACK_DESTROY;
}
#line 2732 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 116:
#line 869 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(flags) |= CTD_EXPECT;
	CONFIG(netlink).subsys_id = NFNL_SUBSYS_NONE;
	CONFIG(netlink).groups = NF_NETLINK_CONNTRACK_NEW |
				 NF_NETLINK_CONNTRACK_UPDATE |
				 NF_NETLINK_CONNTRACK_DESTROY |
				 NF_NETLINK_CONNTRACK_EXP_NEW |
				 NF_NETLINK_CONNTRACK_EXP_UPDATE |
				 NF_NETLINK_CONNTRACK_EXP_DESTROY;
}
#line 2747 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 119:
#line 884 "read_config_yy.y" /* yacc.c:1646  */
    {
	exp_filter_add(STATE(exp_filter), (yyvsp[0].string));
}
#line 2755 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 120:
#line 889 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.flags |= CTD_SYNC_ALARM;
}
#line 2763 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 121:
#line 894 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.flags |= CTD_SYNC_FTFW;
}
#line 2771 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 122:
#line 899 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.flags |= CTD_SYNC_NOTRACK;
}
#line 2779 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 145:
#line 935 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.sync.internal_cache_disable = 1;
}
#line 2787 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 146:
#line 940 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.sync.internal_cache_disable = 0;
}
#line 2795 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 147:
#line 945 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.sync.external_cache_disable = 1;
}
#line 2803 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 148:
#line 950 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.sync.external_cache_disable = 0;
}
#line 2811 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 149:
#line 955 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`ResendBufferSize' is deprecated. "
				"Use `ResendQueueSize' instead");
}
#line 2820 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 150:
#line 961 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.resend_queue_size = (yyvsp[0].val);
}
#line 2828 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 151:
#line 966 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.window_size = (yyvsp[0].val);
}
#line 2836 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 152:
#line 971 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`DestroyTimeout' is deprecated. Remove it");
}
#line 2844 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 153:
#line 976 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`RelaxTransitions' clause is obsolete. "
				"Please, remove it from conntrackd.conf");
}
#line 2853 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 154:
#line 982 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`DelayDestroyMessages' clause is obsolete. "
				"Please, remove it from conntrackd.conf");
}
#line 2862 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 155:
#line 988 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "the clause `ListenTo' is obsolete, ignoring");
}
#line 2870 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 156:
#line 993 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_STATE,
			    CT_FILTER_POSITIVE);

	print_err(CTD_CFG_WARN, "the clause `Replicate' is obsolete. "
				"Use `Filter' instead");
}
#line 2883 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1006 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (strncmp((yyvsp[0].string), "TCP", strlen("TCP")) != 0) {
		print_err(CTD_CFG_WARN, "unsupported protocol `%s' in line %d",
					(yyvsp[0].string), yylineno);
	}
}
#line 2894 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1018 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_SYN_SENT);

	__kernel_filter_add_state(TCP_CONNTRACK_SYN_SENT);
}
#line 2906 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1026 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_SYN_RECV);

	__kernel_filter_add_state(TCP_CONNTRACK_SYN_RECV);
}
#line 2918 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1034 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_ESTABLISHED);

	__kernel_filter_add_state(TCP_CONNTRACK_ESTABLISHED);
}
#line 2930 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1042 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_FIN_WAIT);

	__kernel_filter_add_state(TCP_CONNTRACK_FIN_WAIT);
}
#line 2942 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1050 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_CLOSE_WAIT);

	__kernel_filter_add_state(TCP_CONNTRACK_CLOSE_WAIT);
}
#line 2954 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1058 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_LAST_ACK);

	__kernel_filter_add_state(TCP_CONNTRACK_LAST_ACK);
}
#line 2966 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1066 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_TIME_WAIT);

	__kernel_filter_add_state(TCP_CONNTRACK_TIME_WAIT);
}
#line 2978 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1074 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_CLOSE);

	__kernel_filter_add_state(TCP_CONNTRACK_CLOSE);
}
#line 2990 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1082 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_add_state(STATE(us_filter),
			    IPPROTO_TCP,
			    TCP_CONNTRACK_LISTEN);

	__kernel_filter_add_state(TCP_CONNTRACK_LISTEN);
}
#line 3002 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1091 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`CacheWriteThrough' clause is obsolete, "
				"ignoring");
}
#line 3011 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1097 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`CacheWriteThrough' clause is obsolete, "
				"ignoring");
}
#line 3020 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1129 "read_config_yy.y" /* yacc.c:1646  */
    { conf.systemd = 1; }
#line 3026 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1130 "read_config_yy.y" /* yacc.c:1646  */
    { conf.systemd = 0; }
#line 3032 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1133 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.netlink_buffer_size = (yyvsp[0].val);
}
#line 3040 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1138 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.netlink_buffer_size_max_grown = (yyvsp[0].val);
}
#line 3048 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1143 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.nl_overrun_resync = 30;
}
#line 3056 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1148 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.nl_overrun_resync = -1;
}
#line 3064 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1153 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.nl_overrun_resync = (yyvsp[0].val);
}
#line 3072 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1158 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.netlink.events_reliable = 1;
}
#line 3080 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1163 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.netlink.events_reliable = 0;
}
#line 3088 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1168 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.nice = (yyvsp[0].val);
}
#line 3096 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1179 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (strcasecmp((yyvsp[0].string), "rr") == 0) {
		conf.sched.type = SCHED_RR;
	} else if (strcasecmp((yyvsp[0].string), "fifo") == 0) {
		conf.sched.type = SCHED_FIFO;
	} else {
		print_err(CTD_CFG_ERROR, "unknown scheduler `%s'", (yyvsp[0].string));
		exit(EXIT_FAILURE);
	}
}
#line 3111 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1191 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.sched.prio = (yyvsp[0].val);
	if (conf.sched.prio < 0 || conf.sched.prio > 99) {
		print_err(CTD_CFG_ERROR, "`Priority' must be [0, 99]\n", (yyvsp[0].val));
		exit(EXIT_FAILURE);
	}
}
#line 3123 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1200 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`Family' is deprecated, ignoring");
}
#line 3131 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1205 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(event_iterations_limit) = (yyvsp[0].val);
}
#line 3139 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1210 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.flags |= CTD_POLL;
	conf.poll_kernel_secs = (yyvsp[0].val);
	if (conf.poll_kernel_secs == 0) {
		print_err(CTD_CFG_ERROR, "`PollSecs' clause must be > 0");
		exit(EXIT_FAILURE);
	}
}
#line 3152 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1220 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(filter_from_kernelspace) = 0;
}
#line 3160 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1225 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(filter_from_kernelspace) = 0;
}
#line 3168 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1230 "read_config_yy.y" /* yacc.c:1646  */
    {
	CONFIG(filter_from_kernelspace) = 1;
}
#line 3176 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1238 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_L4PROTO,
			    CT_FILTER_POSITIVE);

	__kernel_filter_start();
}
#line 3188 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1247 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_L4PROTO,
			    CT_FILTER_NEGATIVE);

	__kernel_filter_start();

	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_L4PROTO,
			      NFCT_FILTER_LOGIC_NEGATIVE);
}
#line 3204 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1263 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct protoent *pent;

	pent = getprotobyname((yyvsp[0].string));
	if (pent == NULL) {
		print_err(CTD_CFG_WARN, "getprotobyname() cannot find "
					"protocol `%s' in /etc/protocols", (yyvsp[0].string));
		break;
	}
	ct_filter_add_proto(STATE(us_filter), pent->p_proto);

	__kernel_filter_start();

	nfct_filter_add_attr_u32(STATE(filter),
				 NFCT_FILTER_L4PROTO,
				 pent->p_proto);
}
#line 3226 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1282 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct protoent *pent;

	pent = getprotobyname("tcp");
	if (pent == NULL) {
		print_err(CTD_CFG_WARN, "getprotobyname() cannot find "
					"protocol `tcp' in /etc/protocols");
		break;
	}
	ct_filter_add_proto(STATE(us_filter), pent->p_proto);

	__kernel_filter_start();

	nfct_filter_add_attr_u32(STATE(filter),
				 NFCT_FILTER_L4PROTO,
				 pent->p_proto);
}
#line 3248 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1301 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct protoent *pent;

	pent = getprotobyname("udp");
	if (pent == NULL) {
		print_err(CTD_CFG_WARN, "getprotobyname() cannot find "
					"protocol `udp' in /etc/protocols");
		break;
	}
	ct_filter_add_proto(STATE(us_filter), pent->p_proto);

	__kernel_filter_start();

	nfct_filter_add_attr_u32(STATE(filter),
				 NFCT_FILTER_L4PROTO,
				 pent->p_proto);
}
#line 3270 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1320 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_ADDRESS,
			    CT_FILTER_POSITIVE);

	__kernel_filter_start();
}
#line 3282 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1329 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_ADDRESS,
			    CT_FILTER_NEGATIVE);

	__kernel_filter_start();

	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_SRC_IPV4,
			      NFCT_FILTER_LOGIC_NEGATIVE);
	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_DST_IPV4,
			      NFCT_FILTER_LOGIC_NEGATIVE);
	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_SRC_IPV6,
			      NFCT_FILTER_LOGIC_NEGATIVE);
	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_DST_IPV6,
			      NFCT_FILTER_LOGIC_NEGATIVE);
}
#line 3307 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1354 "read_config_yy.y" /* yacc.c:1646  */
    {
	union inet_address ip;
	char *slash;
	unsigned int cidr = 32;

	memset(&ip, 0, sizeof(union inet_address));

	slash = strchr((yyvsp[0].string), '/');
	if (slash) {
		*slash = '\0';
		cidr = atoi(slash+1);
		if (cidr > 32) {
			print_err(CTD_CFG_WARN, "%s/%d is not a valid network, "
						"ignoring", (yyvsp[0].string), cidr);
			break;
		}
	}

	if (!inet_aton((yyvsp[0].string), &ip.ipv4)) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv4, ignoring", (yyvsp[0].string));
		break;
	}

	if (slash && cidr < 32) {
		/* network byte order */
		struct ct_filter_netmask_ipv4 tmp = {
			.ip = ip.ipv4,
			.mask = ipv4_cidr2mask_net(cidr)
		};

		if (!ct_filter_add_netmask(STATE(us_filter), &tmp, AF_INET)) {
			if (errno == EEXIST)
				print_err(CTD_CFG_WARN, "netmask %s is "
							"repeated in the "
							"ignore pool", (yyvsp[0].string));
		}
	} else {
		if (!ct_filter_add_ip(STATE(us_filter), &ip, AF_INET)) {
			if (errno == EEXIST)
				print_err(CTD_CFG_WARN, "IP %s is repeated in "
							"the ignore pool", (yyvsp[0].string));
			if (errno == ENOSPC)
				print_err(CTD_CFG_WARN, "too many IP in the "
							"ignore pool!");
		}
	}
	__kernel_filter_start();

	/* host byte order */
	struct nfct_filter_ipv4 filter_ipv4 = {
		.addr = ntohl(ip.ipv4),
		.mask = ipv4_cidr2mask_host(cidr),
	};

	nfct_filter_add_attr(STATE(filter), NFCT_FILTER_SRC_IPV4, &filter_ipv4);
	nfct_filter_add_attr(STATE(filter), NFCT_FILTER_DST_IPV4, &filter_ipv4);
}
#line 3369 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1413 "read_config_yy.y" /* yacc.c:1646  */
    {
	union inet_address ip;
	char *slash;
	int cidr = 128;
	struct nfct_filter_ipv6 filter_ipv6;

	memset(&ip, 0, sizeof(union inet_address));

	slash = strchr((yyvsp[0].string), '/');
	if (slash) {
		*slash = '\0';
		cidr = atoi(slash+1);
		if (cidr > 128) {
			print_err(CTD_CFG_WARN, "%s/%d is not a valid network, "
						"ignoring", (yyvsp[0].string), cidr);
			break;
		}
	}

#ifdef HAVE_INET_PTON_IPV6
	if (inet_pton(AF_INET6, (yyvsp[0].string), &ip.ipv6) <= 0) {
		print_err(CTD_CFG_WARN, "%s is not a valid IPv6, ignoring", (yyvsp[0].string));
		break;
	}
#else
	print_err(CTD_CFG_WARN, "cannot find inet_pton(), IPv6 unsupported!");
	break;
#endif
	if (slash && cidr < 128) {
		struct ct_filter_netmask_ipv6 tmp;

		memcpy(tmp.ip, ip.ipv6, sizeof(uint32_t)*4);
		ipv6_cidr2mask_net(cidr, tmp.mask);
		if (!ct_filter_add_netmask(STATE(us_filter), &tmp, AF_INET6)) {
			if (errno == EEXIST)
				print_err(CTD_CFG_WARN, "netmask %s is "
							"repeated in the "
							"ignore pool", (yyvsp[0].string));
		}
	} else {
		if (!ct_filter_add_ip(STATE(us_filter), &ip, AF_INET6)) {
			if (errno == EEXIST)
				print_err(CTD_CFG_WARN, "IP %s is repeated in "
							"the ignore pool", (yyvsp[0].string));
			if (errno == ENOSPC)
				print_err(CTD_CFG_WARN, "too many IP in the "
							"ignore pool!");
		}
	}
	__kernel_filter_start();

	/* host byte order */
	ipv6_addr2addr_host(ip.ipv6, filter_ipv6.addr);
	ipv6_cidr2mask_host(cidr, filter_ipv6.mask);

	nfct_filter_add_attr(STATE(filter), NFCT_FILTER_SRC_IPV6, &filter_ipv6);
	nfct_filter_add_attr(STATE(filter), NFCT_FILTER_DST_IPV6, &filter_ipv6);
}
#line 3432 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1473 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_STATE,
			    CT_FILTER_POSITIVE);

	__kernel_filter_start();
}
#line 3444 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1482 "read_config_yy.y" /* yacc.c:1646  */
    {
	ct_filter_set_logic(STATE(us_filter),
			    CT_FILTER_STATE,
			    CT_FILTER_NEGATIVE);


	__kernel_filter_start();

	nfct_filter_set_logic(STATE(filter),
			      NFCT_FILTER_L4PROTO_STATE,
			      NFCT_FILTER_LOGIC_NEGATIVE);
}
#line 3461 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1501 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (conf.flags & CTD_SYNC_MODE) {
		print_err(CTD_CFG_ERROR, "cannot use both `Stats' and `Sync' "
					 "clauses in conntrackd.conf");
		exit(EXIT_FAILURE);
	}
	conf.flags |= CTD_STATS_MODE;
}
#line 3474 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1522 "read_config_yy.y" /* yacc.c:1646  */
    {
	strncpy(conf.stats.logfile, DEFAULT_STATS_LOGFILE, FILENAME_MAXLEN);
}
#line 3482 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1527 "read_config_yy.y" /* yacc.c:1646  */
    {
}
#line 3489 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1531 "read_config_yy.y" /* yacc.c:1646  */
    {
	strncpy(conf.stats.logfile, (yyvsp[0].string), FILENAME_MAXLEN);
}
#line 3497 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1536 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.stats.syslog_facility = DEFAULT_SYSLOG_FACILITY;
}
#line 3505 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1541 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.stats.syslog_facility = -1;
}
#line 3513 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1546 "read_config_yy.y" /* yacc.c:1646  */
    {
	if (!strcmp((yyvsp[0].string), "daemon"))
		conf.stats.syslog_facility = LOG_DAEMON;
	else if (!strcmp((yyvsp[0].string), "local0"))
		conf.stats.syslog_facility = LOG_LOCAL0;
	else if (!strcmp((yyvsp[0].string), "local1"))
		conf.stats.syslog_facility = LOG_LOCAL1;
	else if (!strcmp((yyvsp[0].string), "local2"))
		conf.stats.syslog_facility = LOG_LOCAL2;
	else if (!strcmp((yyvsp[0].string), "local3"))
		conf.stats.syslog_facility = LOG_LOCAL3;
	else if (!strcmp((yyvsp[0].string), "local4"))
		conf.stats.syslog_facility = LOG_LOCAL4;
	else if (!strcmp((yyvsp[0].string), "local5"))
		conf.stats.syslog_facility = LOG_LOCAL5;
	else if (!strcmp((yyvsp[0].string), "local6"))
		conf.stats.syslog_facility = LOG_LOCAL6;
	else if (!strcmp((yyvsp[0].string), "local7"))
		conf.stats.syslog_facility = LOG_LOCAL7;
	else {
		print_err(CTD_CFG_WARN, "'%s' is not a known syslog facility, "
					"ignoring.", (yyvsp[0].string));
		break;
	}

	if (conf.syslog_facility != -1 &&
	    conf.stats.syslog_facility != conf.syslog_facility)
		print_err(CTD_CFG_WARN, "conflicting Syslog facility "
					"values, defaulting to General");
}
#line 3548 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 251:
#line 1578 "read_config_yy.y" /* yacc.c:1646  */
    {
	print_err(CTD_CFG_WARN, "`LogFileBufferSize' is deprecated");
}
#line 3556 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 252:
#line 1583 "read_config_yy.y" /* yacc.c:1646  */
    {
	conf.flags |= CTD_HELPER;
}
#line 3564 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1595 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct ctd_helper_instance *helper_inst;
	struct ctd_helper *helper;
	struct stack_item *e;
	uint16_t l3proto;
	uint8_t l4proto;

	if (strcmp((yyvsp[-4].string), "inet") == 0)
		l3proto = AF_INET;
	else if (strcmp((yyvsp[-4].string), "inet6") == 0)
		l3proto = AF_INET6;
	else {
		print_err(CTD_CFG_ERROR, "unknown layer 3 protocol");
		exit(EXIT_FAILURE);
	}

	if (strcmp((yyvsp[-3].string), "tcp") == 0)
		l4proto = IPPROTO_TCP;
	else if (strcmp((yyvsp[-3].string), "udp") == 0)
		l4proto = IPPROTO_UDP;
	else {
		print_err(CTD_CFG_ERROR, "unknown layer 4 protocol");
		exit(EXIT_FAILURE);
	}

#ifdef BUILD_CTHELPER
	helper = helper_find(CONNTRACKD_LIB_DIR, (yyvsp[-5].string), l4proto, RTLD_NOW);
	if (helper == NULL) {
		print_err(CTD_CFG_ERROR, "Unknown `%s' helper", (yyvsp[-5].string));
		exit(EXIT_FAILURE);
	}
#else
	print_err(CTD_CFG_ERROR, "Helper support is disabled, recompile "
				 "conntrackd");
	exit(EXIT_FAILURE);
#endif

	helper_inst = calloc(1, sizeof(struct ctd_helper_instance));
	if (helper_inst == NULL)
		break;

	helper_inst->l3proto = l3proto;
	helper_inst->l4proto = l4proto;
	helper_inst->helper = helper;

	while ((e = stack_item_pop(&symbol_stack, -1)) != NULL) {

		switch(e->type) {
		case SYMBOL_HELPER_QUEUE_NUM: {
			int *qnum = (int *) &e->data;

			helper_inst->queue_num = *qnum;
			stack_item_free(e);
			break;
		}
		case SYMBOL_HELPER_QUEUE_LEN: {
			int *qlen = (int *) &e->data;

			helper_inst->queue_len = *qlen;
			stack_item_free(e);
			break;
		}
		case SYMBOL_HELPER_POLICY_EXPECT_ROOT: {
			struct ctd_helper_policy *pol =
				(struct ctd_helper_policy *) &e->data;
			struct ctd_helper_policy *matching = NULL;
			int i;

			for (i=0; i<CTD_HELPER_POLICY_MAX; i++) {
				if (strcmp(helper->policy[i].name,
					   pol->name) != 0)
					continue;

				matching = pol;
				break;
			}
			if (matching == NULL) {
				print_err(CTD_CFG_ERROR,
					  "Unknown policy `%s' in helper "
					  "configuration", pol->name);
				exit(EXIT_FAILURE);
			}
			/* FIXME: First set default policy, then change only
			 * tuned fields, not everything.
			 */
			memcpy(&helper->policy[i], pol,
				sizeof(struct ctd_helper_policy));

			stack_item_free(e);
			break;
		}
		default:
			print_err(CTD_CFG_ERROR,
				  "Unexpected symbol parsing helper policy");
				exit(EXIT_FAILURE);
			break;
		}
	}
	list_add(&helper_inst->head, &CONFIG(cthelper).list);
}
#line 3669 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1704 "read_config_yy.y" /* yacc.c:1646  */
    {
	int *qnum;
	struct stack_item *e;

	e = stack_item_alloc(SYMBOL_HELPER_QUEUE_NUM, sizeof(int));
	qnum = (int *) e->data;
	*qnum = (yyvsp[0].val);
	stack_item_push(&symbol_stack, e);
}
#line 3683 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1715 "read_config_yy.y" /* yacc.c:1646  */
    {
	int *qlen;
	struct stack_item *e;

	e = stack_item_alloc(SYMBOL_HELPER_QUEUE_LEN, sizeof(int));
	qlen = (int *) e->data;
	*qlen = (yyvsp[0].val);
	stack_item_push(&symbol_stack, e);
}
#line 3697 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1726 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct stack_item *e;
	struct ctd_helper_policy *policy;

	e = stack_item_pop(&symbol_stack, SYMBOL_HELPER_EXPECT_POLICY_LEAF);
	if (e == NULL) {
		print_err(CTD_CFG_ERROR,
			  "Helper policy configuration empty, fix your "
			  "configuration file, please");
		exit(EXIT_FAILURE);
		break;
	}

	policy = (struct ctd_helper_policy *) &e->data;
	strncpy(policy->name, (yyvsp[-3].string), CTD_HELPER_NAME_LEN);
	policy->name[CTD_HELPER_NAME_LEN-1] = '\0';
	/* Now object is complete. */
	e->type = SYMBOL_HELPER_POLICY_EXPECT_ROOT;
	stack_item_push(&symbol_stack, e);
}
#line 3722 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1756 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct stack_item *e;
	struct ctd_helper_policy *policy;

	e = stack_item_pop(&symbol_stack, SYMBOL_HELPER_EXPECT_POLICY_LEAF);
	if (e == NULL) {
		e = stack_item_alloc(SYMBOL_HELPER_EXPECT_POLICY_LEAF,
				     sizeof(struct ctd_helper_policy));
	}
	policy = (struct ctd_helper_policy *) &e->data;
	policy->expect_max = (yyvsp[0].val);
	stack_item_push(&symbol_stack, e);
}
#line 3740 "read_config_yy.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1771 "read_config_yy.y" /* yacc.c:1646  */
    {
	struct stack_item *e;
	struct ctd_helper_policy *policy;

	e = stack_item_pop(&symbol_stack, SYMBOL_HELPER_EXPECT_POLICY_LEAF);
	if (e == NULL) {
		e = stack_item_alloc(SYMBOL_HELPER_EXPECT_POLICY_LEAF,
				     sizeof(struct ctd_helper_policy));
	}
	policy = (struct ctd_helper_policy *) &e->data;
	policy->expect_timeout = (yyvsp[0].val);
	stack_item_push(&symbol_stack, e);
}
#line 3758 "read_config_yy.c" /* yacc.c:1646  */
    break;


#line 3762 "read_config_yy.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1785 "read_config_yy.y" /* yacc.c:1906  */


int __attribute__((noreturn))
yyerror(char *msg)
{
	print_err(CTD_CFG_ERROR, "parsing config file in "
				 "line (%d), symbol '%s': %s",
				 yylineno, yytext, msg);
	exit(EXIT_FAILURE);
}

static void print_err(int type, const char *msg, ...)
{
	va_list args;

	va_start(args, msg);
	switch(type) {
	case CTD_CFG_ERROR:
		fprintf(stderr, "ERROR: ");
		break;
	case CTD_CFG_WARN:
		fprintf(stderr, "WARNING: ");
		break;
	default:
		fprintf(stderr, "?: ");
	}
	vfprintf(stderr, msg, args);
	va_end(args);
	fprintf(stderr,"\n");
}

static void __kernel_filter_start(void)
{
	if (!STATE(filter)) {
		STATE(filter) = nfct_filter_create();
		if (!STATE(filter)) {
			print_err(CTD_CFG_ERROR, "cannot create ignore pool!");
			exit(EXIT_FAILURE);
		}
	}
}

static void __kernel_filter_add_state(int value)
{
	__kernel_filter_start();

	struct nfct_filter_proto filter_proto = {
		.proto = IPPROTO_TCP,
		.state = value
	};
	nfct_filter_add_attr(STATE(filter),
			     NFCT_FILTER_L4PROTO_STATE,
			     &filter_proto);
}

static void __max_dedicated_links_reached(void)
{
	if (conf.channel_num >= MULTICHANNEL_MAX) {
		print_err(CTD_CFG_ERROR, "too many dedicated links in "
					 "the configuration file "
					 "(Maximum: %d)", MULTICHANNEL_MAX);
		exit(EXIT_FAILURE);
	}
}

int
init_config(char *filename)
{
	FILE *fp;

	fp = fopen(filename, "r");
	if (!fp)
		return -1;

	/* Zero may be a valid facility */
	CONFIG(syslog_facility) = -1;
	CONFIG(stats).syslog_facility = -1;
	CONFIG(netlink).subsys_id = -1;

	/* Initialize list of user-space helpers */
	INIT_LIST_HEAD(&CONFIG(cthelper).list);

	stack_init(&symbol_stack);

	yyrestart(fp);
	yyparse();
	fclose(fp);

#ifndef BUILD_SYSTEMD
	if (CONFIG(systemd) == 1) {
		print_err(CTD_CFG_WARN, "systemd runtime support activated but"
					" conntrackd was built without support"
					" for it. Recompile conntrackd");
	}
#endif /* BUILD_SYSTEMD */

	/* set to default is not specified */
	if (strcmp(CONFIG(lockfile), "") == 0)
		strncpy(CONFIG(lockfile), DEFAULT_LOCKFILE, FILENAME_MAXLEN);

	/* default to 180 seconds of expiration time: cache entries */
	if (CONFIG(cache_timeout) == 0)
		CONFIG(cache_timeout) = 180;

	/* default to 60 seconds: purge kernel entries */
	if (CONFIG(purge_timeout) == 0)
		CONFIG(purge_timeout) = 60;

	/* default to 60 seconds of refresh time */
	if (CONFIG(refresh) == 0)
		CONFIG(refresh) = 60;

	if (CONFIG(resend_queue_size) == 0)
		CONFIG(resend_queue_size) = 131072;

	/* default to a window size of 300 packets */
	if (CONFIG(window_size) == 0)
		CONFIG(window_size) = 300;

	if (CONFIG(event_iterations_limit) == 0)
		CONFIG(event_iterations_limit) = 100;

	/* default number of bucket of the hashtable that are committed in
	   one run loop. XXX: no option available to tune this value yet. */
	if (CONFIG(general).commit_steps == 0)
		CONFIG(general).commit_steps = 8192;

	/* if overrun, automatically resync with kernel after 30 seconds */
	if (CONFIG(nl_overrun_resync) == 0)
		CONFIG(nl_overrun_resync) = 30;

	/* default to 128 elements in the channel error queue */
	if (CONFIG(channelc).error_queue_length == 0)
		CONFIG(channelc).error_queue_length = 128;

	if (CONFIG(netlink).subsys_id == -1) {
		CONFIG(netlink).subsys_id = NFNL_SUBSYS_CTNETLINK;
		CONFIG(netlink).groups = NF_NETLINK_CONNTRACK_NEW |
					 NF_NETLINK_CONNTRACK_UPDATE |
					 NF_NETLINK_CONNTRACK_DESTROY;
	}

	return 0;
}
