#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie *zombieeee;
    zombieeee = ZombieHorde(N,"takasi");
    for (int i = 0; i < N; i++)
        zombieeee[i].announce();
    delete [] zombieeee;
    return 0;
}