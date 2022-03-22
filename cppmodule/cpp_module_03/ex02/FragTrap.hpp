#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap: public ClapTrap{
    private:
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &flag);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &flag);

    void highFivesGuys(void);
};
#endif