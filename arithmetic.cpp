#include <cmath>
#include "complex.h"

double abs(const Complex me) {
    double re = real(me);
    double im = imaginary(me);
    return sqrt(re*re + im*im);
}