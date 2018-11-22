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
double abs(Complex com);

/**
 * Returns the angle (arctangent(a/b)) of com IN RADIANS
 * @param com the complex number to find the angle of
 * @return the angle of com IN RADIANS
 * @author Alex Yang
 */
double arg(Complex com);

/**
 * Returns the conjugate of com (a-bi)
 * @param com the Complex number to find the conjugate of
 * @return the conjugate of com
 * @author Alex Yang
 */
Complex conj(Complex com);

/**
 * Returns the imaginary part of the parameter
 * @param com the Complex number to find the imaginary part of
 * @return the imaginary part of com
 * @author Alex Yang
 */
double imag(const Complex& com);

/**
 * Returns a^2+b^2
 * @param com The complex number to find the normal of
 * @return the normal a^2+b^2
 */
double norm(Complex com);

/**
 * Creates a complex number with magnitude mag and angle ang (IN RADIANS)
 * @param mag The magnitude of the resulting complex number
 * @param ang The angle of the resulting complex number IN RADIANS
 * @return The complex number formed by mag and ang
 */
Complex polar(double mag, double ang=0.0);

/**
 * Returns the real part of the parameter
 * @param com the Complex number to find the real part of
 * @return the real part of com
 * @author Alex Yang
 */
double real(const Complex& com);

/**
 * Returns the log of com in the format ln(abs(com))+i*arg(com).
 * @param com The complex number to find the natural log of.
 * @return The natural log of com
 * @author Alex Yang
 */
Complex log(Complex com);

/**
 * Returns the log base 10 of com
 * @param com The complex number to find the log_10 of
 * @return log base 10 of com
 * @author Alex Yang
 */
Complex log10(Complex& com);

/**
 * Returns a complex number that is com^exp. Solves in the form |com|^exp * (cos(exp*arg(z))+i*sin(exp*arg(z)))
 * @param b The complex number to raise to the power of exp
 * @param exp The exponent to raise com to the power of
 * @return com^exp
 * @author Alex Yang
 */
Complex pow(Complex& b, int exp);

/**
 * Raises b to the power of exp
 * @param b The base
 * @param exp The exponent
 * @return b^exp
 * @author Alex Yang
 */
Complex pow(double b, Complex& exp);

/**
 * Returns the 1st of the nth root of com.
 * @param b The complex number to find the nth root of
 * @param exp The root number to calculate
 * @return The first root of the com
 * @author Alex yang
 */
Complex root(Complex& b, int exp);

/**
 * Raises b to the power of exp
 * @param b Complex base
 * @param exp Double value of exponent
 * @return b^exp
 * @author Alex Yang
 */
Complex pow(Complex& b, double exp);

/**
 * Raises com to the power of exp.
 * @param b The base of the operation
 * @param exp The complex exponent
 * @return com^exp
 * @author Alex Yang
 */
Complex pow(Complex& b, Complex& exp);

/**
 * Returns the square root of com
 * @param com The complex number to find the square root of
 * @return The square root of com
 */
Complex sqrt(Complex& com);

/**
 * Returns the sine of the argument in the form sin(a)*cosh(b)+i*cos(a)*sinh(b). Math, right?
 * @param com The complex number to find the sine of
 * @return A complex number that is the sine of com
 * @author Alex Yang
 */
Complex sin(Complex& com);

/**
 * Returns the cosine of the argument in the form cos(a)*cosh(b)−i*sin(a)*sinh(b)
 * @param com The complex number to find the cosine of
 * @return A complex number that is the cosine of com
 * @author Alex Yang
 */
Complex cos(Complex& com);

/**
 * Returns the tangent of the argument in the form (sin(a)*cosh(b)+i*cos(a)*sinh(b))/(cos(a)*cosh(b)−i*sin(a)*sinh(b))
 * @param com The complex number to find the cosine of
 * @return A complex number that is the tangent of com
 * @author Alex Yang
 */
Complex tan(Complex& com);

/**
 * Returns the hyperbolic sine of the argument in the form sinh(a)*cos(b)+i*cosh(a)*sin(b).
 * @param com The complex number to find the sinh of
 * @return A complex number that is the sinh of com
 * @author Alex Yang
 */
Complex sinh(Complex& com);

/**
 * Returns the hyperbolic cosine of the argument in the form cosh(a)*cos(b)+i*sinh(a)*sin(b).
 * @param com The complex number to find the cosh of
 * @return A complex number that is the cosh of com
 * @author Alex Yang
 */
Complex cosh(Complex& com);

/**
 * Returns the hyperbolic tangent of the argument in the form (tanh(a)+i*tan(b))/(1+i*tanh(x)*tan(y))
 * @param com The complex number to find the tanh of
 * @return A complex number that is the tanh of com
 * @author Alex Yang
 */
Complex tanh(Complex& com);

/**
 * Returns the inverse sine of the argument in the form -i*ln(i*com+(1-com^2)^(1/2))
 * @param com The complex number to find the inverse sine of
 * @return A complex number that is the inverse sin of com
 * @author Alex Yang
 */
Complex asin(Complex& com);

/**
 * Returns the inverse cosine of the argument.
 * @param com The complex number to find the inverse cosine of
 * @return A complex number that is the inverse cosine of com
 * @author Alex Yang
 */
Complex acos(Complex& com);

/**
 * Returns the inverse tangent of the argument
 * @param com The complex number to find the inverse tangent of
 * @return A complex number that is the inverse tangent of com
 * @author Alex Yang
 */
Complex atan(Complex& com);
#endif //KOMPLEXKANBAN_ARITHMETIC_H