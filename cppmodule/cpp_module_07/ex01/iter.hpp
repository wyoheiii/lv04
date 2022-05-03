#ifndef ITER_HPP
#define ITER_HPP
#include <stdlib.h>
#include <iostream>
template <typename T>
void iter(const T *arry,const size_t &len, void (*f)(const T&)){
    if(arry == NULL || f == NULL)
        return ;
    for(size_t i = 0; i < len;i++)
        f(arry[i]);
}
template <typename T>
void iter(T *arry,const size_t &len, void (*f)(T&)){
    if(arry == NULL || f == NULL)
        return ;
    for(size_t i = 0; i < len;i++)
        f(arry[i]);
}
template<typename T>
void print2(const T &i)
{
    std::cout << i << std::endl; 
}
template<typename T>
void print3(T &i)
{
    std::cout << i << std::endl; 
}
#endif