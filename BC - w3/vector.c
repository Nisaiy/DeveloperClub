#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && a.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    vectorIncrement(&a, b);
    //new.x = a.x + b.x;
    //new.y = a.y + b.y;
    return a;
}

Vector vectorDiff(Vector a, Vector b) {
    Vector new;
    
    new.x = a.x - b.x;
    new.y = a.y - b.y;
    return new;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}
