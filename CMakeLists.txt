cmake_minimum_required(VERSION 3.6)
project(Lab8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Shape.cpp Shape.h MPi.cpp MPi.h NewShapes.cpp NewShapes.h)
add_executable(Lab8 ${SOURCE_FILES} Shape.cpp Shape.h MPi.cpp MPi.h NewShapes.cpp NewShapes.h)