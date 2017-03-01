//
// Created by diftodi on 2/6/17.
//

#include <iostream>
#include "PrintFunction.h"

int PrintFunction::execute(int argc, string* argv) {
    for(int i=1; i < argc; i++) {
        std::cout<<argv[i]<<std::endl;
    }
}