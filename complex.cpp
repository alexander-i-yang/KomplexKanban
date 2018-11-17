#include "complex.h"
#include "arithmetic.h"

Complex::Complex() {Complex(0.0, 0.0);}

Complex::Complex(double r, double i) {re = r; im = i;}

Complex::Complex(double r) {Complex(r, 0);}

ostream& operator<<(ostream& out, const Complex& me) {
    out << "(" << me.re << ", " << me.im << ")";
    return out;
}

//equals operator: checks real and imaginary parts to see if they're equal
/*bool Complex::operator==(Complex& other) {
    return other.real == real && other.imaginary == imaginary;
}*/
