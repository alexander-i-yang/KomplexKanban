#ifndef KOMPLEXKANBAN_ARITHMETIC_H
#define KOMPLEXKANBAN_ARITHMETIC_H

#include <complex>
#include "arithmetic.h"
#include "test1.h"

double abs(const Complex);

double arg(const Complex);

Complex conj(const Complex);

double norm(const Complex);

Complex polar(double mag, double ang=0.0);

double real(const Complex&);

#endif //KOMPLEXKANBAN_ARITHMETIC_H