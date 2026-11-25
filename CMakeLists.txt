cmake_minimum_required(VERSION 3.10)
project(MOD VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} SHARED src/main.cpp)
setup_geode_mod(${PROJECT_NAME})
