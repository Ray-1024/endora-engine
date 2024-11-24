cmake_minimum_required(VERSION 3.29)
project(endora_engine)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(endora_engine src/main.cpp
        src/system/NumericTypes.h
        src/physics/vector/Vector2.h
        src/physics/vector/Vector2.cpp)
