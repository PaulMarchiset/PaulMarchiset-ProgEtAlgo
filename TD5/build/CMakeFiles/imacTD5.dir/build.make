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
CMAKE_SOURCE_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build

# Include any dependencies generated for this target.
include CMakeFiles/imacTD5.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/imacTD5.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imacTD5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/imacTD5.dir/flags.make

CMakeFiles/imacTD5.dir/imacTD5.cpp.obj: CMakeFiles/imacTD5.dir/flags.make
CMakeFiles/imacTD5.dir/imacTD5.cpp.obj: C:/Users/Paul/Documents/E3IMAC/Prog_Algo/TD5/imacTD5.cpp
CMakeFiles/imacTD5.dir/imacTD5.cpp.obj: CMakeFiles/imacTD5.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/imacTD5.dir/imacTD5.cpp.obj"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/imacTD5.dir/imacTD5.cpp.obj -MF CMakeFiles\imacTD5.dir\imacTD5.cpp.obj.d -o CMakeFiles\imacTD5.dir\imacTD5.cpp.obj -c C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\imacTD5.cpp

CMakeFiles/imacTD5.dir/imacTD5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/imacTD5.dir/imacTD5.cpp.i"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\imacTD5.cpp > CMakeFiles\imacTD5.dir\imacTD5.cpp.i

CMakeFiles/imacTD5.dir/imacTD5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/imacTD5.dir/imacTD5.cpp.s"
	C:\Users\Paul\Documents\GCC\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\imacTD5.cpp -o CMakeFiles\imacTD5.dir\imacTD5.cpp.s

# Object files for target imacTD5
imacTD5_OBJECTS = \
"CMakeFiles/imacTD5.dir/imacTD5.cpp.obj"

# External object files for target imacTD5
imacTD5_EXTERNAL_OBJECTS =

imacTD5.exe: CMakeFiles/imacTD5.dir/imacTD5.cpp.obj
imacTD5.exe: CMakeFiles/imacTD5.dir/build.make
imacTD5.exe: CMakeFiles/imacTD5.dir/linkLibs.rsp
imacTD5.exe: CMakeFiles/imacTD5.dir/objects1.rsp
imacTD5.exe: CMakeFiles/imacTD5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable imacTD5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\imacTD5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/imacTD5.dir/build: imacTD5.exe
.PHONY : CMakeFiles/imacTD5.dir/build

CMakeFiles/imacTD5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\imacTD5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/imacTD5.dir/clean

CMakeFiles/imacTD5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5 C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build C:\Users\Paul\Documents\E3IMAC\Prog_Algo\TD5\build\CMakeFiles\imacTD5.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/imacTD5.dir/depend
