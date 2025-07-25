/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

#if defined __GNUC__ && __GNUC__ >= 15 && !defined __clang__
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wtrailing-whitespace"
#endif


/* Witness that <config.h> has been included.  */
#define _GL_CONFIG_H_INCLUDED 1


/* Define to 1 if the package shall run at any location in the file system. */
#define ENABLE_RELOCATABLE 1

/* Define to the directory where to find the localizations of the translation
   domain 'gnulib', as a C string. */
#define GNULIB_LOCALEDIR "/c/gnome.build/b/enchant2.bin/share/locale"

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#define GNULIB_MSVC_NOTHROW 1

/* Define to 1 when the gnulib module getopt-posix should be tested. */
#define GNULIB_TEST_GETOPT_POSIX 1

/* Define to 1 if you have the <aspell.h> header file. */
/* #undef HAVE_ASPELL_H */

/* Define to 1 if you have the <Cocoa/Cocoa.h> header file. */
/* #undef HAVE_COCOA_COCOA_H */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if bool, true and false work as per C2023. */
/* #undef HAVE_C_BOOL */

/* Define to 1 if C supports variable-length arrays. */
/* #undef HAVE_C_VARARRAYS */

/* Define to 1 if you have the declaration of `execvpe', and to 0 if you
   don't. */
#define HAVE_DECL_EXECVPE 0

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the `flock' function. */
/* #undef HAVE_FLOCK */

/* Define to 1 if you have the <getopt.h> header file. */
/* #undef HAVE_GETOPT_H */

/* Define to 1 if you have the `getopt_long_only' function. */
/* #undef HAVE_GETOPT_LONG_ONLY */

/* Define to 1 if you have the <hspell.h> header file. */
/* #undef HAVE_HSPELL_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `applespell' library (-lapplespell). */
/* #undef HAVE_LIBAPPLESPELL */

/* Define to 1 if you have the `aspell' library (-laspell). */
/* #undef HAVE_LIBASPELL */

/* Define to 1 if you have the `hspell' library (-lhspell). */
/* #undef HAVE_LIBHSPELL */

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
#define HAVE_MSVC_INVALID_PARAMETER_HANDLER 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `l_type' is a member of `struct flock'. */
/* #undef HAVE_STRUCT_FLOCK_L_TYPE */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the <sys/file.h> header file. */
/* #undef HAVE_SYS_FILE_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if <locale.h> defines the _locale_t type. */
#define HAVE_WINDOWS_LOCALE_T 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 0

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 0

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef HAVE_XLOCALE_H */

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
#define HAVE__SET_INVALID_PARAMETER_HANDLER 1

/* Define to 1 if ctype.h defines __header_inline. */
/* #undef HAVE___HEADER_INLINE */

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Oracle Developer Studio 12.6
   (Sun C 5.15 SunOS_sparc 2017/05/30).

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions (ISO C 99 section 6.7.4.(3).
   This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/clang-master-potential/20141111_102002/logs/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.

   GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  It defines a macro
   __GNUC_STDC_INLINE__ to indicate this situation or a macro
   __GNUC_GNU_INLINE__ to indicate the opposite situation.
   GCC 4.2 with -std=c99 or -std=gnu99 implements the GNU C inline
   semantics but warns, unless -fgnu89-inline is used:
     warning: C99 inline functions are not supported; using GNU89
     warning: to disable this warning use -fgnu89-inline or the gnu_inline function attribute
   It defines a macro __GNUC_GNU_INLINE__ to indicate this situation.
 */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined HAVE___HEADER_INLINE \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? (defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
         && !defined __PCC__) \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined __PCC__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE _GL_UNUSED static
# define _GL_EXTERN_INLINE _GL_UNUSED static
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

#ifdef _WIN64
# ifdef _M_ARM64
#  define ENCHANT_PLAT "arm64"
# else
#  define ENCHANT_PLAT "x64"
# endif
#else
# define ENCHANT_PLAT "Win32"
#endif

/* Define to the value of ${prefix}, as a string. */
#define INSTALLPREFIX "c:\\vs14.0\\" ENCHANT_PLAT

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".dll"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the shared library suffix, say, ".dylib". */
/* #undef LT_SHARED_EXT */

/* Define to the shared archive member specification, say "(shr.o)". */
/* #undef LT_SHARED_LIB_MEMBER */

/* Define to 1 on musl libc. */
/* #undef MUSL_LIBC */

/* Name of package */
#define PACKAGE "enchant"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "Enchant"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Enchant 2.8.10"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "enchant"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.8.10"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define to enable the declarations of ISO C 23 Annex K types and functions.  */
#if !(defined __STDC_WANT_LIB_EXT1__ && __STDC_WANT_LIB_EXT1__)
#undef/**/__STDC_WANT_LIB_EXT1__
#define __STDC_WANT_LIB_EXT1__ 1
#endif


/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex F.  */
#ifndef __STDC_WANT_IEC_60559_EXT__
# define __STDC_WANT_IEC_60559_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define VERSION "2.8.10"

/* True if the compiler says it groks GNU C version MAJOR.MINOR.
    Except that
      - clang groks GNU C 4.2, even on Windows, where it does not define
        __GNUC__.
      - The OpenMandriva-modified clang compiler pretends that it groks
        GNU C version 13.1, but it doesn't: It does not support
        __attribute__ ((__malloc__ (f, i))), nor does it support
        __attribute__ ((__warning__ (message))) on a function redeclaration.
      - Users can make clang lie as well, through the -fgnuc-version option.  */
#if defined __GNUC__ && defined __GNUC_MINOR__ && !defined __clang__
# define _GL_GNUC_PREREQ(major, minor) \
    ((major) < __GNUC__ + ((minor) <= __GNUC_MINOR__))
#elif defined __clang__
  /* clang really only groks GNU C 4.2.  */
# define _GL_GNUC_PREREQ(major, minor) \
    ((major) < 4 + ((minor) <= 2))
#else
# define _GL_GNUC_PREREQ(major, minor) 0
#endif


/* Define to enable the declarations of ISO C 11 types and functions. */
/* #undef _ISOC11_SOURCE */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)) \
      && 0)
    /* [[noreturn]] is not practically usable, because with it the syntax
         extern _Noreturn void func (...);
       would not be valid; such a declaration would only be valid with 'extern'
       and '_Noreturn' swapped, or without the 'extern' keyword.  However, some
       AIX system header files and several gnulib header files use precisely
       this syntax with 'extern'.  */
