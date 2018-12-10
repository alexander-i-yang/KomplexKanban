#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex acosh(Complex& com) {
	Complex ret = log(com + sqrt(com + 1) * sqrt(com - 1));
	return ret;
}
