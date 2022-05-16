#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <exception>
#include <iterator>
#include <algorithm>
#include <vector>
template <typename T>
typename T::const_iterator easyfind(const T &container,const int &num){
    typename T::const_iterator itr = std::find(container.begin(), container.end(), num);
    if(itr == container.end())
        throw std::exception();
    return itr;
}
template <typename T>
typename T::iterator easyfind(T &container,const int &num){
    typename T::iterator itr = std::find(container.begin(), container.end(), num);
    if(itr == container.end())
        throw std::exception();
    return itr;
}
#endif