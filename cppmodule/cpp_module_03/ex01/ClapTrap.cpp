#include "ClapTrap.hpp"
ClapTrap::ClapTrap(){
    _Name = "clap";
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamege = 0;
    std::cout << "ClapTrap default constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::ClapTrap(std::string name){
    _Name = name;
    _HitPoints = 10;
    _EnergyPoints = 10;
    _AttackDamege = 0;
    std::cout << "ClapTrap std::string constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &ClapTrap){
    *this = ClapTrap;
    std::cout << "ClapTrap copy constructor "<< _Name <<" called"<< std::endl;
}
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor "<< _Name <<" called"<< std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &clap){
    if(this != &clap){
        _Name = clap._Name;
        _HitPoints = clap._HitPoints;
        _EnergyPoints = clap._EnergyPoints;
        _AttackDamege = clap._AttackDamege;
    }
    std::cout << "ClapTrap operator= "<< _Name <<" called"<< std::endl;
    return *this;
}
void ClapTrap::attack(std::string const &target){
    if(_EnergyPoints == 0)
    {
        std::cout << "ClapTrap no energypoints" << std::endl;
        return;
    }
    _EnergyPoints--;
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< _Name<< " is already dead"<<std::endl;
    else
        std::cout<<"ClapTrap "<< _Name << " attack " << target <<" , causing "<< _AttackDamege<<" points of damage!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< _Name << " is already dead"<<std::endl;
    else
    {
        std::cout<<"ClapTrap "<< _Name << " took "<< amount<<" points of damage!"<<std::endl;
        if(_HitPoints <= amount)
        {
            std::cout<<"ClapTrap "<< _Name << " is dead"<<std::endl;
            _HitPoints = 0;
        }
        else
            _HitPoints -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if(_EnergyPoints == 0)
    {
        std::cout << "ClapTrap no energypoints" << std::endl;
        return;
    }
    _EnergyPoints--;
    if(_HitPoints == 0)
        std::cout<<"ClapTrap "<< _Name << " is already dead"<<std::endl;
    else
    {
        std::cout <<"ClapTrap "<<_Name << " recovered " << amount << "points!" << std::endl;
        _HitPoints += amount;
    }
}
// std::string ClapTrap::getName(){
//     return(_Name);
// }
unsigned int  ClapTrap::getAttackDamege(){
    return(_AttackDamege);
}