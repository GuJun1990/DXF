cmake_minimum_required(VERSION 3.15)
project(Algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(Algorithm main.cpp graph/Graph.cpp graph/Graph.h map/Map.cpp map/Map.h)