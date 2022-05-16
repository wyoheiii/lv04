#include "conVert.hpp"
conVert::conVert(){
    _input = "a";
    _inputSize = 0;
    _c = false;
    _i = false;
    _f = false;
    _d = false;
    _afterC = 0;
    _afterI = 0;
    _afterF = 0;
    _afterD = 0;

}
conVert::conVert(std::string &s){
    _input = s;
    _inputSize = _input.length();
    _c = false;
    _i = false;
    _f = false;
    _d = false;
    _afterC= 0;
    _afterI= 0;
    _afterF= 0;
    _afterD= 0;
    checkInput();
    convert();
}

conVert::conVert(const conVert &c){
    *this = c;
}
conVert &conVert::operator=(const conVert &c){
    if(this != &c)
    {
        _input = c._input;
        _c = c._c;
        _i = c._i;
        _f = c._f;
        _d = c._d;
        _afterC= c._afterC;
        _afterI= c._afterI;
        _afterF= c._afterF;
        _afterD= c._afterD;
    }
    return *this;
}
conVert::~conVert(){}


bool conVert::isChar()const{
    if(_inputSize == 1 && isprint(_input[0]))
        return true;
    return false;
}
bool conVert::isInt()const{
    char *end;
    errno = 0;
    long l = strtol(_input.c_str(), &end, 10);
    if(l == 0 && (_input[0] == '+' || _input[0] == '-'))
        return false;
    if(*end || errno == ERANGE  ||\
    l > std::numeric_limits<int>::max() || l < std::numeric_limits<int>::min() ||\
    (_inputSize > 1 && (_input.compare(0, 2, "0x") == 0 || _input.compare(0, 2, "0X") == 0)))
        return false;
    return true;
}
bool conVert::isFloat()const{
    errno = 0;
    std::string str = _input.substr(0, _inputSize - 1);
    const char *no_f = str.c_str();
    char *end;
    float f = strtof(no_f, &end);
    if(f == 0.0 && (_input[0] == '+'|| _input[0] == '-'))
        return false;
    if(*end || errno == ERANGE || \
    (_inputSize > 1 && (_input.compare(0, 2, "0x") == 0 || _input.compare(0, 2, "0X") == 0))||\
    (_inputSize > 0 && _input[_inputSize - 1] != 'f'))
        return false;
    return true;
}
bool conVert::isDouble()const{
    errno = 0;
    char *end;
    double d = strtod(_input.c_str(), &end);
    if(d == 0.0 && (_input[0] == '+'|| _input[0] == '-'))
        return false;
    if(*end || errno == ERANGE || \
    (_inputSize > 1 && (_input.compare(0, 2, "0x") == 0||_input.compare(0, 2, "0X") == 0)))
        return false;
    return true;
}
void conVert::checkInput(){
    if(isChar()){
        _c = true;
        return ;
    }
    else if(isInt()){
        _i = true;
        return ;
    }
    else if(isFloat()){
        _f = true;
        return ;
    }
    else if(isDouble()){
        _d = true;
        return;
    }
    else
        throw ArgumentIsIncorrect();
}
void conVert::convertFromChar(){
    _afterC = static_cast<char>(_input[0]);
    _afterI = static_cast<int>(_afterC);
    _afterF = static_cast<float>(_afterC);
    _afterD = static_cast<double>(_afterC);

}
void conVert::convertFromInt(){

    _afterI = atoi(_input.c_str());
    _afterC = static_cast<char>(_afterI);
    _afterF = static_cast<float>(_afterI);
    _afterD = static_cast<double>(_afterI);
}
void conVert::convertFromFloat(){
    char *end;
    _afterF = strtof(_input.c_str(), &end);
    _afterC = static_cast<char>(_afterF);
    _afterI = static_cast<int>(_afterF);
    _afterD = static_cast<double>(_afterF);
}
void conVert::convertFromDouble(){
    char *end;
    _afterD = strtod(_input.c_str(),&end);
    _afterC = static_cast<char>(_afterD);
    _afterI = static_cast<int>(_afterD);
    _afterF = static_cast<float>(_afterD);
}

