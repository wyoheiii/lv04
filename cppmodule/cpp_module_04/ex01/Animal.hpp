#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class Animal{
    protected:
    std::string type;
    public:
    Animal();
    Animal(const Animal &ani);
    virtual ~Animal();

    Animal &operator=(const Animal &ani);

    std::string getType()const;
    virtual void makeSound()const;

};

#endif