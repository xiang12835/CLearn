cmake_minimum_required(VERSION 3.3)
project(C15File)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c)
add_executable(C15File ${SOURCE_FILES})