//Ignore this. These are called "include guards" to make sure the file is only declared once.
#ifndef KOMPLEXKANBAN_ARITHMETIC_H
#define KOMPLEXKANBAN_ARITHMETIC_H

#include <complex>
#include "arithmetic.h"
#include "complex.h"

/**
 * Returns the absolute value (sqrt(a^2+b^2)) of com
 * @param com the complex number to find the absolute value of
 * @return the absolute value of com
 * @author Alex Yang
 */
double abs(const Complex com);

/**
 * Returns the angle (arctangent(a/b)) of com IN RADIANS
 * @param com the complex number to find the angle of
 * @return the angle of com IN RADIANS
 * @author Alex Yang
 */
double arg(const Complex com);

/**
 * Returns the conjugate of com (a-bi)
 * @param com the Complex number to find the conjugate of
 * @return the conjugate of com
 * @author Alex Yang
 */
Complex conj(const Complex com);

/**
 * Returns the imaginary part of the parameter
 * @param com the Complex number to find the imaginary part of
 * @return the imaginary part of com
 * @author Alex Yang
 */
double imaginary(const Complex& com);

double norm(const Complex com);

Complex polar(double mag, double ang=0.0);

/**
 * Returns the real part of the parameter
 * @param com the Complex number to find the real part of
 * @return the real part of com
 * @author Alex Yang
 */
double real(const Complex& com);

#endif //KOMPLEXKANBAN_ARITHMETIC_H