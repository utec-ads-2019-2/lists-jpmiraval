# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\pc-games\Documents\lists-jpmiraval

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\lists_jpmiraval.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\lists_jpmiraval.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\lists_jpmiraval.dir\flags.make

CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.obj: CMakeFiles\lists_jpmiraval.dir\flags.make
CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.obj: ..\mock\mocker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lists_jpmiraval.dir/mock/mocker.cpp.obj"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.obj /FdCMakeFiles\lists_jpmiraval.dir\ /FS -c C:\Users\pc-games\Documents\lists-jpmiraval\mock\mocker.cpp
<<

CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_jpmiraval.dir/mock/mocker.cpp.i"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\pc-games\Documents\lists-jpmiraval\mock\mocker.cpp
<<

CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_jpmiraval.dir/mock/mocker.cpp.s"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.s /c C:\Users\pc-games\Documents\lists-jpmiraval\mock\mocker.cpp
<<

CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.obj: CMakeFiles\lists_jpmiraval.dir\flags.make
CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.obj: ..\test\tester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lists_jpmiraval.dir/test/tester.cpp.obj"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lists_jpmiraval.dir\test\tester.cpp.obj /FdCMakeFiles\lists_jpmiraval.dir\ /FS -c C:\Users\pc-games\Documents\lists-jpmiraval\test\tester.cpp
<<

CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_jpmiraval.dir/test/tester.cpp.i"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\pc-games\Documents\lists-jpmiraval\test\tester.cpp
<<

CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_jpmiraval.dir/test/tester.cpp.s"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lists_jpmiraval.dir\test\tester.cpp.s /c C:\Users\pc-games\Documents\lists-jpmiraval\test\tester.cpp
<<

CMakeFiles\lists_jpmiraval.dir\main.cpp.obj: CMakeFiles\lists_jpmiraval.dir\flags.make
CMakeFiles\lists_jpmiraval.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lists_jpmiraval.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\lists_jpmiraval.dir\main.cpp.obj /FdCMakeFiles\lists_jpmiraval.dir\ /FS -c C:\Users\pc-games\Documents\lists-jpmiraval\main.cpp
<<

CMakeFiles\lists_jpmiraval.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lists_jpmiraval.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\lists_jpmiraval.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\pc-games\Documents\lists-jpmiraval\main.cpp
<<

CMakeFiles\lists_jpmiraval.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lists_jpmiraval.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\lists_jpmiraval.dir\main.cpp.s /c C:\Users\pc-games\Documents\lists-jpmiraval\main.cpp
<<

# Object files for target lists_jpmiraval
lists_jpmiraval_OBJECTS = \
"CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.obj" \
"CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.obj" \
"CMakeFiles\lists_jpmiraval.dir\main.cpp.obj"

# External object files for target lists_jpmiraval
lists_jpmiraval_EXTERNAL_OBJECTS =

lists_jpmiraval.exe: CMakeFiles\lists_jpmiraval.dir\mock\mocker.cpp.obj
lists_jpmiraval.exe: CMakeFiles\lists_jpmiraval.dir\test\tester.cpp.obj
lists_jpmiraval.exe: CMakeFiles\lists_jpmiraval.dir\main.cpp.obj
lists_jpmiraval.exe: CMakeFiles\lists_jpmiraval.dir\build.make
lists_jpmiraval.exe: CMakeFiles\lists_jpmiraval.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lists_jpmiraval.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\lists_jpmiraval.dir --manifests  -- C:\PROGRA~2\MICROS~4\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\lists_jpmiraval.dir\objects1.rsp @<<
 /out:lists_jpmiraval.exe /implib:lists_jpmiraval.lib /pdb:C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\lists_jpmiraval.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\lists_jpmiraval.dir\build: lists_jpmiraval.exe

.PHONY : CMakeFiles\lists_jpmiraval.dir\build

CMakeFiles\lists_jpmiraval.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lists_jpmiraval.dir\cmake_clean.cmake
.PHONY : CMakeFiles\lists_jpmiraval.dir\clean

CMakeFiles\lists_jpmiraval.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\pc-games\Documents\lists-jpmiraval C:\Users\pc-games\Documents\lists-jpmiraval C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug C:\Users\pc-games\Documents\lists-jpmiraval\cmake-build-debug\CMakeFiles\lists_jpmiraval.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\lists_jpmiraval.dir\depend

