#include "Animal.hpp"
Animal::Animal(){
    type = "none";
    std::cout << "animal constructor" << std::endl;
}
Animal::Animal(const Animal &ani){
    *this = ani;
    std::cout << "animal copy constructor" << std::endl;
}
Animal::~Animal(){
    std::cout << "animal destructor" << std::endl;
}
Animal &Animal::operator=(const Animal &ani){
    if(this != &ani)
        type = ani.type;
    return *this;
}
std::string Animal::getType()const{
    return type;
}