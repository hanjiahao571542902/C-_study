# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_SOURCE_DIR = /home/jiahao/桌面/study/mprpc_again

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jiahao/桌面/study/mprpc_again/build

# Include any dependencies generated for this target.
include example/caller/CMakeFiles/consumer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include example/caller/CMakeFiles/consumer.dir/compiler_depend.make

# Include the progress variables for this target.
include example/caller/CMakeFiles/consumer.dir/progress.make

# Include the compile flags for this target's objects.
include example/caller/CMakeFiles/consumer.dir/flags.make

example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o: /home/jiahao/桌面/study/mprpc_again/example/caller/calluserservice.cc
example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o: example/caller/CMakeFiles/consumer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jiahao/桌面/study/mprpc_again/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o -MF CMakeFiles/consumer.dir/calluserservice.cc.o.d -o CMakeFiles/consumer.dir/calluserservice.cc.o -c /home/jiahao/桌面/study/mprpc_again/example/caller/calluserservice.cc

example/caller/CMakeFiles/consumer.dir/calluserservice.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/consumer.dir/calluserservice.cc.i"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiahao/桌面/study/mprpc_again/example/caller/calluserservice.cc > CMakeFiles/consumer.dir/calluserservice.cc.i

example/caller/CMakeFiles/consumer.dir/calluserservice.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/calluserservice.cc.s"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiahao/桌面/study/mprpc_again/example/caller/calluserservice.cc -o CMakeFiles/consumer.dir/calluserservice.cc.s

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o: example/caller/CMakeFiles/consumer.dir/flags.make
example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o: /home/jiahao/桌面/study/mprpc_again/example/user.pb.cc
example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o: example/caller/CMakeFiles/consumer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jiahao/桌面/study/mprpc_again/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o -MF CMakeFiles/consumer.dir/__/user.pb.cc.o.d -o CMakeFiles/consumer.dir/__/user.pb.cc.o -c /home/jiahao/桌面/study/mprpc_again/example/user.pb.cc

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/consumer.dir/__/user.pb.cc.i"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jiahao/桌面/study/mprpc_again/example/user.pb.cc > CMakeFiles/consumer.dir/__/user.pb.cc.i

example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/consumer.dir/__/user.pb.cc.s"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jiahao/桌面/study/mprpc_again/example/user.pb.cc -o CMakeFiles/consumer.dir/__/user.pb.cc.s

# Object files for target consumer
consumer_OBJECTS = \
"CMakeFiles/consumer.dir/calluserservice.cc.o" \
"CMakeFiles/consumer.dir/__/user.pb.cc.o"

# External object files for target consumer
consumer_EXTERNAL_OBJECTS =

/home/jiahao/桌面/study/mprpc_again/bin/consumer: example/caller/CMakeFiles/consumer.dir/calluserservice.cc.o
/home/jiahao/桌面/study/mprpc_again/bin/consumer: example/caller/CMakeFiles/consumer.dir/__/user.pb.cc.o
/home/jiahao/桌面/study/mprpc_again/bin/consumer: example/caller/CMakeFiles/consumer.dir/build.make
/home/jiahao/桌面/study/mprpc_again/bin/consumer: /home/jiahao/桌面/study/mprpc_again/lib/libmprpc.a
/home/jiahao/桌面/study/mprpc_again/bin/consumer: example/caller/CMakeFiles/consumer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jiahao/桌面/study/mprpc_again/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/jiahao/桌面/study/mprpc_again/bin/consumer"
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/consumer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
example/caller/CMakeFiles/consumer.dir/build: /home/jiahao/桌面/study/mprpc_again/bin/consumer
.PHONY : example/caller/CMakeFiles/consumer.dir/build

example/caller/CMakeFiles/consumer.dir/clean:
	cd /home/jiahao/桌面/study/mprpc_again/build/example/caller && $(CMAKE_COMMAND) -P CMakeFiles/consumer.dir/cmake_clean.cmake
.PHONY : example/caller/CMakeFiles/consumer.dir/clean

example/caller/CMakeFiles/consumer.dir/depend:
	cd /home/jiahao/桌面/study/mprpc_again/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jiahao/桌面/study/mprpc_again /home/jiahao/桌面/study/mprpc_again/example/caller /home/jiahao/桌面/study/mprpc_again/build /home/jiahao/桌面/study/mprpc_again/build/example/caller /home/jiahao/桌面/study/mprpc_again/build/example/caller/CMakeFiles/consumer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : example/caller/CMakeFiles/consumer.dir/depend

