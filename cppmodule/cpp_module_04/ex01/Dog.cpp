#include "Dog.hpp"
Dog::Dog():Animal(){
    type = "Dog";
    _brain = new Brain();
    if (!_brain)
        exit(1);
    std::cout << "dog constructor" << std::endl;
}
Dog::Dog(const Dog &ani):Animal(){
    *this = ani;
    std::cout << "dog copy constructor" << std::endl;
}
Dog::~Dog(){
    delete _brain;
    std::cout << "dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog &dog){
    if(this != &dog)
        type = dog.type;
        *_brain = *dog._brain;
    return *this;
}
void Dog::makeSound()const{
    std::cout<<"dog!"<<std::endl;
}