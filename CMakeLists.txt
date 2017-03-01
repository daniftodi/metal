enable_testing()
cmake_minimum_required(VERSION 3.6)
project(metal)

set(CMAKE_CXX_STANDARD 11)

ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK)

set(SOURCE_FILES main.cpp abstract/Holder.h abstract/Function.h functions/PrintFunction.cpp abstract/Function.cpp functions/PrintFunction.h abstract/Holder.cpp holders/ArrayHolder.hpp functions/CountFunction.cpp functions/CountFunction.h Metal.cpp Metal.h)
add_executable(metal ${SOURCE_FILES})

