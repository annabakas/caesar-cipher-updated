# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/annabakas/caesar-cipher-part-2-annabakas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/annabakas/caesar-cipher-part-2-annabakas

# Include any dependencies generated for this target.
include CMakeFiles/ceaser.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ceaser.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ceaser.dir/flags.make

CMakeFiles/ceaser.dir/ceaser.c.o: CMakeFiles/ceaser.dir/flags.make
CMakeFiles/ceaser.dir/ceaser.c.o: ceaser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/annabakas/caesar-cipher-part-2-annabakas/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ceaser.dir/ceaser.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ceaser.dir/ceaser.c.o   -c /home/annabakas/caesar-cipher-part-2-annabakas/ceaser.c

CMakeFiles/ceaser.dir/ceaser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ceaser.dir/ceaser.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/annabakas/caesar-cipher-part-2-annabakas/ceaser.c > CMakeFiles/ceaser.dir/ceaser.c.i

CMakeFiles/ceaser.dir/ceaser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ceaser.dir/ceaser.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/annabakas/caesar-cipher-part-2-annabakas/ceaser.c -o CMakeFiles/ceaser.dir/ceaser.c.s

# Object files for target ceaser
ceaser_OBJECTS = \
"CMakeFiles/ceaser.dir/ceaser.c.o"

# External object files for target ceaser
ceaser_EXTERNAL_OBJECTS =

bin/ceaser: CMakeFiles/ceaser.dir/ceaser.c.o
bin/ceaser: CMakeFiles/ceaser.dir/build.make
bin/ceaser: CMakeFiles/ceaser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/annabakas/caesar-cipher-part-2-annabakas/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bin/ceaser"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ceaser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ceaser.dir/build: bin/ceaser

.PHONY : CMakeFiles/ceaser.dir/build

CMakeFiles/ceaser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ceaser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ceaser.dir/clean

CMakeFiles/ceaser.dir/depend:
	cd /home/annabakas/caesar-cipher-part-2-annabakas && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/annabakas/caesar-cipher-part-2-annabakas /home/annabakas/caesar-cipher-part-2-annabakas /home/annabakas/caesar-cipher-part-2-annabakas /home/annabakas/caesar-cipher-part-2-annabakas /home/annabakas/caesar-cipher-part-2-annabakas/CMakeFiles/ceaser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ceaser.dir/depend

