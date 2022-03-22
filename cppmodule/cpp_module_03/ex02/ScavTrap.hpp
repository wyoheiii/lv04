#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap{
    private:
    public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &clap);
    ~ScavTrap(void);

    ScavTrap &operator=(const ScavTrap &clap);

    void attack(std::string target);
    void guardGate();
};

#endif
