#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat(){
    _Name = "defo";
    _Grade = 1;
}
Bureaucrat::Bureaucrat(const std::string name, int grade){
    _Name = name;
    _Grade = grade;
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
        _Grade = b._Grade;
        _Name = b._Name;
    }
    return *this;
}
Bureaucrat &Bureaucrat::operator++(){
    if(this->_Grade <= high)
        throw GradeTooHighException();
    _Grade--;
    return *this;
}
Bureaucrat &Bureaucrat::operator--(){
    if(this->_Grade >= low)
        throw GradeTooLowException();
    _Grade++;
    return *this;
}
Bureaucrat Bureaucrat::operator++(int){
    if(this->_Grade <= high)
        throw GradeTooHighException();
    Bureaucrat old = *this;
    ++(*this);
    return old;
}
Bureaucrat Bureaucrat::operator--(int){
    if(this->_Grade >= low)
        throw GradeTooLowException();
    Bureaucrat old = *this;
    --(*this);
    return old;
}
std::ostream &operator<<(std::ostream &os,const Bureaucrat &b){
    os << b.getName() << " bureaucrat grade " << b.getGrade();
    return os;
}
std::string Bureaucrat::getName()const{
    return _Name;
}
int Bureaucrat::getGrade()const{
    return _Grade;
}
const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}