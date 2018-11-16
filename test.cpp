#include <stdio.h>
#include <iostream>
#include "test1.h"
#include "arithmetic.h"

using namespace std;

int main() {
    Complex comp(1.1, 2.2);
    Complex comp1(3, 4);
    Complex comp2(1.1, 0);
    Complex comp3(0, 1.1);
    Complex *comp4 = new Complex(1.1);
    cout << comp << " " << abs(comp1);
    return 0;
}