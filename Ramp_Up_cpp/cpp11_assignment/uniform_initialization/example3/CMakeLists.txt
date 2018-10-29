cmake_minimum_required(VERSION 3.5.1)

project(initialize_funparameter)
set(PROJECT_NAME initialize_funparameter)

set(CMAKE_CXX_FLAGS "-std=gnu++11")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)



file(GLOB HEADERS "*.h")
file(GLOB SOURCES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
