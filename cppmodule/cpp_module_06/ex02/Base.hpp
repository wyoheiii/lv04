#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <stdlib.h>
#include <time.h>
class Base{
    private:

    public:
    virtual ~Base();
};
Base *generate(void);
void idenity(Base &p);
void idenity(Base *p);
#endif 