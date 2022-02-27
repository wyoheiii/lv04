#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &wname):_weapon(wname){
    this->_name = name;
}
HumanA::~HumanA() {}

void    HumanA::attack(){
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}
