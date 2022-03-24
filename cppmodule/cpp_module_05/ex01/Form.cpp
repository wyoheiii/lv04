#include "Form.hpp"
Form::Form(){}
Form::Form(std::string name, bool _sign, int _signGrade, int _execGrade){}
Form::Form(const Form &f){}
Form::~Form(){}

Form &Form::operator=(const Form &f){}
std::ostream &operator<<(std::ostream &os,const Form &f){}