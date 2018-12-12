/*********************************************
   *Provides function definitions for asech and rnd
   *Created on December 10th 2018
   *Author, Ethan Baldonado
*********************************************/

#include <cmath>
#include "complex.h"

//uses pow function to take the inverse of acosh
Complex asech(const Complex com){
   Complex ret = acosh(pow(com,-1));
   return ret;
}

/*Moves the decimal over @param place times, 
then makes @variable a int to get rid of the decimals
turns back into double to move decimals back into place
*/
Complex Complex::rnd(int place){
   //real part
   double var = re;
   double value = (int)(var * pow(10,place));
   //imaginary part
   var = (double)value / 100;    double varIm = im;
   double valueIm = (int)(varIm * pow(10, place));
   varIm = (double)valueIm / 100;    Complex com(var, varIm);
   return com;
}
