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
        std::cout << i;
        delete ani[i];
    }
    return 0;
}