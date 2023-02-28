cmake_minimum_required(VERSION 3.14)

project(myProject)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

add_subdirectory(main)
add_subdirectory(libfoo)
add_subdirectory(libbar)
add_subdirectory(test)
