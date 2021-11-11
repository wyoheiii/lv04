#include "Zombie.hpp"

int main(void)
{
    int N = 15;
    Zombie *nopssssssssssssssssssssss;
    nopssssssssssssssssssssss = ZombieHorde(N,"nop");

    for(int i = 0; i < N; i++)
        nopssssssssssssssssssssss[i].announce();
    delete [] nopssssssssssssssssssssss;
    return 0;
}