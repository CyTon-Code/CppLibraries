# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /run/media/cytoncode/GIT/CppLibraries

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /run/media/cytoncode/GIT/CppLibraries/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppLibraries.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppLibraries.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppLibraries.dir/flags.make

CMakeFiles/CppLibraries.dir/main.cpp.o: CMakeFiles/CppLibraries.dir/flags.make
CMakeFiles/CppLibraries.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/run/media/cytoncode/GIT/CppLibraries/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppLibraries.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CppLibraries.dir/main.cpp.o -c /run/media/cytoncode/GIT/CppLibraries/main.cpp

CMakeFiles/CppLibraries.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppLibraries.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /run/media/cytoncode/GIT/CppLibraries/main.cpp > CMakeFiles/CppLibraries.dir/main.cpp.i

CMakeFiles/CppLibraries.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppLibraries.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /run/media/cytoncode/GIT/CppLibraries/main.cpp -o CMakeFiles/CppLibraries.dir/main.cpp.s

# Object files for target CppLibraries
CppLibraries_OBJECTS = \
"CMakeFiles/CppLibraries.dir/main.cpp.o"

# External object files for target CppLibraries
CppLibraries_EXTERNAL_OBJECTS =

CppLibraries: CMakeFiles/CppLibraries.dir/main.cpp.o
CppLibraries: CMakeFiles/CppLibraries.dir/build.make
CppLibraries: CMakeFiles/CppLibraries.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/run/media/cytoncode/GIT/CppLibraries/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppLibraries"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CppLibraries.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppLibraries.dir/build: CppLibraries

.PHONY : CMakeFiles/CppLibraries.dir/build

CMakeFiles/CppLibraries.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CppLibraries.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CppLibraries.dir/clean

CMakeFiles/CppLibraries.dir/depend:
	cd /run/media/cytoncode/GIT/CppLibraries/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /run/media/cytoncode/GIT/CppLibraries /run/media/cytoncode/GIT/CppLibraries /run/media/cytoncode/GIT/CppLibraries/cmake-build-debug /run/media/cytoncode/GIT/CppLibraries/cmake-build-debug /run/media/cytoncode/GIT/CppLibraries/cmake-build-debug/CMakeFiles/CppLibraries.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppLibraries.dir/depend

