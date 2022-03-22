#include "FragTrap.hpp"
// Hitpoints (100)
// • Energy points (100)
// • attack damage (30)
FragTrap::FragTrap():ClapTrap(){
    _Name = "frag";
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamege = 30;
    std::cout << "FragTrap default constructor "<< _Name <<" called"<< std::endl;
}
FragTrap::FragTrap(std::string name):ClapTrap(name){
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamege = 30;
    std::cout<< "FragTrap std::string constructor "<< _Name <<" called"<< std::endl;
}
FragTrap::FragTrap(const FragTrap &frag):ClapTrap(frag){
    std::cout << "FragTrap copy constructor "<< _Name <<" called"<< std::endl;
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor "<< _Name <<" called"<< std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &frag){
        if(this != &frag){
        _Name = frag._Name;
        _HitPoints = frag._HitPoints;
        _EnergyPoints = frag._EnergyPoints;
        _AttackDamege = frag._AttackDamege;
    }
    std::cout << "FragTrap operator= "<< _Name <<" called"<< std::endl;
    return *this;
}
void FragTrap::highFivesGuys(void){
    std::cout<< "FragTrap "<< _Name << " positive high fives request"<<std::endl;
}