#  define _Noreturn [[noreturn]]
# elif (defined __clang__ && __clang_major__ < 16 \
        && defined _GL_WORK_AROUND_LLVM_BUG_59792)
   /* Compile with -D_GL_WORK_AROUND_LLVM_BUG_59792 to work around
      that rare LLVM bug, though you may get many false-alarm warnings.  */
#  define _Noreturn
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) \
            || (!defined __STRICT_ANSI__ \
                && (_GL_GNUC_PREREQ (4, 7) \
                    || (defined __apple_build_version__ \
                        ? 6000000 <= __apple_build_version__ \
                        : 3 < __clang_major__ + (5 <= __clang_minor__))))))
   /* _Noreturn works as-is.  */
# elif _GL_GNUC_PREREQ (2, 8) || defined __clang__ || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* For standard stat data types on VMS. */
#define _USE_STD_STAT 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Define to 1 if C does not support variable-length arrays, and if the
   compiler does not already define this. */
#define __STDC_NO_VLA__ 1

/* The _GL_ASYNC_SAFE marker should be attached to functions that are
   signal handlers (for signals other than SIGABRT, SIGPIPE) or can be
   invoked from such signal handlers.  Such functions have some restrictions:
     * All functions that it calls should be marked _GL_ASYNC_SAFE as well,
       or should be listed as async-signal-safe in POSIX
       <https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04>
       section 2.4.3.  Note that malloc(), sprintf(), and fwrite(), in
       particular, are NOT async-signal-safe.
     * All memory locations (variables and struct fields) that these functions
       access must be marked 'volatile'.  This holds for both read and write
       accesses.  Otherwise the compiler might optimize away stores to and
       reads from such locations that occur in the program, depending on its
       data flow analysis.  For example, when the program contains a loop
       that is intended to inspect a variable set from within a signal handler
           while (!signal_occurred)
             ;
       the compiler is allowed to transform this into an endless loop if the
       variable 'signal_occurred' is not declared 'volatile'.
   Additionally, recall that:
     * A signal handler should not modify errno (except if it is a handler
       for a fatal signal and ends by raising the same signal again, thus
       provoking the termination of the process).  If it invokes a function
       that may clobber errno, it needs to save and restore the value of
       errno.  */
#define _GL_ASYNC_SAFE


/* Attributes.  */
/* Define _GL_HAS_ATTRIBUTE only once, because on FreeBSD, with gcc < 5, if
   <config.h> gets included once again after <sys/cdefs.h>, __has_attribute(x)
   expands to 0 always, and redefining _GL_HAS_ATTRIBUTE would turn off all
   attributes.  */
#ifndef _GL_HAS_ATTRIBUTE
# if (defined __has_attribute \
      && (!defined __clang_minor__ \
          || (defined __apple_build_version__ \
              ? 7000000 <= __apple_build_version__ \
              : 5 <= __clang_major__)))
#  define _GL_HAS_ATTRIBUTE(attr) __has_attribute (__##attr##__)
# else
#  define _GL_HAS_ATTRIBUTE(attr) _GL_ATTR_##attr
/* The following lines list the first GCC version that supports the attribute.
   Although the lines are not used in GCC 5 and later (as GCC 5 introduced
   __has_attribute support), list GCC versions 5+ anyway for completeness.  */
#  define _GL_ATTR_alloc_size _GL_GNUC_PREREQ (4, 3)
#  define _GL_ATTR_always_inline _GL_GNUC_PREREQ (3, 2)
#  define _GL_ATTR_artificial _GL_GNUC_PREREQ (4, 3)
#  define _GL_ATTR_cold _GL_GNUC_PREREQ (4, 3)
#  define _GL_ATTR_const _GL_GNUC_PREREQ (2, 95)
#  define _GL_ATTR_deprecated _GL_GNUC_PREREQ (3, 1)
#  define _GL_ATTR_diagnose_if 0
#  define _GL_ATTR_error _GL_GNUC_PREREQ (4, 3)
#  define _GL_ATTR_externally_visible _GL_GNUC_PREREQ (4, 1)
#  define _GL_ATTR_fallthrough _GL_GNUC_PREREQ (7, 0)
#  define _GL_ATTR_format _GL_GNUC_PREREQ (2, 7)
#  define _GL_ATTR_leaf _GL_GNUC_PREREQ (4, 6)
#  define _GL_ATTR_malloc _GL_GNUC_PREREQ (3, 0)
#  ifdef _ICC
#   define _GL_ATTR_may_alias 0
#  else
#   define _GL_ATTR_may_alias _GL_GNUC_PREREQ (3, 3)
#  endif
#  define _GL_ATTR_noinline _GL_GNUC_PREREQ (3, 1)
#  define _GL_ATTR_nonnull _GL_GNUC_PREREQ (3, 3)
#  define _GL_ATTR_nonnull_if_nonzero _GL_GNUC_PREREQ (15, 1)
#  define _GL_ATTR_nonstring _GL_GNUC_PREREQ (8, 0)
#  define _GL_ATTR_nothrow _GL_GNUC_PREREQ (3, 3)
#  define _GL_ATTR_packed _GL_GNUC_PREREQ (2, 7)
#  define _GL_ATTR_pure _GL_GNUC_PREREQ (2, 96)
#  define _GL_ATTR_reproducible _GL_GNUC_PREREQ (15, 1)
#  define _GL_ATTR_returns_nonnull _GL_GNUC_PREREQ (4, 9)
#  define _GL_ATTR_sentinel _GL_GNUC_PREREQ (4, 0)
#  define _GL_ATTR_unsequenced _GL_GNUC_PREREQ (15, 1)
#  define _GL_ATTR_unused _GL_GNUC_PREREQ (2, 7)
#  define _GL_ATTR_warn_unused_result _GL_GNUC_PREREQ (3, 4)
# endif
#endif

