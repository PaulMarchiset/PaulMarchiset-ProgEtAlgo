# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Paul\Documents\GCC\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Paul\Documents\GCC\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build

# Include any dependencies generated for this target.
include CMakeFiles/imacTD7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/imacTD7.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imacTD7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imacTD7.dir/flags.make

CMakeFiles/imacTD7.dir/imacTD7.cpp.obj: CMakeFiles/imacTD7.dir/flags.make
CMakeFiles/imacTD7.dir/imacTD7.cpp.obj: C:/Users/Paul/Documents/E3IMAC/Prog_Algo/TD7/imacTD7.cpp
CMakeFiles/imacTD7.dir/imacTD7.cpp.obj: CMakeFiles/imacTD7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imacTD7.dir/imacTD7.cpp.obj"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imacTD7.dir/imacTD7.cpp.obj -MF CMakeFiles\imacTD7.dir\imacTD7.cpp.obj.d -o CMakeFiles\imacTD7.dir\imacTD7.cpp.obj -c C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\imacTD7.cpp

CMakeFiles/imacTD7.dir/imacTD7.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imacTD7.dir/imacTD7.cpp.i"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\imacTD7.cpp > CMakeFiles\imacTD7.dir\imacTD7.cpp.i

CMakeFiles/imacTD7.dir/imacTD7.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imacTD7.dir/imacTD7.cpp.s"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\imacTD7.cpp -o CMakeFiles\imacTD7.dir\imacTD7.cpp.s

# Object files for target imacTD7
imacTD7_OBJECTS = \
"CMakeFiles/imacTD7.dir/imacTD7.cpp.obj"

# External object files for target imacTD7
imacTD7_EXTERNAL_OBJECTS =

imacTD7.exe: CMakeFiles/imacTD7.dir/imacTD7.cpp.obj
imacTD7.exe: CMakeFiles/imacTD7.dir/build.make
imacTD7.exe: CMakeFiles/imacTD7.dir/linkLibs.rsp
imacTD7.exe: CMakeFiles/imacTD7.dir/objects1.rsp
imacTD7.exe: CMakeFiles/imacTD7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imacTD7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\imacTD7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imacTD7.dir/build: imacTD7.exe
.PHONY : CMakeFiles/imacTD7.dir/build

CMakeFiles/imacTD7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\imacTD7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/imacTD7.dir/clean

CMakeFiles/imacTD7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD7\build\CMakeFiles\imacTD7.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/imacTD7.dir/depend

