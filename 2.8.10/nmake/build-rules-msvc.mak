# NMake Makefile portion for compilation rules
# Items in here should not need to be edited unless
# one is maintaining the NMake build files.  The format
# of NMake Makefiles here are different from the GNU
# Makefiles.  Please see the comments about these formats.

# Inference rules for compiling the .obj files.
# Used for libs and programs with more than a single source file.
# Format is as follows
# (all dirs must have a trailing '\'):
#
# {$(srcdir)}.$(srcext){$(destdir)}.obj::
# 	$(CC)|$(CXX) $(cflags) /Fo$(destdir) /c @<<
# $<
# <<

{..\libgnu\}.c{vs$(VSVER)\$(CFG)\$(PLAT)\libgnu\}.obj::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\libgnu\ md vs$(VSVER)\$(CFG)\$(PLAT)\libgnu
	$(CC) $(LIBGNU_INCLUDES) $(LIBGNU_DEFINES) /Fovs$(VSVER)\$(CFG)\$(PLAT)\libgnu\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\libgnu\ /c @<<
$<
<<

{..\lib\}.c{vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\}.obj::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ md vs$(VSVER)\$(CFG)\$(PLAT)\libenchant
	$(CC) $(LIBENCHANT_INCLUDES) $(LIBENCHANT_DEFINES) /Fovs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /c @<<
$<
<<

{vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\}.c{vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\}.obj::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ md vs$(VSVER)\$(CFG)\$(PLAT)\libenchant
	$(CC) $(LIBENCHANT_INCLUDES) $(LIBENCHANT_DEFINES) /Fovs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /c @<<
$<
<<

{..\lib\}.vala{vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\}.c::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ md vs$(VSVER)\$(CFG)\$(PLAT)\libenchant
	$(CC) $(LIBINTL_INCLUDES) $(GETTEXT_RUNTIME_CFLAGS) /Fovs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\libenchant\ /c @<<
$<
<<

{..\src\}.c{vs$(VSVER)\$(CFG)\$(PLAT)\programs\}.obj::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\programs\ md vs$(VSVER)\$(CFG)\$(PLAT)\programs
	$(CC) $(ENCHANT_PROGRAMS_INCLUDES) $(ENCHANT_BASE_DEFINES) /Fovs$(VSVER)\$(CFG)\$(PLAT)\programs\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\programs\ /c @<<
$<
<<

{vs$(VSVER)\$(CFG)\$(PLAT)\programs\}.c{vs$(VSVER)\$(CFG)\$(PLAT)\programs\}.obj::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\programs\ md vs$(VSVER)\$(CFG)\$(PLAT)\programs
	$(CC) $(ENCHANT_PROGRAMS_INCLUDES) $(ENCHANT_BASE_DEFINES) /Fovs$(VSVER)\$(CFG)\$(PLAT)\programs\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\programs\ /c @<<
$<
<<

{..\src\}.vala{vs$(VSVER)\$(CFG)\$(PLAT)\programs\}.c::
	@if not exist vs$(VSVER)\$(CFG)\$(PLAT)\programs\ md vs$(VSVER)\$(CFG)\$(PLAT)\programs
	$(CC) $(LIBINTL_INCLUDES) $(GETTEXT_RUNTIME_CFLAGS) /Fovs$(VSVER)\$(CFG)\$(PLAT)\programs\ /Fdvs$(VSVER)\$(CFG)\$(PLAT)\programs\ /c @<<
$<
<<

vs$(VSVER)\$(CFG)\$(PLAT)\providers\enchant_hunspell.obj: ..\providers\enchant_hunspell.cpp
	@if not exist $(@D)\ md $(@D)
	$(CXX) /EHsc $(ENCHANT_HUNSPELL_INCLUDES) $(BASE_DEFINES) /Fo$(@D)\ /Fd$(@D)\ /c $**

vs$(VSVER)\$(CFG)\$(PLAT)\providers\enchant_nuspell.obj: ..\providers\enchant_nuspell.cpp
	@if not exist $(@D)\ md $(@D)
	$(CXX) /EHsc /std:c++17 $(ENCHANT_NUSPELL_INCLUDES) $(BASE_DEFINES) /Fo$(@D)\ /Fd$(@D)\ /c $**

# Inference rules for building the test programs
# Used for programs with a single source file.
# Format is as follows
# (all dirs must have a trailing '\'):
#
# {$(srcdir)}.$(srcext){$(destdir)}.exe::
# 	$(CC)|$(CXX) $(cflags) $< /Fo$*.obj  /Fe$@ [/link $(linker_flags) $(dep_libs)]

# Rules for building .lib files
$(LIBGNU_LIB): $(libgnu_OBJS)
$(ENCHANT_LIB): $(ENCHANT_DLL)

$(LIBGNU_LIB):
	lib $(ARFLAGS) $** /out:$@

# Rules for linking DLLs
# Format is as follows (the mt command is needed for MSVC 2005/2008 builds):
# $(dll_name_with_path): $(dependent_libs_files_objects_and_items)
#	link /DLL [$(linker_flags)] [$(dependent_libs)] [/def:$(def_file_if_used)] [/implib:$(lib_name_if_needed)] -out:$@ @<<
# $(dependent_objects)
# <<
# 	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;2
$(ENCHANT_DLL): $(libenchant_objs) $(LIBGNU_LIB)
	link /DLL $(LDFLAGS) -out:$@ $** /implib:$(ENCHANT_LIB) /libpath:$(GLIB_LIBDIR) $(ENCHANT_GLIB_DEPS)
	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;2

