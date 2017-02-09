//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_ARRAYFUNCTIONHOLDER_H
#define METAL_ARRAYFUNCTIONHOLDER_H


#include "../abstract/FunctionHolder.h"

class ArrayFunctionHolder : FunctionHolder {
public:
    ArrayFunctionHolder() : FunctionHolder() {};
    ArrayFunctionHolder(int fMaxLimit) : FunctionHolder(fMaxLimit) {
        this->functions = new Function*[fMaxLimit];
    };
    void putFunction(Function *fn);
    Function* getFunction(char *name);
    ~ArrayFunctionHolder();
};


#endif //METAL_ARRAYFUNCTIONHOLDER_H
