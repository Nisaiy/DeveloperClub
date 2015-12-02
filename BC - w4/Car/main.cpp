#include <iostream>
#include <cmath>
#include "Car.h"
#include "Point.h"

int main () {
    Point *d = new Point(11, 5);
    Point *c = new Point(0, 0);
    Car *a = new Car (50.0, 1.5, *d, "KIA");

    std::cout << *a <<std::endl;
    try {
        a->refill(51);
    } catch (ToMuchFuel) {
        std::cout << "moran" <<std::endl;
    }
    std::cout << *a <<std::endl;

    try {
        a->drive(5, 10);
    } catch (OutOfFuel){
        std::cout << "OutOfFuel" <<std::endl;
    }
    std::cout << *a <<std::endl;

    delete (a);
    delete (d);
    delete (c);
    return 0;
}