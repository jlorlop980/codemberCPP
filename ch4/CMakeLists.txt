cmake_minimum_required(VERSION 3.27)
project(ch4)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/binaries)
set(CMAKE_CXX_STANDARD 17)

add_executable(ch4 main.cpp
        helper.h)
