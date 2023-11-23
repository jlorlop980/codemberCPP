cmake_minimum_required(VERSION 3.27)
project(ch3)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/binaries)
set(CMAKE_CXX_STANDARD 20)

add_executable(ch3 main.cpp
        helpers.h)
