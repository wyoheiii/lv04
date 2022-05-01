#include "Bureaucrat.hpp"
#include "Intern.hpp"
int main(){
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
    if(rrf == NULL)
        return 0;
    Bureaucrat a;
    a.signForm(*rrf);
    a.executeForm(*rrf);
    delete rrf;

}   