cmake_minimum_required(VERSION 3.10)

project(QuadraticEquation)

set(CMAKE_CXX_STANDARD 14)

# Specify the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/..)

# Add the executable
add_executable(quadraticEquation src/main.cpp)