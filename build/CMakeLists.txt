cmake_minimum_required(VERSION 3.0.0)
project(data_structures VERSION 0.1.0)
include(CTest)
enable_testing()
include_directories(${../header},${../src})
add_library(
    data_structures_headers
    ../src/myQueue.cpp
    ../src/myQueue.h
    ../src/LinkedList.cpp
    ../src/LinkedList.h
    ../src/Node.h
    ../src/HashTable.h
    ../src/HashTable.cpp
    ../src/tree_class.h
)

add_executable(data_structures ../src/main.cpp) 
target_link_libraries(data_structures PRIVATE data_structures_headers)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
list( APPEND CMAKE_CXX_FLAGS "-std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")
