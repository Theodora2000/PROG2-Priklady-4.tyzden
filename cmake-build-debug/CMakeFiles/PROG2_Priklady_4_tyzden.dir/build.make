# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PROG2_Priklady_4_tyzden.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PROG2_Priklady_4_tyzden.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PROG2_Priklady_4_tyzden.dir/flags.make

CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.obj: CMakeFiles/PROG2_Priklady_4_tyzden.dir/flags.make
CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.obj"
	C:\Compailer\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\PROG2_Priklady_4_tyzden.dir\main.c.obj   -c C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\main.c

CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.i"
	C:\Compailer\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\main.c > CMakeFiles\PROG2_Priklady_4_tyzden.dir\main.c.i

CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.s"
	C:\Compailer\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\main.c -o CMakeFiles\PROG2_Priklady_4_tyzden.dir\main.c.s

# Object files for target PROG2_Priklady_4_tyzden
PROG2_Priklady_4_tyzden_OBJECTS = \
"CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.obj"

# External object files for target PROG2_Priklady_4_tyzden
PROG2_Priklady_4_tyzden_EXTERNAL_OBJECTS =

PROG2_Priklady_4_tyzden.exe: CMakeFiles/PROG2_Priklady_4_tyzden.dir/main.c.obj
PROG2_Priklady_4_tyzden.exe: CMakeFiles/PROG2_Priklady_4_tyzden.dir/build.make
PROG2_Priklady_4_tyzden.exe: CMakeFiles/PROG2_Priklady_4_tyzden.dir/linklibs.rsp
PROG2_Priklady_4_tyzden.exe: CMakeFiles/PROG2_Priklady_4_tyzden.dir/objects1.rsp
PROG2_Priklady_4_tyzden.exe: CMakeFiles/PROG2_Priklady_4_tyzden.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PROG2_Priklady_4_tyzden.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PROG2_Priklady_4_tyzden.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PROG2_Priklady_4_tyzden.dir/build: PROG2_Priklady_4_tyzden.exe

.PHONY : CMakeFiles/PROG2_Priklady_4_tyzden.dir/build

CMakeFiles/PROG2_Priklady_4_tyzden.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PROG2_Priklady_4_tyzden.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PROG2_Priklady_4_tyzden.dir/clean

CMakeFiles/PROG2_Priklady_4_tyzden.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug C:\Users\WIN10\Desktop\FEI\4.semeter\PROG2\Cvicenie4\PROG2-Priklady-4.tyzden\cmake-build-debug\CMakeFiles\PROG2_Priklady_4_tyzden.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PROG2_Priklady_4_tyzden.dir/depend

