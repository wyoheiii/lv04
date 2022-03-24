#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
//デフォルトコンストラクタ、コピーコンストラクタ、代入演算子オーバーロード、そして デストラクタ 
class WrongAnimal{
    protected:
    std::string type;
    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &ani);
    virtual ~WrongAnimal();

    WrongAnimal &operator=(const WrongAnimal &ani);

    std::string getType()const;
    void makeSound()const;
};
#endif