# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.3.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.3.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\projects\conatct-management-system

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\projects\conatct-management-system\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/contact_management_system.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/contact_management_system.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/contact_management_system.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/contact_management_system.dir/flags.make

CMakeFiles/contact_management_system.dir/main.cpp.obj: CMakeFiles/contact_management_system.dir/flags.make
CMakeFiles/contact_management_system.dir/main.cpp.obj: D:/projects/conatct-management-system/main.cpp
CMakeFiles/contact_management_system.dir/main.cpp.obj: CMakeFiles/contact_management_system.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\projects\conatct-management-system\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/contact_management_system.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/contact_management_system.dir/main.cpp.obj -MF CMakeFiles\contact_management_system.dir\main.cpp.obj.d -o CMakeFiles\contact_management_system.dir\main.cpp.obj -c D:\projects\conatct-management-system\main.cpp

CMakeFiles/contact_management_system.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/contact_management_system.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\projects\conatct-management-system\main.cpp > CMakeFiles\contact_management_system.dir\main.cpp.i

CMakeFiles/contact_management_system.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/contact_management_system.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\projects\conatct-management-system\main.cpp -o CMakeFiles\contact_management_system.dir\main.cpp.s

# Object files for target contact_management_system
contact_management_system_OBJECTS = \
"CMakeFiles/contact_management_system.dir/main.cpp.obj"

# External object files for target contact_management_system
contact_management_system_EXTERNAL_OBJECTS =

contact_management_system.exe: CMakeFiles/contact_management_system.dir/main.cpp.obj
contact_management_system.exe: CMakeFiles/contact_management_system.dir/build.make
contact_management_system.exe: CMakeFiles/contact_management_system.dir/linkLibs.rsp
contact_management_system.exe: CMakeFiles/contact_management_system.dir/objects1.rsp
contact_management_system.exe: CMakeFiles/contact_management_system.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\projects\conatct-management-system\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable contact_management_system.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\contact_management_system.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/contact_management_system.dir/build: contact_management_system.exe
.PHONY : CMakeFiles/contact_management_system.dir/build

CMakeFiles/contact_management_system.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\contact_management_system.dir\cmake_clean.cmake
.PHONY : CMakeFiles/contact_management_system.dir/clean

CMakeFiles/contact_management_system.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\projects\conatct-management-system D:\projects\conatct-management-system D:\projects\conatct-management-system\cmake-build-debug D:\projects\conatct-management-system\cmake-build-debug D:\projects\conatct-management-system\cmake-build-debug\CMakeFiles\contact_management_system.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/contact_management_system.dir/depend

