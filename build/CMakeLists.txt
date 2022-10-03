cmake_minimum_required(VERSION 3.0.0)
project(data_structures VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(${../header},${../src})

add_library(
    queue
    ../src/Queue.cpp
    ../src/Queue.h
)

add_executable(data_structures ../src/main.cpp) 

target_link_libraries(data_structures PRIVATE queue)
  

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
