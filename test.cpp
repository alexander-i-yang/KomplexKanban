#include <stdio.h>
#include <iostream>
#include "complex.h"
#include "arithmetic.h"

#define PI 3.1415926538979323846

using namespace std;

int main() {
    Complex comp(-1.1, 2.2);
    Complex comp1(3, 4);
    cout << "Testing conjugates and normal functions" << endl;
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Complex number\tCongugate\tNormal" << endl;
    cout << comp << "\t" << conj(comp1) << "\t\t" << norm(comp1) << endl;
    cout << comp << "\t" << conj(comp) << "\t" << norm(comp) << endl;
    Complex comp2(1, 1);
    Complex comp3(-1, 1);
    Complex comp4 = polar(4, PI/6);
    Complex comp5(1, -1);

    cout << "\nTesting argument functions" << endl;
    cout << "|" << comp2 << "|\t\t= " << arg(comp2) << endl;
    cout << "|" << comp3 << "|\t\t= " << arg(comp3) << endl;
    cout << "|" << comp4 << "|\t\t= " << arg(comp4) << endl;
    cout << "|" << comp5 << "|\t\t= " << arg(comp5) << endl;

    cout << "\nTesting polar functions" << endl;
    cout << "(1, PI/2)\t\t= " << polar(1, PI/2) << endl;
    cout << "(1, PI)\t\t\t= " << polar(1, PI) << endl;
    cout << "(1, 3*PI/2)\t\t= " << polar(1, 3*PI/2) << endl;

    cout << "\nTesting assignment operators" <<endl;
    Complex comp6 = comp;
    cout << comp6 << " + " << comp5 << "\t= " << (comp6+=comp5) << endl;
    cout << comp6 << " - " << comp2 << "\t= " << (comp6-=comp2) << endl;
    cout << comp6 << " * " << comp1 << "\t= " << (comp6*=comp1) << endl;
    cout << comp6 << " / " << comp3 << "\t= " << (comp6/=comp3) << endl;

    cout << "\nTesting simple trig functions" << endl;
    cout << "sin" << comp3 << "\t\t = " << sin(comp3) << endl;
    cout << "cos" << comp6 << "\t\t = " << cos(comp6) << endl;
    cout << "tan" << comp2 << "\t\t = " << tan(comp2) << endl;

    cout << "\nTesting hyperbolic trig functions" << endl;
    cout << "sinh" << comp6 << "\t= " << sinh(comp6) << endl;
    cout << "cosh" << comp << "\t\t= " << cosh(comp) << endl;
    cout << "tanh" << comp5 << "\t\t= " << tanh(comp5) << endl;

    cout << "\nTesting inverse sine functions" << endl;
    cout << "asin" << comp6 << "\t= " << asin(comp6) << endl;
    cout << "acos" << comp << "\t\t= " << acos(comp) << endl;
    cout << "atan" << comp1 << "\t\t= " << atan(comp1) << endl;

    cout << "\nTesting power functions" << endl;
    cout << 4.3 << "^" << comp4 << "\t\t= " << pow(4.3, comp4) << endl;
    cout << comp6 << "^2" << "\t\t= " << pow(comp6, 2) << endl;
    cout << comp << "^-3.51\t= " << pow(comp, -3.51) << endl;
    cout << comp1 << "^" << comp6 << "\t= " << pow(comp1, comp6) << endl;
    //TODO: Implement the rest of the power functions
    cout << "sqrt" << comp1 << "\t\t= " << sqrt(comp1) << endl;

    cout << "\nTesting logarithmic functions" << endl;
    cout << "ln" << comp6 << "\t= " << log(comp6) << endl;
    cout << "log_10" << comp << "\t= " << log10(comp) << endl;

    return 0;
}