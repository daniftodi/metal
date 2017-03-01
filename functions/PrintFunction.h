//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_SAYHELLO_H
#define METAL_SAYHELLO_H

#include "../abstract/Function.h"

class PrintFunction : public Function {
public:
    PrintFunction() : Function() {};
    PrintFunction(const string name) : Function(name){};
    int execute(int, string*);
};
#endif //UNTITLED_SAYHELLO_H
