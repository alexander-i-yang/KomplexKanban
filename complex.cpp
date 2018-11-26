#include <complex>
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
        re = stod(ret.substr(ret.find('(')+1, ret.find(',')-1));
        int imIndex = ret.find(',');
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

Complex Complex::operator+(Complex b) {
    Complex ret(re+b.re, im+b.im);
    return ret;
}

Complex Complex::operator-(Complex b) {
    Complex ret(re-b.re, im-b.im);
    return ret;
}

Complex Complex::operator*(Complex b) {
    Complex ret(re*b.re-im*b.im, im*b.re+b.im*re);
    return ret;
}

Complex Complex::operator/(Complex& b) {
    double div = norm(b);
    Complex ret = *this*conj(b);
    ret.re /= div;
    ret.im /= div;
    return ret;
}

Complex& Complex::operator= (Complex b) {
    re = b.re;
    im = b.im;
    return *this;
}

Complex & Complex::operator+=(Complex &b) {
    *this = *this + b;
    return *this;
}

Complex Complex::operator-=(Complex &b) {
    *this = *this - b;
    return *this;
}

Complex Complex::operator*= (Complex& b) {
    *this = *this*b;
    return *this;
}

Complex Complex::operator/=(Complex b) {
    *this = *this/b;
    return *this;
}

bool Complex::operator==(const Complex &rhs) const {
    return re == rhs.re &&
           im == rhs.im;
}

bool Complex::operator!=(const Complex &rhs) const {
    return !(rhs == *this);
}

bool Complex::operator==(const std::complex<double> &rhs) const {
    if(re == real(rhs) && im == imag(rhs)) return true;

    double realDif = re-real(rhs), imagDif = im-imag(rhs);
//    cout << realDif << " " << imagDif << endl;
    if((realDif>-1e-4 && realDif<1e-4) && (imagDif>-1e-5 && imagDif<1e-5)) {
        return true;
    }
    //cerr << "false" << endl;

    //Don't ask.
    string stringRe = to_string(re);
    string stringIm = to_string(im);
    string stdStringRe = to_string(real(rhs));
    string stdStringIm = to_string(imag(rhs));
    if(stringRe == stdStringRe && stringIm == stdStringIm) return true;
}

bool Complex::operator!=(const std::complex<double> &rhs) const {
    return ! (*this == rhs);
}