cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(PROJECTNAME "CatStuff")

project(${PROJECTNAME})

file(GLOB_RECURSE
source
${CMAKE_SOURCE_DIR}/src/*
)

file(GLOB_RECURSE
headers
${CMAKE_SOURCE_DIR}/headers/*
)

add_executable(${PROJECTNAME} ${source} ${headers})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMake")

set(SFML_ROOT "${CMAKE_SOURCE_DIR}/lib/SFML-2.4.2")
set(SFML_INCLUDE_DIR "${CMAKE_SOURCE_DIR}/lib/SFML-2.4.2/include")
set(SFML_LIBRARY_DIR "${CMAKE_SOURCE_DIR}/lib/SFML-2.4.2/lib")

find_package(SFML REQUIRED graphics window system main)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECTNAME} ${SFML_LIBRARIES})
endif(SFML_FOUND)
