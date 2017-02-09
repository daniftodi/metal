//
// Created by diftodi on 2/6/17.
//

#include <cstring>
#include <stdexcept>
#include <iostream>
#include "ArrayFunctionHolder.h"

Function* ArrayFunctionHolder::getFunction(char *name) {
    for(int i=0; i<this->fCount; i++) {
        if(strcmp(name, this->functions[i]->getName()) == 0) {
            return this->functions[i];
        }
    }

    return NULL;
}

void ArrayFunctionHolder::putFunction(Function *fn) {
    if(this->fCount < this->fMaxLimit) {
        this->functions[this->fCount++] = fn;
    } else {
        throw std::out_of_range("Out of range fMaxLimit");
    }
}

ArrayFunctionHolder::~ArrayFunctionHolder() {
    delete[] this->functions;
}