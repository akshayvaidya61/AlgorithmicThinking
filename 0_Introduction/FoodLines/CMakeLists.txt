cmake_minimum_required(VERSION 3.16)
set(PROJECT_NAME FoodLines)
project(${PROJECT_NAME} C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_BUILD_TYPE Release)

file(GLOB SRC_FILES ./src/*.c)

add_executable(${PROJECT_NAME} ${SRC_FILES})