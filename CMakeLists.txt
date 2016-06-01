cmake_minimum_required (VERSION 2.6)
project (amdsetting)
# the version
set (amdsetting_VERSION_MAJOR, 0)
set (amdsetting_VERSION_MINOR, 1)
add_executable(amdSetting amdSetting.cpp cmdParser.cpp settingManager.cpp)
include_directories("${PROJECT_BINARY_DIR}")
