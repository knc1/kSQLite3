/*
 * #if <expression>
 * Identifiers that are not macros, are all considered to be the number zero.
 *
 * This allows you to write '#if' MACRO instead of '#ifdef' MACRO, if you know
 * that MACRO, when defined, will always have a nonzero value. 
 *
 * Function-like macros used without their function call parentheses are also
 * treated as zero. 
 *
 * If the value comes out to be nonzero, the '#if' succeeds and the controlled
 * text is included; otherwise it is skipped. 
 */

// lines are the program default

/* However, new applications should avoid the use of these functions. */
// #undef SQLITE_OMIT_DEPRECATED
#define SQLITE_OMIT_DEPRECATED          1

/* OS selection */
// #undef SQLITE_OS_UNIX
#define SQLITE_OS_UNIX                  1
// #undef  WIN32
// #undef  SQLITE_OS_WIN

/* non-Windows default shell */
// #define SQLITE_SHELL_IS_UTF8          (1)

/* Adds user: login, add, edit, delete */
// #undef SQLITE_USER_AUTHENTICATION

/* Places authorization required on commands */
// #undef SQLITE_OMIT_AUTHORIZATION

/* Command line handling - pick 1 or none of the three */
// #undef HAVE_READLINE
#define HAVE_READLINE 1
// #undef HAVE_EDITLINE
// #undef HAVE_LINENOISE

/* Control the provision of popen and pclose (to support pipes) */
// #undef SQLITE_OMIT_LOAD_EXTENSION 
// #undef SQLITE_OMIT_POPEN

/* Large file support on *nix */
// #undef SQLITE_DISABLE_LFS

/* The code to implement this API is not available in the public release of SQLite. */
// #undef SQLITE_HAS_CODEC

/* The maximum number of attached databases.  This must be between 0 and 125. */
// #define SQLITE_MAX_ATTACHED          10

/*
** The SQLITE_THREADSAFE macro must be defined as 0, 1, or 2.
** 0 means mutexes are permanently disable and the library is never
** threadsafe.  1 means the library is serialized which is the highest
** level of threadsafety.  2 means the library is multithreaded - multiple
** threads can use SQLite as long as no two threads try to use the same
** database connection at the same time.
*/
// #define SQLITE_THREADSAFE            1
#define SQLITE_THREADSAFE               1

/* Defaults if sqlite is "thread safe" */
// #define SQLITE_DEFAULT_WORKER_THREADS 0
#define SQLITE_DEFAULT_WORKER_THREADS   1

// #define SQLITE_MAX_WORKER_THREADS     8
#define SQLITE_MAX_WORKER_THREADS       4

/* Memory allocation statistics are enabled by default */
// #define SQLITE_DEFAULT_MEMSTATUS     1

/* Paired feature controls - included by default */
// #undef SQLITE_OMIT_FOREIGN_KEY
// #undef SQLITE_OMIT_TRIGGER

/* URI filenames can be enabled or disabled using the SQLITE_USE_URI=1 or 
 * SQLITE_USE_URI=0 compile-time options.
 * URI filenames are enabled by default if SQLITE_HAS_CODEC is enabled.
 */
// #undef SQLITE_USE_URI

/* This SQLite extension implements JSON functions.  The interface is
 * modeled after MySQL JSON functions:
 *
 *     https://dev.mysql.com/doc/refman/5.7/en/json.html
 */
// #undef SQLITE_ENABLE_JSON1
#define SQLITE_ENABLE_JSON1             1

/* Provide collation control by locale */
// #undef SQLITE_ENABLE_ICU
// #define SQLITE_ENABLE_ICU               1

/* System supports microsecond timings */
// #undef HAVE_USLEEP
#define HAVE_USLEEP                     1
