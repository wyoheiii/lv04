#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
    this->_name = name;
}
HumanA::~HumanA(void)
{
}
void HumanA::attack(void)
{
    std::cout<< "OMAE HA MOU SINDEIRU" << std::endl;
}
