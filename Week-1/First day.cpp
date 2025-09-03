/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
double num1, num2;
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;
// Performing operations
double sum = num1 + num2;
double quotient = num1 / num2;
// Displaying the result
cout << "Sum: " << sum << std::endl;
cout << "Quotient: " << quotient << std::endl;
return 0;
}