/* Use __has_c_attribute if available.  However, do not use with
   pre-C23 GCC, which can issue false positives if -Wpedantic.  */
#if (defined __has_c_attribute \
     && ! (_GL_GNUC_PREREQ (4, 6) \
           && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) <= 201710))
# define _GL_HAVE___HAS_C_ATTRIBUTE 1
#else
# define _GL_HAVE___HAS_C_ATTRIBUTE 0
#endif

/* Attributes in bracket syntax [[...]] vs. attributes in __attribute__((...))
   syntax, in function declarations.  There are two problems here.
   (Last tested with gcc/g++ 14 and clang/clang++ 18.)

   1) We want that the _GL_ATTRIBUTE_* can be cumulated on the same declaration
      in any order.
      =========================== foo.c = foo.cc ===========================
      __attribute__ ((__deprecated__)) [[__nodiscard__]] int bar1 (int);
      [[__nodiscard__]] __attribute__ ((__deprecated__)) int bar2 (int);
      ======================================================================
      This gives a syntax error
        - in C mode with gcc
          <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=108796>, and
        - in C++ mode with clang++ version < 16, and
        - in C++ mode, inside extern "C" {}, still in newer clang++ versions
          <https://github.com/llvm/llvm-project/issues/101990>.
 */
/* Define if, in a function declaration, the attributes in bracket syntax
   [[...]] must come before the attributes in __attribute__((...)) syntax.
   If this is defined, it is best to avoid the bracket syntax, so that the
   various _GL_ATTRIBUTE_* can be cumulated on the same declaration in any
   order.  */
#ifdef __cplusplus
# if defined __clang__
#  define _GL_BRACKET_BEFORE_ATTRIBUTE 1
# endif
#else
# if defined __GNUC__ && !defined __clang__
#  define _GL_BRACKET_BEFORE_ATTRIBUTE 1
# endif
#endif
/*
   2) We want that the _GL_ATTRIBUTE_* can be placed in a declaration
        - without 'extern', in C as well as in C++,
        - with 'extern', in C,
        - with 'extern "C"', in C++
      in the same position.  That is, we don't want to be forced to use a
      macro which arranges for the attribute to come before 'extern' in
      one case and after 'extern' in the other case, because such a macro
      would make the source code of .h files pretty ugly.
      =========================== foo.c = foo.cc ===========================
      #ifdef __cplusplus
      # define CC "C"
      #else
      # define CC
      #endif

      #define ND   [[__nodiscard__]]
      #define WUR  __attribute__((__warn_unused_result__))

      #ifdef __cplusplus
      extern "C" {
      #endif
                                        // gcc   clang  g++   clang++

      ND int foo (int);
      int ND foo (int);                 // warn  error  warn  error
      int foo ND (int);
      int foo (int) ND;                 // warn  error  warn  error

      WUR int foo (int);
      int WUR foo (int);
      int fo1 WUR (int);                // error error  error error
      int foo (int) WUR;

      #ifdef __cplusplus
      }
      #endif

                                        // gcc   clang  g++   clang++

      ND extern CC int foo (int);       //              error error
      extern CC ND int foo (int);       // error error
      extern CC int ND foo (int);       // warn  error  warn  error
      extern CC int foo ND (int);
      extern CC int foo (int) ND;       // warn  error  warn  error

      WUR extern CC int foo (int);      //              warn
      extern CC WUR int foo (int);
      extern CC int WUR foo (int);
      extern CC int foo WUR (int);      // error error  error error
      extern CC int foo (int) WUR;

      ND EXTERN_C_FUNC int foo (int);   //              error error
      EXTERN_C_FUNC ND int foo (int);
      EXTERN_C_FUNC int ND foo (int);   // warn  error  warn  error
      EXTERN_C_FUNC int foo ND (int);
      EXTERN_C_FUNC int foo (int) ND;   // warn  error  warn  error

      WUR EXTERN_C_FUNC int foo (int);  //              warn
      EXTERN_C_FUNC WUR int foo (int);
      EXTERN_C_FUNC int WUR foo (int);
      EXTERN_C_FUNC int fo2 WUR (int);  // error error  error error
      EXTERN_C_FUNC int foo (int) WUR;
      ======================================================================
      So, if we insist on using the 'extern' keyword ('extern CC' idiom):
        * If _GL_ATTRIBUTE_* expands to bracket syntax [[...]]
          in both C and C++, there is one available position:
            - between the function name and the parameter list.
        * If _GL_ATTRIBUTE_* expands to __attribute__((...)) syntax
          in both C and C++, there are several available positions:
            - before the return type,
            - between return type and function name,
            - at the end of the declaration.
        * If _GL_ATTRIBUTE_* expands to bracket syntax [[...]] in C and to
          __attribute__((...)) syntax in C++, there is no available position:
          it would need to come before 'extern' in C but after 'extern "C"'
          in C++.
        * If _GL_ATTRIBUTE_* expands to __attribute__((...)) syntax in C and
          to bracket syntax [[...]] in C++, there is one available position:
            - before the return type.
      Whereas, if we use the 'EXTERN_C_FUNC' idiom, which conditionally
      omits the 'extern' keyword:
        * If _GL_ATTRIBUTE_* expands to bracket syntax [[...]]
          in both C and C++, there are two available positions:
            - before the return type,
            - between the function name and the parameter list.
        * If _GL_ATTRIBUTE_* expands to __attribute__((...)) syntax
          in both C and C++, there are several available positions:
            - before the return type,
            - between return type and function name,
            - at the end of the declaration.
        * If _GL_ATTRIBUTE_* expands to bracket syntax [[...]] in C and to
          __attribute__((...)) syntax in C++, there is one available position:
            - before the return type.
        * If _GL_ATTRIBUTE_* expands to __attribute__((...)) syntax in C and
          to bracket syntax [[...]] in C++, there is one available position:
            - before the return type.
      The best choice is therefore to use the 'EXTERN_C_FUNC' idiom and
      put the attributes before the return type. This works regardless
      to what the _GL_ATTRIBUTE_* macros expand.
 */

