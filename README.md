*Note: if you have already created ComplexLib.a successfully, you will need to compile differently. Use ComplexLibrary.a instead of ComplexLib.a and don't compile Complex.cpp, as it doesn't exist.*

# KomplexKanban
Pistachio Inc.'s Komplex Kanban project. Any trespassers will be lectured.

## General
* [Instructions](https://drive.google.com/file/d/1sA8t9rRrhyOVqQLLbrDBrKtl25JmB2wi/view)
* [Trello board](https://trello.com/b/tM7aIQXO/complasa-arithmetic-library)
* [Sketchy math website](http://www.euclideanspace.com/maths/algebra/realNormedAlgebra/complex/functions/index.htm)

## G++ Instructions
How to link the static library using g++ commands:

1. cd into the directory with all the files.
2. Compile the Complex.h header file.

   ```C:\KomplexKanban>g++ Complex.h```

   This shouldn't output anything. If it does, it will be angry errors.

3. Create the .o files in the directory.

   ```C:\KomplexKanban>g++ -c ComplexAlex.cpp ComplexSamuel.cpp ComplexYash.cpp ComplexMax.cpp```

4. Link both the files into a library.

   ```C:\KomplexKanban>ar rsv ComplexLibrary.a ComplexAlex.o ComplexSamuel.o ComplexYash.o ComplexMax.o```

5. Compile the main runner program. (The "161114_ComplexRunner.cpp" one.)

   ```C:\KomplexKanban>g++ -o run 161114_ComplexRunner.cpp ComplexLibrary.a```

   This won't output anything. If it does, it will be angry errors. This means you are doing it wrong.
6. Run the program.

   ```C:\KomplexKanban>run```

   When your run the program, it should give you something like

   ```
   Hello World
   Enter b:
   ```

   Type in a complex number with the format "(a, b)" where a and b are doubles. If you type in "(3,2)", you should get something *exactly* like this:

   ```
   Hello World
   Enter b: (3,2)
   a = (5, 6)
   b = (3, 2)
   a + b = (8, 8)
   a * b = (3, 28)
   a / b = (2.07692, 0.615385)
   |a| = 7.81025
   complex conjugate of a = (5, -6)
   norm of a = 61
   abs of a = 7.81025
   exp(a) = (142.502, -41.4689)
   Complex number example: (3, 5)
   The conjugate is: (3, -5)
   The magnitude is: 5.83095
   The phase in Radians is: 1.03038
   The norm is: 34
   The sqrt is: (2.1013, 1.18974)
   The natural log is: (1.76318, 1.03038)
   The sin is: (10.4725, -73.4606)
   
   ------ OTHER FUNCTION TESTING ------
   
   The real part is: 5
   The imaginary part is: 6
   The log (base 10) is: (0.892665, 0.380467)
   a^b is: (74.1787, 36.3703)
   a^2.7 is: (-183.495, 180.163)
   2.7^a is: (136.038, -45.6371)
   The cube root is: (1.90006, 0.571185)
   
   (a == b) is: false
   (a != b) is: true
   
   sin(a) = (-193.43, 57.2184)
   cos(a) = (57.2191, 193.428)
   tan(a) = (-6.68523e-06, 1.00001)
   
   The acsc is: (0.0816617, -0.09853)
   The asec is: (1.48913, 0.09853)
   The acot is: (0.0825743, -0.0980105)
   
   The asinh is:(2.74787, 0.872018)
   The acosh is: (2.74935, 0.88008)
   The atanh is: (0.0813556, 1.4721)
   The acsch is: (0.0822711, -0.0981864)
   The asech is: (0.09853, -1.48913)
   The acoth is: (0.0825751, -0.0980127)
   The complex number rotated by pi/6 radians is: (1.33013, 7.69615)
   ```

   If you don't, quietly weep until Mr. Shockey sees you. Then, beg him to give you a hundred.
