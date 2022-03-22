#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
class DiamondTrap: public ScavTrap,public FragTrap{
    private:
    std::string _Name;
    public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &dia);
    ~DiamondTrap(void);

    DiamondTrap &operator=(const DiamondTrap &dia);

    void whoAmI();
    void attack(const std::string &target);
};

#endif // 