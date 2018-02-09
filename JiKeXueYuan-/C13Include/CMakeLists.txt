cmake_minimum_required(VERSION 3.3)
project(C13Include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c hello.c hello.h)
add_executable(C13Include ${SOURCE_FILES})