# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\clems\Documents\GitHub\262\Queues_part2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Queues_part2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Queues_part2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queues_part2.dir/flags.make

CMakeFiles/Queues_part2.dir/Queue.cpp.obj: CMakeFiles/Queues_part2.dir/flags.make
CMakeFiles/Queues_part2.dir/Queue.cpp.obj: CMakeFiles/Queues_part2.dir/includes_CXX.rsp
CMakeFiles/Queues_part2.dir/Queue.cpp.obj: ../Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Queues_part2.dir/Queue.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Queues_part2.dir\Queue.cpp.obj -c C:\Users\clems\Documents\GitHub\262\Queues_part2\Queue.cpp

CMakeFiles/Queues_part2.dir/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queues_part2.dir/Queue.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clems\Documents\GitHub\262\Queues_part2\Queue.cpp > CMakeFiles\Queues_part2.dir\Queue.cpp.i

CMakeFiles/Queues_part2.dir/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queues_part2.dir/Queue.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clems\Documents\GitHub\262\Queues_part2\Queue.cpp -o CMakeFiles\Queues_part2.dir\Queue.cpp.s

CMakeFiles/Queues_part2.dir/tests.cpp.obj: CMakeFiles/Queues_part2.dir/flags.make
CMakeFiles/Queues_part2.dir/tests.cpp.obj: CMakeFiles/Queues_part2.dir/includes_CXX.rsp
CMakeFiles/Queues_part2.dir/tests.cpp.obj: ../tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Queues_part2.dir/tests.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Queues_part2.dir\tests.cpp.obj -c C:\Users\clems\Documents\GitHub\262\Queues_part2\tests.cpp

CMakeFiles/Queues_part2.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Queues_part2.dir/tests.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clems\Documents\GitHub\262\Queues_part2\tests.cpp > CMakeFiles\Queues_part2.dir\tests.cpp.i

CMakeFiles/Queues_part2.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Queues_part2.dir/tests.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clems\Documents\GitHub\262\Queues_part2\tests.cpp -o CMakeFiles\Queues_part2.dir\tests.cpp.s

# Object files for target Queues_part2
Queues_part2_OBJECTS = \
"CMakeFiles/Queues_part2.dir/Queue.cpp.obj" \
"CMakeFiles/Queues_part2.dir/tests.cpp.obj"

# External object files for target Queues_part2
Queues_part2_EXTERNAL_OBJECTS =

Queues_part2.exe: CMakeFiles/Queues_part2.dir/Queue.cpp.obj
Queues_part2.exe: CMakeFiles/Queues_part2.dir/tests.cpp.obj
Queues_part2.exe: CMakeFiles/Queues_part2.dir/build.make
Queues_part2.exe: CMakeFiles/Queues_part2.dir/linklibs.rsp
Queues_part2.exe: CMakeFiles/Queues_part2.dir/objects1.rsp
Queues_part2.exe: CMakeFiles/Queues_part2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Queues_part2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Queues_part2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queues_part2.dir/build: Queues_part2.exe

.PHONY : CMakeFiles/Queues_part2.dir/build

CMakeFiles/Queues_part2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Queues_part2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Queues_part2.dir/clean

CMakeFiles/Queues_part2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\clems\Documents\GitHub\262\Queues_part2 C:\Users\clems\Documents\GitHub\262\Queues_part2 C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug C:\Users\clems\Documents\GitHub\262\Queues_part2\cmake-build-debug\CMakeFiles\Queues_part2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Queues_part2.dir/depend

