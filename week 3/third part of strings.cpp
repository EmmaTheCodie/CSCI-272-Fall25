/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string str1 = "capple";
    string str2 = "abanana";
    if (str1 == str2){
        cout << "Both strings are equal!"<< endl;
    } else if (str1 > str2){
        cout << "str1 is lexicographically greater than str2." << endl;
        
    }else {
        cout << "str1 is lexicographically less than str2."<< endl;
    }

    return 0;
}i