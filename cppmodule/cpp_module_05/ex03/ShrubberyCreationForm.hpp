#ifndef SHRUBBERYCREATIONFORM
#define ROBOTOMYREQUESTFORM
#include <iostream>
#include <fstream>
#include "Form.hpp"
class ShrubberyCreationForm:public Form
{
    private:
    std::string _target;
    static const int execRequired = 137;
    static const int signRequired = 145;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &s);
    virtual ~ShrubberyCreationForm();
    virtual void execute(Bureaucrat const & executor) const;
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &s);
};

#endif // !