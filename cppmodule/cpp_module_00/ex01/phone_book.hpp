#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
class member
{
    public:
        void    set();
        std::string    print_firstname();
        std::string    print_lastname();
        std::string    print_nickname();
        void    print_all();
        void    del();


    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;


};

#endif