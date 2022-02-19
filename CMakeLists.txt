# Cmake version to be used
cmake_minimum_required( VERSION 3.21 )

# Project name
project(cpp_test)

# Include all dependencies
include_directories(./include)

# Add executable
add_executable(cpp_test ./src/main.cpp)