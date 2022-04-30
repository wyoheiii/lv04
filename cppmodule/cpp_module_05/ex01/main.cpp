#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    std::cout<<"------1--------" <<std::endl;
    try{
    Bureaucrat bu;
    std::cout << bu <<std::endl;
    std::cout << std::endl;
    Form fo("fo",100, 100);
    std::cout << fo << std::endl;
    bu.signForm(fo);
    std::cout << std::endl;
    std::cout << fo << std::endl;
    }catch(std::exception const &e){
        std::cout<<e.what() <<std::endl;
    }
    std::cout<<"------2--------" <<std::endl;
    try{
    Bureaucrat a("bure",101);
    std::cout << a <<std::endl;
    std::cout << std::endl;
    Form f("f",100, 100);
    std::cout << f << std::endl;
    a.signForm(f);
    std::cout << f << std::endl;
    }catch(std::exception const &e){
        std::cout<<e.what() <<std::endl;
    }
} 