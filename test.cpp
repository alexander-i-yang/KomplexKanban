#include <cstdio>
#include <iostream>
#include <complex>
#include <time.h>
#include "arithmetic.h"

#define PI 3.1415926538979323846

using namespace std;

void error(string functionName, Complex comp, double stdComp);

void error(string functionName, double comp, std::complex<double> stdComp);

void error(string functionName, Complex comp, std::complex<double> stdComp);

void error(string functionName, double comp, double stdComp);

void error(string functionName, Complex comp, Complex stdComp);

double randomDouble();

int main() {
    Complex comp(-87.5498, -89.3847);
    Complex comp1(5.1221, -6.2363);

    cout << "Custom 1\t\t| Custom 2\t\t| Standard 1 \t\t| Standard 2" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;

    //Test all the functions 100 times with random numbers
    for(int i = 0; i<100; ++i) {
        double re = randomDouble(); //Get very random numbers
        double im = randomDouble();
        double re2 = randomDouble();
        double im2 = randomDouble();
        double rand = abs(randomDouble());

        Complex compTest(re, im); //Declare custom and standard complex numbers from the random numbers
        Complex compTest2(re2, im2);
        std::complex<double> stdCompTest(re, im);
        std::complex<double> stdCompTest2(re2, im2);

        cout << compTest << "\t| " << compTest2 << "\t| " << stdCompTest << "\t| " << stdCompTest2 << endl;

        //Test the constructor
        if(compTest != stdCompTest) cerr << "Comptest not equal to stdComp Test" << compTest << " " << stdCompTest << endl;

        //Test the conjugate function
        conj(compTest)!=conj(stdCompTest)? error("conjugate", compTest, stdCompTest) : void();

        //Test the normal function
        double normDif = norm(compTest) - std::norm(stdCompTest);
        normDif>=1e-8 && normDif<=-1e-8 ? error("Normal function", compTest, stdCompTest) : void();

        //Test the arg function
        double argDif = arg(compTest) - std::arg(stdCompTest);
        argDif>=1e-8 && argDif<=-1e-8 ? error("arg", compTest, stdCompTest) : void();

        //Test the polar function
        polar(re, im) != std::polar(re, im) ? error("polar", re, im) : void();

        //Test the += functions
        (compTest += compTest2) != (stdCompTest += stdCompTest2) ? error("+=", compTest, stdCompTest) : void();

        //Test the -= functions
        (compTest -= compTest2) != (stdCompTest -= stdCompTest2) ? error("-=", compTest, stdCompTest) : void();

        //Test the *= functions
        (compTest *= compTest2) != (stdCompTest *= stdCompTest2) ? error("*=", compTest, stdCompTest) : void();

        //Test the /= functions
        (compTest /= compTest2) != (stdCompTest /= stdCompTest2) ? error("/=", compTest, stdCompTest) : void();

        //Test the simple trig functions
        sin(compTest) != sin(stdCompTest) ? error("sin", compTest, stdCompTest) : void();
        (cos(compTest) != cos(stdCompTest)) ? error("cos", compTest, stdCompTest) : void();
        (tan(compTest) != tan(stdCompTest)) ? error("tan", compTest, stdCompTest) : void();

        //Test the hyperbolic trig functions
        if(sinh(compTest) != sinh(stdCompTest)) error("sinh", compTest, stdCompTest);
        if(cosh(compTest) != cosh(stdCompTest)) error("cosh", compTest, stdCompTest);
        if(tanh(compTest) != tanh(stdCompTest)) error("tanh", compTest, stdCompTest);

        //Test the inverse trig functions
        if(asin(compTest) != asin(stdCompTest)) error("asin", compTest, stdCompTest);
        if(acos(compTest) != acos(stdCompTest)) error("acos", compTest, stdCompTest);
        if(atan(compTest) != atan(stdCompTest)) error("atan", compTest, stdCompTest);

        //Test the power functions
        if(pow(rand, compTest) != pow(rand, stdCompTest)) error("pow(double, Complex)", rand, stdCompTest);
        if(pow(compTest, int(rand)) != pow(stdCompTest, int(rand))) error("pow(Complex, int)", compTest, (int)rand);
        if(pow(compTest, rand) != pow(stdCompTest, rand)) error("pow(Complex, double)", compTest, rand);
        if(pow(compTest, compTest2) != pow(stdCompTest, stdCompTest2)) {
            if(real(pow(compTest, compTest2)) - real(pow(stdCompTest, stdCompTest2))>=-1e-4)
                if(imag(pow(compTest, compTest2)) - imag(pow(stdCompTest, stdCompTest2))<=-1e-4)
                    error("pow(Complex, Complex)", compTest, compTest2);
        }
        if(sqrt(compTest) != sqrt(stdCompTest)) error("sqrt", compTest, stdCompTest);

        //Test the logarithmic functions
        if(log(compTest) != log(stdCompTest)) error("log", compTest, stdCompTest);
        if(log10(compTest) != log10(stdCompTest)) error("log", compTest, stdCompTest);
    }
    
    return 0;
}

void error(string functionName, double comp, std::complex<double> stdComp) {
    cerr << "Error: " << functionName << " not working. " << comp << " " << stdComp;
}

void error(string functionName, Complex comp, std::complex<double> stdComp) {
    cerr << "Error: " << functionName << " not working. " << comp << " " << stdComp;
}

void error(string functionName, Complex comp, double stdComp) {
    cerr << "Error: " << functionName << " not working. " << comp << " " << stdComp;
}

void error(string functionName, double comp, double stdComp) {
    cerr << "Error: " << functionName << " not working. " << comp << " " << stdComp;
}

void error(string functionName, Complex comp, Complex stdComp) {
    cerr << "Error: " << functionName << " not working. " << comp << " " << stdComp;
}

double randomDouble() {
    return (rand()%100+rand()/10000.0)*(rand()%2 == 0 ? -1 : 1);
}
