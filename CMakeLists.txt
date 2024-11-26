cmake_minimum_required(VERSION 3.30)
project(TabelaHash)

set(CMAKE_CXX_STANDARD 20)

add_executable(TabelaHash main.cpp
        TabHash.cpp
        TabHash.h)
