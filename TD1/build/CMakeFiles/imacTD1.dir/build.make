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
CMAKE_SOURCE_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build

# Include any dependencies generated for this target.
include CMakeFiles/imacTD1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/imacTD1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imacTD1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imacTD1.dir/flags.make

CMakeFiles/imacTD1.dir/imacTD1.cpp.obj: CMakeFiles/imacTD1.dir/flags.make
CMakeFiles/imacTD1.dir/imacTD1.cpp.obj: C:/Users/Paul/Documents/E3IMAC/Prog_Algo/TD1/imacTD1.cpp
CMakeFiles/imacTD1.dir/imacTD1.cpp.obj: CMakeFiles/imacTD1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imacTD1.dir/imacTD1.cpp.obj"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imacTD1.dir/imacTD1.cpp.obj -MF CMakeFiles\imacTD1.dir\imacTD1.cpp.obj.d -o CMakeFiles\imacTD1.dir\imacTD1.cpp.obj -c C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\imacTD1.cpp

CMakeFiles/imacTD1.dir/imacTD1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imacTD1.dir/imacTD1.cpp.i"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\imacTD1.cpp > CMakeFiles\imacTD1.dir\imacTD1.cpp.i

CMakeFiles/imacTD1.dir/imacTD1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imacTD1.dir/imacTD1.cpp.s"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\imacTD1.cpp -o CMakeFiles\imacTD1.dir\imacTD1.cpp.s

# Object files for target imacTD1
imacTD1_OBJECTS = \
"CMakeFiles/imacTD1.dir/imacTD1.cpp.obj"

# External object files for target imacTD1
imacTD1_EXTERNAL_OBJECTS =

imacTD1.exe: CMakeFiles/imacTD1.dir/imacTD1.cpp.obj
imacTD1.exe: CMakeFiles/imacTD1.dir/build.make
imacTD1.exe: CMakeFiles/imacTD1.dir/linkLibs.rsp
imacTD1.exe: CMakeFiles/imacTD1.dir/objects1.rsp
imacTD1.exe: CMakeFiles/imacTD1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imacTD1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\imacTD1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imacTD1.dir/build: imacTD1.exe
.PHONY : CMakeFiles/imacTD1.dir/build

CMakeFiles/imacTD1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\imacTD1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/imacTD1.dir/clean

CMakeFiles/imacTD1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD1\build\CMakeFiles\imacTD1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/imacTD1.dir/depend

