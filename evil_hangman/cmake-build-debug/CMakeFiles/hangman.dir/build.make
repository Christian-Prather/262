# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = C:\Users\clems\Documents\GitHub\262\evil_hangman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hangman.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hangman.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hangman.dir/flags.make

CMakeFiles/hangman.dir/main.cpp.obj: CMakeFiles/hangman.dir/flags.make
CMakeFiles/hangman.dir/main.cpp.obj: CMakeFiles/hangman.dir/includes_CXX.rsp
CMakeFiles/hangman.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hangman.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hangman.dir\main.cpp.obj -c C:\Users\clems\Documents\GitHub\262\evil_hangman\main.cpp

CMakeFiles/hangman.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hangman.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clems\Documents\GitHub\262\evil_hangman\main.cpp > CMakeFiles\hangman.dir\main.cpp.i

CMakeFiles/hangman.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hangman.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clems\Documents\GitHub\262\evil_hangman\main.cpp -o CMakeFiles\hangman.dir\main.cpp.s

CMakeFiles/hangman.dir/hangman.cpp.obj: CMakeFiles/hangman.dir/flags.make
CMakeFiles/hangman.dir/hangman.cpp.obj: CMakeFiles/hangman.dir/includes_CXX.rsp
CMakeFiles/hangman.dir/hangman.cpp.obj: ../hangman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hangman.dir/hangman.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hangman.dir\hangman.cpp.obj -c C:\Users\clems\Documents\GitHub\262\evil_hangman\hangman.cpp

CMakeFiles/hangman.dir/hangman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hangman.dir/hangman.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\clems\Documents\GitHub\262\evil_hangman\hangman.cpp > CMakeFiles\hangman.dir\hangman.cpp.i

CMakeFiles/hangman.dir/hangman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hangman.dir/hangman.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\clems\Documents\GitHub\262\evil_hangman\hangman.cpp -o CMakeFiles\hangman.dir\hangman.cpp.s

# Object files for target hangman
hangman_OBJECTS = \
"CMakeFiles/hangman.dir/main.cpp.obj" \
"CMakeFiles/hangman.dir/hangman.cpp.obj"

# External object files for target hangman
hangman_EXTERNAL_OBJECTS =

hangman.exe: CMakeFiles/hangman.dir/main.cpp.obj
hangman.exe: CMakeFiles/hangman.dir/hangman.cpp.obj
hangman.exe: CMakeFiles/hangman.dir/build.make
hangman.exe: CMakeFiles/hangman.dir/linklibs.rsp
hangman.exe: CMakeFiles/hangman.dir/objects1.rsp
hangman.exe: CMakeFiles/hangman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hangman.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hangman.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hangman.dir/build: hangman.exe

.PHONY : CMakeFiles/hangman.dir/build

CMakeFiles/hangman.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hangman.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hangman.dir/clean

CMakeFiles/hangman.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\clems\Documents\GitHub\262\evil_hangman C:\Users\clems\Documents\GitHub\262\evil_hangman C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug C:\Users\clems\Documents\GitHub\262\evil_hangman\cmake-build-debug\CMakeFiles\hangman.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hangman.dir/depend

