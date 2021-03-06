cmake_minimum_required(VERSION 3.17)
project(CppLibraries)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLibraries main.cpp lib/tmf.h)
add_executable(README README.md)
add_executable(main main.cpp)
add_executable(tmf lib/tmf.h)
add_executable(code lib/code.cpp)
add_executable( .gitignore)