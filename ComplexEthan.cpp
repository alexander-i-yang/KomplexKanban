#include <cmath>
#include "complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex asech(const Complex com){
   Complex ret = acosh(pow(com,-1));
   return ret;
}

Complex rnd(int place){
   double var = re;
   double value = (int)(var * pow(10,place) + .5*pow(10, place)); 
   var = (double)value / 100; 
   Complex com(re, im);
   return com;
}
