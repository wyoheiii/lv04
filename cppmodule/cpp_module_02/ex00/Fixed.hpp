#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _num;
    static const int _bit;
public:
    Fixed();
    Fixed(Fixed &fixed);
    ~Fixed();


};


#endif
