#include "Zombie.hpp"
Zombie *newZombie(std::string name)
{
    Zombie *zombie ;
    try{
        zombie = new Zombie(name);
    } catch (...){
        std::cout << "new error" << std::endl;
        std::exit(1);
    }
    return zombie;
}