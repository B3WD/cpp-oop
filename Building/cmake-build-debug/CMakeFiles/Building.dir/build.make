# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Building.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Building.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Building.dir/flags.make

CMakeFiles/Building.dir/main.cpp.obj: CMakeFiles/Building.dir/flags.make
CMakeFiles/Building.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Building.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Building.dir\main.cpp.obj -c C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\main.cpp

CMakeFiles/Building.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Building.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\main.cpp > CMakeFiles\Building.dir\main.cpp.i

CMakeFiles/Building.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Building.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\main.cpp -o CMakeFiles\Building.dir\main.cpp.s

CMakeFiles/Building.dir/Building.cpp.obj: CMakeFiles/Building.dir/flags.make
CMakeFiles/Building.dir/Building.cpp.obj: ../Building.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Building.dir/Building.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Building.dir\Building.cpp.obj -c C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\Building.cpp

CMakeFiles/Building.dir/Building.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Building.dir/Building.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\Building.cpp > CMakeFiles\Building.dir\Building.cpp.i

CMakeFiles/Building.dir/Building.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Building.dir/Building.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\Building.cpp -o CMakeFiles\Building.dir\Building.cpp.s

# Object files for target Building
Building_OBJECTS = \
"CMakeFiles/Building.dir/main.cpp.obj" \
"CMakeFiles/Building.dir/Building.cpp.obj"

# External object files for target Building
Building_EXTERNAL_OBJECTS =

Building.exe: CMakeFiles/Building.dir/main.cpp.obj
Building.exe: CMakeFiles/Building.dir/Building.cpp.obj
Building.exe: CMakeFiles/Building.dir/build.make
Building.exe: CMakeFiles/Building.dir/linklibs.rsp
Building.exe: CMakeFiles/Building.dir/objects1.rsp
Building.exe: CMakeFiles/Building.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Building.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Building.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Building.dir/build: Building.exe

.PHONY : CMakeFiles/Building.dir/build

CMakeFiles/Building.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Building.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Building.dir/clean

CMakeFiles/Building.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug C:\Users\tzvet\my_stuff\GitHub\cpp-oop\Building\cmake-build-debug\CMakeFiles\Building.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Building.dir/depend
