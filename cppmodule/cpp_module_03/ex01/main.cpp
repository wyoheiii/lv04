#include "ScavTrap.hpp"
int main(){
    ScavTrap a;
    ScavTrap b("takasi");
    ScavTrap c("aaa");
    ScavTrap d(c);
    std::cout<<std::endl;
    d.attack("kakasi");
    std::cout<<std::endl;
    b.attack("scav");
    a.takeDamage(b.getAttackDamege());
    a.guardGate();
    a.takeDamage(100);
    std::cout<<std::endl;
    a.beRepaired(10);
    a.guardGate();
    std::cout<<std::endl;
}