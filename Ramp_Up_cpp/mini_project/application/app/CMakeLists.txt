cmake_minimum_required(VERSION 3.0)

project(Multithreading)
set(PROJECT_NAME Multithreading)
set(PROJECT_NAME1 Test)
#find_package(unittest++ REQUIRED)
include_directories(${UTPP_INCLUDE_DIRS})


set(CMAKE_CXX_FLAGS "-std=gnu++11")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../bin)

include_directories(inc)
file(GLOB HEADERS inc/*.h)
file(GLOB SOURCES src/main.cpp src/childthread.cpp src/mainthread.cpp)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} pthread unittest++)



include_directories(inc)
file(GLOB HEADERS inc/*.h)
#file(GLOB HEADERS inc/headerfiles.h inc/mainthread.h inc/childthread.h inc/callback.h)
file(GLOB SOURCESUNIT src/test.cpp src/childthread.cpp src/mainthread.cpp)

add_executable(${PROJECT_NAME1} ${SOURCESUNIT} ${HEADERS})

target_link_libraries(${PROJECT_NAME1} pthread unittest++)



