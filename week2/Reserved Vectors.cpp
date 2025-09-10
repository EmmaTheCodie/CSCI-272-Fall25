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
   vector <int> numbers;
   
   numbers.reserve(2);
// prints out random numbers from allocated memory
    cout<< "First el = " << numbers.front() << endl;
    cout<< "Last el = " << numbers.back() << endl;
    
    cout << "\n";
    
    cout<< "Reserved: " <<endl << "Size = " << numbers.size() << ", Capacity = " << numbers.capacity() <<  endl;

cout << "\n";

numbers.push_back(10);
    cout<< "After adding 10: " <<endl << "Size = " << numbers.size() << ", Capacity = " << numbers.capacity() << endl;

    cout<< "First el = " << numbers.front() << endl;
    cout<< "Last el = " << numbers.back() << endl;

    cout << "\n";

    numbers.push_back(20);
    cout<< "After adding 20: " <<endl << "Size = " << numbers.size() << ", Capacity = " << numbers.capacity() << endl;

    cout<< "First el = " << numbers.front() << endl;
    cout<< "Last el = " << numbers.back() << endl;
    
    cout << "\n";
    // capacity is 4 due to reverse being 2, so 2 is added to 2 equaling 4.
    numbers.push_back(40);
    cout<< "After adding 40: " <<endl << "Size = " << numbers.size() << ", Capacity = " << numbers.capacity() << endl;

    cout<< "First el = " << numbers.front() << endl;
    cout<< "Last el = " << numbers.back() << endl;
    
       cout << "\n";
    
    numbers.shrink_to_fit();
    //shrinks vector to 3 to free up memory 
    cout << "After shrinking to fit" << "\nCapacity = " << numbers.capacity() << endl;
    
    return 0;
}



//adding elements to the middle can lower performancy, same with adding to the front.