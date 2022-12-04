cmake_minimum_required(VERSION 3.23)
project(POlabs)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(tests)
add_executable(calc calc.h calc.cpp main.cpp)