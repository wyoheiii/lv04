#include "Form.hpp"
#include "Bureaucrat.hpp"
Form::Form():_signGrade(10), _execGrade(10){
    _name = "form";
    _sign = false;
    
}
Form::Form(std::string name,int signGrade, int execGrade):_signGrade(signGrade),_execGrade(execGrade){
     _name = name;
    _sign = false;
    if(signGrade > low || execGrade > low)
        throw GradeTooLowException();
    if(signGrade < high || execGrade < high)
        throw GradeTooHighException();
}
Form::Form(const Form &f):_signGrade(f._signGrade),_execGrade(f._execGrade){
    *this = f;
}
Form::~Form(){}

Form &Form::operator=(const Form &f){
    if (this != &f)
    {
        _name = f._name;
        _sign = f._sign;
    }
    return *this;
}
std::ostream &operator<<(std::ostream &os,const Form &f){
    os << "sign      :" << f.getSign() << std::endl;
    os << "name      :" << f.getName()<< std::endl;
    os << "signgrade :" << f.getSignGrade()<< std::endl;
    os << "execgrade :" << f.getExecGrade()<< std::endl;
    return os;
}

void Form::beSigned(const Bureaucrat &b){
    if(_signGrade < b.getGrade())
        throw GradeTooLowException();
    _sign = true;
}

void Form::execAndSignConfirmation(const Bureaucrat  &b) const{
    if(!_sign)
        throw NoSign();
    if(_execGrade < b.getGrade())
        throw execTooLow();
}

bool Form::getSign()const{
    return _sign;
}
std::string Form::getName()const{
    return _name;
}
int Form::getSignGrade()const{
    return _signGrade;
}
int Form::getExecGrade()const{
    return _execGrade;
}


const char *Form::GradeTooHighException::what() const throw(){
    return "Grade Too High";
}
const char *Form::GradeTooLowException::what() const throw(){
    return "Grade Too Low";
}
const char *Form::NoSign::what() const throw(){
    return "No Sign";
}
const char *Form::CantOpen::what() const throw(){
    return "cant open the file";
}
const char *Form::execTooLow::what() const throw(){
    return "exec grade too low";
}

