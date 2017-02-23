#include <iostream>
#include <cstring>
#include "functions/PrintFunction.h"
#include "functions/CountFunction.h"
#include "Metal.h"

int main() {

    auto countFunction = new CountFunction("count");
    auto sayFunction = new PrintFunction("print");

    Metal* metal = new Metal(2);
    metal->put(sayFunction);
    metal->put(countFunction);

    char inputQuery[80] = "count:100";
    if(metal->execute(inputQuery) == EXIT_SUCCESS) {
        std::cout<<"Executed successful"<<std::endl;
    } else {
        std::cout<<"Query: "<<inputQuery<<" can't be executed"<<std::endl;
    }

    metal->execute("print:Hello World!");

    return 0;
}
