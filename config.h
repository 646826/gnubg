/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if you want to disable the SIMD CPU instruction test */
/* #undef DISABLE_SIMD_TEST */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* The package name, for gettext */
#define GETTEXT_PACKAGE "gnubg"

/* Define if you wish to use glib threads */
#define GLIB_THREADS 1

/* Define if you want to disable deprecated gtk functions */
/* #undef GTK_DISABLE_DEPRECATED */

/* Define if you want to disable deprecated glib functions */
/* #undef G_DISABLE_DEPRECATED */

/* Support Altivec instructions */
/* #undef HAVE_ALTIVEC */

/* Define if you have Apple CoreAudio */
/* #undef HAVE_APPLE_COREAUDIO */

/* Define if you have Apple QuickTime */
/* #undef HAVE_APPLE_QUICKTIME */

/* Support AVX (Advanced Vector Extensions) instructions */
#define HAVE_AVX /**/

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define if you want to use libcairo */
#define HAVE_CAIRO 1

/* Define if you want to use gstreamer */
/* #undef HAVE_CANBERRA */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the declaration of `signbit', and to 0 if you
   don't. */
#define HAVE_DECL_SIGNBIT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if you have freetype2 */
#define HAVE_FREETYPE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the <GL/glx.h> header file. */
/* #undef HAVE_GL_GLX_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `gmp' library (-lgmp). */
/* #undef HAVE_LIBGMP */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define if you have libpng */
#define HAVE_LIBPNG 1

/* Define if you have libreadline */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <mcheck.h> header file. */
#define HAVE_MCHECK_H 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Support mmx instructions */
#define HAVE_MMX /**/

/* Define to 1 if you have the `mtrace' function. */
#define HAVE_MTRACE 1

/* Define if you want to use pangocairo */
#define HAVE_PANGOCAIRO 1

/* Define to 1 if you have the `random' function. */
#define HAVE_RANDOM 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigvec' function. */
/* #undef HAVE_SIGVEC */

/* Define if the system supports AF_LOCAL sockets. */
#define HAVE_SOCKETS 1

/* Support SSE (Streaming SIMD Extensions) instructions */
#define HAVE_SSE /**/

/* Support SSE2 (Streaming SIMD Extensions 2) instructions */
#define HAVE_SSE2 /**/

/* Support SSE3 (Streaming SIMD Extensions 3) instructions */
#define HAVE_SSE3 /**/

/* Support SSSE4.1 (Streaming SIMD Extensions 4.1) instructions */
#define HAVE_SSE4_1 /**/

/* Support SSSE4.2 (Streaming SIMD Extensions 4.2) instructions */
#define HAVE_SSE4_2 /**/

/* Support SSSE3 (Supplemental Streaming SIMD Extensions 3) instructions */
#define HAVE_SSSE3 /**/

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* maximum number of evaluation threads */
/* #undef MAX_NUMTHREADS */

/* Needed for now on recent Ubuntu releases */
#define NO_OVERLAYSCROLLBARS 1

/* Name of package */
#define PACKAGE "gnubg"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnubg@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU Backgammon"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU Backgammon 1.00.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gnubg"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://www.gnu.org/software/gnubg/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.00.0"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Define if using Apple OpenGL */
/* #undef USE_APPLE_OPENGL */

/* Define if you want to compile with AVX support */
/* #undef USE_AVX */

/* Define if you want to use the 3d boards */
/* #undef USE_BOARD3D */

/* Define if you want extended MatchID support */
#define USE_EXTENDEDMATCHID 1

/* Define if you want to use the gtk gui */
#define USE_GTK 1

/* Define if you want to have multithread support */
#define USE_MULTITHREAD 1

/* Define if you want to use Python inside gnubg */
/* #undef USE_PYTHON */

/* Define if you want to compile with SIMD support */
#define USE_SIMD_INSTRUCTIONS 1

/* Define if you want to use sqlite */
#define USE_SQLITE 1

/* Define if you want to compile with SSE2 support */
#define USE_SSE2 1

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
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
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
#define VERSION "1.00.0"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
