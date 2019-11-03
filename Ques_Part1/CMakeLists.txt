cmake_minimum_required(VERSION 3.14)
project(Ques_Part1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ques_Part1
        main.cpp
        Queue.cpp
        Queue.h)