void conVert::convert(){
    if(_c)
        convertFromChar();
    else if(_i)
        convertFromInt();
    else if(_f)
        convertFromFloat();
    else if(_d)
        convertFromDouble();
}




void conVert::printChar(std::ostream &os) const{
    os << "char: ";
    if(_c)
        os<<"'"<<_afterC<<"'" <<std::endl;
    if(_i)
        intToChar(os);
    if(_f)
        floatToChar(os);
    if(_d)
        doubleToChar(os);
}
void conVert::intToChar(std::ostream &os) const{
    if(isprint(_i))
            os <<"'"<< _afterC <<"'"<<std::endl;
    else if (_afterI > std::numeric_limits<char>::max() || _afterI < std::numeric_limits<char>::min())
        os << "impossible" << std::endl;
    else
        os << "Non displayable" << std::endl;
}
void conVert::floatToChar(std::ostream &os) const{

    if(isinff(_afterF) || isnanf(_afterF) || _afterF > 127.0 || _afterF < -128.0)
        os << "impossible" << std::endl;
    else if(isprint(static_cast<int>(_afterF)))
            os <<"'" << _afterC << "'" <<std::endl;
    else
        os << "Non displayable" << std::endl;
}
void conVert::doubleToChar(std::ostream &os) const{
    if(isinff(_afterD) || isnanf(_afterD) || _afterD > 127.0 || _afterD < -128.0)
        os << "impossible" << std::endl;
    else if(isprint(static_cast<int>(_afterD)))
            os<<"'" << _afterC<<"'" << std::endl;
    else
        os << "Non displayable" << std::endl;
}


void conVert::printInt(std::ostream &os) const{
    os << "Int: ";
    if(_c)
        os<< _afterI <<std::endl;
    if(_i)
        os<< _afterI <<std::endl;
    if(_f)
        floatToInt(os);
    if(_d)
        doubleToInt(os);
}
void conVert::floatToInt(std::ostream &os) const{
    if(isinff(_afterF) || isnanf(_afterF) || _afterF > 2147483647.0 || _afterF < -2147483648.0)
        os << "impossible" << std::endl;
    else
        os << _afterI << std::endl;
}
void conVert::doubleToInt(std::ostream &os) const{
    if(isinff(_afterD) || isnanf(_afterD) || _afterD > 2147483647.0 || _afterD < -2147483648.0)
        os << "impossible" << std::endl;
    else
        os << _afterI << std::endl;
}


void conVert::printFloat(std::ostream &os) const{
    os << "Float: ";
    if(_c || _i || _f){
        if(_afterF == static_cast<int64_t>(_afterF))
            os << std::setprecision(_inputSize) <<_afterF << ".0f" << std::endl;
        else
            os << std::setprecision(_inputSize) << _afterF << "f" <<std::endl;
    }
    if(_d)
        doubleToFloat(os);
}
void conVert::doubleToFloat(std::ostream &os) const{
    if(isinff(_afterD) || isnanf(_afterD))
        os << _afterF <<"f"<< std::endl;
    else{
        if(_afterF == static_cast<int64_t>(_afterF))
            os <<std::setprecision(_inputSize) << _afterF<< ".0f" << std::endl;
        else
            os <<std::setprecision(_inputSize) << _afterF<< "f" <<std::endl;
    }
}

void conVert::printDouble(std::ostream &os) const{
    os << "Double: ";
    if(_afterD == static_cast<int64_t>(_afterD))
        os << std::setprecision(_inputSize) << _afterD << ".0" << std::endl;
    else
        os << std::setprecision(_inputSize) << _afterD << std::endl;
}

std::ostream &operator<<(std::ostream &os, const conVert &c){
    c.printChar(os);
    c.printInt(os);
    c.printFloat(os);
    c.printDouble(os);
    return os;
}
const char *conVert::ArgumentIsIncorrect::what() const throw(){
    return "Argument is incorrect";
}