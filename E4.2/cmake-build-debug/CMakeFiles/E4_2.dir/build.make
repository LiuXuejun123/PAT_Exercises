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
CMAKE_SOURCE_DIR = C:\Users\liuxu\Desktop\PAT_Exercises\E4.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/E4_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/E4_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/E4_2.dir/flags.make

CMakeFiles/E4_2.dir/main.c.obj: CMakeFiles/E4_2.dir/flags.make
CMakeFiles/E4_2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/E4_2.dir/main.c.obj"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\E4_2.dir\main.c.obj   -c C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\main.c

CMakeFiles/E4_2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/E4_2.dir/main.c.i"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\main.c > CMakeFiles\E4_2.dir\main.c.i

CMakeFiles/E4_2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/E4_2.dir/main.c.s"
	D:\MinGW\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\main.c -o CMakeFiles\E4_2.dir\main.c.s

# Object files for target E4_2
E4_2_OBJECTS = \
"CMakeFiles/E4_2.dir/main.c.obj"

# External object files for target E4_2
E4_2_EXTERNAL_OBJECTS =

E4_2.exe: CMakeFiles/E4_2.dir/main.c.obj
E4_2.exe: CMakeFiles/E4_2.dir/build.make
E4_2.exe: CMakeFiles/E4_2.dir/linklibs.rsp
E4_2.exe: CMakeFiles/E4_2.dir/objects1.rsp
E4_2.exe: CMakeFiles/E4_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable E4_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\E4_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/E4_2.dir/build: E4_2.exe

.PHONY : CMakeFiles/E4_2.dir/build

CMakeFiles/E4_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\E4_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/E4_2.dir/clean

CMakeFiles/E4_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liuxu\Desktop\PAT_Exercises\E4.2 C:\Users\liuxu\Desktop\PAT_Exercises\E4.2 C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug C:\Users\liuxu\Desktop\PAT_Exercises\E4.2\cmake-build-debug\CMakeFiles\E4_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/E4_2.dir/depend

