#include <iostream>
#include <cstring>
#include "functions/SayHelloFunction.h"
#include "abstract/Holder.h"
#include "holders/ArrayHolder.h"
#include "functions/CountFunction.h"

#define MAX_FUNC_ARGS 10
#define MAX_ARG_LEN 16

char** tokenizer(char *inputQuery, int count) {
    char *token;
    char **args = new char*[MAX_FUNC_ARGS];
    int counter = 0;
    token = strtok(inputQuery, ":");
    while(token != NULL) {
        args[counter] = new char[MAX_ARG_LEN];
        strcpy(args[counter++], token);
        token = strtok(NULL, ",");
        if(0 == --count) break;
    }
    return args;
}

char *getFunctionName(char* inputQuery) {
    return *tokenizer(inputQuery,1);
}

char **getFunctionArgs(char* inputQuery) {
    return tokenizer(inputQuery, -1);
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    ArrayHolder<Function>* fHolder = new ArrayHolder<Function>(5);
    auto countFunction = new CountFunction("countFunction");
    auto sayFunction = new SayHelloFunction("sayHello");

    //fHolder->put(sayFunction);
//    fHolder->put(countFunction);

/*
    char *argv[] = {"1","2"};

    fHolder->getFunction("sayHello")->execute(sizeof(argv) / sizeof(argv[0]), argv);
    fHolder->getFunction("countFunction")->execute(2,argv);
*/

    char inputQuery[80] = "countFunction:10";
    char **argsContainer = getFunctionArgs(inputQuery);
    char *functionName = getFunctionName(inputQuery);
    fHolder->get(functionName)->execute(sizeof(argsContainer) / sizeof(char*), argsContainer);
    //delete[] argsContainer;

    argsContainer = getFunctionArgs(inputQuery);
    functionName = getFunctionName(inputQuery);
    fHolder->get(functionName)->execute(sizeof(argsContainer) / sizeof(char*), argsContainer);
    //delete[] argsContainer;

    std::cout<<std::endl;
    //delete fHolder;
    return 0;
}
