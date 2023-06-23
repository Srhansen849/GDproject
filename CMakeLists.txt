cmake_minimum_required(VERSION 3.3)
project("GDproject")

file(GLOB exe_sources "src/main.cpp")

add_executable(GDproject ${exe_sources})
target_include_directories(GDproject PRIVATE include)
target_link_directories(GDproject PRIVATE lib)
target_link_libraries(GDproject PRIVATE OpenGL32.lib glfw3.lib)