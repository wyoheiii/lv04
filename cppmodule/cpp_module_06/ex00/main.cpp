#include "conVert.hpp"
int main(int ac, char **av){
    try{
        if(ac != 2 || av[1] == NULL || av[1][0] == '\0')
        {
            std::cout << "usage : ./conVert [string]" << std::endl;
            exit(1);
        }
        std::string str(av[1]);
        conVert c(str);
        std::cout<< c <<std::flush;
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}