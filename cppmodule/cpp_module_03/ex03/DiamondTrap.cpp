#include "DiamondTrap.hpp"
//  Name (Parameter of constructor)
// • Claptrap::Name (Parameter of constructor + "_clap_name")
// • Hitpoints (Fragtrap)
// • Energy points (Scavtrap)
// • Attack damage (Fragtrap)
// • attack (Scavtrap)
DiamondTrap::DiamondTrap():ClapTrap(),ScavTrap(),FragTrap(){
    
    _Name = "dia";
    ClapTrap::_Name = "_clap_name";
    _HitPoints = FragTrap::hp;
    _EnergyPoints = ScavTrap::ep;
    _AttackDamege = FragTrap::ad;
    std::cout<< "DiamondTrap default constructor "<< _Name <<" called"<< std::endl;
}
DiamondTrap::DiamondTrap(std::string name):ClapTrap(),ScavTrap(),FragTrap(){
    _Name = name;
    ClapTrap::_Name = name + "_clap_name";
    _HitPoints = FragTrap::hp;
    _EnergyPoints = ScavTrap::ep;
    _AttackDamege = FragTrap::ad;
    std::cout<< "DiamondTrap std::string constructor "<< _Name <<" called"<< std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &dia):ClapTrap(),ScavTrap(),FragTrap(){
    *this = dia;
    std::cout << "DiamondTrap copy constructor "<< _Name <<" called"<< std::endl;
}
DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor "<< _Name <<" called"<< std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &dia){
        if(this != &dia){
        _Name = dia._Name;
        ClapTrap::_Name = dia.ClapTrap::_Name;
        _HitPoints = dia._HitPoints;
        _EnergyPoints = dia._EnergyPoints;
        _AttackDamege = dia._AttackDamege;
    }
    std::cout << "DiamondTrap operator= "<< _Name <<" called"<< std::endl;
    return *this;
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name  :" << _Name <<std::endl;
    std::cout << "ClapTrap name  :" << ClapTrap::_Name <<std::endl;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}