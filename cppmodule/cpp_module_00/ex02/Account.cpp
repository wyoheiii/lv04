#include "Account.hpp"
#include <ctime>
#include <chrono>
#include <iostream>
#include <time.h>
void Account::_displayTimestamp(void)
{
    //std::cout<<"[19920104_091532]"<<std::endl;
    time_t t = time(NULL) ;
    char str[16];
    strftime(str,sizeof(str),"%Y%m%d_%H%M%S",localtime(&t));
    std::cout<<"["<< str <<"]";
}

Account::Account(int inital_deposit)
{

}
