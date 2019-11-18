cmake_minimum_required(VERSION 3.15)
project(Queues_part2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Queues_part2
        Queue.cpp
        Queue.h
        test_no_template.h
        test_with_template.h
        tests.cpp)
