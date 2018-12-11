#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex atanh(Complex com) {
	Complex ret = 0.5*log(com+1) - 0.5*log(1-com);
	return ret;
}

Complex acsch(Complex com) {
	Complex ret = asinh(pow(com, -1));
	return ret;
}