# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tsharma/src/math

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tsharma/src/math/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/math_tests.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/math_tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/math_tests.dir/flags.make

tests/CMakeFiles/math_tests.dir/math_tests.cpp.o: tests/CMakeFiles/math_tests.dir/flags.make
tests/CMakeFiles/math_tests.dir/math_tests.cpp.o: ../tests/math_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tsharma/src/math/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/math_tests.dir/math_tests.cpp.o"
	cd /Users/tsharma/src/math/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/math_tests.dir/math_tests.cpp.o -c /Users/tsharma/src/math/tests/math_tests.cpp

tests/CMakeFiles/math_tests.dir/math_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/math_tests.dir/math_tests.cpp.i"
	cd /Users/tsharma/src/math/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tsharma/src/math/tests/math_tests.cpp > CMakeFiles/math_tests.dir/math_tests.cpp.i

tests/CMakeFiles/math_tests.dir/math_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/math_tests.dir/math_tests.cpp.s"
	cd /Users/tsharma/src/math/build/tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tsharma/src/math/tests/math_tests.cpp -o CMakeFiles/math_tests.dir/math_tests.cpp.s

tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.requires:

.PHONY : tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.requires

tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.provides: tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/math_tests.dir/build.make tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.provides.build
.PHONY : tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.provides

tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.provides.build: tests/CMakeFiles/math_tests.dir/math_tests.cpp.o


# Object files for target math_tests
math_tests_OBJECTS = \
"CMakeFiles/math_tests.dir/math_tests.cpp.o"

# External object files for target math_tests
math_tests_EXTERNAL_OBJECTS =

tests/math_tests: tests/CMakeFiles/math_tests.dir/math_tests.cpp.o
tests/math_tests: tests/CMakeFiles/math_tests.dir/build.make
tests/math_tests: libmath.dylib
tests/math_tests: /users/tsharma/src/random/build/librandom_utils.dylib
tests/math_tests: tests/CMakeFiles/math_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tsharma/src/math/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable math_tests"
	cd /Users/tsharma/src/math/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/math_tests.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Running math_tests"
	cd /Users/tsharma/src/math/build/tests && /Users/tsharma/src/math/build/tests/math_tests

# Rule to build all files generated by this target.
tests/CMakeFiles/math_tests.dir/build: tests/math_tests

.PHONY : tests/CMakeFiles/math_tests.dir/build

tests/CMakeFiles/math_tests.dir/requires: tests/CMakeFiles/math_tests.dir/math_tests.cpp.o.requires

.PHONY : tests/CMakeFiles/math_tests.dir/requires

tests/CMakeFiles/math_tests.dir/clean:
	cd /Users/tsharma/src/math/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/math_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/math_tests.dir/clean

tests/CMakeFiles/math_tests.dir/depend:
	cd /Users/tsharma/src/math/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tsharma/src/math /Users/tsharma/src/math/tests /Users/tsharma/src/math/build /Users/tsharma/src/math/build/tests /Users/tsharma/src/math/build/tests/CMakeFiles/math_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/math_tests.dir/depend
