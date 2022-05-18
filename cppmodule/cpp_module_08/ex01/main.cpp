#include "Span.hpp"

int main(){
    std::cout<< "pdf"<<std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try{
        std::cout<< "throw 1"<<std::endl;
        Span sp1 = Span(5);
        sp1.addNumber(6);
        sp1.addNumber(3);
        sp1.addNumber(17);
        sp1.addNumber(9);
        sp1.addNumber(11);
        sp1.addNumber(11);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() <<std::endl;
    }
    try{
        std::cout<< "throw 2"<<std::endl;
        Span sp1 = Span(5);
        sp1.addNumber(1);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() <<std::endl;
    }
    try{
        std::cout<< "10000 test"<<std::endl;
        Span sp1 = Span(10000);
        Span sp2 = sp1;
        sp2.increaseToMax();
        //min 0
        //max 9999
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        Span sp3 = sp2;
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() <<std::endl;
    }
    try{
        std::cout<< "10 test"<<std::endl;
        Span sp1 = Span(10);
        Span sp2 = sp1;
        sp2.addNumber(0);
        sp2.addNumber(0);
        //min 0
        //max 100
        sp2.addNumber(100);
        sp2.increaseToMax();
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }catch(std::exception &e){
        std::cout << e.what() <<std::endl;
    }
    return 0;

}