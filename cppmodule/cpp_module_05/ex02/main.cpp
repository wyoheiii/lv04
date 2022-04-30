#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main(){
    try{
        std::cout<<"------No sign------"<< std::endl;
        Bureaucrat b("Bureaucrat",146);
        ShrubberyCreationForm sh;
        b.signForm(sh);
        b.executeForm(sh);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout<<"------exec err------"<< std::endl;
        Bureaucrat b("Bureaucrat",138);
        ShrubberyCreationForm sh;
        b.signForm(sh);
        b.executeForm(sh);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout<<"------shrubbery ok------"<< std::endl;
        Bureaucrat b("Bureaucrat",100);
        ShrubberyCreationForm sh;
        b.signForm(sh);
        b.executeForm(sh);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout<<"------robotomy ok------"<< std::endl;
        Bureaucrat b("Bureaucrat",45);
        RobotomyRequestForm ro;
        b.signForm(ro);
        b.executeForm(ro);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        std::cout<<"------presidential ok------"<< std::endl;
        Bureaucrat b("Bureaucrat",5);
        PresidentialPardonForm p;
        b.signForm(p);
        b.executeForm(p);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
} 