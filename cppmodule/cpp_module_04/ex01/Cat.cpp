#include "Cat.hpp"
Cat::Cat():Animal(){
    type = "Cat";
    _brain = new Brain();
    std::cout << "cat constructor" << std::endl;
}
Cat::Cat(const Cat &ani):Animal(){
    _brain = new Brain("string");
    *this = ani;
    std::cout << "cat copy constructor" << std::endl;
}
Cat::~Cat(){
    delete _brain;
    std::cout << "cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat &cat){
    if(this != &cat){
        Brain *ret = new Brain();
        type = cat.type;
        *ret = *cat._brain;
        delete this->_brain;
        this->_brain = ret;
    }
    return *this;
}
void Cat::makeSound()const{
    std::cout<<"cat!"<<std::endl;
}
void Cat::showideas()const{
    _brain->showideas();
}
void Cat::showaddress()const{
    std::cout<< "_brain address :" << _brain<<std::endl;
    std::cout<< "Cat address    :" << this << std::endl;
}
void Cat::showideas_and_address()const{
    std::cout<<"----------ideas---------"<<std::endl;
    showideas();
    std::cout<<"-------------address-----------"<<std::endl;
    showaddress();
    std::cout<<std::endl;
}