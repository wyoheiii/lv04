#include "Zombie.hpp"
Zombie *ZombieHorde(int N, std::string name)
{
    Zombie *zombies;
    try{
        zombies = new Zombie[N];
    }catch (...){
        std::cout << "new error" << std::endl;
        std::exit(1);
    }
    for(int i = 0;i < N; i++)
        zombies[i].setname(name + std::to_string(i));
    return zombies;
}