/* Attributes in bracket syntax [[...]] vs. attributes in __attribute__((...))
   syntax, in static/inline function definitions.

   There are similar constraints as for function declarations.  However, here,
   we cannot omit the storage-class specifier.  Therefore, the following rule
   applies:
     * The macros
         _GL_ATTRIBUTE_CONST
         _GL_ATTRIBUTE_DEPRECATED
         _GL_ATTRIBUTE_MAYBE_UNUSED
         _GL_ATTRIBUTE_NODISCARD
         _GL_ATTRIBUTE_PURE
         _GL_ATTRIBUTE_REPRODUCIBLE
         _GL_ATTRIBUTE_UNSEQUENCED
       which may expand to bracket syntax [[...]], must come first, before the
       storage-class specifier.
     * Other _GL_ATTRIBUTE_* macros, that expand to __attribute__((...)) syntax,
       are better placed between the storage-class specifier and the return
       type.
 */

/* Attributes in bracket syntax [[...]] vs. attributes in __attribute__((...))
   syntax, in variable declarations.

   At which position can they be placed?
   (Last tested with gcc/g++ 14 and clang/clang++ 18.)

      =========================== foo.c = foo.cc ===========================
      #ifdef __cplusplus
      # define CC "C"
      #else
      # define CC
      #endif

      #define BD   [[__deprecated__]]
      #define AD   __attribute__ ((__deprecated__))

                              // gcc   clang  g++    clang++

      BD extern CC int var;   //              error  error
      extern CC BD int var;   // error error
      extern CC int BD var;   // warn  error  warn   error
      extern CC int var BD;

      AD extern CC int var;   //              warn
      extern CC AD int var;
      extern CC int AD var;
      extern CC int var AD;

      BD extern CC int z[];   //              error  error
      extern CC BD int z[];   // error error
      extern CC int BD z[];   // warn  error  warn   error
      extern CC int z1 BD [];
      extern CC int z[] BD;   // warn  error         error

      AD extern CC int z[];   //              warn
      extern CC AD int z[];
      extern CC int AD z[];
      extern CC int z2 AD []; // error error  error  error
      extern CC int z[] AD;
      ======================================================================

   * For non-array variables, the only good position is after the variable name,
     that is, at the end of the declaration.
   * For array variables, you will need to distinguish C and C++:
       - In C, before the 'extern' keyword.
       - In C++, between the 'extern "C"' and the variable's type.
 */

/* _GL_ATTRIBUTE_ALLOC_SIZE ((N)) declares that the Nth argument of the function
   is the size of the returned memory block.
   _GL_ATTRIBUTE_ALLOC_SIZE ((M, N)) declares that the Mth argument multiplied
   by the Nth argument of the function is the size of the returned memory block.
 */
/* Applies to: functions, pointer to functions, function types.  */
#ifndef _GL_ATTRIBUTE_ALLOC_SIZE
# if _GL_HAS_ATTRIBUTE (alloc_size)
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args) __attribute__ ((__alloc_size__ args))
# else
#  define _GL_ATTRIBUTE_ALLOC_SIZE(args)
# endif
#endif

/* _GL_ATTRIBUTE_ALWAYS_INLINE tells that the compiler should always inline the
   function and report an error if it cannot do so.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_ALWAYS_INLINE
# if _GL_HAS_ATTRIBUTE (always_inline)
#  define _GL_ATTRIBUTE_ALWAYS_INLINE __attribute__ ((__always_inline__))
# else
#  define _GL_ATTRIBUTE_ALWAYS_INLINE
# endif
#endif

/* _GL_ATTRIBUTE_ARTIFICIAL declares that the function is not important to show
    in stack traces when debugging.  The compiler should omit the function from
    stack traces.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_ARTIFICIAL
# if _GL_HAS_ATTRIBUTE (artificial)
#  define _GL_ATTRIBUTE_ARTIFICIAL __attribute__ ((__artificial__))
# else
#  define _GL_ATTRIBUTE_ARTIFICIAL
# endif
#endif

/* _GL_ATTRIBUTE_COLD declares that the function is rarely executed.  */
/* Applies to: functions.  */
/* Avoid __attribute__ ((cold)) on MinGW; see thread starting at
   <https://lists.gnu.org/r/emacs-devel/2019-04/msg01152.html>.
   Also, Oracle Studio 12.6 requires 'cold' not '__cold__'.  */
#ifndef _GL_ATTRIBUTE_COLD
# if _GL_HAS_ATTRIBUTE (cold) && !defined __MINGW32__
#  ifndef __SUNPRO_C
#   define _GL_ATTRIBUTE_COLD __attribute__ ((__cold__))
#  else
#   define _GL_ATTRIBUTE_COLD __attribute__ ((cold))
#  endif
# else
#  define _GL_ATTRIBUTE_COLD
# endif
#endif

/* _GL_ATTRIBUTE_CONST declares:
   It is OK for a compiler to move calls to the function and to omit
   calls to the function if another call has the same arguments or the
   result is not used.
   This attribute is safe for a function that neither depends on
   nor affects state, and always returns exactly once -
   e.g., does not raise an exception, call longjmp, or loop forever.
   (This attribute is stricter than _GL_ATTRIBUTE_PURE because the
   function cannot observe state.  It is stricter than
   _GL_ATTRIBUTE_UNSEQUENCED because the function must return exactly
   once and cannot depend on state addressed by its arguments.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_CONST
# if _GL_HAS_ATTRIBUTE (const)
#  define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
# else
#  define _GL_ATTRIBUTE_CONST _GL_ATTRIBUTE_UNSEQUENCED
# endif
#endif

/* _GL_ATTRIBUTE_DEALLOC (F, I) declares that the function returns pointers
   that can be freed by passing them as the Ith argument to the
   function F.
   _GL_ATTRIBUTE_DEALLOC_FREE declares that the function returns pointers that
   can be freed via 'free'; it can be used only after declaring 'free'.  */
