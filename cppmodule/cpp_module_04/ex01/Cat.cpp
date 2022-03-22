#include "Cat.hpp"
Cat::Cat():Animal(){
    type = "Cat";
    _brain = new Brain();
    if (!_brain)
        exit(1);
    std::cout << "cat constructor" << std::endl;
}
Cat::Cat(const Cat &ani):Animal(){
    *this = ani;
    std::cout << "cat copy constructor" << std::endl;
}
Cat::~Cat(){
    delete _brain;
    std::cout << "cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat &cat){
    if(this != &cat)
        type = cat.type;
        *_brain = *cat._brain;
    return *this;
}
void Cat::makeSound()const{
    std::cout<<"cat!"<<std::endl;
}