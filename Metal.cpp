//
// Created by diftodi on 2/14/17.
//

#include <cstring>
#include "Metal.h"

Metal::Metal(int maxFunctionHolder) {
    this->fHolder = new ArrayHolder<Function>(maxFunctionHolder);
}

ArrayHolder<Function>* Metal::getHolder() {
    return this->fHolder;
}

char* Metal::getFunctionName(const char* inputQuery) {
    return *this->tokenizer(inputQuery,1);
}

char** Metal::getFunctionArgs(const char* inputQuery) {
    return this->tokenizer(inputQuery, -1);
}

char** Metal::tokenizer(const char* inputQuery, const int count) {
    char *token;
    char **args = new char*[MAX_FUNC_ARGS];
    int counter = 0, downCounter = count;
    char* copy = strdup(inputQuery);
    token = strtok(copy, ":");
    while(token != NULL) {
        args[counter] = new char[MAX_ARG_LEN];
        strcpy(args[counter++], token);
        token = strtok(NULL, ",");
        if(0 == --downCounter) break;
    }
    args[counter] = NULL;
    free(copy);
    return args;
}

void Metal::put(Function* function) {
    this->fHolder->put(function);
}

int Metal::getArgsCount(char** args) {
    int count = 0;
    while(args[count++]);

    return count-1;
}

int Metal::execute(char* inputQuery) {
    char **argsContainer = this->getFunctionArgs(inputQuery);
    char *functionName = this->getFunctionName(inputQuery);
    Function* currentFunction = this->getHolder()->get(functionName);
    if(currentFunction != NULL) {
        currentFunction->execute(this->getArgsCount(argsContainer), argsContainer);
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}