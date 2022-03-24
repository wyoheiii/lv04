#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class WrongCat:public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat &cat);
    ~WrongCat();

    WrongCat &operator=(const WrongCat &cat);
    void makeSound()const;
};

#endif