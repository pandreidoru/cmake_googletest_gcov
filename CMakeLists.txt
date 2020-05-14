cmake_minimum_required(VERSION 3.12)
project(cub)

set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH
     ${PROJECT_SOURCE_DIR}/lib/cmake-modules)

add_subdirectory(src)
add_subdirectory(test/src)
