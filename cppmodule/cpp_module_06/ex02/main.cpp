#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(){
    Base *a = generate();
    idenity(a);
    idenity(*a);
    delete a;
}