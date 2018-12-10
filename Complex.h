//
// Created by Alex on 12/7/2018.
//

#ifndef KOMPLEXKANBAN2_COMPLEX_H
#define KOMPLEXKANBAN2_COMPLEX_H

#include <iostream>
#include <complex>

using namespace std;

class Complex {

    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------

    /**
     * Returns the real part of com
     * @param com The complex number to find the real part of
     * @return com.re
     * @author Alex Yang
     */
    friend double real(const Complex &com);
    /**
     * Returns the imaginary part of com
     * @param com The complex number to find the real part of
     * @return com.im
     * @author Alex Yang
     */
    friend double imag(const Complex &the);

    /**
     * Operator overload for multiplying doubles and complex numbers
     * @param a The double
     * @param com The complex number to add
     * @return a*com
     * @author Alex Yang
     */
    friend Complex operator*(double a, const Complex &com);

    /**
     * Operator overload for adding doubles and complex numbers
     * @param a The double
     * @param com The complex number to add
     * @return a+com
     * @author Alex Yang
     */
    friend Complex operator+(double a, const Complex &com);

    /**
     * Operator overload for subtracting doubles and complex numbers
     * @param a The double
     * @param com The complex number to subtract
     * @return a-com
     * @author Samuel Tian
     */
    friend Complex operator-(double a, const Complex &com);

    /**
     * Format: (real, imaginary). Does not include "i".
     * @param out ostream
     * @param me complex number to print
     * @return out
     * @author Alex Yang
     */
    friend ostream& operator<<(ostream& out, const Complex& me);
    /**
     * Reads in a pair of values in parentheses, separated by a comma and a space (optional). Defaults to (0, 0)
     * @bug The error handling is likely incorrect
     * @param is The instream (usually cin) to read in
     * @param com The complex number to read in values to
     * @return the istream is
     * @author Alex Yang
     */
    friend istream& operator>> (istream& is, Complex& com);

    //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author Alex Yang
     */
    friend double abs(Complex com);

    /**
     * Returns the angle (arctangent(a/b)) of com IN RADIANS
     * @param com the complex number to find the angle of
     * @return the angle of com IN RADIANS
     * @author Alex Yang
     */
    friend double arg(Complex com);

    /**
     * Returns the conjugate of com (a-bi)
     * @param com the Complex number to find the conjugate of
     * @return the conjugate of com
     * @author Alex Yang
     */
    friend Complex conj(Complex com);

    /**
     * Returns a^2+b^2
     * @param com The complex number to find the normal of
     * @return the normal a^2+b^2
     */
    friend double norm(Complex com);

    /**
     * Creates a complex number with magnitude mag and angle ang (IN RADIANS)
     * @param mag The magnitude of the resulting complex number
     * @param ang The angle of the resulting complex number IN RADIANS, defaults to 0.0
     * @return The complex number formed by mag and ang
     */
    friend Complex polar(double mag, double ang=0.0);

    /**
     * Returns the real part of the parameter
     * @param com the Complex number to find the real part of
     * @return the real part of com
     * @author Alex Yang
     */
    friend double real(const Complex& com);

    /**
     * Returns the log of com in the format ln(abs(com))+i*arg(com).
     * @param com The complex number to find the natural log of.
     * @return The natural log of com
     * @author Alex Yang
     */
    friend Complex log(Complex com);

    /**
     * Returns the log base 10 of com
     * @param com The complex number to find the log_10 of
     * @return log base 10 of com
     * @author Alex Yang
     */
    friend Complex log10(Complex& com);

    /**
     * Computes e^com
     * @param com The exponent for e
     * @return e^com
     * @author Alex Yang
     */
    friend Complex exp(Complex& com);

    /**
     * Returns a complex number that is com^exp. Solves in the form |com|^exp * (cos(exp*arg(z))+i*sin(exp*arg(z)))
     * @param b The complex number to raise to the power of exp
     * @param exp The exponent to raise com to the power of
     * @return com^exp
     * @author Alex Yang
     */
    friend Complex pow(Complex& b, int exp);

