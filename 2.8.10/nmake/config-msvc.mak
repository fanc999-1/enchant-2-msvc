# NMake Makefile portion for enabling features for Windows builds

# You may change these lines to customize the .lib files that will be linked to

# Please do not change anything beneath this line unless maintaining the NMake Makefiles
# Bare minimum features and sources built into libiconv on Windows

ENCHANT_MAJOR_VERSION = 2
ENCHANT_VERSION = $(ENCHANT_MAJOR_VERSION).8.10

!ifndef GLIB_DIR
GLIB_DIR=$(PREFIX)
!endif
!ifndef GLIB_INCLUDEDIR
GLIB_INCLUDEDIR=$(GLIB_DIR)\include
!endif
!ifndef GLIB_LIBDIR
GLIB_LIBDIR=$(GLIB_DIR)\lib
!endif
!ifndef GLIB_BINDIR
GLIB_BINDIR=$(GLIB_DIR)\bin
!endif

!ifndef HUNSPELL_DIR
HUNSPELL_DIR=$(PREFIX)
!endif
!ifndef HUNSPELL_INCLUDEDIR
HUNSPELL_INCLUDEDIR=$(HUNSPELL_DIR)\include
!endif
!ifndef HUNSPELL_LIBDIR
HUNSPELL_LIBDIR=$(HUNSPELL_DIR)\lib
!endif
!ifndef HUNSPELL_BINDIR
HUNSPELL_BINDIR=$(HUNSPELL_DIR)\bin
!endif

# For Windows 10 or later
BASE_DEFINES =	\
	/DHAVE_CONFIG_H \
	/FIconfig.h	\
	$(CFLAGS)

LIBGNU_DEFINES =	\
	$(BASE_DEFINES)	\
	/DNO_XMALLOC	\
	/DIN_LIBRARY	\
	/DENABLE_COSTLY_RELOCATABLE	\
	/DPIC	\
	/DDLL_EXPORT	\
	/DHAVE_CONFIG_H	\
	/D_CRT_SECURE_NO_WARNINGS	\
	/D_CRT_NONSTDC_NO_WARNINGS	\
	/D_WIN32_WINNT=0x0A00	\
	/wd4273	\
	/DINSTALLDIR=BINDIR	\
	/FIconfigmake.h

ENCHANT_BASE_DEFINES =	\
	/DENCHANT_MAJOR_VERSION=\"$(ENCHANT_MAJOR_VERSION)\"	\
	$(BASE_DEFINES)	

LIBENCHANT_DEFINES =	\
	/D_ENCHANT_BUILD=1	\
	/DENCHANT_VERSION_STRING=\"$(ENCHANT_VERSION)\"	\
	/DG_LOG_DOMAIN=\"libenchant\"	\
	$(ENCHANT_BASE_DEFINES)

LIBGNU_INCLUDES =	\
	/I..\msvc\libgnu	\
	/I..\libgnu	\
	/I..\msvc

LIBENCHANT_INCLUDES = \
	/I..\msvc\lib	\
	/I..\lib	\
	$(LIBGNU_INCLUDES)	\
	/I$(GLIB_INCLUDEDIR)\glib-2.0	\
	/I$(GLIB_LIBDIR)\glib-2.0\include

ENCHANT_PROGRAMS_INCLUDES =	\
	/I..\src	\
	$(LIBENCHANT_INCLUDES)

ENCHANT_HUNSPELL_INCLUDES =	\
	$(LIBENCHANT_INCLUDES)	\
	/I$(HUNSPELL_INCLUDEDIR)\hunspell

LIBGNU_LIB = vs$(VSVER)\$(CFG)\$(PLAT)\gnu.lib
ENCHANT_DLL = vs$(VSVER)\$(CFG)\$(PLAT)\enchant-$(ENCHANT_MAJOR_VERSION)-2.dll
ENCHANT_LIB = $(ENCHANT_DLL:-2.dll=.lib)
ENCHANT_EXE = $(ENCHANT_DLL:-2.dll=.exe)
ENCHANT_LSMOD_EXE = vs$(VSVER)\$(CFG)\$(PLAT)\enchant-lsmod-$(ENCHANT_MAJOR_VERSION).exe
ENCHANT_HUNSPELL_DLL = vs$(VSVER)\$(CFG)\$(PLAT)\enchant_hunspell.dll

ENCHANT_GLIB_DEPS = gobject-2.0.lib gmodule-2.0.lib glib-2.0.lib

ENCHANT_TOOLS = $(ENCHANT_EXE) $(ENCHANT_LSMOD_EXE)
ENCHANT_PROVIDERS = $(ENCHANT_HUNSPELL_DLL)
