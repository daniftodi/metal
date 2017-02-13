//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_ARRAYHOLDER_H
#define METAL_ARRAYHOLDER_H

#include "../abstract/Holder.h"

template<class T>
class ArrayHolder : public Holder<T> {
public:
    ArrayHolder() {};
    ArrayHolder(int dataMaxLimit) {
        this->dataMaxLimit = dataMaxLimit;
        this->data = new T*[dataMaxLimit];
    };
    virtual void put(T*);
    virtual T* get(char*);
};

#endif //METAL_ARRAYHOLDER_H
