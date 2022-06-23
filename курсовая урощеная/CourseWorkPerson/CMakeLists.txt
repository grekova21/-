cmake_minimum_required(VERSION 3.22)
project(CourseWorkPerson)

set(CMAKE_CXX_STANDARD 17)

add_executable(CourseWorkPerson main.cpp
               Person.h Person.cpp
               Worker.h Worker.cpp
               Student.h Student.cpp)
