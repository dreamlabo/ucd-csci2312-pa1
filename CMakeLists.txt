cmake_minimum_required(VERSION 3.2)
project(pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Point.cpp PA1.cpp)
add_executable(pa1 ${SOURCE_FILES})