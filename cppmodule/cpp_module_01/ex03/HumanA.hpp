#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    public:
    HumanA(std::string name,Weapon &wname);
    ~HumanA(void);
    void attack(void);
    private:
    std::string _name;
    Weapon &_weapon;
};

#endif