cmake_minimum_required(VERSION 3.10)
project(clientTrials)

set(CMAKE_CXX_STANDARD 14)

add_executable(clientTrials main.cpp TCPClient.cpp TCPClient.h json.hpp jsonBuilder.cpp jsonBuilder.h)