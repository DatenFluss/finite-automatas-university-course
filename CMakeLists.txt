cmake_minimum_required(VERSION 3.29)
project(computations)

set(CMAKE_CXX_STANDARD 20)

add_executable(computations main.cpp
        automatas/structures/DFA.h
        automatas/structures/NFA.h)
