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
CMAKE_SOURCE_DIR = C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/l4t.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/l4t.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/l4t.dir/flags.make

CMakeFiles/l4t.dir/main.cpp.obj: CMakeFiles/l4t.dir/flags.make
CMakeFiles/l4t.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/l4t.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\l4t.dir\main.cpp.obj -c C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\main.cpp

CMakeFiles/l4t.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l4t.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\main.cpp > CMakeFiles\l4t.dir\main.cpp.i

CMakeFiles/l4t.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l4t.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\main.cpp -o CMakeFiles\l4t.dir\main.cpp.s

CMakeFiles/l4t.dir/Tasks.cpp.obj: CMakeFiles/l4t.dir/flags.make
CMakeFiles/l4t.dir/Tasks.cpp.obj: ../Tasks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/l4t.dir/Tasks.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\l4t.dir\Tasks.cpp.obj -c C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\Tasks.cpp

CMakeFiles/l4t.dir/Tasks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l4t.dir/Tasks.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\Tasks.cpp > CMakeFiles\l4t.dir\Tasks.cpp.i

CMakeFiles/l4t.dir/Tasks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l4t.dir/Tasks.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\Tasks.cpp -o CMakeFiles\l4t.dir\Tasks.cpp.s

# Object files for target l4t
l4t_OBJECTS = \
"CMakeFiles/l4t.dir/main.cpp.obj" \
"CMakeFiles/l4t.dir/Tasks.cpp.obj"

# External object files for target l4t
l4t_EXTERNAL_OBJECTS =

l4t.exe: CMakeFiles/l4t.dir/main.cpp.obj
l4t.exe: CMakeFiles/l4t.dir/Tasks.cpp.obj
l4t.exe: CMakeFiles/l4t.dir/build.make
l4t.exe: CMakeFiles/l4t.dir/linklibs.rsp
l4t.exe: CMakeFiles/l4t.dir/objects1.rsp
l4t.exe: CMakeFiles/l4t.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable l4t.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\l4t.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/l4t.dir/build: l4t.exe

.PHONY : CMakeFiles/l4t.dir/build

CMakeFiles/l4t.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\l4t.dir\cmake_clean.cmake
.PHONY : CMakeFiles/l4t.dir/clean

CMakeFiles/l4t.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug C:\Users\tzvet\my_stuff\GitHub\cpp-oop\l4t\cmake-build-debug\CMakeFiles\l4t.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/l4t.dir/depend

