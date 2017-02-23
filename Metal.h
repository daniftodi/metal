//
// Created by diftodi on 2/14/17.
//

#ifndef METAL_METAL_H
#define METAL_METAL_H

#define MAX_FUNC_ARGS 10
#define MAX_ARG_LEN 16

#include "abstract/Function.h"
#include "holders/ArrayHolder.hpp"

class Metal {
public:
    Metal(int);
    ArrayHolder<Function>* getHolder();
    char* getFunctionName(const char* inputQuery);
    char** getFunctionArgs(const char* inputQuery);
    int execute(char* inputQuery);
    void put(Function*);
private:
    ArrayHolder<Function>* fHolder;
    virtual char** tokenizer(const char* inputQuery, const int count);
    int getArgsCount(char** args);
};


#endif //METAL_METAL_H
