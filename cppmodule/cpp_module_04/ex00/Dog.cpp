#include "Dog.hpp"
Dog::Dog():Animal(){
    type = "Dog";
    std::cout << "dog constructor" << std::endl;
}
Dog::Dog(const Dog &ani):Animal(){
    *this = ani;
    std::cout << "dog copy constructor" << std::endl;
}
Dog::~Dog(){
    std::cout << "dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog &dog){
    if(this != &dog)
        type = dog.type;
    return *this;
}
void Dog::makeSound()const{
    std::cout<<"dog!"<<std::endl;
}