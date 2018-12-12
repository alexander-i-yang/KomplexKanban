/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexYash.cpp
Author : Yash Patil
URL : NA
Description : Trig functions for complex numbers
Created : 12/5/2018
Modified : 12/11/2018
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex acosh(Complex com) {
	Complex ret = log(com + sqrt(com + 1) * sqrt(com - 1));
	return ret;
}

Complex asec(Complex com) {
	Complex ret = 0.5 * (PI - 2 * asin(pow(com, -1)));
	return ret;
}

Complex acot(Complex com) {
	Complex ret = atan(pow(com, -1));
	return ret;
}

Complex acsc(Complex com) {
	Complex ret = asin(pow(com, -1));
	return ret;
}

Complex acoth(Complex com) {
	Complex ret = tanh(pow(com, -1));
	return ret;
}