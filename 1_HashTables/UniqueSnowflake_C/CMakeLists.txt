cmake_minimum_required(VERSION 3.16)
project(UniqueSnowflake)

set(CMAKE_C_STANDARD 99)
set(CMAKE_BUILD_TYPE Release)

file(GLOB SRC_FILES ./src/*.c)

add_executable(UniqueSnowFlake ${SRC_FILES})