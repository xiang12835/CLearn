cmake_minimum_required(VERSION 3.3)
project(C06IfElse)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(C06IfElse ${SOURCE_FILES})