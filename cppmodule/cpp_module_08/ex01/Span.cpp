#include "Span.hpp"
Span::~Span(){}
Span::Span(){
    _size = 0;
}
Span::Span(unsigned int n){
    _size = n;
    _v.reserve(n);

}
Span::Span(const Span &s){
    *this = s;
}
Span &Span::operator=(const Span &s){
    if(this != &s){
        _v.reserve(s._size);
        _v = s._v;
        _size = s._size;
        // std::cout<< s._size<<std::endl;
        //  std::cout<< s._v.capacity()<<std::endl;
        // std::cout<< _v.capacity()<<std::endl;
    }
    return *this;
}
void Span::addNumber(int n){
    if(_size <= _v.size())
        throw UpperLimits();
    _v.push_back(n);
}
int Span::shortestSpan(){
    if(_v.size() < 2)
        throw NoElementsOfComparison();
    std::vector<int>v2 = _v;
    std::sort(v2.begin(),v2.end());
    int ret = std::abs(v2[0] - v2[1]);
    for(size_t i = 0; i < v2.size() - 1; i++){
        if(ret > std::abs(v2[i] - v2[i + 1]))
            ret = std::abs(v2[i] - v2[i + 1]);
    }
    return ret;
}
int Span::longestSpan(){
    if(_v.size() < 2)
        throw NoElementsOfComparison();
    int max = *std::max_element(_v.begin(),_v.end());
    int min = *std::min_element(_v.begin(),_v.end());
    return max - min;
}
void Span::increaseToMax(){
    if(static_cast<long>(_v.capacity()) - static_cast<long>(_v.size()) < 1){
        std::cout <<_v.capacity()<<std::endl;
        std::cout <<_v.size()<<std::endl;
        std::cout << static_cast<long>(_v.capacity()) - static_cast<long>(_v.size()) <<std::endl;
        throw UpperLimits();
    }
    for(size_t i = _v.size(); i < _v.capacity();i++)
        addNumber(i);
}
const char* Span::UpperLimits::what() const throw(){
    return "upper limit";
}
const char* Span::NoElementsOfComparison::what() const throw(){
    return "no element of comparison";
}