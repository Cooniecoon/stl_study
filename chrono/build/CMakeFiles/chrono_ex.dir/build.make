# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tony/stl_study/chrono

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tony/stl_study/chrono/build

# Include any dependencies generated for this target.
include CMakeFiles/chrono_ex.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/chrono_ex.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/chrono_ex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chrono_ex.dir/flags.make

CMakeFiles/chrono_ex.dir/src/main.cpp.o: CMakeFiles/chrono_ex.dir/flags.make
CMakeFiles/chrono_ex.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/chrono_ex.dir/src/main.cpp.o: CMakeFiles/chrono_ex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tony/stl_study/chrono/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chrono_ex.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chrono_ex.dir/src/main.cpp.o -MF CMakeFiles/chrono_ex.dir/src/main.cpp.o.d -o CMakeFiles/chrono_ex.dir/src/main.cpp.o -c /home/tony/stl_study/chrono/src/main.cpp

CMakeFiles/chrono_ex.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chrono_ex.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tony/stl_study/chrono/src/main.cpp > CMakeFiles/chrono_ex.dir/src/main.cpp.i

CMakeFiles/chrono_ex.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chrono_ex.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tony/stl_study/chrono/src/main.cpp -o CMakeFiles/chrono_ex.dir/src/main.cpp.s

# Object files for target chrono_ex
chrono_ex_OBJECTS = \
"CMakeFiles/chrono_ex.dir/src/main.cpp.o"

# External object files for target chrono_ex
chrono_ex_EXTERNAL_OBJECTS =

chrono_ex: CMakeFiles/chrono_ex.dir/src/main.cpp.o
chrono_ex: CMakeFiles/chrono_ex.dir/build.make
chrono_ex: CMakeFiles/chrono_ex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tony/stl_study/chrono/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chrono_ex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chrono_ex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chrono_ex.dir/build: chrono_ex
.PHONY : CMakeFiles/chrono_ex.dir/build

CMakeFiles/chrono_ex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chrono_ex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chrono_ex.dir/clean

CMakeFiles/chrono_ex.dir/depend:
	cd /home/tony/stl_study/chrono/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tony/stl_study/chrono /home/tony/stl_study/chrono /home/tony/stl_study/chrono/build /home/tony/stl_study/chrono/build /home/tony/stl_study/chrono/build/CMakeFiles/chrono_ex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chrono_ex.dir/depend
