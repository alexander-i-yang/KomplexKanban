#ifndef KOMPLEXKANBAN_ARITHMETIC_H
#define KOMPLEXKANBAN_ARITHMETIC_H

#include "test1.h"

double abs(const Complex me) {
    double re = real(me);
    double im = imaginary(me);
    return sqrt(re*re + im*im);
}

#endif //KOMPLEXKANBAN_ARITHMETIC_H
