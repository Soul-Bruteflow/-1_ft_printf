# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bruteflow/c_projects/4_ft_printf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_printf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_printf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_printf.dir/flags.make

CMakeFiles/ft_printf.dir/src/ft_printf.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/ft_printf.c.o: ../src/ft_printf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_printf.dir/src/ft_printf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/ft_printf.c.o   -c /Users/bruteflow/c_projects/4_ft_printf/src/ft_printf.c

CMakeFiles/ft_printf.dir/src/ft_printf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/ft_printf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bruteflow/c_projects/4_ft_printf/src/ft_printf.c > CMakeFiles/ft_printf.dir/src/ft_printf.c.i

CMakeFiles/ft_printf.dir/src/ft_printf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/ft_printf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bruteflow/c_projects/4_ft_printf/src/ft_printf.c -o CMakeFiles/ft_printf.dir/src/ft_printf.c.s

CMakeFiles/ft_printf.dir/src/ft_printf.c.o.requires:

.PHONY : CMakeFiles/ft_printf.dir/src/ft_printf.c.o.requires

CMakeFiles/ft_printf.dir/src/ft_printf.c.o.provides: CMakeFiles/ft_printf.dir/src/ft_printf.c.o.requires
	$(MAKE) -f CMakeFiles/ft_printf.dir/build.make CMakeFiles/ft_printf.dir/src/ft_printf.c.o.provides.build
.PHONY : CMakeFiles/ft_printf.dir/src/ft_printf.c.o.provides

CMakeFiles/ft_printf.dir/src/ft_printf.c.o.provides.build: CMakeFiles/ft_printf.dir/src/ft_printf.c.o


CMakeFiles/ft_printf.dir/src/main.c.o: CMakeFiles/ft_printf.dir/flags.make
CMakeFiles/ft_printf.dir/src/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/ft_printf.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_printf.dir/src/main.c.o   -c /Users/bruteflow/c_projects/4_ft_printf/src/main.c

CMakeFiles/ft_printf.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_printf.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bruteflow/c_projects/4_ft_printf/src/main.c > CMakeFiles/ft_printf.dir/src/main.c.i

CMakeFiles/ft_printf.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_printf.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bruteflow/c_projects/4_ft_printf/src/main.c -o CMakeFiles/ft_printf.dir/src/main.c.s

CMakeFiles/ft_printf.dir/src/main.c.o.requires:

.PHONY : CMakeFiles/ft_printf.dir/src/main.c.o.requires

CMakeFiles/ft_printf.dir/src/main.c.o.provides: CMakeFiles/ft_printf.dir/src/main.c.o.requires
	$(MAKE) -f CMakeFiles/ft_printf.dir/build.make CMakeFiles/ft_printf.dir/src/main.c.o.provides.build
.PHONY : CMakeFiles/ft_printf.dir/src/main.c.o.provides

CMakeFiles/ft_printf.dir/src/main.c.o.provides.build: CMakeFiles/ft_printf.dir/src/main.c.o


# Object files for target ft_printf
ft_printf_OBJECTS = \
"CMakeFiles/ft_printf.dir/src/ft_printf.c.o" \
"CMakeFiles/ft_printf.dir/src/main.c.o"

# External object files for target ft_printf
ft_printf_EXTERNAL_OBJECTS =

ft_printf: CMakeFiles/ft_printf.dir/src/ft_printf.c.o
ft_printf: CMakeFiles/ft_printf.dir/src/main.c.o
ft_printf: CMakeFiles/ft_printf.dir/build.make
ft_printf: libft.a
ft_printf: CMakeFiles/ft_printf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ft_printf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_printf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_printf.dir/build: ft_printf

.PHONY : CMakeFiles/ft_printf.dir/build

CMakeFiles/ft_printf.dir/requires: CMakeFiles/ft_printf.dir/src/ft_printf.c.o.requires
CMakeFiles/ft_printf.dir/requires: CMakeFiles/ft_printf.dir/src/main.c.o.requires

.PHONY : CMakeFiles/ft_printf.dir/requires

CMakeFiles/ft_printf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_printf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_printf.dir/clean

CMakeFiles/ft_printf.dir/depend:
	cd /Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bruteflow/c_projects/4_ft_printf /Users/bruteflow/c_projects/4_ft_printf /Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug /Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug /Users/bruteflow/c_projects/4_ft_printf/cmake-build-debug/CMakeFiles/ft_printf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_printf.dir/depend

