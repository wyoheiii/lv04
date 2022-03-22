#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class ClapTrap{
private:
    std::string         _Name;
    unsigned int         _HitPoints;
    unsigned int         _EnergyPoints;
    unsigned int          _AttackDamege;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clap);
    ~ClapTrap(void);

    ClapTrap &operator=(const ClapTrap &clap);
    
    void    attack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string getName(void);
    unsigned int  getAttackDamege(void);
};

#endif