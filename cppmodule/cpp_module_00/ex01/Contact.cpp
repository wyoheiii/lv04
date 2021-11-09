#include "Contact.hpp"
std::string    Contact::print_firstname()
{return(this->firstname);}
std::string    Contact::print_lastname()
{return(this->lastname);}
std::string    Contact::print_nickname()
{return(this->nickname);}

void    Contact::print_all()
{
    std::cout<<"first name :";
    std::cout<<this->firstname<<std::endl;
    std::cout<<"last name :";
    std::cout<<this->lastname<<std::endl;
    std::cout<<"nickname :";
    std::cout<<this->nickname<<std::endl;
    std::cout<<"phone number :";
    std::cout<<this->phonenumber<<std::endl;
    std::cout<<"darkest secret :";
    std::cout<<this->darkestsecret<<std::endl;
}
void  Contact::set()
{
    std::cout << "first name WO IRERO:";
    std::getline(std::cin,this->firstname);
    std::cout<<"NAISU" <<std::endl;
    std::cout << "last name WO IRERO:";
    std::getline(std::cin,this->lastname);
    std::cout<<"NAISU" <<std::endl;
    std::cout << "nick name WO IRERO:";
    std::getline(std::cin,this->nickname);
    std::cout<<"NAISU" <<std::endl;
    std::cout << "phone number WO IRERO:";
    std::getline(std::cin,this->phonenumber);
    std::cout<<"NAISU" <<std::endl;
    std::cout << "darkest secret WO IRERO:";
    std::getline(std::cin,this->darkestsecret);
    std::cout<<"OTU"<<std::endl;
}
void Contact::del()
{
    this->nickname.clear();
    this->lastname.clear();
    this->firstname.clear();
    this->phonenumber.clear();
    this->darkestsecret.clear();
}