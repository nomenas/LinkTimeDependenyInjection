cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED)

add_subdirectory(product)
add_subdirectory(util)
add_subdirectory(library)
add_subdirectory(tester)