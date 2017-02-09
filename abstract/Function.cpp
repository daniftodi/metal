//
// Created by diftodi on 2/6/17.
//

#include <cstring>
#include <iostream>
#include "Function.h"

Function::Function(const char *name) {
    this->name = name;
}

const char* Function::getName() {
    return this->name;
}

void Function::setName(const char *name) {
    strcmp(this->name, name);
}

int Function::execute(int, char **) {
    std::cout<<"Not implemented"<<std::endl;
}

Function::~Function() {

}