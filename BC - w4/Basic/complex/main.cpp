#include <iostream>
#include "complex.h"
#include <cmath>

    int main() {
    Complex a(1.2, -3.4);
    Complex b(5.6, 7.8);



    std::cout << a << b<< std::endl;
    std::cout << a * b<< std::endl;


    delete(&a);
    delete(&b);

    return 0;

}