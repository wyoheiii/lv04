#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal(){
    type = "Wrongnone";
    std::cout << "wronganimal constructor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &ani){
    *this = ani;
    std::cout << "wronganimal copy constructor" << std::endl;
}
WrongAnimal::~WrongAnimal(){
    std::cout << "wronganimal destructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ani){
    if(this != &ani)
        type = ani.type;
    return *this;
}
std::string WrongAnimal::getType()const{
    return type;
}
void WrongAnimal::makeSound()const{
    std::cout<<"wrongani!"<<std::endl;
}