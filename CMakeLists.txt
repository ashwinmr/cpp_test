# Cmake version to be used
cmake_minimum_required( VERSION 3.21 )

# Set platform
set(CMAKE_GENERATOR_PLATFORM x64)

# Project name
project(cpp_test)

# Include directories
include_directories(./include)

# Library directories
link_directories(./lib/64-bit/msvc64)

# Add executable
add_executable(cpp_test ./src/main.cpp ./src/testing.c)

# Target libraries
target_link_libraries(cpp_test nilibddc)

# Copy binary files
# Source is relative to current folder and destination is relative to build
file(COPY ./bin/64-bit/ DESTINATION ./Debug/)