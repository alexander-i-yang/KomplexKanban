#include <math.h>
#include "complex.h"

#define PI 3.1415926538979323846

double abs(const Complex me) {
    double re = real(me);
    double im = imaginary(me);
    return sqrt(re*re + im*im);
}

double arg(const Complex com) {
    double ret = atan(imaginary(com)/real(com));
    if(imaginary(com) < 0 && real(com) < 0) {
        //arcTangent has a limited domain. Check both components of com and change angle accordingly
        ret -= PI;
    }
    return ret;
}

Complex conj(const Complex com) {
    Complex ret(real(com), -1*imaginary(com));
    return ret;
}

double real(const Complex& com) {
    return com.re;
}

double imaginary(const Complex &the) {
    return the.im;
}