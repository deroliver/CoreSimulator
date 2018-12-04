cmake_minimum_required(VERSION 2.8)
project(CoreSimulator)

file(GLOB_RECURSE SRCS source/*.cpp)

set(CMAKE_CXX_FLAGS "-std=c++0x")
set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(CMAKE_CXX_FLAGS_DEBUG "-O3")

add_executable(CoreSimulator ${SRCS})

target_include_directories(CoreSimulator
    PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)