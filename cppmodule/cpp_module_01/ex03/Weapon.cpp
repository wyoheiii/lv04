#include "Weapon.hpp"
Weapon::Weapon(std::string name) {
    this->_weapon_name = name;
}
Weapon::~Weapon() {}

void  Weapon::setType(std::string name){
    this->_weapon_name = name;
}

const std::string &Weapon::getType(void){
    return this->_weapon_name;
}
