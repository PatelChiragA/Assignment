cmake_minimum_required(VERSION 3.5.1)

project(function_pointer)
set(PROJECT_NAME function_pointer)

set(CMAKE_CXX_FLAGS "-std=gnu++11")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)



file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

