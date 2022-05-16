#ifndef DATA_HPP
#define DATA_HPP
#include <inttypes.h>
#include <iostream>
typedef struct Data
{
    char c;
    int i;
    long l;
}Data;
Data *deserialize(uintptr_t raw);
uintptr_t serialize(Data *ptr);
#endif // !data_hpp