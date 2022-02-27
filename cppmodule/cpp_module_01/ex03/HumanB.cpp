#include "HumanB.hpp"
HumanB::HumanB(std::string name) {
    this->_name = name;
    this->_weapon = NULL;
}
HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &wname)
{this->_weapon = &wname;}

void HumanB::attack(){
    if(!this->_weapon)
        std::cout << "buki ga naizo!" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}