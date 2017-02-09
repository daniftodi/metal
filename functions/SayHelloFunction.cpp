//
// Created by diftodi on 2/6/17.
//

#include <iostream>
#include "SayHelloFunction.h"

int SayHelloFunction::execute(int argc, char **argv) {
    std::cout<<"argc: "<<argc<<" argv:"<<argv[0]<<std::endl;
}