#include "Zombie.hpp"
Zombie::Zombie()
{
}
Zombie::~Zombie(void)
{
    std::cout<< this->_name;
    std::cout<< " ha sinda!"<<std::endl;
}

void    Zombie::announce(void)
{
    std::cout<< "<" << this->_name;
    std::cout<< "> BraiiiiiiinnnzzzZ..."<<std::endl; 
}
void Zombie::setname(std::string name)
{
    _name = name;
}
