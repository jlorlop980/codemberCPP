cmake_minimum_required(VERSION 3.27)
project(ch5)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/binaries)
set(CMAKE_CXX_STANDARD 17)

add_executable(ch5 main.cpp
        helpers.h)
