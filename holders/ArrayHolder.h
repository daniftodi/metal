//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_ARRAYHolder_H
#define METAL_ARRAYHolder_H


#include "../abstract/Holder.h"

template<class T>
class ArrayHolder : Holder<T> {
public:
    ArrayHolder() {};
    ArrayHolder(int dataMaxLimit) {
        this->dataMaxLimit = dataMaxLimit;
        this->data = new T*[dataMaxLimit];
    };
    virtual void put(T*);
    virtual T* get(char*){return nullptr;};
};


#endif //METAL_ARRAYHolder_H
