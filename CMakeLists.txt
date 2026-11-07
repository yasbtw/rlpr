cmake_minimum_required(VERSION 4.0.0)
project(project)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(raylib)

add_executable(execname main.cpp)
target_link_libraries(execname PRIVATE raylib)