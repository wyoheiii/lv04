#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
class PresidentialPardonForm:public Form
{
    private:
    std::string _target;
    static const int execRequired = 5;
    static const int signRequired = 25;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &p);
    virtual ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const & executor) const;
    PresidentialPardonForm &operator=(const PresidentialPardonForm & p);
};

#endif // !