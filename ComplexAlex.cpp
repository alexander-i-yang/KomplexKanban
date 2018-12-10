#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

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
    } else if(real(com) < 0) {
        ret += PI;
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

Complex pow(double b, Complex& com) {
    double angle = imag(com)*log(b);
    double mag = pow(b, real(com));
    Complex ret = polar(mag, angle);
    return ret;
}

Complex pow(Complex& com, double exp) {
    double angle = arg(com);
    double magnitude = abs(com);
    double re = pow(magnitude, exp) * cos(exp*angle);
    double im = pow(magnitude, exp) * sin(exp*angle);
    Complex ret(re, im);
    return ret;
}

Complex pow(Complex& com, int exp) {
    double expD = exp;
    return pow(com, expD);
}

Complex pow(Complex& com, Complex& exp) {
    double expRe = real(exp), expIm = imag(exp);
    double mag = pow(norm(com), 0.5*expRe)*std::exp(-1*expIm*arg(com));
    double angle = expRe*arg(com)+0.5*expIm*log(norm(com));
    Complex ret = polar(mag, angle);
    return ret;

}

Complex root(Complex& com, int exp) {
    double angle = arg(com);
    double magnitude = abs(com);
    double re = pow(magnitude, 1.0/exp) * cos(angle/exp);
    double im = pow(magnitude, 1.0/exp) * sin(angle/exp);
    Complex ret(re, im);
    return ret;
}

Complex sqrt(Complex& com) {
    return root(com, 2);
}

Complex log(Complex com) {
    double re = log(abs(com));
    double im = arg(com);
    Complex ret(re, im);
    return ret;
}

Complex log10(Complex& com) {
    double re = log10(abs(com));
    double im = log10(EULER) * arg(com);
    Complex ret(re, im);
    return ret;
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

Complex sinh(Complex& com) {
    //sinh(a)*cos(b)+i*cosh(a)*sin(b)
    double comRe = real(com);
    double comIm = imag(com);
    double re = sinh(comRe)*cos(comIm);
    double im = cosh(comRe)*sin(comIm);
    Complex ret(re, im);
    return ret;
}

Complex cosh(Complex& com) {
    //cosh(a)*cos(b)+i*sinh(a)*sin(b)
    double comRe = real(com);
    double comIm = imag(com);
    double re = cosh(comRe)*cos(comIm);
    double im = sinh(comRe)*sin(comIm);
    Complex ret(re, im);
    return ret;
}

Complex tanh(Complex& com) {
    //(tanh(x) + i tan(y)) / (1 +i tanh(x) tan(y))
    double re = real(com);
    double im = imag(com);
    Complex top(tanh(re), tan(im));
    Complex bottom(1, tanh(re)*tan(im));
    return top/bottom;
}

Complex asin(Complex& com) {
    Complex i(0, 1);
    Complex negativeI(0, -1);
    Complex comSquared = pow(com, 2);
    Complex oneMinusComSquared(1-real(comSquared), -1*imag(comSquared));
    Complex ret = negativeI * log(i*com+root(oneMinusComSquared, 2));
    return ret;
}

Complex acos(Complex& com) {
    Complex ret(PI/2-real(asin(com)), -1*imag(asin(com)));
    return ret;
}

Complex atan(Complex& com) {
    Complex oneHalfI(0, 0.5);
    Complex i(0, 1);
    Complex oneMinusITimesCom(1-real(i*com), -1*imag(i*com));
    Complex onePlusITimesCom(1+real(i*com), imag(i*com));
    Complex ret = oneHalfI*log(oneMinusITimesCom)-oneHalfI*log(onePlusITimesCom);
    return ret;
}

Complex exp(Complex &com) {
    return pow(EULER, com);
}
