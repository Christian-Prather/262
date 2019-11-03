cmake_minimum_required(VERSION 3.15)
project(Markov)

set(CMAKE_CXX_STANDARD 14)

include_directories(code)

add_executable(Markov
        code/brute_model.cpp
        code/brute_model.h
        code/main.cpp
        code/map_model.cpp
        code/map_model.h
        code/markov.cpp
        code/markov.h
        code/model.h
        code/word_model.cpp
        code/word_model.h)
