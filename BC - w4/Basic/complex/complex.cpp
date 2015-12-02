#include "complex.h"
#include <iostream>


        Complex::Complex(double real, double imaginary){
                this->real = real;
                this->imaginary = imaginary;
        };
        Complex::~Complex(){};

        double Complex::getReal() const{
                return this->real;
        };
        double Complex::getImaginary() const{
                return this->imaginary;
        };

        bool Complex::operator==(const Complex& other) const{
                return this->real == other.real && this->imaginary == other.imaginary;
        };

        bool Complex::operator!=(const Complex& other) const{
                return !operator == (other);
        };
        void Complex::operator+=(const Complex& other){
                this->real += other.real;
                this->imaginary += other.imaginary;
        };
        void Complex::operator-=(const Complex& other){
                this->real -= other.real;
                this->imaginary -= other.imaginary;
        };
        Complex Complex::operator+(const Complex& other) const{
                Complex sum = *this;

                sum += other;
                return sum;
        };
        Complex Complex::operator-(const Complex& other) const{
                Complex diff = *this;

                diff -= other;
                return diff;

        };
        Complex Complex::operator*(const Complex& other) const{
                Complex multip = *this;

                multip.real *= other.real;
                multip.imaginary *= other.imaginary;

                return multip;
        };

std::ostream& operator<<(std::ostream& out, const Complex& complex){
        out << complex.getReal();
        if (complex.getImaginary() < 0) {
        } else {
                out <<"+";
        };
        out <<complex.getImaginary()<<"i" <<std::endl;

};
