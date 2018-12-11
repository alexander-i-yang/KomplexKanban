#include <cstdlib>
#include <iostream>
#include "Complex.h"

int main () {
    std::cout << "Hello World" << std::endl;

    Complex a(5.0,6.0),b(1.0,1.0);

    /*std::cout << "Enter b: ";
    std::cin >> b;*/

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n";
    std::cout << "|a| = "   << abs(a) << "\n";
    std::cout << "complex conjugate of a = " << conj(a) << "\n";
    std::cout << "norm of a = " << norm(a) << "\n";
    std::cout << "abs of a = " << abs(a) << "\n";
    std::cout << "exp(a) = " << exp(a) << "\n";

    Complex j = Complex(0.0,1.0);
    Complex z1 = 1+2*j;
    Complex z2 = 2+3*j;

    z1 += z2;

    cout << "Complex number example: " << z1 << endl;
    cout << "The conjugate is: " << conj(z1) << endl;
    cout << "The magnitude is: " << abs(z1) << endl;
    cout << "The phase in Radians is: " << arg(z1) << endl;
    cout << "The norm is: " << norm(z1) << endl;
    cout << "The sqrt is: " << sqrt(z1) << endl;
    cout << "The natural log is: " << log(z1) << endl;
    cout << "The sin is: " << sin(z1) << endl;

    /* other function testing */
    cout << "The acosh is: " << acosh(a) << endl;
    cout << "The asec is: " << asec(a) << endl;
    cout << "The acot is: " << acot(a) << endl;
    cout << "The acsc is: " << acsc(a) << endl;
    // cout << "The asech is: " << asech(a) << endl;
    cout << "The acoth is: " << acoth(a) << endl;
    // cout << "Rounded to 2 decimal places: " << acosh(z1).rnd(2) << endl;
    cout << "The atanh is: " << atanh(a) << endl;
}
