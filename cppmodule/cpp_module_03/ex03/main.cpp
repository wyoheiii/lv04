//#include "ScavTrap.hpp"
//#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"
int main(){
    DiamondTrap a;
    std::cout<<std::endl;
    a.whoAmI();
    a.attack("a");
    std::cout<<std::endl;
    DiamondTrap c("takasi");
    std::cout<<std::endl;
    c.whoAmI();
    c.attack("a");
    std::cout<<std::endl;
    DiamondTrap b(a);
    std::cout<<std::endl;
    b.whoAmI();
    b.attack("takasi");
    std::cout<<std::endl;
    DiamondTrap d(c);
    std::cout<<std::endl;
    c.whoAmI();
    c.attack("takasi");
    std::cout<<std::endl;
}