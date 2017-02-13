//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_Holder_H
#define METAL_Holder_H


#include <cstdlib>
#include "Function.h"

template<class T>
class Holder {
public:
    explicit Holder() {};
    explicit Holder(int fMaxLimit);
    virtual void put(T *fn) = 0;
    virtual T* get(char* name) = 0;
protected:
    T **data = NULL;
    int dataCount = 0;
    int dataMaxLimit = 0;
};


#endif //METAL_Holder_H
