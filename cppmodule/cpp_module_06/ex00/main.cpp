#include "conVert.hpp"
int main(int ac, char **av){
    if(ac != 2)//null &karamozi
    {
        std::cout << "usage : ./conVert [string]" << std::endl;
        exit(1);
    }
    std::istringstream iss(av[1]);
    char n;
    iss >> n;
    std::cout << n << std::endl;
}