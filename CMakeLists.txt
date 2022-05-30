cmake_minimum_required(VERSION 3.22)
project(clox)

set(CMAKE_CXX_STANDARD 14)

add_executable(clox main.c common.h chunk.h chunk.c memory.h memory.c debug.c debug.h value.h value.c)
