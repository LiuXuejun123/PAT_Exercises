# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\liuxu\Desktop\PAT_Exercises\6.8

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/6_8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/6_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/6_8.dir/flags.make

CMakeFiles/6_8.dir/main.c.obj: CMakeFiles/6_8.dir/flags.make
CMakeFiles/6_8.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/6_8.dir/main.c.obj"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\6_8.dir\main.c.obj   -c C:\Users\liuxu\Desktop\PAT_Exercises\6.8\main.c

CMakeFiles/6_8.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/6_8.dir/main.c.i"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liuxu\Desktop\PAT_Exercises\6.8\main.c > CMakeFiles\6_8.dir\main.c.i

CMakeFiles/6_8.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/6_8.dir/main.c.s"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liuxu\Desktop\PAT_Exercises\6.8\main.c -o CMakeFiles\6_8.dir\main.c.s

# Object files for target 6_8
6_8_OBJECTS = \
"CMakeFiles/6_8.dir/main.c.obj"

# External object files for target 6_8
6_8_EXTERNAL_OBJECTS =

6_8.exe: CMakeFiles/6_8.dir/main.c.obj
6_8.exe: CMakeFiles/6_8.dir/build.make
6_8.exe: CMakeFiles/6_8.dir/linklibs.rsp
6_8.exe: CMakeFiles/6_8.dir/objects1.rsp
6_8.exe: CMakeFiles/6_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 6_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\6_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/6_8.dir/build: 6_8.exe

.PHONY : CMakeFiles/6_8.dir/build

CMakeFiles/6_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\6_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/6_8.dir/clean

CMakeFiles/6_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liuxu\Desktop\PAT_Exercises\6.8 C:\Users\liuxu\Desktop\PAT_Exercises\6.8 C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug C:\Users\liuxu\Desktop\PAT_Exercises\6.8\cmake-build-debug\CMakeFiles\6_8.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/6_8.dir/depend

