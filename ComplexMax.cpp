/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexMax.cpp
Author : Max Wienreb
URL : NA
Description : Functions for complex numbers
Created : 12/5/2018
Modified : 12/11/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex Complex::operator/(double a) {
	Complex ret (re/a, im/a);
	return ret;
}

Complex operator/(double a, const Complex &com) {
    Complex ret = a/norm(com)*conj(com);
    return ret;
}

Complex asinh(Complex com) {
	Complex ret = log(sqrt(pow(com, 2)+1)+com);
	return ret;
}
