#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
ScavTrap::ScavTrap():ClapTrap(){
    _Name = "scav";
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamege = 20;
    std::cout << "ScavTrap default constructor "<< _Name <<" called"<< std::endl;
}
ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    //_Name = name;
    _HitPoints = 100;
    _EnergyPoints = 50;
    _AttackDamege = 20;
    std::cout<< "ScavTrap std::string constructor "<< _Name <<" called"<< std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &scav):ClapTrap(scav){
    //*this = scav;
    std::cout << "ScavTrap copy constructor "<< _Name <<" called"<< std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor "<< _Name <<" called"<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav){
    if(this != &scav){
        _Name = scav._Name;
        _HitPoints = scav._HitPoints;
        _EnergyPoints = scav._EnergyPoints;
        _AttackDamege = scav._AttackDamege;
    }
    std::cout << "ScavTrap operator= "<< _Name <<" called"<< std::endl;
    return *this;
}

void ScavTrap::attack(std::string target){
    if(_EnergyPoints == 0)
    {
        std::cout << "ScavTrap no energypoints" << std::endl;
        return;
    }
    _EnergyPoints--;
    if(_HitPoints == 0)
        std::cout<<"ScavTrap "<< _Name << " is already dead"<<std::endl;
    else
        std::cout<<"ScavTrap "<< _Name << " attack " << target <<" , causing "<< _AttackDamege <<" points of damage!"<<std::endl;
}
void ScavTrap::guardGate(){
    if(_EnergyPoints == 0)
    {
        std::cout << "ScavTrap no energypoints" << std::endl;
        return;
    }
    _EnergyPoints--;
    if(_HitPoints == 0)
        std::cout<<"ScavTrap "<< _Name << " is already dead"<<std::endl;
    else
        std::cout << "ScavTrap " << _Name << " enterred in Gate keeper mode"<< std::endl;
}