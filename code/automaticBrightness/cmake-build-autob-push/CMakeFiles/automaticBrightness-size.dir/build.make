# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "C:\Users\Javier Alonso Silva\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Javier Alonso Silva\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness\cmake-build-autob-push

# Utility rule file for automaticBrightness-size.

# Include the progress variables for this target.
include CMakeFiles/automaticBrightness-size.dir/progress.make

CMakeFiles/automaticBrightness-size: automaticBrightness.elf
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness\cmake-build-autob-push\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Calculating automaticBrightness image size"
	"C:\Users\Javier Alonso Silva\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\181.4668.70\bin\cmake\bin\cmake.exe" -DFIRMWARE_IMAGE=E:/Nextcloud/TuringDomotics/fritzing-modeling/code/automaticBrightness/cmake-build-autob-push/automaticBrightness.elf -DMCU=atmega328p -DEEPROM_IMAGE=E:/Nextcloud/TuringDomotics/fritzing-modeling/code/automaticBrightness/cmake-build-autob-push/automaticBrightness.eep -P E:/Nextcloud/TuringDomotics/fritzing-modeling/code/automaticBrightness/cmake-build-autob-push/CMakeFiles/FirmwareSize.cmake

automaticBrightness-size: CMakeFiles/automaticBrightness-size
automaticBrightness-size: CMakeFiles/automaticBrightness-size.dir/build.make

.PHONY : automaticBrightness-size

# Rule to build all files generated by this target.
CMakeFiles/automaticBrightness-size.dir/build: automaticBrightness-size

.PHONY : CMakeFiles/automaticBrightness-size.dir/build

CMakeFiles/automaticBrightness-size.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\automaticBrightness-size.dir\cmake_clean.cmake
.PHONY : CMakeFiles/automaticBrightness-size.dir/clean

CMakeFiles/automaticBrightness-size.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness\cmake-build-autob-push E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness\cmake-build-autob-push E:\Nextcloud\TuringDomotics\fritzing-modeling\code\automaticBrightness\cmake-build-autob-push\CMakeFiles\automaticBrightness-size.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/automaticBrightness-size.dir/depend
