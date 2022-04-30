#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm():Form("robo", signRequired, execRequired){
    _target = "t";
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target):Form("robo", signRequired, execRequired){
    _target = target;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r):Form("robo", signRequired, execRequired){
    *this = r;
}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r){
    if(this != &r)
        _target = r._target;
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    execAndSignConfirmation(executor);
    std::cout << "ui--n" << std::endl;
    srand(time(NULL));
    if(rand() % 2 == 0){
        std::cout << _target << " robotomized Success" << std::endl;
    }else
        std::cout << _target << " robotomized failure" << std::endl;
}