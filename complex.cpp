#include "complex.h"
#include "arithmetic.h"

Complex::Complex() {Complex(0.0, 0.0);}

Complex::Complex(double r, double i) {re = r; im = i;}

Complex::Complex(double r) {Complex(r, 0);}

ostream& operator<<(ostream& out, const Complex& me) {
    string plus = " + "; //Declares string in the event that me.im is positive
    double real = me.re;
    double imaginary = me.im;
    if(me.im < 0) {
        plus = " - ";
        imaginary *= -1; //If I didn't make imaginary negative, the output would look like "a - -bi"
    }
    out << real << plus;
    if(me.im != 1 && me.im != -1) { //if im is 1 or -1, there's no need to print it out. Just print "i"
        out << imaginary;
    }
    out << "i";
    return out;
}

//equals operator: checks real and imaginary parts to see if they're equal
/*bool Complex::operator==(Complex& other) {
    return other.real == real && other.imaginary == imaginary;
}*/
