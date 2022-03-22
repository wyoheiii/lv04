#include "Brain.hpp"
Brain::Brain(){
    std::cout<<"brain constructor"<<std::endl;
    for(int i = 0; i < 100 ; i++){
        std::stringstream ss;
        ss << i;
        ideas[i] = ss.str();
    }
}
Brain::~Brain(){
    std::cout<<"brain destructor"<<std::endl;
}
Brain::Brain(const Brain &b){
    *this = b;
}
Brain &Brain::operator=(const Brain &b){
    if(this != &b){
        for(int i = 0; i < 100 ;i++)
            ideas[i] = b.ideas[i];
    }   
    return *this;
}