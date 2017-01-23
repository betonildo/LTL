cmake_minimum_required(VERSION 2.6)

project(LTL)

# include .h directories that this module uses
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${UnityDefinitions_INCLUDE_DIRS})

# include translation units
file(GLOB TRANSLATION_UNITS src/*.cpp)
file(GLOB INCLUDE_UNITS include/*.h)

# transient this include directories
set(${PROJECT_NAME}_INCLUDE_DIRS 
    ${PROJECT_SOURCE_DIR}/include
    ${UnityDefinitions_INCLUDE_DIRS}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)

set(${PROJECT_NAME}_INCLUDE_UNITS
    ${INCLUDE_UNITS}
    ${Memallocator_INCLUDE_UNITS}
    CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)