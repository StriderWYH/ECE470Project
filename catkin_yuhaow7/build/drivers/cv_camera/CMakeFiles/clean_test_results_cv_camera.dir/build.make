# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/ur3/catkin_yuhaow7/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ur3/catkin_yuhaow7/build

# Utility rule file for clean_test_results_cv_camera.

# Include the progress variables for this target.
include drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/progress.make

drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera:
	cd /home/ur3/catkin_yuhaow7/build/drivers/cv_camera && /usr/bin/python2 /opt/ros/kinetic/share/catkin/cmake/test/remove_test_results.py /home/ur3/catkin_yuhaow7/build/test_results/cv_camera

clean_test_results_cv_camera: drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera
clean_test_results_cv_camera: drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/build.make

.PHONY : clean_test_results_cv_camera

# Rule to build all files generated by this target.
drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/build: clean_test_results_cv_camera

.PHONY : drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/build

drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/clean:
	cd /home/ur3/catkin_yuhaow7/build/drivers/cv_camera && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_cv_camera.dir/cmake_clean.cmake
.PHONY : drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/clean

drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/depend:
	cd /home/ur3/catkin_yuhaow7/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ur3/catkin_yuhaow7/src /home/ur3/catkin_yuhaow7/src/drivers/cv_camera /home/ur3/catkin_yuhaow7/build /home/ur3/catkin_yuhaow7/build/drivers/cv_camera /home/ur3/catkin_yuhaow7/build/drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : drivers/cv_camera/CMakeFiles/clean_test_results_cv_camera.dir/depend

