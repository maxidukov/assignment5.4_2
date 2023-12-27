cmake_minimum_required(VERSION 3.5)

project(assignment5_4__2_QC LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(assignment5_4__2_QC main.cpp sq.h sq.cpp)

add_subdirectory(/home/max/Catch2 Catch2-build)
add_executable(assignment5_4__2_QC_TEST test_main.cpp list.h list.cpp)

target_link_libraries(assignment5_4__2_QC_TEST PRIVATE Catch2::Catch2)
