#include "data.hpp"
int main(){
    Data d;
    uintptr_t p = serialize(&d);
    std::cout<< &d <<std::endl;
    std::cout<<std::hex << p <<std::endl;
    std::cout<< deserialize(p) <<std::endl;
    Data da;
    std::cout<< &da <<std::endl;
    std::cout<<deserialize(serialize(&da)) << std::endl;
}