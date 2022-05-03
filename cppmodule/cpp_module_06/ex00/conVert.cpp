#include "conVert.hpp"
conVert::conVert(){
    _in = "in";
    _val = 0;
}
conVert::conVert(std::string &s){
    try{

        _in = s;
        _val = 0;
    }catch(...){

    }
}
conVert::conVert(const conVert &c){
    *this = c;
}
conVert &conVert::operator=(const conVert &c){
    if(this != &c)
    {
        _in = c._in;
        _val = c._val;
    }
    return *this;
}
conVert::~conVert(){}

char conVert::toChar()const{
    return static_cast<char>(_val);
}
int  conVert::toInt()const{
    return static_cast<int>(_val);
}
float conVert::toFloat()const{
    return static_cast<float>(_val);
}
double conVert::toDouble()const{
    return static_cast<double>(_val);
}