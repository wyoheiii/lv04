#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed {
private:
    int _value;
    static const int _bit = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &fixed);
    ~Fixed();

    Fixed &operator=(const Fixed &fixed);
    Fixed operator*(const Fixed &fixed)const;
    Fixed operator/(const Fixed &fixed)const;
    Fixed operator-(const Fixed &fixed)const;
    Fixed operator+(const Fixed &fixed)const;

    bool operator<(const Fixed &fixed)const;
    bool operator>(const Fixed &fixed)const;
    bool operator<=(const Fixed &fixed)const;
    bool operator>=(const Fixed &fixed)const;
    bool operator==(const Fixed &fixed)const;
    bool operator!=(const Fixed &fixed)const;

    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &max(Fixed &a,Fixed &b);
    static const Fixed &max(const Fixed &a,const Fixed &b);
    static Fixed &min(Fixed &a,Fixed &b);
    static const Fixed &min(const Fixed &a,const Fixed &b);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    int toInt(void) const;
    float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
