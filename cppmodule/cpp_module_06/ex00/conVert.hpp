#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
// char  'c' float 0.0f -inff、+inff と nanf  double 0.0 -inf、+inf、nan
//overflow henkandekinai err 
class conVert
{
private:
    std::string _in;
    unsigned long long _val;
public:
    conVert();
    conVert(std::string &s);
    conVert(const conVert &c);
    conVert &operator=(const conVert &c);
    ~conVert();

    char toChar()const;
    int  toInt()const;
    float toFloat()const;
    double toDouble()const;
};
#endif 