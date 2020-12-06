cmake_minimum_required(VERSION 3.17)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

set(INC_DIR ./include)
include_directories(${INC_DIR})


add_executable(leetcode main.cpp)