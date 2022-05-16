#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <exception>
Base::~Base(){}
Base *generate(void){
    srand(time(NULL));
    int rnd = rand() % 10;
    if(rnd < 3){
        std::cout << "A tukutta" << std::endl;
        Base *ret = new A();
        return ret;
    }
    else if(rnd < 6){
        std::cout << "B tukutta" << std::endl;
        Base *ret = new B();
        return ret;
    }
    else{
        std::cout << "C tukutta" << std::endl;
        Base *ret = new C();
        return ret;
    }
    return NULL;
}
void idenity(Base &p){
    try{
        A &a = dynamic_cast<A &>(p);
        static_cast<void>(a);
        std::cout << "A" << std::endl;

    }catch(std::exception& e){}
    try{
        B &b = dynamic_cast<B &>(p);
        static_cast<void>(b);
        std::cout << "B" << std::endl;

    }catch(std::exception& e){}
    try{
        C &c = dynamic_cast<C &>(p);
        static_cast<void>(c);
        std::cout << "C" << std::endl;
    }catch(std::exception& e){}
}
void idenity(Base *p){
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if(a != NULL){
        std::cout << "A" << std::endl;
    }else if (b != NULL){
        std::cout << "B" << std::endl;
    }else if (c != NULL){
        std::cout << "C" << std::endl;
    }
    else
        std::cout << "NULL" << std::endl;
}