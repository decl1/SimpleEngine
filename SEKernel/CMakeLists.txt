cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(SEKernel)

include(cmake/function.cmake)

add_subdirectory(kernel)
add_subdirectory(main)