    /**
     * Raises b to the power of exp
     * @param b The base
     * @param exp The exponent
     * @return b^exp
     * @author Alex Yang
     */
    friend Complex pow(double b, Complex& exp);

    /**
     * Returns the 1st of the nth root of com.
     * @param b The complex number to find the nth root of
     * @param exp The root number to calculate
     * @return The first root of the com
     * @author Alex yang
     */
    friend Complex root(Complex& b, int exp);

    /**
     * Raises b to the power of exp
     * @param b Complex base
     * @param exp Double value of exponent
     * @return b^exp
     * @author Alex Yang
     */
    friend Complex pow(Complex& b, double exp);

    /**
     * Raises com to the power of exp.
     * @param b The base of the operation
     * @param exp The complex exponent
     * @return com^exp
     * @author Alex Yang
     */
    friend Complex pow(Complex& b, Complex& exp);

    /**
     * Returns the square root of com
     * @param com The complex number to find the square root of
     * @return The square root of com
     */
    friend Complex sqrt(Complex& com);

    /**
     * Returns the sine of the argument in the form sin(a)*cosh(b)+i*cos(a)*sinh(b). Math, right?
     * @param com The complex number to find the sine of
     * @return A complex number that is the sine of com
     * @author Alex Yang
     */
    friend Complex sin(Complex& com);

    /**
     * Returns the cosine of the argument in the form cos(a)*cosh(b)−i*sin(a)*sinh(b)
     * @param com The complex number to find the cosine of
     * @return A complex number that is the cosine of com
     * @author Alex Yang
     */
    friend Complex cos(Complex& com);

    /**
     * Returns the tangent of the argument in the form (sin(a)*cosh(b)+i*cos(a)*sinh(b))/(cos(a)*cosh(b)−i*sin(a)*sinh(b))
     * @param com The complex number to find the cosine of
     * @return A complex number that is the tangent of com
     * @author Alex Yang
     */
    friend Complex tan(Complex& com);

    /**
     * Returns the hyperbolic sine of the argument in the form sinh(a)*cos(b)+i*cosh(a)*sin(b).
     * @param com The complex number to find the sinh of
     * @return A complex number that is the sinh of com
     * @author Alex Yang
     */
    friend Complex sinh(Complex& com);

    /**
     * Returns the hyperbolic cosine of the argument in the form cosh(a)*cos(b)+i*sinh(a)*sin(b).
     * @param com The complex number to find the cosh of
     * @return A complex number that is the cosh of com
     * @author Alex Yang
     */
    friend Complex cosh(Complex& com);

    /**
     * Returns the hyperbolic tangent of the argument in the form (tanh(a)+i*tan(b))/(1+i*tanh(x)*tan(y))
     * @param com The complex number to find the tanh of
     * @return A complex number that is the tanh of com
     * @author Alex Yang
     */
    friend Complex tanh(Complex& com);

    /**
     * Returns the inverse sine of the argument in the form -i*ln(i*com+(1-com^2)^(1/2))
     * @param com The complex number to find the inverse sine of
     * @return A complex number that is the inverse sin of com
     * @author Alex Yang
     */
    friend Complex asin(Complex& com);

    /**
     * Returns the inverse cosine of the argument.
     * @param com The complex number to find the inverse cosine of
     * @return A complex number that is the inverse cosine of com
     * @author Alex Yang
     */
    friend Complex acos(Complex& com);

    /**
     * Returns the inverse tangent of the argument
     * @param com The complex number to find the inverse tangent of
     * @return A complex number that is the inverse tangent of com
     * @author Alex Yang
     */
    friend Complex atan(Complex& com);

    /**
     * Returns the inverse hyperbolic tangent of the argument
     * @param com The complex number to find the inverse hyperbolic tangent of
     * @return A complex number that is the inverse hyperbolic tangent of com
     * @author Samuel Tian
     */
    friend Complex atanh(Complex& com);

