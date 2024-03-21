cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_6_copy)

set(CMAKE_CXX_STANDARD 23)

add_executable(OOP_lab_1_6_copy main.cpp
        BusC.cpp
        Google_tests/test.cpp
)

add_subdirectory(Google_tests)