/* Applies to: functions.  Cannot be used on inline functions.  */
#ifndef _GL_ATTRIBUTE_DEALLOC
# if _GL_GNUC_PREREQ (11, 0)
#  define _GL_ATTRIBUTE_DEALLOC(f, i) __attribute__ ((__malloc__ (f, i)))
# else
#  define _GL_ATTRIBUTE_DEALLOC(f, i)
# endif
#endif
/* If gnulib's <string.h> or <wchar.h> has already defined this macro, continue
   to use this earlier definition, since <stdlib.h> may not have been included
   yet.  */
#ifndef _GL_ATTRIBUTE_DEALLOC_FREE
# if defined __cplusplus && defined __GNUC__ && !defined __clang__
/* Work around GCC bug <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=108231> */
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC ((void (*) (void *)) free, 1)
# else
#  define _GL_ATTRIBUTE_DEALLOC_FREE \
     _GL_ATTRIBUTE_DEALLOC (free, 1)
# endif
#endif

/* _GL_ATTRIBUTE_DEPRECATED: Declares that an entity is deprecated.
   The compiler may warn if the entity is used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: namespace, class, template specialization.  */
#ifndef _GL_ATTRIBUTE_DEPRECATED
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if _GL_HAVE___HAS_C_ATTRIBUTE
#   if __has_c_attribute (__deprecated__)
#    define _GL_ATTRIBUTE_DEPRECATED [[__deprecated__]]
#   endif
#  endif
# endif
# if !defined _GL_ATTRIBUTE_DEPRECATED && _GL_HAS_ATTRIBUTE (deprecated)
#  define _GL_ATTRIBUTE_DEPRECATED __attribute__ ((__deprecated__))
# endif
# ifndef _GL_ATTRIBUTE_DEPRECATED
#  define _GL_ATTRIBUTE_DEPRECATED
# endif
#endif

/* _GL_ATTRIBUTE_ERROR(msg) requests an error if a function is called and
   the function call is not optimized away.
   _GL_ATTRIBUTE_WARNING(msg) requests a warning if a function is called and
   the function call is not optimized away.  */
/* Applies to: functions.  */
#if !(defined _GL_ATTRIBUTE_ERROR && defined _GL_ATTRIBUTE_WARNING)
# if _GL_HAS_ATTRIBUTE (error)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__error__ (msg)))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__warning__ (msg)))
# elif _GL_HAS_ATTRIBUTE (diagnose_if)
#  define _GL_ATTRIBUTE_ERROR(msg) __attribute__ ((__diagnose_if__ (1, msg, "error")))
#  define _GL_ATTRIBUTE_WARNING(msg) __attribute__ ((__diagnose_if__ (1, msg, "warning")))
# else
#  define _GL_ATTRIBUTE_ERROR(msg)
#  define _GL_ATTRIBUTE_WARNING(msg)
# endif
#endif

/* _GL_ATTRIBUTE_EXTERNALLY_VISIBLE declares that the entity should remain
   visible to debuggers etc., even with '-fwhole-program'.  */
/* Applies to: functions, variables.  */
#ifndef _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# if _GL_HAS_ATTRIBUTE (externally_visible)
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE __attribute__ ((externally_visible))
# else
#  define _GL_ATTRIBUTE_EXTERNALLY_VISIBLE
# endif
#endif

/* _GL_ATTRIBUTE_FALLTHROUGH declares that it is not a programming mistake if
   the control flow falls through to the immediately following 'case' or
   'default' label.  The compiler should not warn in this case.  */
/* Applies to: Empty statement (;), inside a 'switch' statement.  */
/* Always expands to something.  */
#ifndef _GL_ATTRIBUTE_FALLTHROUGH
# if _GL_HAVE___HAS_C_ATTRIBUTE
#  if __has_c_attribute (__fallthrough__)
#   define _GL_ATTRIBUTE_FALLTHROUGH [[__fallthrough__]]
#  endif
# endif
# if !defined _GL_ATTRIBUTE_FALLTHROUGH && _GL_HAS_ATTRIBUTE (fallthrough)
#  define _GL_ATTRIBUTE_FALLTHROUGH __attribute__ ((__fallthrough__))
# endif
# ifndef _GL_ATTRIBUTE_FALLTHROUGH
#  define _GL_ATTRIBUTE_FALLTHROUGH ((void) 0)
# endif
#endif

/* _GL_ATTRIBUTE_FORMAT ((ARCHETYPE, STRING-INDEX, FIRST-TO-CHECK))
   declares that the STRING-INDEXth function argument is a format string of
   style ARCHETYPE, which is one of:
     printf, gnu_printf
     scanf, gnu_scanf,
     strftime, gnu_strftime,
     strfmon,
   or the same thing prefixed and suffixed with '__'.
   If FIRST-TO-CHECK is not 0, arguments starting at FIRST-TO_CHECK
   are suitable for the format string.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_FORMAT
# if _GL_HAS_ATTRIBUTE (format)
#  define _GL_ATTRIBUTE_FORMAT(spec) __attribute__ ((__format__ spec))
# else
#  define _GL_ATTRIBUTE_FORMAT(spec)
# endif
#endif

/* _GL_ATTRIBUTE_LEAF declares that if the function is called from some other
   compilation unit, it executes code from that unit only by return or by
   exception handling.  This declaration lets the compiler optimize that unit
   more aggressively.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_LEAF
# if _GL_HAS_ATTRIBUTE (leaf)
#  define _GL_ATTRIBUTE_LEAF __attribute__ ((__leaf__))
# else
#  define _GL_ATTRIBUTE_LEAF
# endif
#endif

/* _GL_ATTRIBUTE_MALLOC declares that the function returns a pointer to freshly
   allocated memory.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_MALLOC
# if _GL_HAS_ATTRIBUTE (malloc)
#  define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
# else
#  define _GL_ATTRIBUTE_MALLOC
# endif
#endif

/* _GL_ATTRIBUTE_MAY_ALIAS declares that pointers to the type may point to the
   same storage as pointers to other types.  Thus this declaration disables
   strict aliasing optimization.  */
