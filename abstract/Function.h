//
// Created by diftodi on 2/6/17.
//

#ifndef METAL_FUNCTION_H
#define METAL_FUNCTION_H
class Function {
public:
    Function() {}
    Function(const char *name);
    void setName(const char *name);
    const char* getName();
    virtual int execute(int,char**);
    virtual ~Function();
protected:
    const char *name;
};
#endif //METAL_FUNCTION_H
