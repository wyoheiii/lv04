#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Bureaucrat::Bureaucrat(){
    _name = "defo";
    _grade = 1;
}
Bureaucrat::Bureaucrat(const std::string name, int grade){
    _name = name;
    _grade = grade;
    if(grade > low)
        throw GradeTooLowException();
    if(grade < high)
        throw GradeTooHighException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &b){
    *this = b;
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b){
    if(this != &b){
        _grade = b._grade;
        _name = b._name;
    }
    return *this;
}
Bureaucrat &Bureaucrat::operator++(){
    if(this->_grade <= high)
        throw GradeTooHighException();
    _grade--;
    return *this;
}
Bureaucrat &Bureaucrat::operator--(){
    if(this->_grade >= low)
        throw GradeTooLowException();
    _grade++;
    return *this;
}
Bureaucrat Bureaucrat::operator++(int){
    if(this->_grade <= high)
        throw GradeTooHighException();
    Bureaucrat old = *this;
    ++(*this);
    return old;
}
Bureaucrat Bureaucrat::operator--(int){
    if(this->_grade >= low)
        throw GradeTooLowException();
    Bureaucrat old = *this;
    --(*this);
    return old;
}
std::ostream &operator<<(std::ostream &os,const Bureaucrat &b){
    os << b.getName() << " bureaucrat grade " << b.getGrade() << "." << std::endl;
    return os;
}
std::string Bureaucrat::getName()const{
    return _name;
}
int Bureaucrat::getGrade()const{
    return _grade;
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}

void Bureaucrat::signForm(Form &f)const{
    try{
        f.beSigned(*this);
        //<bureaucrat> signed <form>
        std::cout << _name << " signed " << f.getName() << std::endl;
    }catch(std::exception const &e){
        //<bureaucrat> couldn’t sign <form> because <reason>.
        std::cout << _name << " couldn’t sign "<< f.getName();
        std::cout << " because " << e.what() <<" ." << std::endl;
    }
}
void Bureaucrat::executeForm(Form const &form){
    try{
        form.execute(*this);
        std::cout << _name << " executes " << form.getName() << std::endl;
    }catch(std::exception const &e){
        std::cout  << "cant executed becouse " << e.what() << std::endl;
    }
}