/* Applies to: types.  */
/* Oracle Studio 12.6 mishandles may_alias despite __has_attribute OK.  */
#ifndef _GL_ATTRIBUTE_MAY_ALIAS
# if _GL_HAS_ATTRIBUTE (may_alias) && !defined __SUNPRO_C
#  define _GL_ATTRIBUTE_MAY_ALIAS __attribute__ ((__may_alias__))
# else
#  define _GL_ATTRIBUTE_MAY_ALIAS
# endif
#endif

/* _GL_ATTRIBUTE_MAYBE_UNUSED declares that it is not a programming mistake if
   the entity is not used.  The compiler should not warn if the entity is not
   used.  */
/* Applies to:
     - function, variable,
     - struct, union, struct/union member,
     - enumeration, enumeration item,
     - typedef,
   in C++ also: class.  */
/* In C++ and C23, this is spelled [[__maybe_unused__]].
   GCC's syntax is __attribute__ ((__unused__)).
   clang supports both syntaxes.  Except that with clang ≥ 6, < 10, in C++ mode,
   __has_c_attribute (__maybe_unused__) yields true but the use of
   [[__maybe_unused__]] nevertheless produces a warning.  */
#ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if defined __clang__ && defined __cplusplus
#   if !defined __apple_build_version__ && __clang_major__ >= 10
#    define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#   endif
#  elif _GL_HAVE___HAS_C_ATTRIBUTE
#   if __has_c_attribute (__maybe_unused__)
#    define _GL_ATTRIBUTE_MAYBE_UNUSED [[__maybe_unused__]]
#   endif
#  endif
# endif
# ifndef _GL_ATTRIBUTE_MAYBE_UNUSED
#  define _GL_ATTRIBUTE_MAYBE_UNUSED _GL_ATTRIBUTE_UNUSED
# endif
#endif
/* Alternative spelling of this macro, for convenience and for
   compatibility with glibc/include/libc-symbols.h.  */
#define _GL_UNUSED _GL_ATTRIBUTE_MAYBE_UNUSED
/* Earlier spellings of this macro.  */
#define _UNUSED_PARAMETER_ _GL_ATTRIBUTE_MAYBE_UNUSED

/* _GL_ATTRIBUTE_NODISCARD declares that the caller of the function should not
   discard the return value.  The compiler may warn if the caller does not use
   the return value, unless the caller uses something like ignore_value.  */
/* Applies to: function, enumeration, class.  */
#ifndef _GL_ATTRIBUTE_NODISCARD
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if defined __clang__ && defined __cplusplus
  /* With clang up to 15.0.6 (at least), in C++ mode, [[__nodiscard__]] produces
     a warning.
     The 1000 below means a yet unknown threshold.  When clang++ version X
     starts supporting [[__nodiscard__]] without warning about it, you can
     replace the 1000 with X.  */
#   if __clang_major__ >= 1000
#    define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#   endif
#  elif _GL_HAVE___HAS_C_ATTRIBUTE
#   if __has_c_attribute (__nodiscard__)
#    define _GL_ATTRIBUTE_NODISCARD [[__nodiscard__]]
#   endif
#  endif
# endif
# if !defined _GL_ATTRIBUTE_NODISCARD && _GL_HAS_ATTRIBUTE (warn_unused_result)
#  define _GL_ATTRIBUTE_NODISCARD __attribute__ ((__warn_unused_result__))
# endif
# ifndef _GL_ATTRIBUTE_NODISCARD
#  define _GL_ATTRIBUTE_NODISCARD
# endif
#endif

/* _GL_ATTRIBUTE_NOINLINE tells that the compiler should not inline the
   function.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NOINLINE
# if _GL_HAS_ATTRIBUTE (noinline)
#  define _GL_ATTRIBUTE_NOINLINE __attribute__ ((__noinline__))
# else
#  define _GL_ATTRIBUTE_NOINLINE
# endif
#endif

/* _GL_ATTRIBUTE_NONNULL ((N1, N2,...)) declares that the arguments N1, N2,...
   must not be NULL.
   _GL_ATTRIBUTE_NONNULL () declares that all pointer arguments must not be
   null.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NONNULL
# if _GL_HAS_ATTRIBUTE (nonnull)
#  define _GL_ATTRIBUTE_NONNULL(args) __attribute__ ((__nonnull__ args))
# else
#  define _GL_ATTRIBUTE_NONNULL(args)
# endif
#endif

/* _GL_ATTRIBUTE_NONNULL_IF_NONZERO (NP, NI) declares that the argument NP
   (a pointer) must not be NULL if the argument NI (an integer) is != 0.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_NONNULL_IF_NONZERO
# if _GL_HAS_ATTRIBUTE (nonnull_if_nonzero)
#  define _GL_ATTRIBUTE_NONNULL_IF_NONZERO(np, ni) __attribute__ ((__nonnull_if_nonzero__ (np, ni)))
# else
#  define _GL_ATTRIBUTE_NONNULL_IF_NONZERO(np, ni)
# endif
#endif

/* _GL_ATTRIBUTE_NONSTRING declares that the contents of a character array is
   not meant to be NUL-terminated.  */
/* Applies to: struct/union members and variables that are arrays of element
   type '[[un]signed] char'.  */
