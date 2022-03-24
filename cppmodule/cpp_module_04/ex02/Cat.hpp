#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include <unistd.h>
#include "Brain.hpp"
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class Cat:public Animal{
    private:
    Brain *_brain;
    public:
    Cat();
    Cat(const Cat &Cat);
    virtual ~Cat();

    Cat &operator=(const Cat &Cat);
    virtual void makeSound()const;
    void showideas()const;
    void showaddress()const;
    void showideas_and_address()const;
};

#endif