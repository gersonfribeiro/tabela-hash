cmake_minimum_required(VERSION 3.30)
project(TabelaHash)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(TabelaHash main.cpp
        TabHash.cpp
        TabHash.h)