#ifndef _GL_ATTRIBUTE_NONSTRING
# if _GL_HAS_ATTRIBUTE (nonstring)
#  define _GL_ATTRIBUTE_NONSTRING __attribute__ ((__nonstring__))
# else
#  define _GL_ATTRIBUTE_NONSTRING
# endif
#endif

/* There is no _GL_ATTRIBUTE_NORETURN; use _Noreturn instead.  */

/* _GL_ATTRIBUTE_NOTHROW declares that the function does not throw exceptions.
 */
/* Applies to: functions.  */
/* After a function's parameter list, this attribute must come first, before
   other attributes.  */
#ifndef _GL_ATTRIBUTE_NOTHROW
# if defined __cplusplus
#  if _GL_GNUC_PREREQ (2, 8) || __clang_major__ >= 4
#   if __cplusplus >= 201103L
#    define _GL_ATTRIBUTE_NOTHROW noexcept (true)
#   else
#    define _GL_ATTRIBUTE_NOTHROW throw ()
#   endif
#  else
#   define _GL_ATTRIBUTE_NOTHROW
#  endif
# else
#  if _GL_HAS_ATTRIBUTE (nothrow)
#   define _GL_ATTRIBUTE_NOTHROW __attribute__ ((__nothrow__))
#  else
#   define _GL_ATTRIBUTE_NOTHROW
#  endif
# endif
#endif

/* _GL_ATTRIBUTE_PACKED declares:
   For struct members: The member has the smallest possible alignment.
   For struct, union, class: All members have the smallest possible alignment,
   minimizing the memory required.  */
/* Applies to: struct members, struct, union,
   in C++ also: class.  */
#ifndef _GL_ATTRIBUTE_PACKED
/* Oracle Studio 12.6 miscompiles code with __attribute__ ((__packed__)) despite
   __has_attribute OK.  */
# if _GL_HAS_ATTRIBUTE (packed) && !defined __SUNPRO_C
#  define _GL_ATTRIBUTE_PACKED __attribute__ ((__packed__))
# else
#  define _GL_ATTRIBUTE_PACKED
# endif
#endif

/* _GL_ATTRIBUTE_PURE declares:
   It is OK for a compiler to move calls to the function and to omit
   calls to the function if another call has the same arguments or the
   result is not used, and if observable state is the same.
   This attribute is safe for a function that does not affect observable state
   and always returns exactly once.
   (This attribute is looser than _GL_ATTRIBUTE_CONST because the function
   can depend on observable state.  It is stricter than
   _GL_ATTRIBUTE_REPRODUCIBLE because the function must return exactly
   once and cannot affect state addressed by its arguments.)  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_PURE
# if _GL_HAS_ATTRIBUTE (pure)
#  define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define _GL_ATTRIBUTE_PURE _GL_ATTRIBUTE_REPRODUCIBLE
# endif
#endif

/* _GL_ATTRIBUTE_REPRODUCIBLE declares:
   It is OK for a compiler to move calls to the function and to omit duplicate
   calls to the function with the same arguments, so long as the state
   addressed by its arguments is the same and is updated in time for
   the rest of the program.
   This attribute is safe for a function that is effectless and idempotent; see
   ISO C 23 § 6.7.12.7 for a definition of these terms.
   (This attribute is looser than _GL_ATTRIBUTE_UNSEQUENCED because
   the function need not be stateless and idempotent.  It is looser
   than _GL_ATTRIBUTE_PURE because the function need not return
   exactly once and can affect state addressed by its arguments.)
   See also <https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2956.htm> and
   <https://stackoverflow.com/questions/76847905/>.
   ATTENTION! Efforts are underway to change the meaning of this attribute.
   See <https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3424.htm>.  */
/* Applies to: functions, pointer to functions, function types.  */
#ifndef _GL_ATTRIBUTE_REPRODUCIBLE
/* This may be revisited when gcc and clang support [[reproducible]] or possibly
   __attribute__ ((__reproducible__)).  */
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if _GL_HAS_ATTRIBUTE (reproducible)
#   define _GL_ATTRIBUTE_REPRODUCIBLE [[reproducible]]
#  endif
# endif
# ifndef _GL_ATTRIBUTE_REPRODUCIBLE
#  define _GL_ATTRIBUTE_REPRODUCIBLE
# endif
#endif

/* _GL_ATTRIBUTE_RETURNS_NONNULL declares that the function's return value is
   a non-NULL pointer.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_RETURNS_NONNULL
# if _GL_HAS_ATTRIBUTE (returns_nonnull)
#  define _GL_ATTRIBUTE_RETURNS_NONNULL __attribute__ ((__returns_nonnull__))
# else
#  define _GL_ATTRIBUTE_RETURNS_NONNULL
# endif
#endif

/* _GL_ATTRIBUTE_SENTINEL(pos) declares that the variadic function expects a
   trailing NULL argument.
   _GL_ATTRIBUTE_SENTINEL () - The last argument is NULL (requires C99).
   _GL_ATTRIBUTE_SENTINEL ((N)) - The (N+1)st argument from the end is NULL.  */
/* Applies to: functions.  */
#ifndef _GL_ATTRIBUTE_SENTINEL
# if _GL_HAS_ATTRIBUTE (sentinel)
#  define _GL_ATTRIBUTE_SENTINEL(pos) __attribute__ ((__sentinel__ pos))
# else
#  define _GL_ATTRIBUTE_SENTINEL(pos)
# endif
#endif

/* _GL_ATTRIBUTE_UNSEQUENCED declares:
   It is OK for a compiler to move calls to the function and to omit duplicate
   calls to the function with the same arguments, so long as the state
   addressed by its arguments is the same.
   This attribute is safe for a function that is effectless, idempotent,
   stateless, and independent; see ISO C 23 § 6.7.12.7 for a definition of
   these terms.
   (This attribute is stricter than _GL_ATTRIBUTE_REPRODUCIBLE because
   the function must be stateless and independent.  It is looser than
   _GL_ATTRIBUTE_CONST because the function need not return exactly
   once and can depend on state addressed by its arguments.)
   See also <https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2956.htm> and
   <https://stackoverflow.com/questions/76847905/>.
   ATTENTION! Efforts are underway to change the meaning of this attribute.
   See <https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3424.htm>.  */
