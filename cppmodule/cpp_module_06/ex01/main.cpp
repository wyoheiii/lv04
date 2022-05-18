#include "data.hpp"
uintptr_t serialize(Data *ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *deserialize(uintptr_t raw){
    return reinterpret_cast<Data *>(raw);
}
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