#include "Zombie.hpp"

int main(void)
{
    Zombie takasi = Zombie("takasii");
    Zombie *brand = newZombie("brand");
    randomChump("nunu");

    brand->announce();
    delete brand;
    takasi.announce();
}