/* Applies to: functions, pointer to functions, function types.  */
#ifndef _GL_ATTRIBUTE_UNSEQUENCED
/* This may be revisited when gcc and clang support [[unsequenced]] or possibly
   __attribute__ ((__unsequenced__)).  */
# ifndef _GL_BRACKET_BEFORE_ATTRIBUTE
#  if _GL_HAS_ATTRIBUTE (unsequenced)
#   define _GL_ATTRIBUTE_UNSEQUENCED [[unsequenced]]
#  endif
# endif
# ifndef _GL_ATTRIBUTE_UNSEQUENCED
#  define _GL_ATTRIBUTE_UNSEQUENCED
# endif
#endif

/* A helper macro.  Don't use it directly.  */
#ifndef _GL_ATTRIBUTE_UNUSED
# if _GL_HAS_ATTRIBUTE (unused)
#  define _GL_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define _GL_ATTRIBUTE_UNUSED
# endif
#endif


/* _GL_UNUSED_LABEL; declares that it is not a programming mistake if the
   immediately preceding label is not used.  The compiler should not warn
   if the label is not used.  */
/* Applies to: label (both in C and C++).  */
/* Note that g++ < 4.5 does not support the '__attribute__ ((__unused__)) ;'
   syntax.  But clang does.  */
#ifndef _GL_UNUSED_LABEL
# if !(defined __cplusplus && !_GL_GNUC_PREREQ (4, 5)) || defined __clang__
#  define _GL_UNUSED_LABEL _GL_ATTRIBUTE_UNUSED
# else
#  define _GL_UNUSED_LABEL
# endif
#endif

/* The following attributes enable detection of multithread-safety problems
   and resource leaks at compile-time, by clang ≥ 15, when the warning option
   -Wthread-safety is enabled.  For usage, see
   <https://clang.llvm.org/docs/ThreadSafetyAnalysis.html>.  */
#ifndef _GL_ATTRIBUTE_CAPABILITY_TYPE
# if __clang_major__ >= 15
#  define _GL_ATTRIBUTE_CAPABILITY_TYPE(concept) \
     __attribute__ ((__capability__ (concept)))
# else
#  define _GL_ATTRIBUTE_CAPABILITY_TYPE(concept)
# endif
#endif
#ifndef _GL_ATTRIBUTE_ACQUIRE_CAPABILITY
# if __clang_major__ >= 15
#  define _GL_ATTRIBUTE_ACQUIRE_CAPABILITY(resource) \
     __attribute__ ((__acquire_capability__ (resource)))
# else
#  define _GL_ATTRIBUTE_ACQUIRE_CAPABILITY(resource)
# endif
#endif
#ifndef _GL_ATTRIBUTE_RELEASE_CAPABILITY
# if __clang_major__ >= 15
#  define _GL_ATTRIBUTE_RELEASE_CAPABILITY(resource) \
     __attribute__ ((__release_capability__ (resource)))
# else
#  define _GL_ATTRIBUTE_RELEASE_CAPABILITY(resource)
# endif
#endif


/* In C++, there is the concept of "language linkage", that encompasses
    name mangling and function calling conventions.
    The following macros start and end a block of "C" linkage.  */
#ifdef __cplusplus
# define _GL_BEGIN_C_LINKAGE extern "C" {
# define _GL_END_C_LINKAGE }
#else
# define _GL_BEGIN_C_LINKAGE
# define _GL_END_C_LINKAGE
#endif


/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* _GL_CMP (n1, n2) performs a three-valued comparison on n1 vs. n2, where
   n1 and n2 are expressions without side effects, that evaluate to real
   numbers (excluding NaN).
   It returns
     1  if n1 > n2
     0  if n1 == n2
     -1 if n1 < n2
   The naïve code   (n1 > n2 ? 1 : n1 < n2 ? -1 : 0)  produces a conditional
   jump with nearly all GCC versions up to GCC 10.
   This variant     (n1 < n2 ? -1 : n1 > n2)  produces a conditional with many
   GCC versions up to GCC 9.
   The better code  (n1 > n2) - (n1 < n2)  from Hacker's Delight § 2-9
   avoids conditional jumps in all GCC versions >= 3.4.  */
#define _GL_CMP(n1, n2) (((n1) > (n2)) - ((n1) < (n2)))


/* Define to `int' if <sys/types.h> does not define. */
#define mode_t int

/* Define as a signed integer type capable of holding a process identifier. */
#ifdef _WIN64
#define pid_t __int64
#else
#define pid_t int
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported only directly.  */
#define restrict /**/
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define as a signed type of the same size as size_t. */
#ifdef _WIN64
# define ssize_t long long
#else
# define ssize_t long
#endif

#if !(defined __cplusplus \
      ? 1 \
      : (defined __clang__ \
         ? __STDC_VERSION__ >= 202000L && __clang_major__ >= 15 \
         : (defined __GNUC__ \
            ? __STDC_VERSION__ >= 202000L && __GNUC__ >= 13 \
            : defined HAVE_C_BOOL)))
# if !defined __cplusplus && !defined __bool_true_false_are_defined
#  if HAVE_STDBOOL_H
#   include <stdbool.h>
#  else
#   if defined __SUNPRO_C
#    error "<stdbool.h> is not usable with this configuration. To make it usable, add -D_STDC_C99= to $CC."
#   else
#    error "<stdbool.h> does not exist on this platform. Use gnulib module 'stdbool-c99' instead of gnulib module 'stdbool'."
#   endif
#  endif
# endif
# if !true
#  define true (!false)
# endif
#endif

#if defined __GNUC__ && __GNUC__ >= 15 && !defined __clang__
# pragma GCC diagnostic pop
#endif

