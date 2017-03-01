//
// Created by diftodi on 2/6/17.
//

#include <iostream>
#include "CountFunction.h"

int CountFunction::execute(int argc, string* argv) {
    int countTo = stoi(argv[1]);
    for(int i = 0; i < countTo; i++) {
        std::cout<<i<<" "<<std::endl;
    }
}