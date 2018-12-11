#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex asinh(Complex com) {
	Complex ret = log(sqrt(pow(com, 2)+1)+com);
	return ret;
}