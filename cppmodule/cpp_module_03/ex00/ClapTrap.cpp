#include "ClapTrap.hpp"
ClapTrap::ClapTrap(){
    _Name = "nanasi";
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamege = 0;
    std::cout << "default constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::ClapTrap(std::string name){
    _Name = name;
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamege = 0;
    std::cout << "std::string constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &ClapTrap){
    *this = ClapTrap;
    std::cout << "copy constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << "destructor "<< _Name <<" called"<< std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    if(this != &clap){
        _Name = clap._Name;
        _HitPoints = clap._HitPoints;
        _EnergyPoints = clap._EnergyPoints;
        _AttackDamege = clap._AttackDamege;
    }
    std::cout << "operator= "<< _Name <<" called"<< std::endl;
    return *this;
}
void ClapTrap::attack(std::string const &target){
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< getName() << " is already dead"<<std::endl;
    else
        std::cout<<"ClapTrap "<< getName() << " attack " << target <<" , causing "<< getAttackDamege()<<" points of damage!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< getName() << " is already dead"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<< getName() << " took "<< amount<<" points of damage!"<<std::endl;
        if(_HitPoints <= amount)
        {
            std::cout<<"ClapTrap "<< getName() << " is dead"<<std::endl;
            _HitPoints = 0;
        }
        else
            _HitPoints -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< getName() << " is already dead"<<std::endl;
    else
    {
        std::cout <<"ClapTrap "<<getName() << " recovered " << amount << "points!" << std::endl;
        _HitPoints += amount;
    }
}
std::string ClapTrap::getName(){
    return(_Name);
}
unsigned int  ClapTrap::getAttackDamege(){
    return(_AttackDamege);
}