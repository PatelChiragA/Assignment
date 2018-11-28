#include_directories(inc build/proto)
#file(GLOB HEADERS inc/*.h)
#file(GLOB SOURCES src/server_1.cpp  /scratch/project1/build/proto/proto_vector.pb.cc)
#add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

#target_link_libraries(${PROJECT_NAME} protobuf  ${PROTOBUF_LIBRARY} pthread)


#include_directories(inc build/proto)
#file(GLOB HEADERS inc/*.h)
#file(GLOB SOURCES src/client_1.cpp  /scratch/project1/build/proto/proto_vector.pb.cc)
#add_executable(${PROJECT_NAME1} ${SOURCES} ${HEADERS})

#target_link_libraries(${PROJECT_NAME} protobuf  ${PROTOBUF_LIBRARY} pthread)


#PROJECT(rpc)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)
SET(CMAKE_CXX_FLAGS "-g -std=c++11")

project(Bootcamp_Project)
set(PROJECT_NAME BootcampServer)
set(PROJECT_NAME1 BootcampClient)



#ADD_SUBDIRECTORY(proto)


include_directories(${UTPP_INCLUDE_DIRS})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)


INCLUDE_DIRECTORIES(/scratch/project1/build/proto)
ADD_EXECUTABLE(${PROJECT_NAME} src/server_1.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} proto ${PROTOBUF_LIBRARY} pthread)


INCLUDE_DIRECTORIES(/scratch/project1/build/proto)
ADD_EXECUTABLE(${PROJECT_NAME1} src/client_1.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME1} proto ${PROTOBUF_LIBRARY} pthread)
