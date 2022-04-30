#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;
    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();
    std::cout << std::endl;
    wa->makeSound();
    wc->makeSound();
    std::cout << std::endl;
    delete wa;
    delete wc;
    std::cout << std::endl;
    Animal a;
    Dog d;
    Cat c;
    WrongAnimal wwa;
    WrongCat cca;
    std::cout << std::endl;
    a.makeSound();
    d.makeSound();
    c.makeSound();
    wwa.makeSound();
    cca.makeSound();
    std::cout << std::endl;
}