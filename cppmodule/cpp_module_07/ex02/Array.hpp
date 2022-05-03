#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>
template <typename T>
class Array{
    private:
    T *_data;
    unsigned int _size;
    const static int max = 750;
    const static int min = 0;
    
    public:
    Array(){
        _size = 0;
        _data = new T[0];
    };
    Array(const unsigned int &n){
        _size = n;
        _data = new T[n];
    };
    Array(const Array &a):_size(a.size()){
        _data = new T[a.size()];
        *this = a;
    };
    ~Array(){
        delete [] _data;
    };
    T &operator[](const unsigned int &i){
        if(i < 0 || i >= _size)
            throw outOfRange();
        return _data[i];
  
    };
    Array &operator=(const Array &a){
        if(this != &a)
        {
            T *copy = new T[a.size()];
            for(unsigned int i = 0; i < a.size();i++)
                copy[i] = a._data[i];
            _size = a._size;
            delete [] this->_data;
            _data = copy;
        }
        return *this;
    };
    unsigned int size() const{
        return _size;
    };
    class outOfRange: public std::exception{
        virtual const char *what() const throw(){
            return "out of range";
        }
    };
};
#endif // !
