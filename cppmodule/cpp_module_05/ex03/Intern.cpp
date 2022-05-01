#include "Intern.hpp"
Intern::Intern(){}
Intern::Intern(const Intern &i){
    *this = i;
}
Intern::~Intern(){}
Intern &Intern::operator=(const Intern &i){
    (void)i;
    return *this;
}
Form *Intern::makeForm(const std::string &formName,const std::string &target){
    try{
        int formNum = (formName == "robotomy request") + (formName == "shrubbery creation") * 2 + (formName ==  "presidential pardon") * 3;
        switch (formNum)
        {
            case 1:
                std::cout << "Intern creates " << formName <<std::endl;
                return new RobotomyRequestForm(target);
            case 2:
                std::cout << "Intern creates " << formName <<std::endl;
                return new ShrubberyCreationForm(target);
            case 3:
                std::cout << "Intern creates " << formName <<std::endl;
                return new PresidentialPardonForm(target);
            default:
                throw NoMatch();
        }
    }catch(std::exception &e){
        std::cout <<"cant create form becouse " << e.what() << std::endl;
    }
    return NULL;
}
const char *Intern::NoMatch::what() const throw(){
    return "No match type";
}