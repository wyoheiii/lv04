#include "Cat.hpp"
Cat::Cat():Animal(){
    type = "Cat";
    std::cout << "cat constructor" << std::endl;
}
Cat::Cat(const Cat &ani):Animal(){
    *this = ani;
    std::cout << "cat copy constructor" << std::endl;
}
Cat::~Cat(){
    std::cout << "cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat &cat){
    if(this != &cat)
        type = cat.type;
    return *this;
}
void Cat::makeSound()const{
    std::cout<<"cat!"<<std::endl;
}