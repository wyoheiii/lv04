#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
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
};

#endif