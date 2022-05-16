#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
int main(){
    try{
        int lst[] = {1,2,3,4,5};
        std::vector<int> vec(lst,lst+5);
        std::vector<int>::iterator itr = easyfind(vec, 3);
        std::cout << *itr << std::endl;
        std::vector<int>::iterator iter = easyfind(vec, 10);
        std::cout << *iter << std::endl;
    }catch(std::exception &e){
        std::cout << "not found"<< std::endl;
    }
    try{
        int lst[] = {1,2,3,4,5};
        std::list<int> list(lst,lst+5);
        std::list<int>::iterator itr = easyfind(list, 3);
        std::cout << *itr << std::endl;
        std::list<int>::iterator iter = easyfind(list, 10);
        std::cout << *iter << std::endl;
    }catch(std::exception &e){
        std::cout << "not found"<< std::endl;
    }
    try{
        int lst[] = {1,2,3,4,5};
        std::deque<int> deq(lst,lst+5);
        std::deque<int>::iterator itr = easyfind(deq, 3);
        std::cout << *itr << std::endl;
        std::deque<int>::iterator iter = easyfind(deq, 10);
        std::cout << *iter << std::endl;
    }catch(std::exception &e){
        std::cout << "not found"<< std::endl;
    }
    return 0;
}