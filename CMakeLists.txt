# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(abc_dz1_procedural_approach LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
        # Headers
        Rand.h
        Common.h
        Diagonal.h
        Matrix.h
        Container.h
        Triangularn.h

        # Sources
        Rand.cpp
        Common.cpp
        Diagonal.cpp
        Matrix.cpp
        Triangularn.cpp
        main.cpp
        )

add_executable(abc_dz1_procedural_approach ${SOURCE_FILES})
