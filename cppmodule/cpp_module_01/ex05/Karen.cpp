#include "Karen.hpp"
Karen::Karen() {
    func[0] = &Karen::debug;
    func[1] = &Karen::error;
    func[2] = &Karen::info;
    func[3] = &Karen::warning;
}
Karen::~Karen() {}
void Karen::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle ";
    std::cout << "specialketchup burger. I really do!" << std::endl;
}
void Karen::error(){
    std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;}
void Karen::info(){
    std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put ";
    std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Karen::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout << "years whereas you started working here since last month." <<std::endl;
}
void Karen::complain(std::string level) {
    int debug,error,info,warning;
    debug = ("DEBUG" == level);
    error = ("ERROR" == level);
    info = ("INFO" == level);
    warning = ("WARNING" == level);
    switch (debug) {
        case 1:
            (this->*func[0])();
            return;
        default:
            break;
    }
    switch (error) {
        case 1:
            (this->*func[1])();
            return;
        default:
            break ;
    }
    switch (info) {
        case 1:
            (this->*func[2])();
            return;
        default:
            break ;
    }
    switch (warning) {
        case 1:
            (this->*func[3])();
            return;
        default:
            break ;
    }
}

