#include "Complex.h"

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

Complex Complex::operator+(int a) {
    Complex ret(re+a, im);
    return ret;
}

Complex Complex::operator-(Complex b) {
    Complex ret(re-b.re, im-b.im);
    return ret;
}

Complex Complex::operator-(int a) {
    return *this+(-1*a);
}

Complex Complex::operator*(Complex b) {
    Complex ret(re*b.re-im*b.im, im*b.re+b.im*re);
    return ret;
}

Complex Complex::operator*(int a) {
    Complex ret(re*a, im*a);
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

Complex operator*(int a, const Complex &com) {
    Complex ret(a*real(com), a*imag(com));
    return ret;
}

Complex operator+(int a, const Complex &com) {
    Complex ret(a+real(com), imag(com));
    return ret;
}
