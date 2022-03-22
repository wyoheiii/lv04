#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap: virtual public ClapTrap{
    private:
    protected:
    static const unsigned int hp = 100;
    static const unsigned int ad = 30;
    public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &flag);
    ~FragTrap(void);

    FragTrap &operator=(const FragTrap &flag);

    void highFivesGuys(void);
};
#endif