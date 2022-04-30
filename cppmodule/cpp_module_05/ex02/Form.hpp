#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
class Bureaucrat;
class Form{
    private:
    std::string _name;
    bool _sign;
    const int _signGrade;
    const int _execGrade;
    static const int high = 1;
    static const int low = 150;
    public:
    Form();
    Form(std::string name, int _signGrade, int _execGrade);
    Form(const Form &f);
    virtual ~Form();
    
    Form &operator=(const Form &f);

    bool getSign()const;
    std::string getName()const;
    int getSignGrade()const;
    int getExecGrade()const;

    void beSigned(const Bureaucrat &b);
    void execAndSignConfirmation(const Bureaucrat &b) const;
    virtual void execute(Bureaucrat const &executor) const = 0;


    class GradeTooHighException:public std::exception{
        virtual const char *what() const throw();
    };
    class GradeTooLowException:public std::exception{
        virtual const char *what() const throw();
    };
    class NoSign:public std::exception{
        virtual const char *what() const throw();
    };
    class CantOpen:public std::exception{
        virtual const char *what() const throw();
    };
    class execTooLow:public std::exception{
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os,const Form &f);
#endif // !