cmake_minimum_required(VERSION 3.26)
project(practica1)

set(CMAKE_CXX_STANDARD 17)

add_executable(practica1 main.cpp
        Usuario.cpp
        Usuario.h
        Admin.cpp
        Admin.h
        Cajero.cpp
        Cajero.h
        Cliente.cpp
        Cliente.h
)
