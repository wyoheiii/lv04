#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
    private:
    /* data*/
    public:
    Intern();
    Intern(const Intern &i);
    ~Intern();
    Intern &operator=(const Intern &i);
    Form *makeForm(const std::string &formName,const std::string &target);

    class NoMatch:public std::exception{
        virtual const char *what() const throw();
    };
};

#endif // !#define 
