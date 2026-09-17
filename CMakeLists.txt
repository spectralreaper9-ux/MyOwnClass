cmake_minimum_required(VERSION 4.3)
project(MyOwnClass)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyOwnClass main.cpp
        Critter.cpp
        Critter.h)
