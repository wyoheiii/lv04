#include "Zombie.hpp"

int main(void)
{
    Zombie takasi = Zombie("takasii");
    

    Zombie *nop = newZombie("nop");
    Zombie *brand = newZombie("brand");

    randomChump("nunu");

    nop->announce();
    delete nop;
    brand->announce();
    delete brand;
    takasi.announce();
}