cmake_minimum_required(VERSION 3.13)
project(TopCommonWords)

set(CMAKE_CXX_STANDARD 14)

add_executable(TopCommonWords main.cpp helper.cpp helper.h process.cpp process.h print.cpp print.h)