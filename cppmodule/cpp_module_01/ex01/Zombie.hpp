#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie(void);
        void    announce(void);
        void    setname(std::string name);

    private:
        std::string _name;
        

};
Zombie *ZombieHorde(int N,std::string name);
#endif