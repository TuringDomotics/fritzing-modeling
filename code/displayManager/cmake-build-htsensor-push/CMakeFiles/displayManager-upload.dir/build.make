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
CMAKE_SOURCE_DIR = E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager\cmake-build-htsensor-push

# Utility rule file for displayManager-upload.

# Include the progress variables for this target.
include CMakeFiles/displayManager-upload.dir/progress.make

CMakeFiles/displayManager-upload: displayManager.elf
	"C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe" "-CC:/Program Files (x86)/Arduino/hardware/tools/avr/etc/avrdude.conf" -patmega2560 -cwiring -b115200 -PCOM6 -D -V -Uflash:w:E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/cmake-build-htsensor-push/displayManager.hex:i -Ueeprom:w:E:/Nextcloud/TuringDomotics/fritzing-modeling/code/displayManager/cmake-build-htsensor-push/displayManager.eep:i

displayManager-upload: CMakeFiles/displayManager-upload
displayManager-upload: CMakeFiles/displayManager-upload.dir/build.make

.PHONY : displayManager-upload

# Rule to build all files generated by this target.
CMakeFiles/displayManager-upload.dir/build: displayManager-upload

.PHONY : CMakeFiles/displayManager-upload.dir/build

CMakeFiles/displayManager-upload.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\displayManager-upload.dir\cmake_clean.cmake
.PHONY : CMakeFiles/displayManager-upload.dir/clean

CMakeFiles/displayManager-upload.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager\cmake-build-htsensor-push E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager\cmake-build-htsensor-push E:\Nextcloud\TuringDomotics\fritzing-modeling\code\displayManager\cmake-build-htsensor-push\CMakeFiles\displayManager-upload.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/displayManager-upload.dir/depend

