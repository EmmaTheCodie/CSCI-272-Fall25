/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<double> prices = {1,2,3,4,5};
   //calling the back of the vector
   
   prices.push_back(10);
   prices.push_back(50);
   prices.push_back(11);
   
   double total = prices[0] +prices[1] + prices[2];
   
   cout << "Total = $" <<total << endl;
   
   //Calling the front of the vector
   prices.insert(prices.begin(),20);
   
   cout << "First item: " << prices.front() << endl;
     cout << "last item: " << prices.back() << endl;
     cout << "total size of my vector (prices): " << prices.size() << endl;
   
   cout < "Total = $" <total2 <<endl;
    return 0;
}