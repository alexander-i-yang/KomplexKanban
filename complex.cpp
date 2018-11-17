#include "complex.h"
#include "arithmetic.h"

Complex::Complex() {Complex(0.0, 0.0);}

Complex::Complex(double r, double i) {re = r; im = i;}

Complex::Complex(double r) {Complex(r, 0);}

ostream& operator<<(ostream& out, const Complex& me) {
    out << "(" << me.re << ", " << me.im << ")";
    return out;
}

istream& operator>> (istream& is, Complex& com)
{
    string ret;
    getline(cin, ret);
    double re = 0;
    double im = 0;
    //Make sure the user inputted something useful instead of a weird value like "a"
    try {
        re = stod(ret.substr(ret.find("(")+1, ret.find(",")-1));
        int imIndex = ret.find(",");
        //Account for the possibility that there might be a space, and if so, increment imIndex
        if(ret.at(imIndex+1) == ' ') {imIndex++;}
        im = stod(ret.substr(imIndex+1, ret.length()-imIndex-2));
    } catch (exception& e) {
        //come back to this later and make sure it's consistent with the specs
        cerr << "Error: invalid input string" << endl;
    }
    com.re = re;
    com.im = im;
    return is;
}

//equals operator: checks real and imaginary parts to see if they're equal
/*bool Complex::operator==(Complex& other) {
    return other.real == real && other.imaginary == imaginary;
}*/
