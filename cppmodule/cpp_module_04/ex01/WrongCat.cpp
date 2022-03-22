#include "WrongCat.hpp"
WrongCat::WrongCat():WrongAnimal(){
    type = "WrongCat";
    std::cout << "cat constructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat &ani):WrongAnimal(){
    *this = ani;
    std::cout << "cat copy constructor" << std::endl;
}
WrongCat::~WrongCat(){
    std::cout << "cat destructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &cat){
    if(this != &cat)
        type = cat.type;
    return *this;
}
void WrongCat::makeSound()const{
    std::cout<<"wrongcat!"<<std::endl;
}