#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class Dog:public Animal{
    private:
    Brain *_brain;
    public:
    Dog();
    Dog(const Dog &Dog);
    virtual ~Dog();

    Dog &operator=(const Dog &Dog);
    virtual void makeSound()const;
};

#endif