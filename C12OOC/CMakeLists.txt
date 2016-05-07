cmake_minimum_required(VERSION 3.3)
project(C12OOC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c hello.c hello.h)
add_executable(C12OOC ${SOURCE_FILES})