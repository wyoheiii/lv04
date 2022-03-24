#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <sstream>
#include <iostream>
#include <iomanip>
class Brain{
    private:
    std::string ideas[100];
    public:
    Brain();
    Brain(const std::string &str);
    ~Brain();
    Brain(const Brain &b);
    Brain &operator=(const Brain &b);
    
    void showideas();
};

#endif