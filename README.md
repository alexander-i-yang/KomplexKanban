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

   ```C:\KomplexKanban>g++ -c Complex.cpp ComplexAlex.cpp ComplexSamuel.cpp ComplexYash.cpp ComplexMax.cpp```

4. Link both the files into a library.

   ```C:\KomplexKanban>ar rsv ComplexLib.a Complex.o ComplexAlex.o ComplexSamuel.o ComplexYash.o ComplexMax.o```

5. Compile the main runner program. (The "161114_ComplexRunner.cpp" one.)

   ```C:\KomplexKanban>g++ -o run 161114_ComplexRunner.cpp ComplexLib.a```

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
   a = (5, 6)
   b = (1, 1)
   a + b = (6, 7)
   a * b = (-1, 11)
   a / b = (5.5, 0.5)
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
   The acosh is: (2.74935, 0.88008)
   The asec is: (1.48913, 0.09853)
   The acot is: (0.0825743, -0.0980105)
   The acsc is: (0.0816617, -0.09853)
   The acoth is: (0.0825751, -0.0980127)
   The atanh is: (0.0813556, 1.4721)
   The complex number rotated by pi/6 radians is: (1.33013, 7.69615)
   
   Process finished with exit code 0
   ```

   If you don't, quietly weep until Mr. Shockey sees you. Then, beg him to give you a hundred.
