#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
class Phone_book
{
    public:
        void god_book(void);
    private:
        Contact contact[8];
        void    add_contact(Contact *contact, int *count);
        int     full_contact_first_del(Contact *contact);
        void    serch(Contact *contact, int list_size);
        std::string     trim_str(std::string str);
        void show_contact(Contact *contact,int list_size);
        void serch_contact(Contact *contact, int list_size);
};

#endif