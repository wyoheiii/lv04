#include "Zombie.hpp"

int main(void)
{
    int N = 15;
    Zombie *zombieeee;
    zombieeee = ZombieHorde(N,"nop");

    for(int i = 0; i < N; i++)
        zombieeee[i].announce();
    delete [] zombieeee;
    return 0;
}