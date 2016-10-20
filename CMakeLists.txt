cmake_minimum_required(VERSION 3.6)
project(lab4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    hull.cpp
    hull.h
    plot.cpp
    plot.h
    point.h
    sort.cpp
    sort.h
    test.cpp)

add_executable(lab4 ${SOURCE_FILES})