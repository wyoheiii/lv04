#include "iter.hpp"
#include "iostream"
#include "string"

void print(const int &i){
    std::cout << i << std::endl;
}

int main(){
    std::cout<<"------int--------" <<std::endl;
    int arry[] = {0,1,2,3,4,5};
    iter(arry, sizeof(arry) / sizeof(int) , print2);
    std::cout << std::endl;
    std::cout<<"------double--------" <<std::endl;
    double darry[] = {0.0,1.1,2.1,3.1,4.1,5.1};
    iter(darry, sizeof(darry) / sizeof(double) , print2);
    std::cout << std::endl;
    std::cout<<"------c--------" <<std::endl;
    char carry[] = {'a','b','c','d','e','f'};
    iter(carry, sizeof(carry) / sizeof(char) , print2);
    std::cout << std::endl;
    std::cout<<"------string--------" <<std::endl;
    std::string sarry[] = {"aa","bb","cc","ee","ff","gg"};
    iter(sarry, sizeof(sarry) / sizeof(std::string) , print2);
    std::cout << std::endl;
    std::cout<<"------function ptr not template--------" <<std::endl;
    iter(arry, sizeof(arry) / sizeof(int) , print);
    std::cout << std::endl;
    std::cout<<"------function ptr not const--------" <<std::endl;
    iter(arry, sizeof(arry) / sizeof(int) , print3);
    std::cout << std::endl;
    return 0;
}