# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_SOURCE_DIR = /home/xinwen/proyecto1_Chat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xinwen/proyecto1_Chat

# Utility rule file for Client_autogen.

# Include any custom commands dependencies for this target.
include Client/CMakeFiles/Client_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include Client/CMakeFiles/Client_autogen.dir/progress.make

Client/CMakeFiles/Client_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xinwen/proyecto1_Chat/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Client"
	cd /home/xinwen/proyecto1_Chat/Client && /usr/bin/cmake -E cmake_autogen /home/xinwen/proyecto1_Chat/Client/CMakeFiles/Client_autogen.dir/AutogenInfo.json ""

Client_autogen: Client/CMakeFiles/Client_autogen
Client_autogen: Client/CMakeFiles/Client_autogen.dir/build.make
.PHONY : Client_autogen

# Rule to build all files generated by this target.
Client/CMakeFiles/Client_autogen.dir/build: Client_autogen
.PHONY : Client/CMakeFiles/Client_autogen.dir/build

Client/CMakeFiles/Client_autogen.dir/clean:
	cd /home/xinwen/proyecto1_Chat/Client && $(CMAKE_COMMAND) -P CMakeFiles/Client_autogen.dir/cmake_clean.cmake
.PHONY : Client/CMakeFiles/Client_autogen.dir/clean

Client/CMakeFiles/Client_autogen.dir/depend:
	cd /home/xinwen/proyecto1_Chat && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xinwen/proyecto1_Chat /home/xinwen/proyecto1_Chat/Client /home/xinwen/proyecto1_Chat /home/xinwen/proyecto1_Chat/Client /home/xinwen/proyecto1_Chat/Client/CMakeFiles/Client_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Client/CMakeFiles/Client_autogen.dir/depend
