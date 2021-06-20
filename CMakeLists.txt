cmake_minimum_required(VERSION 3.10)

project(filemond)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(source_dir "${PROJECT_SOURCE_DIR}/src/sample.cpp")
set(path "${source_dir}")
set(target "${TARGET}")

add_executable(${target} ${source_dir})
