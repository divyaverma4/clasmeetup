cmake_minimum_required(VERSION 3.26)
project(lab7)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab7 cowsay.cpp
        Cow.cpp
        Cow.h
        Dragon.cpp
        Dragon.h
        IceDragon.cpp
        IceDragon.h)
