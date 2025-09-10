/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

template <typename T>
T maxNum(T a, T b) {
    return (a>b) ? a : b;
    
}


int main()
{
   int intMax = maxNum(5, 10);
   double doubleMax = maxNum(2.5, 11.6);
   
   cout << "Integer Max " << intMax << endl;
   cout << "Double Max " << doubleMax << endl;

    return 0;
}