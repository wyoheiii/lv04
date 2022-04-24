#include "Fixed.hpp"
Fixed::Fixed(){
    //std::cout<<"Default constructor called"<<std::endl;
    this->_value = 0;
}
Fixed::Fixed(const int value){
    //std::cout<<"Int constructor called"<<std::endl;
    this->_value = value << this->_bit;
}
Fixed::Fixed(const float value){
    //std::cout<<"Float constructor called"<<std::endl;
    this->_value = roundf(value * (1 << this->_bit));//指数部に8足して丸めてるだけ
}
Fixed::~Fixed(){
    //std::cout <<"Destructor called"<<std::endl; 
}
Fixed::Fixed(const Fixed &fixed){
    //std::cout << "Copy constructor called" <<std::endl;
    *this = fixed;
}
int Fixed::getRawBits(void) const{
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
Fixed &Fixed::operator=(const Fixed &fixed){
    //std::cout << "Assignation operator called"<<std::endl;
    if(this != &fixed)
        this->_value = fixed.getRawBits();
    return *this;
}

Fixed Fixed::operator*(const Fixed &fixed)const {
    Fixed ret;
    long tmp = (long)this->_value * (long)fixed._value;
    ret._value = tmp / (1 << this->_bit);
    return ret;
}

Fixed Fixed::operator/(const Fixed &fixed)const {
    if(fixed._value == 0){
        std::cout<<"0 ha yabai"<<std::endl;
        return Fixed(0);
    }
    Fixed ret;
    long tmp = ((long)this->_value << this->_bit) / (long)fixed._value;
    ret._value = tmp;
    return ret;
}
Fixed Fixed::operator+(const Fixed &fixed)const {
    return Fixed(this->toFloat() + fixed.toFloat());
}
Fixed Fixed::operator-(const Fixed &fixed)const {
    return Fixed(this->toFloat() - fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed)const{
    return this->_value < fixed._value;
}
bool Fixed::operator>(const Fixed &fixed)const{
    return this->_value > fixed._value;
}
bool Fixed::operator<=(const Fixed &fixed)const{
    return this->_value <= fixed._value;
}
bool Fixed::operator>=(const Fixed &fixed)const{
    return this->_value >= fixed._value;
}
bool Fixed::operator==(const Fixed &fixed)const{
    return this->_value == fixed._value;
}
bool Fixed::operator!=(const Fixed &fixed)const{
    return this->_value != fixed._value;
}

Fixed &Fixed::operator++(void){
    this->_value++;
    return *this;
}
Fixed &Fixed::operator--(void){
    this->_value--;
    return *this;
}
Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    this->_value++;
    return tmp;
}
Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->_value--;
    return tmp;
}


Fixed &Fixed::max(Fixed &a, Fixed &b){
    //std::cout<<"zako"<<std::endl;
    if(a < b)
        return b;
    return a;
}
Fixed const &Fixed::max(const Fixed &a, const Fixed &b){
    //std::cout<<"tuyoi"<<std::endl;
    if(a < b)
        return b;
    return a;
}
Fixed &Fixed::min(Fixed &a, Fixed &b){
    if(a < b)
        return a;
    return b;
}
Fixed const &Fixed::min(const Fixed &a, const Fixed &b){
    if(a < b)
        return a;
    return b;
}