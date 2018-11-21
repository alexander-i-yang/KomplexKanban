#include <math.h>
#include "complex.h"

#define PI 3.1415926538979323846

double abs(const Complex me) {
    double re = real(me);
    double im = imag(me);
    return sqrt(re*re + im*im);
}

double arg(const Complex com) {
    double ret = atan(imag(com)/real(com));
    if(imag(com) < 0 && real(com) < 0) {
        //arcTangent has a limited domain. Check both components of com and change angle accordingly
        ret -= PI;
    }
    return ret;
}

Complex conj(const Complex com) {
    Complex ret(real(com), -1*imag(com));
    return ret;
}

double imag(const Complex &the) {
    return the.im;
}

double norm(const Complex com) {
    double re(real(com)), im(imag(com));//Fancy initialization
    return re*re+im*im;
}

Complex polar(double mag, double ang=0.0) {
    double re = mag*cos(ang);
    double im = mag*sin(ang);
    //Sometimes re becomes 10e-10 instead of 0
    if(re < 10e-9 && re > -1*10e-9) {
        //If re is really small, it's probably supposed to be 0
        re = 0;
    }
    //same with imaginary
    if(im < 10e-9 && im > -1*10e-9) {
        im = 0;
    }
    Complex ret(re, im);
    return ret;
}

double real(const Complex& com) {
    return com.re;
}

Complex sin(Complex& com) {
    //sin(a)*cosh(b)+i*cos(a)*sinh(b). Math, right?
    double comRe = real(com);
    double comIm = imag(com);
    double re = sin(comRe)*cosh(comIm);
    double im = cos(comRe)*sinh(comIm);
    Complex ret(re, im);
    return ret;
}

Complex cos(Complex& com) {
    double comRe = real(com);
    double comIm = imag(com);
    double re = cos(comRe)*cosh(comIm);
    double im = -1*sin(comRe)*sinh(comIm);
    Complex ret(re, im);
    return ret;
}

Complex tan(Complex& com) {
    double comRe = real(com);
    double comIm = imag(com);
    //Real and imaginary parts for the numerator
    double topRe = sin(comRe)*cosh(comIm);
    double topIm = cos(comRe)*sinh(comIm);
    //Real and imaginary parts for the denominator
    double bottomRe = cos(comRe)*cosh(comIm);
    double bottomIm = -1*sin(comRe)*sinh(comIm);
    Complex top(topRe, topIm);
    Complex bottom(bottomRe, bottomIm);
    return top/bottom;
}