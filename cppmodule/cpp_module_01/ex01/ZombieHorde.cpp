#include "Zombie.hpp"
Zombie *ZombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    for(int i = 0;i < N; i++)
        zombies[i].setname(name + std::to_string(i));
    return zombies;
}