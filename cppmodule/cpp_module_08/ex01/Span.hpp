#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>
class Span
{
private:
    unsigned int _size;
    std::vector<int> _v;
public:
    Span();
    Span(unsigned int n);
    ~Span();
    Span(const Span &s);
    Span &operator=(const Span &s);
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void increaseToMax();
    class UpperLimits:public std::exception{
        const char *what() const throw();
    };
    class NoElementsOfComparison:public std::exception{
        const char *what() const throw();
    };
};

#endif // !SPAN_HPP#define SPAN_HPP
