#include <stdio.h>
#include <iostream>
#include "complex.h"
#include "arithmetic.h"

using namespace std;

int main() {
    Complex comp(-1.1, 2.2);
    Complex comp1(3, 4);
    cout << comp << " " << abs(comp1) << endl;
    cout << comp << " " << conj(comp) << endl;
    Complex comp2(1, 1);
    Complex comp3(-1, 1);
    Complex comp4(-1, -1);
    Complex comp5(1, -1);

    cout << comp2 << " " << arg(comp2) << endl;
    cout << comp3 << " " << arg(comp3) << endl;
    cout << comp4 << " " << arg(comp4) << endl;
    cout << comp5 << " " << arg(comp5) << endl;

    return 0;
}