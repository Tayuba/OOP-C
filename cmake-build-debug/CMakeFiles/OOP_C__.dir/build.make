# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\ayuba\Documents\GitHub\C++\OOP C++"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/OOP_C__.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/OOP_C__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OOP_C__.dir/flags.make

CMakeFiles/OOP_C__.dir/main.cpp.obj: CMakeFiles/OOP_C__.dir/flags.make
CMakeFiles/OOP_C__.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OOP_C__.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\OOP_C__.dir\main.cpp.obj -c "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\main.cpp"

CMakeFiles/OOP_C__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OOP_C__.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\main.cpp" > CMakeFiles\OOP_C__.dir\main.cpp.i

CMakeFiles/OOP_C__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OOP_C__.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\main.cpp" -o CMakeFiles\OOP_C__.dir\main.cpp.s

# Object files for target OOP_C__
OOP_C___OBJECTS = \
"CMakeFiles/OOP_C__.dir/main.cpp.obj"

# External object files for target OOP_C__
OOP_C___EXTERNAL_OBJECTS =

OOP_C__.exe: CMakeFiles/OOP_C__.dir/main.cpp.obj
OOP_C__.exe: CMakeFiles/OOP_C__.dir/build.make
OOP_C__.exe: CMakeFiles/OOP_C__.dir/linklibs.rsp
OOP_C__.exe: CMakeFiles/OOP_C__.dir/objects1.rsp
OOP_C__.exe: CMakeFiles/OOP_C__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OOP_C__.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OOP_C__.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OOP_C__.dir/build: OOP_C__.exe
.PHONY : CMakeFiles/OOP_C__.dir/build

CMakeFiles/OOP_C__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OOP_C__.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OOP_C__.dir/clean

CMakeFiles/OOP_C__.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\ayuba\Documents\GitHub\C++\OOP C++" "C:\Users\ayuba\Documents\GitHub\C++\OOP C++" "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug" "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug" "C:\Users\ayuba\Documents\GitHub\C++\OOP C++\cmake-build-debug\CMakeFiles\OOP_C__.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/OOP_C__.dir/depend

