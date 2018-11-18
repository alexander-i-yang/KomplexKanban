#include <stdio.h>
#include <iostream>
#include "complex.h"
#include "arithmetic.h"

#define PI 3.1415926538979323846

using namespace std;

int main() {
    Complex comp(-1.1, 2.2);
    Complex comp1(3, 4);
    cout << comp << " " << abs(comp1) << " " << norm(comp1) << endl;
    cout << comp << " " << conj(comp) << " " << norm(comp) << endl;
    Complex comp2(1, 1);
    Complex comp3(-1, 1);
    Complex comp4(-1, -1);
    Complex comp5(1, -1);

    cout << comp2 << " " << arg(comp2) << endl;
    cout << comp3 << " " << arg(comp3) << endl;
    cout << comp4 << " " << arg(comp4) << endl;
    cout << comp5 << " " << arg(comp5) << endl;

    cout << polar(1, PI/2) << endl;
    cout << polar(1, PI) << endl;
    cout << polar(1, 3*PI/2) << endl;

    Complex comp6 = comp1;
    cout << comp6 << endl;
    comp6 = comp5;
    cout << comp6 << endl;

    return 0;
}