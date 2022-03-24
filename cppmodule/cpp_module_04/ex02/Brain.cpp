#include "Brain.hpp"
Brain::Brain(){
    std::cout<<"brain constructor"<<std::endl;
    for(int i = 0; i < 100 ; i++){
        std::stringstream ss;
        ss << i;
        ideas[i] = ss.str();
    }
}
Brain::Brain(const std::string &str){
    std::cout<<"brain string constructor"<<std::endl;
    for(int i = 0; i < 100 ; i++){
        std::stringstream ss;
        ss << str <<" :"<< i;
        ideas[i] = ss.str();
    }
    std::cout<<"----------ideas---------"<<std::endl;
    showideas();
    std::cout<<std::endl;
}
Brain::~Brain(){
    std::cout<<"brain destructor"<<std::endl;
}
Brain::Brain(const Brain &b){
    *this = b;
    std::cout<<"brain copy constructor"<<std::endl;
}
Brain &Brain::operator=(const Brain &b){
    if(this != &b){
        for(int i = 0; i < 100 ;i++)
            ideas[i] = b.ideas[i];
    }
    return *this;
}

void Brain::showideas(){
    for(int i = 0; i < 100;i++){
        std::cout<< ideas[i]<< " ";
    }
    std::cout<<std::endl;
}