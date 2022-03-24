#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
class Bureaucrat{
    private:
    static const int high = 1;
    static const int low = 150;
    int _Grade;
    std::string _Name;
    public:
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &b);
    ~Bureaucrat();
    
    Bureaucrat &operator=(const Bureaucrat &b);
    Bureaucrat &operator++();
    Bureaucrat &operator--();
    Bureaucrat operator++(int);
    Bureaucrat operator--(int);

    std::string getName()const;
    int getGrade()const;

    class GradeTooLowException:public std::exception{
        virtual const char *what() const throw();
    };
    class GradeTooHighException:public std::exception{
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os,const Bureaucrat &b);
#endif
