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
include CMakeFiles/test_tsdf_map.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_tsdf_map.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_tsdf_map.dir/flags.make

CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o: CMakeFiles/test_tsdf_map.dir/flags.make
CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o: /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/test/test_tsdf_map.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o -c /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/test/test_tsdf_map.cc

CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/test/test_tsdf_map.cc > CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.i

CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox/test/test_tsdf_map.cc -o CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.s

# Object files for target test_tsdf_map
test_tsdf_map_OBJECTS = \
"CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o"

# External object files for target test_tsdf_map
test_tsdf_map_EXTERNAL_OBJECTS =

/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: CMakeFiles/test_tsdf_map.dir/test/test_tsdf_map.cc.o
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: CMakeFiles/test_tsdf_map.dir/build.make
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: gtest/lib/libgtest.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/libvoxblox_proto.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /home/taylorvd/gbplanner2_ws/devel/.private/eigen_checks/lib/libeigen_checks.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /home/taylorvd/gbplanner2_ws/devel/.private/glog_catkin/lib/libglog.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /home/taylorvd/gbplanner2_ws/devel/.private/gflags_catkin/lib/libgflags.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: /usr/lib/x86_64-linux-gnu/libprotobuf.so
/home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map: CMakeFiles/test_tsdf_map.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_tsdf_map.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_tsdf_map.dir/build: /home/taylorvd/gbplanner2_ws/devel/.private/voxblox/lib/voxblox/test_tsdf_map

.PHONY : CMakeFiles/test_tsdf_map.dir/build

CMakeFiles/test_tsdf_map.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_tsdf_map.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_tsdf_map.dir/clean

CMakeFiles/test_tsdf_map.dir/depend:
	cd /home/taylorvd/gbplanner2_ws/build/voxblox && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox /home/taylorvd/gbplanner2_ws/src/mapping/voxblox/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox /home/taylorvd/gbplanner2_ws/build/voxblox/CMakeFiles/test_tsdf_map.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_tsdf_map.dir/depend

