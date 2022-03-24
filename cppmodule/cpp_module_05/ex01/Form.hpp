#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Form{
    private:
    std::string _name;
    bool _sign;
    int _signGrade;
    int _execGrade;
    static const int high = 1;
    static const int low = 150;
    public:
    Form();
    Form(std::string name, bool _sign, int _signGrade, int _execGrade);
    Form(const Form &f);
    ~Form();
    
    Form &operator=(const Form &f);

    class GradeTooHighException:public std::exception{

    };
    class GradeTooLowException:public std::exception{

    };
};
std::ostream &operator<<(std::ostream &os,const Form &f);
#endif // !