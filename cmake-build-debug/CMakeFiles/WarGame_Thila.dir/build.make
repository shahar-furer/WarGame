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
CMAKE_COMMAND = /snap/clion/112/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/112/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/netanel/CLionProjects/WarGame_Thila

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/WarGame_Thila.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WarGame_Thila.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WarGame_Thila.dir/flags.make

CMakeFiles/WarGame_Thila.dir/main.cpp.o: CMakeFiles/WarGame_Thila.dir/flags.make
CMakeFiles/WarGame_Thila.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WarGame_Thila.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/WarGame_Thila.dir/main.cpp.o -c /home/netanel/CLionProjects/WarGame_Thila/main.cpp

CMakeFiles/WarGame_Thila.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WarGame_Thila.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netanel/CLionProjects/WarGame_Thila/main.cpp > CMakeFiles/WarGame_Thila.dir/main.cpp.i

CMakeFiles/WarGame_Thila.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WarGame_Thila.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netanel/CLionProjects/WarGame_Thila/main.cpp -o CMakeFiles/WarGame_Thila.dir/main.cpp.s

# Object files for target WarGame_Thila
WarGame_Thila_OBJECTS = \
"CMakeFiles/WarGame_Thila.dir/main.cpp.o"

# External object files for target WarGame_Thila
WarGame_Thila_EXTERNAL_OBJECTS =

WarGame_Thila: CMakeFiles/WarGame_Thila.dir/main.cpp.o
WarGame_Thila: CMakeFiles/WarGame_Thila.dir/build.make
WarGame_Thila: CMakeFiles/WarGame_Thila.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable WarGame_Thila"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/WarGame_Thila.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WarGame_Thila.dir/build: WarGame_Thila

.PHONY : CMakeFiles/WarGame_Thila.dir/build

CMakeFiles/WarGame_Thila.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/WarGame_Thila.dir/cmake_clean.cmake
.PHONY : CMakeFiles/WarGame_Thila.dir/clean

CMakeFiles/WarGame_Thila.dir/depend:
	cd /home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/netanel/CLionProjects/WarGame_Thila /home/netanel/CLionProjects/WarGame_Thila /home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug /home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug /home/netanel/CLionProjects/WarGame_Thila/cmake-build-debug/CMakeFiles/WarGame_Thila.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WarGame_Thila.dir/depend