    /**
     * Returns the inverse hyperbolic cosine of the argument
     * @param com The complex number to find the inverse hyperbolic cosine of
     * @return A complex number that is the inverse hyperbolic cosine of com
     * @author Yash Patil
     */
    friend Complex acosh(Complex& com);

private:
    ///Real part
    double re;
    ///Imaginary part
    double im;
public:
    /**
     * Initialization constructor, initializes the Complex object as r + i*i
     * @param r the real part
     * @param i the imaginary part
     * @author Alex Yang
     */
    Complex(double r, double i);

    /**
     * Default constructor, initializes the Complex object as 0+0i
     * @author Alex yang
     */
    Complex();

    /**
     * Initiaization constructor that takes one value to be assigned to the real part
     * @param r the real part of the Complex object
     * @author Alex Yang
     */
    explicit Complex(double r);

    /**
     * Adds real and imaginary parts of this complex number and b
     * @param b The second complex number to add to this one
     * @return The resulting complex number
     * @author Alex Yang
     */
    Complex operator+(Complex b);

    /**
     * Operator overload for adding integers and complex numbers (format com+a)
     * @param a The integer to add
     * @return com+a
     * @author Alex Yang
     */
    Complex operator+(double a);

    /**
     * Subtracts real and imaginary parts of this complex number and b
     * @param b The second complex number to subtract from this one
     * @return The resulting complex number
     * @author Alex Yang
     */
    Complex operator-(Complex b);

    /**
     * Operator overload for subtracting integers and complex numbers (format com-a)
     * @param a The integer to subtract
     * @return com-a
     * @author Alex Yang
     */
    Complex operator-(double a);

    /**
     * Multiplies this complex number and b. Results in (ab-cd)+(ac+bd)i.
     * @param b The second complex number to subtract from this one
     * @return The resulting complex number
     * @author Alex Yang
     */
    Complex operator*(Complex b);

    /**
     * Operator overload for multiplying complex numbers and integers (format com*a)
     * @param a The integer to multuiply by
     * @return com*a
     * @author Alex Yang
     */
    Complex operator*(double a);

    /**
     * Multiplies this complex number and b. Results in (ab-cd)+(ac+bd)i.
     * @param b The second complex number to subtract from this one
     * @return The resulting complex number
     * @author Alex Yang
     */
    Complex operator/(Complex& b);

    /**
    * The real number part of a is set to the real part of b. Same for the imaginary part.
    * @param b The complex number that is assigned to a
    * @return The "this" pointer
    * @author Alex Yang
    */
    Complex& operator= (Complex b);

    /**
     * Adds the real part of a to the real part of b. Same for the imaginary part.
     * @param b The complex number to add to this one
     * @return The "this" pointer
     * @author Alex Yang
     */
    Complex & operator+=(Complex &b);

    /**
     * Subtracts the real part of b from the real part of b. Same for the imaginary part.
     * @param b The complex number to subtract from this one
     * @return The "this pointer"
     * @author Alex Yang
     */
    Complex operator-= (Complex& b);

    /**
     * Multiplies this Complex number with b. Results in (ab-cd)+(bc+ad)i.
     * @param b The complex number to multiply with this one
     * @return The "this pointer"
     * @author Alex Yang
     */
    Complex operator*= (Complex& b);

    /**
     * Divides this complex number and b.
     * @param b The second complex number to divide by this one
     * @return The resulting complex number
     * @author Alex yang
     */
    Complex operator/=(Complex b);

    /**
     * Tests whether this complex number is equal to another complex number by comparing their real and imaginary
     * @param rhs The other complex number
     * @return Whether this complex number is equal to the other one
     * @author Alex Yang
     */
    bool operator==(const Complex &rhs) const;

    /**
     * Tests whether this complex number is unequal to another complex number by comparing their real and imaginary
     * @param rhs The other complex number
     * @return Whether this complex number is unequal to the other one
     * @author Alex Yang
     */
    bool operator!=(const Complex &rhs) const;
};

#endif