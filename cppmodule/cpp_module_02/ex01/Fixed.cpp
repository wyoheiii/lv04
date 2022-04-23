#include "Fixed.hpp"
Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    this->_value = 0;
}
Fixed::Fixed(const int value){
    std::cout<<"Int constructor called"<<std::endl;
    this->_value = value << this->_bit;
}
Fixed::Fixed(const float value){
    std::cout<<"Float constructor called"<<std::endl;
    this->_value = roundf(value * (1 << this->_bit));//floatはbit演算できない
}
Fixed::~Fixed(){
    std::cout <<"Destructor called"<<std::endl;
}
Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" <<std::endl;
    *this = fixed;
}
Fixed &Fixed::operator=(const Fixed &fixed){
    std::cout << "Copy assignment operator called"<<std::endl;
    if(this != &fixed)
        this->_value = fixed._value;
    return *this;
}
int Fixed::getRawBits(void) const {
   //std::cout<<"getRawBits member function called"<<std::endl;
   return this->_value;
}
void Fixed::setRawBits(int const raw){
    this->_value = raw;
}
int Fixed::toInt(void) const{
    int ret = this->_value / (1 << this->_bit);
    return ret;
}
float Fixed::toFloat(void) const{
    float ret = (float)this->_value / (1 << this->_bit);
    return ret;
}
std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return os;
}