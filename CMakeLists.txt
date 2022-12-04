cmake_minimum_required(VERSION 3.23)
project(POlabs)

set(CMAKE_CXX_STANDARD 23)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

add_executable(tests WIN32 calcTests.cpp)
