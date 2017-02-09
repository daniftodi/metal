//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_COUNTFUNCTION_H
#define METAL_COUNTFUNCTION_H


#include "../abstract/Function.h"

class CountFunction : public Function {
public:
    CountFunction() : Function() {};
    CountFunction(const char* name) : Function(name){};
    int execute(int, char **);
};


#endif //METAL_COUNTFUNCTION_H
