#include "Phone_book.hpp"
std::string  Phone_book::set_str(std::string str)
{
    if(str.size() > 10)
    {
        str=str.substr(0,10);
        str[9]='.';
    }
    return(str);
}
void Phone_book::show_contact(Contact *contact, int list_size)
{
    std::cout << "     index|first name| last name|  nickname|"<<std::endl;
    for(int i = 0; i < list_size;i++)
    {
        std::cout << std::setw(10);
        std::cout << i+1;
        std::cout <<'|';
        std::cout << std::setw(10);
        std::cout << set_str(contact[i].print_firstname());
        std::cout <<'|';
        std::cout << std::setw(10);
        std::cout << set_str(contact[i].print_lastname());
        std::cout << '|';
        std::cout << std::setw(10);
        std::cout << set_str(contact[i].print_nickname());
        std::cout << '|'<<std::endl;
    }
}
void Phone_book::serch_contact(Contact *contact, int list_size)
{
    std::string str;
    while(std::cin.good())
    {
        std::cout<<"SEARCH SIMASU SUUTI WO IRERO (1~8):";
        std::getline(std::cin,str);
        int j = atoi(str.c_str());
        if(str.size() == 1 && 9 > j && j > 0 && list_size >= j)
        {
            contact[j - 1].print_all();
            break;
        }
        else
            std::cout<<"YARINAOSE!" <<std::endl;
    }
}
void Phone_book::serch(Contact *contact, int list_size)
{
    if(list_size == 0)
    {
        std::cout<<"OMAE NO TOMODATI 0 NIN"<<std::endl;
        return ;
    }
    show_contact(contact,list_size);
    serch_contact(contact,list_size);
}

int Phone_book::full_contact_first_del(Contact *contact)
{
    std::cout<< "OMAE NO contact list HA IPPAI DA!";
    std::cout<< "remove the first one from the list (yes or no) :";
    std::string flag;
    while(std::cin.good())
    {
        std::getline(std::cin,flag);
        if(flag == "yes")
        {
            for(int i = 1;i < 8;i++)
            {
                contact[i - 1].del();
                contact[i - 1] = contact[i];
            }
            contact[7].del();
            return (1);
        }
        else if(flag == "no")
            return (-1);
        else
            std::cout <<"DAME (yes or no)"<<std::endl;
    }
    return (1);
}

void Phone_book::get_contact(Contact *contact, int *count)
{
    if (*count > 7)
    {
        if(full_contact_first_del(contact) == -1)
            return;
        *count = 7;
    }
    contact[*count].set();
}

void Phone_book::god_book(void)
{
    std::cout<<"welcome to your phone book" << std::endl;
    std::string input;
    int count;
    count = 0;
    while(std::cin.good())
    {
        std::cout<<"command wo IRERO (ADD,SEARCH,EXIT)"<<std::endl;
        std::getline(std::cin,input);
        if(input =="ADD")
        {
            get_contact(contact, &count);
            count++;
        }
        else if(input == "SEARCH")
            serch(contact,count);
        else if(input =="EXIT")
        {
            std::cout << "BYE" << std::endl;
            break;
        }
        else
            std::cout << "MAZIMENI YARE! YARINAOSI DA!" << std::endl;
    }
}