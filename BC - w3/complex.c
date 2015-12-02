#include <stdio.h>
#include <math.h>

typedef struct {
    double re, im;
} Complex;

void complexIncrement(Complex *this, Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex *this, Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex *this, Complex other) {
    int a = this->re;
this->re = a * other.re - this->im * other.im;
this->im = this->im * other.re + a * other.im;
}

Complex complexSum(Complex a, Complex b) {
    complexIncrement(&a, b);
    return a;
}

Complex complexDiff(Complex a, Complex b) {
    complexDecrement(&a, b);
    return a;
}

Complex complexProduct(Complex a, Complex b) {
    complexMultiply(&a, b);
    return a;
}

int complexEqual(Complex a, Complex b) {
    return a.re == b.re && a.im == b.im;
}

double complexAbs(Complex this) {
    return hypot(this.re, this.im);
}

void complexPrint(Complex this) {
    if (this.im >= 0) {
        printf("%g+%gi", this.re, this.im);
    } else {
        printf("%g%gi", this.re, this.im);
    }
}
    
    int main() {
        Complex this = {1, 6};
        Complex other = {3, 7};
        complexDiff(this, other);
        printf("%g %g\n", complexProduct(this, other));

complexPrint(complexProduct(this, other));
        return 0;

    }