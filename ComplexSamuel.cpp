/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexSamuel.cpp
Author : Samuel Tian
URL : NA
Description : Description : operator overloading for arithmetic operators
and implementation of trig functions and rotate function
Created : 12/5/2018
Modified : 12/11/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex Complex::operator+(double a) {
    Complex ret(re+a, im);
    return ret;
}

Complex operator-(double a, const Complex &com) {
    Complex ret(a-real(com), -1*imag(com));
    return ret;
}

Complex atanh(Complex com) {
	Complex ret = 0.5*log(com+1) - 0.5*log(1-com);
	return ret;
}

Complex acsch(Complex com) {
	Complex ret = asinh(pow(com, -1));
	return ret;
}

Complex rotate(Complex com, double theta) {
	double argument = arg(com)+theta;
	Complex ret (abs(com)*cos(argument), abs(com)*sin(argument));
	return ret;
}
