///Created by Alex Yang on 11/16/18

//Ignore this. These are called "include guards" to make sure the file is only declared once.
#ifndef KOMPLEXKANBAN_TEST1_H
#define KOMPLEXKANBAN_TEST1_H

#include <iostream>
using namespace std;

class Complex {
    friend double real(const Complex &com);
    friend double imaginary(const Complex &the);
    /**
     * Format: [real] [+ or -] [imaginary]i. If imaginary is 1 or -1, don't print it out.
     * @param out ostream
     * @param me complex number to print
     * @return out
     * @author Alex Yang
     */
    friend ostream& operator<<(ostream& out, const Complex& me);
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
         * Initiaization constructor that takes one value
         * @param r the real part of the Complex object
         * @author Alex Yang
         */
        Complex(double r);

        //equals operator: checks real and imaginary parts to see if they're equal
        //bool operator==(Complex& me);
};

#endif //KOMPLEXKANBAN_TEST1_H