#include <iostream>
#include <cmath>
#include "point.h"
    Point::Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
    Point::~Point(){}

    double Point::getX()const{
        return this->x;
    }
    double Point::getY()const{
        return this->y;
    }

    double Point::distance(const Point &b)const{
    return hypot(this->x-b.x, this->y-b.y);
}

bool Point::operator==(const Point& other)const{
    return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other)const{
    return !operator == (other);
}

std::ostream& operator << (std::ostream& out, const Point& point) {
    out << point.getX()<<" "<< point.getY() << std::endl;
    return out;
}