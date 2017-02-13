//
// Created by diftodi on 2/6/17.
//

#include <cstring>
#include <stdexcept>
#include <iostream>
#include "ArrayHolder.h"

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