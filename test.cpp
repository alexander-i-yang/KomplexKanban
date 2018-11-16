#include <stdio.h>
#include <iostream>
#include "test1.h"

using namespace std;

int main() {
    Complex comp(1.1, 2.2);
    Complex comp1(1.1, 2.2);
    Complex comp2(1.1, 0);
    Complex comp3(0, 1.1);
    Complex *comp4 = new Complex(1.1);
    cout << comp;
    return 0;
}