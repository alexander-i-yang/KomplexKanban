///Created by Alex Yang on 11/16/18

//Ignore this. These are called "include guards" to make sure the file is only declared once.
#ifndef KOMPLEXKANBAN_TEST1_H
#define KOMPLEXKANBAN_TEST1_H

#include <iostream>
using namespace std;

class Complex {
    friend double real(const Complex &com);
    friend double imag(const Complex &the);
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
        Complex(double r);

        /**
         * Adds real and imaginary parts of this complex number and b
         * @param b The second complex number to add to this one
         * @return The resulting complex number
         * @author Alex yang
         */
        Complex operator+(Complex b);

        /**
         * Subtracts real and imaginary parts of this complex number and b
         * @param b The second complex number to subtract from this one
         * @return The resulting complex number
         * @author Alex yang
         */
        Complex operator-(Complex b);

        /**
         * Multiplies this complex number and b. Results in (ab-cd)+(ac+bd)i.
         * @param b The second complex number to subtract from this one
         * @return The resulting complex number
         * @author Alex yang
         */
        Complex operator*(Complex b);

        /**
         * Multiplies this complex number and b. Results in (ab-cd)+(ac+bd)i.
         * @param b The second complex number to subtract from this one
         * @return The resulting complex number
         * @author Alex yang
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

        /**
         * FOR TESTING PURPOSES ONLY. Tests whether this Complex number is equal to the standard Complex number
         * @param rhs A standard complex number to test to this one
         * @return Whether this complex number is equal to the standard one
         * @author Alex Yang
         */
        bool operator==(const std::complex<double> &rhs) const;

        /**
         * FOR TESTING PURPOSES ONLY. Tests whether this Complex number is unequal to the standard Complex number
         * @param rhs A standard complex number to test to this one
         * @return Whether this complex number is unequal to the standard one
         * @author Alex Yang
         */
        bool operator!=(const std::complex<double> &rhs) const;

};

#endif //KOMPLEXKANBAN_TEST1_H