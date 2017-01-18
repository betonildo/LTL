cmake_minimum_required(VERSION 2.8.10)

project(LTL)

# custom flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11 ")

# include .h directories that this module uses
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${Memallocator_INCLUDE_DIRS})
include_directories(${UnityDefinitions_INCLUDE_DIRS})

# include translation units
file(GLOB TRANSLATION_UNITS src/*.cpp)
file(GLOB INCLUDE_UNITS include/*.h)

# creates a executable
set(TRANSLATION_UNITS "${TRANSLATION_UNITS}" main.cpp)
add_executable(LTL "${TRANSLATION_UNITS}" "${INCLUDE_UNITS}")

# transient this include directories
set(${PROJECT_NAME}_INCLUDE_DIRS 
    ${PROJECT_SOURCE_DIR}/include
    ${UnityDefinitions_INCLUDE_DIRS}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)