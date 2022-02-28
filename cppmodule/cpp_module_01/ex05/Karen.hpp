#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{

private:
void debug(void);
void info(void);
void warning(void);
void error(void);
void (Karen::*func[4])();
public:
    Karen();
    ~Karen();
    void complain(std::string level);
};

#endif
