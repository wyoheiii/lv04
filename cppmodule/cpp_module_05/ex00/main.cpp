#include "Bureaucrat.hpp"
int main(){
    try{
        Bureaucrat a;
        std::cout << a <<std::endl;
        std::cout << a-- <<std::endl;
        std::cout <<++a << std::endl;
        std::cout << --a<< std::endl;
        std::cout << a++ <<std::endl;
        std::cout << a << std::endl;
    }catch(std::exception const &e){
        std::cout<<e.what() <<std::endl;
    }
    std::cout<<std::endl;
    try{
        Bureaucrat a;
        std::cout << a++ <<std::endl;
        std::cout << a++ <<std::endl;
        std::cout << --a<<std::endl;
        std::cout << --a<<std::endl;
    }catch(std::exception const &e){
        std::cout<<e.what() <<std::endl;
    }
    std::cout<<std::endl;
    try{
        Bureaucrat a("a", 150);
        Bureaucrat b("b", 151);
        std::cout << --a<<std::endl;
    }
    catch(std::exception const &e){
        std::cout << e.what() <<std::endl;
    }
    std::cout<<std::endl;
    try{
        Bureaucrat a("a", 1);
        Bureaucrat b("b", 0);
    }
    catch(std::exception const &e){
        std::cout << e.what() <<std::endl;
    }
} 