cmake_minimum_required(VERSION 3.14)
project(Lab_Hash_B)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab_Hash_B
        hash_functions.h
        main.cpp)
