//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_SAYHELLO_H
#define METAL_SAYHELLO_H

#include "../abstract/Function.h"

class SayHelloFunction : public Function {
public:
    SayHelloFunction() : Function() {};
    SayHelloFunction(const char* name) : Function(name){};
    int execute(int, char **);
};
#endif //UNTITLED_SAYHELLO_H
