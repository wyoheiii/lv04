#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main(){
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    Animal* ani[10];
    std::cout << std::endl;
    for (int i=0;i < 10; i++){
        std::cout << i;
        if(i < 5)
            ani[i] = new Dog();
        else
            ani[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i=0;i < 10; i++){
        std::cout << i << " :";
        delete ani[i];
    }
    std::cout << std::endl;
    std::cout <<"---hutuuno iretemita---" <<std::endl;
    std::cout << std::endl;
    Cat ccc;
    Cat cccopycat(ccc);
    std::cout << std::endl;
    ccc.showideas_and_address();
    cccopycat.showideas_and_address();
    std::cout << std::endl;
    return 0;
}