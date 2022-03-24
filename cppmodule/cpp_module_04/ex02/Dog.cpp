#include "Dog.hpp"
Dog::Dog():Animal(){
    type = "Dog";
    _brain = new Brain();
    std::cout << "dog constructor" << std::endl;
}
Dog::Dog(const Dog &ani):Animal(){
    _brain = new Brain();
    *this = ani;
    std::cout << "dog copy constructor" << std::endl;
}
Dog::~Dog(){
    delete _brain;
    std::cout << "dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog &dog){
    if(this != &dog){
        type = dog.type;
        *_brain = *dog._brain;
    }    
    return *this;
}
void Dog::makeSound()const{
    std::cout<<"dog!"<<std::endl;
}
void Dog::showideas()const{
    _brain->showideas();
}
void Dog::showaddress()const{
    std::cout<< "_brain address :" << _brain<<std::endl;
    std::cout<< "Dog address    :" << this << std::endl;
}
void Dog::showideas_and_address()const{
    std::cout<<"----------ideas---------"<<std::endl;
    showideas();
    std::cout<<"-------------address-----------"<<std::endl;
    showaddress();
    std::cout<<std::endl;
}