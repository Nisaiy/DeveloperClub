#include <iostream>
#include "vector.h"
#include <cmath>

    int main() {
    Vector a(1.2, 3.4);
    Vector b(5.6, 7.8);
    Vector c(1.2, 3.4);
    Vector* d = new Vector(2.4, 6.8);
    Vector e = b + *d;
    Vector* f = new Vector(42.24);
    Vector g = a - e;



    a += c;
    std::cout << (a == *d) << std::endl;
    std::cout << a << std::endl;
    // a.vectorPrint();

    std::cout << "a.x = " << a.getX() << std::endl;
    a.setX(0);
    std::cout << "a.x = " << a.getX() << std::endl;


    std::cout << a << std::endl;
    std::cout << e << std::endl;
    std::cout << *d << std::endl;
    std::cout << *f << std::endl;
    // a.vectorPrint();
    // e.vectorPrint();
    // d->vectorPrint();
    // f->vectorPrint();

    delete(d);
    delete(f);

    return 0;

}