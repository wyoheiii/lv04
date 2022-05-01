#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Form.hpp"
//Required grades: sign 72, exec 45
class RobotomyRequestForm:public Form{
    private:
    std::string _target;
    static const int execRequired = 45;
    static const int signRequired = 72;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &r);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &r);

    virtual void execute(Bureaucrat const & executor) const;
};


#endif // !