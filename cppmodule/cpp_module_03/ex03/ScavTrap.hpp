#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap: virtual public ClapTrap{
    private:
    protected:
    static const unsigned int ep = 50;
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
