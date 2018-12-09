# KomplexKanban
Pistachio Inc.'s Komplex Kanban project. Any trespassers will be lectured.

## General
* [Instructions](https://drive.google.com/file/d/1sA8t9rRrhyOVqQLLbrDBrKtl25JmB2wi/view)
* [Trello board](https://trello.com/b/tM7aIQXO/complasa-arithmetic-library)
* [Sketchy math website](http://www.euclideanspace.com/maths/algebra/realNormedAlgebra/complex/functions/index.htm)

## G++ Instructions
How to link the static library using g++ commands:

1. cd into the directory with all the files.
2. Create the .o files in the directory.

   ```C:\Users\Alex\CLionProjects\KomplexKanban>g++ -c Complex.cpp ComplexAlex.cpp```
   
   Verify that the .o files have been created:

   ```C:\Users\Alex\CLionProjects\KomplexKanban>dir```
   
   should get you something like:
   
   ```Volume in drive C is OS
   Volume Serial Number is 88BD-306B
   
   Directory of C:\Users\Alex\CLionProjects\KomplexKanban
   
   12/08/2018  09:50 PM    <DIR>          .
   12/08/2018  09:50 PM    <DIR>          ..
   12/08/2018  10:19 PM    <DIR>          .idea
   12/07/2018  11:37 AM             1,365 161114_ComplexRunner.cpp
   12/07/2018  12:16 PM    <DIR>          cmake-build-debug
   12/07/2018  11:33 AM               183 CMakeLists.txt
   12/07/2018  11:38 AM             2,687 Complex.cpp
   12/07/2018  12:16 PM            12,919 Complex.h
   12/08/2018  09:49 PM            11,935 Complex.o
   12/07/2018  11:26 AM             5,287 ComplexAlex.cpp
   12/08/2018  09:49 PM             8,527 ComplexAlex.o
          7 File(s)        171,507 bytes
          4 Dir(s)  111,653,756,928 bytes free
   ```
   Don't worry if the weird ".idea", "cmake-build-debug", and "CmakeLists.txt" things don't show up.
3. Link both the files into a library.
   
   ```C:\Users\Alex\CLionProjects\KomplexKanban>ar rsv ComplexLib.a Complex.o ComplexAlex.o```
   
   This should output something like:
   
   ```
   C:\Users\Alex\CLionProjects\KomplexKanban>ar rsv ComplexLib.a Complex.o ComplexAlex.o
   a - Complex.o
   a - ComplexAlex.o
   ```
4. Compile the main runner program. (The "161114_ComplexRunner.cpp" one.)
   
   ```C:\Users\Alex\CLionProjects\KomplexKanban>g++ 161114_ComplexRunner.cpp ComplexLib.a```
   
   This won't output anything. If it does, it will be angry errors. This means you are doing it wrong.
5. Run the program.
   
   ```C:\Users\Alex\CLionProjects\KomplexKanban>a```
   
   If it gives you something like
   
   ```
   'a' is not recognized as an internal or external command,
   operable program or batch file.
   ```
   
   That means the file "a" doesn't exist. Find a file of type ".exe" or ".out" in the same folder and enter its name.
   
   When your run the program, it should give you something like
   
   ```
   Hello World
   Enter b:
   ```
   
   Type in a complex number with the format "a+bi" where a and b are doubles. If you type in 3+2i, you should get something *exactly* like this:
   
   ```
   a = (5, 6)
   b = (3, 3)
   a + b = (8, 9)
   a * b = (-3, 33)
   a / b = (1.83333, 0.166667)
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
   ```
   
   If you don't, quietly weep until Mr. Shockey sees you. Then, beg him to give you a hundred.
