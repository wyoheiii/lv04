#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <exception>
#include <cstdlib>
#include <cctype>
#include <limits>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <iomanip>
// char  'c' float 0.0f -inff、+inff と nanf  double 0.0 -inf、+inf、nan
// overflow henkandekinai err
class conVert
{
private:
    std::string _input;
    size_t _inputSize;

    bool _c;
    bool _i;
    bool _f;
    bool _d;

    char _afterC;
    int _afterI;
    float _afterF;
    double _afterD;
    conVert();
    conVert(const conVert &c);
    conVert &operator=(const conVert &c);

    bool isChar()const;
    bool isInt()const;
    bool isFloat()const;
    bool isDouble()const;

    void convert();
    void checkInput();

    void convertFromInt();
    void convertFromChar();
    void convertFromFloat();
    void convertFromDouble();

    void intToChar(std::ostream &os) const;
    void floatToChar(std::ostream &os) const;
    void doubleToChar(std::ostream &os) const;

    void floatToInt(std::ostream &os) const;
    void doubleToInt(std::ostream &os) const;

    void doubleToFloat(std::ostream &os) const;
public:
    conVert(std::string &s);
    ~conVert();

    void printChar(std::ostream &os) const;
    void printInt(std::ostream &os) const;
    void printFloat(std::ostream &os) const;
    void printDouble(std::ostream &os) const;

    class ArgumentIsIncorrect:public std::exception{
        const char * what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const conVert &c);
#endif 