//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_FUNCTIONHOLDER_H
#define METAL_FUNCTIONHOLDER_H


#include "Function.h"

class FunctionHolder {
public:
    explicit FunctionHolder() {};
    explicit FunctionHolder(int fMaxLimit);
    virtual void putFunction(Function *fn) = 0;
    virtual Function* getFunction(char *name) = 0;
    ~FunctionHolder();
protected:
    Function **functions = NULL;
    int fCount;
    int fMaxLimit;
};


#endif //METAL_FUNCTIONHOLDER_H
