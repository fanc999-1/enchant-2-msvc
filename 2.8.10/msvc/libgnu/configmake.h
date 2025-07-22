/* DO NOT EDIT! GENERATED AUTOMATICALLY! */
#if HAVE_WINSOCK2_H
# include <winsock2.h> /* avoid mingw pollution on DATADIR */
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

#define PREFIX "c:\\vs14.0\\" ENCHANT_PLAT
#define EXEC_PREFIX PREFIX
#define BINDIR PREFIX "\\bin"
#define SBINDIR PREFIX "\\sbin"
#define LIBEXECDIR PREFIX "\\libexec"
#define DATAROOTDIR PREFIX "\\share"
#define DATADIR PREFIX "\\share"
#define SYSCONFDIR PREFIX "\\etc"
#define SHAREDSTATEDIR PREFIX "\\com"
#define LOCALSTATEDIR PREFIX "\\var"
#define RUNSTATEDIR PREFIX "\\var\\run"
#define INCLUDEDIR PREFIX "\\include"
#define OLDINCLUDEDIR "C:\\msys64\\usr\\include"
#define DOCDIR PREFIX "\\share\\doc\\enchant"
#define INFODIR PREFIX "\\share\\info"
#define HTMLDIR PREFIX "\\share\\doc\\enchant"
#define DVIDIR PREFIX "\\share\\doc\\enchant"
#define PDFDIR PREFIX "\\share\\doc\\enchant"
#define PSDIR PREFIX "\\share\\doc\\enchant"
#define LIBDIR PREFIX "\\lib"
#define LISPDIR PREFIX "\\share\\emacs\\site-lisp"
#define LOCALEDIR PREFIX "\\share\\locale"
#define MANDIR PREFIX "\\share\\man"
#define PKGDATADIR PREFIX "\\share\\enchant"
#define PKGINCLUDEDIR PREFIX "\\include\\enchant"
#define PKGLIBDIR PREFIX "\\lib\\enchant"
#define PKGLIBEXECDIR PREFIX "\\libexec\\enchant"

