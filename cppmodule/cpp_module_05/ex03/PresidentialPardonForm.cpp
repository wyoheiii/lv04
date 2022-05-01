#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
PresidentialPardonForm::PresidentialPardonForm():Form("pre", signRequired, execRequired){
    _target = "p";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target):Form("pre", signRequired, execRequired){
    _target = target;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p):Form("pre", signRequired, execRequired){
    *this = p;
}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & p){
    if(this != &p)
        _target = p._target;
    return *this;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    execAndSignConfirmation(executor);
    std::cout << _target <<" has been pardoned by Zaphod Beeblebrox."<<std::endl;
}
