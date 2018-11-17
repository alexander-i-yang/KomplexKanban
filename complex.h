#ifndef KOMPLEXKANBAN_TEST1_H
#define KOMPLEXKANBAN_TEST1_H

#include <iostream>
using namespace std;

class Complex {
    friend double real(const Complex &the);
    friend double imaginary(const Complex &the);
    friend ostream& operator<<(ostream& out, const Complex& me);
    private:
        ///Real part
        double re;
        ///Imaginary part
        double im;
    public:
        ///Initialization constructor, initalizes the Complex object as r+ii
        /// \param r the real part
        /// \param i the imaginary part
        Complex(double r, double i);

        ///Default constructor, initializes the Complex object as 0+0i
        Complex();

        /// Initiaization constructor that takes one value
        /// \param r the real part of the Complex object
        Complex(double r);

        //equals operator: checks real and imaginary parts to see if they're equal
        //bool operator==(Complex& me);
};

///Returns the real part of the parameter
/// \param com the Complex number to find the real part of
double real(const Complex& com);

///Returns the imaginary part of the parameter
/// \param com the Complex number to find the imaginary part of
double imaginary(const Complex& com);

///Returns the conjugate of com (a-bi)
/// \param com the Complex number to find the conjugate of
Complex conj(const Complex com);

#endif //KOMPLEXKANBAN_TEST1_H