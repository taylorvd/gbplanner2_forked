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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/taylorvd/gbplanner2_ws/build/voxblox

# Include any dependencies generated for this target.
include CMakeFiles/voxblox_proto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/voxblox_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/voxblox_proto.dir/flags.make

Block.pb.h: /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox/Block.proto
Block.pb.h: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running cpp protocol buffer compiler on proto/voxblox/Block.proto"
	/usr/local/bin/protoc --cpp_out /home/taylorvd/gbplanner2_ws/build/voxblox -I /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox/Block.proto

Block.pb.cc: Block.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate Block.pb.cc

Layer.pb.h: /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox/Layer.proto
Layer.pb.h: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running cpp protocol buffer compiler on proto/voxblox/Layer.proto"
	/usr/local/bin/protoc --cpp_out /home/taylorvd/gbplanner2_ws/build/voxblox -I /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/proto/voxblox/Layer.proto

Layer.pb.cc: Layer.pb.h
	@$(CMAKE_COMMAND) -E touch_nocreate Layer.pb.cc

CMakeFiles/voxblox_proto.dir/Block.pb.cc.o: CMakeFiles/voxblox_proto.dir/flags.make
CMakeFiles/voxblox_proto.dir/Block.pb.cc.o: Block.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/voxblox_proto.dir/Block.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/voxblox_proto.dir/Block.pb.cc.o -c /home/taylorvd/gbplanner2_ws/build/voxblox/Block.pb.cc

CMakeFiles/voxblox_proto.dir/Block.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/voxblox_proto.dir/Block.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/taylorvd/gbplanner2_ws/build/voxblox/Block.pb.cc > CMakeFiles/voxblox_proto.dir/Block.pb.cc.i

CMakeFiles/voxblox_proto.dir/Block.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/voxblox_proto.dir/Block.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/taylorvd/gbplanner2_ws/build/voxblox/Block.pb.cc -o CMakeFiles/voxblox_proto.dir/Block.pb.cc.s

CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o: CMakeFiles/voxblox_proto.dir/flags.make
CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o: Layer.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o -c /home/taylorvd/gbplanner2_ws/build/voxblox/Layer.pb.cc

CMakeFiles/voxblox_proto.dir/Layer.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/voxblox_proto.dir/Layer.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/taylorvd/gbplanner2_ws/build/voxblox/Layer.pb.cc > CMakeFiles/voxblox_proto.dir/Layer.pb.cc.i

CMakeFiles/voxblox_proto.dir/Layer.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/voxblox_proto.dir/Layer.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/taylorvd/gbplanner2_ws/build/voxblox/Layer.pb.cc -o CMakeFiles/voxblox_proto.dir/Layer.pb.cc.s

# Object files for target voxblox_proto
voxblox_proto_OBJECTS = \
"CMakeFiles/voxblox_proto.dir/Block.pb.cc.o" \
"CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o"

# External object files for target voxblox_proto
voxblox_proto_EXTERNAL_OBJECTS =

/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: CMakeFiles/voxblox_proto.dir/Block.pb.cc.o
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: CMakeFiles/voxblox_proto.dir/Layer.pb.cc.o
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: CMakeFiles/voxblox_proto.dir/build.make
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: /home/taylorvd/gbplanner2_ws/devel/.private/eigen_checks/lib/libeigen_checks.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: /home/taylorvd/gbplanner2_ws/devel/.private/glog_catkin/lib/libglog.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: /home/taylorvd/gbplanner2_ws/devel/.private/gflags_catkin/lib/libgflags.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so: CMakeFiles/voxblox_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/voxblox_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/voxblox_proto.dir/build: /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so

.PHONY : CMakeFiles/voxblox_proto.dir/build

CMakeFiles/voxblox_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/voxblox_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/voxblox_proto.dir/clean

CMakeFiles/voxblox_proto.dir/depend: Block.pb.h
CMakeFiles/voxblox_proto.dir/depend: Block.pb.cc
CMakeFiles/voxblox_proto.dir/depend: Layer.pb.h
CMakeFiles/voxblox_proto.dir/depend: Layer.pb.cc
	cd /home/taylorvd/gbplanner2_ws/build/voxblox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles/voxblox_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/voxblox_proto.dir/depend

