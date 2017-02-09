cmake_minimum_required(VERSION 3.6)
project(metal)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp abstract/FunctionHolder.h abstract/Function.h functions/SayHelloFunction.cpp abstract/Function.cpp functions/SayHelloFunction.h abstract/FunctionHolder.cpp holders/ArrayFunctionHolder.cpp holders/ArrayFunctionHolder.h functions/CountFunction.cpp functions/CountFunction.h)
add_executable(metal ${SOURCE_FILES})