$(ENCHANT_HUNSPELL_DLL): $(ENCHANT_LIB) $(LIBGNU_LIB) vs$(VSVER)\$(CFG)\$(PLAT)\providers\enchant_hunspell.obj
	link /DLL $(LDFLAGS) -out:$@ $** /libpath:$(HUNSPELL_LIBDIR) hunspell.lib /libpath:$(GLIB_LIBDIR) $(ENCHANT_GLIB_DEPS) /export:init_enchant_provider
	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;2

$(ENCHANT_NUSPELL_DLL): $(ENCHANT_LIB) $(LIBGNU_LIB) vs$(VSVER)\$(CFG)\$(PLAT)\providers\enchant_nuspell.obj
	link /DLL $(LDFLAGS) -out:$@ $** /libpath:$(HUNSPELL_LIBDIR) nuspell.lib /libpath:$(GLIB_LIBDIR) $(ENCHANT_GLIB_DEPS) /export:init_enchant_provider
	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;2

# Rules for linking Executables
# Format is as follows (the mt command is needed for MSVC 2005/2008 builds):
# $(dll_name_with_path): $(dependent_libs_files_objects_and_items)
#	link [$(linker_flags)] [$(dependent_libs)] -out:$@ @<<
# $(dependent_objects)
# <<
# 	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;1
$(ENCHANT_EXE): $(ENCHANT_LIB) $(LIBGNU_LIB) vs$(VSVER)\$(CFG)\$(PLAT)\programs\enchant.obj vs$(VSVER)\$(CFG)\$(PLAT)\programs\util.obj
$(ENCHANT_LSMOD_EXE): $(ENCHANT_LIB) $(LIBGNU_LIB) vs$(VSVER)\$(CFG)\$(PLAT)\programs\enchant-lsmod.obj vs$(VSVER)\$(CFG)\$(PLAT)\programs\util.obj


$(ENCHANT_EXE) $(ENCHANT_LSMOD_EXE):
	link $(LDFLAGS) $**  /libpath:$(GLIB_LIBDIR) $(ENCHANT_GLIB_DEPS) -out:$@ /implib:$(@D)\unwanted.lib
	@-if exist $@.manifest mt /manifest $@.manifest /outputresource:$@;1

# Other .obj files requiring individual attention, that could not be covered by the inference rules.
# Format is as follows (all dirs must have a trailing '\'):
#
# $(obj_file):
# 	$(CC)|$(CXX) $(cflags) /Fo$(obj_destdir) /c @<<
# $(srcfile)
# <<

vs$(VSVER)\$(CFG)\$(PLAT)\enchant-$(ENCHANT_MAJOR_VERSION).pc: $(ENCHANT_LIB)
	@echo prefix=$$^{pcfiledir^}/../..>$@
	@echo exec_prefix=$$^{prefix^}>>$@
	@echo libdir=$$^{prefix^}/lib>>$@
	@echo includedir=$$^{prefix^}/include>>$@
	@echo.>>$@
	@echo Name: libenchant>>$@
	@echo Description: A spell checking library>>$@
	@echo Version: $(ENCHANT_VERSION)>>$@
	@echo Requires.private: glib-2.0 gmodule-no-export-2.0>>$@
	@echo Libs: -L$$^{libdir^} -lenchant-$(ENCHANT_MAJOR_VERSION)>>$@
	@echo Cflags: -I$$^{includedir^}/enchant-$(ENCHANT_MAJOR_VERSION)>>$@

install: all vs$(VSVER)\$(CFG)\$(PLAT)\enchant-$(ENCHANT_MAJOR_VERSION).pc
	@-for %d in (bin lib\enchant-$(ENCHANT_MAJOR_VERSION) lib\pkgconfig include\enchant-$(ENCHANT_MAJOR_VERSION) share\enchant-$(ENCHANT_MAJOR_VERSION) providers-pdb) do @mkdir $(PREFIX)\%d
	@for %f in ($(ENCHANT_DLL) $(ENCHANT_TOOLS)) do @((if exist %~pnf.pdb copy %~pnf.pdb $(PREFIX)\bin) & copy /b %f $(PREFIX)\bin)
	@for %f in ($(ENCHANT_LIB)) do @copy /b %f $(PREFIX)\lib
	@for %f in ($(ENCHANT_PROVIDERS)) do @copy /b %f $(PREFIX)\lib\enchant-$(ENCHANT_MAJOR_VERSION)
	@for %f in ($(ENCHANT_PROVIDERS)) do @if exist %~pnf.pdb copy /b %~pnf.pdb $(PREFIX)\providers-pdb
	@for %f in (..\msvc\lib\enchant.h ..\lib\enchant++.h) do @copy "%f" $(PREFIX)\include\enchant-$(ENCHANT_MAJOR_VERSION)
	@copy ..\lib\enchant.ordering $(PREFIX)\share\enchant-$(ENCHANT_MAJOR_VERSION)
	@copy vs$(VSVER)\$(CFG)\$(PLAT)\enchant-$(ENCHANT_MAJOR_VERSION).pc $(PREFIX)\lib\pkgconfig

clean:
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\enchant-$(ENCHANT_MAJOR_VERSION).pc
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.lib
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.exp
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.pdb
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.exe.manifest
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.exe
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.dll.manifest
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.dll
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\*.ilk
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\providers\*.obj
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\providers\*.pdb
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\programs\*.obj
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\programs\*.pdb
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\*.obj
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\libenchant\*.pdb
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\libgnu\*.obj
	@-del /f /q vs$(VSVER)\$(CFG)\$(PLAT)\libgnu\*.pdb
	@-for %d in (providers programs libenchant libgnu) do @rd vs$(VSVER)\$(CFG)\$(PLAT)\%d
