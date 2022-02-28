#include "Karen.hpp"

int main(){
    Karen karen;
    std::cout <<"debug"<<std::endl;
    karen.complain("DEBUG");
    std::cout << "error" <<std::endl;
    karen.complain("ERROR");
    std::cout << "info" <<std::endl;
    karen.complain("INFO");
    std::cout << "warning" <<std::endl;
    karen.complain("WARNING");
    std::cout << "error" << std::endl;
    karen.complain("b");
}

