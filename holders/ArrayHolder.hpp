//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_ARRAYHOLDER_H
#define METAL_ARRAYHOLDER_H

#include "../abstract/Holder.h"
#include <stdexcept>
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
    virtual int size();
};

template<class T>
T* ArrayHolder<T>::get(char* name) {
    for(int i=0; i<this->dataCount; i++) {
        if(strcmp(name, this->data[i]->getName()) == 0) {
            return this->data[i];
        }
    }
    return NULL;
}

template<class T>
void ArrayHolder<T>::put(T* item) {
    if (this->dataCount < this->dataMaxLimit) {
        this->data[this->dataCount++] = item;
    } else {
        throw std::out_of_range("Out of range dataMaxLimit");
    }
}


template<class T>
int ArrayHolder<T>::size() {
    return this->dataCount;
}

#endif //METAL_ARRAYHOLDER_H
