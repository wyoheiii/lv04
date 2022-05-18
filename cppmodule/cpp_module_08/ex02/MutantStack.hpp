#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iterator>
#include <stack>
template <typename T>
class MutantStack:public std::stack<T>{
private:
public:

    ~MutantStack(){}
    MutantStack(){}
    MutantStack(const MutantStack &m){
        *this = m;
    }
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    MutantStack &operator=(const MutantStack &m){
        if(this != &m)
            std::stack<T>::operator=(m);
        return *this;
    }
    iterator begin(){
        return this->c.begin();
    }
    iterator end(){
        return this->c.end();
    }

    reverse_iterator rbegin(){
        return this->c.rbegin();
    }
    reverse_iterator rend(){
        return this->c.rend();
    }

    const_iterator cbegin()const {
        return this->c.begin();
    }
    const_iterator cend()const {
        return this->c.end();
    }
    
    const_reverse_iterator crbegin() const{
        return this->c.rbegin();
    }
    const_reverse_iterator crend() const{
        return this->c.rend();
    }

};
#endif // !MUTANTSTACK_HPP#define MUTANTSTACK_HPP
