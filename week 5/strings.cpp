#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string input;
    int number;
    
    cout << "Enter an integer between 0 and 100: ";
    cin >> input;
    
    istringstream iss(input); // created a stream from a string (input)
    
    if (iss >> number){ //checks if we have a number in iss
        if(number >= 0 & number <= 100) // checks if its greater or equal to 0, and less than or equal to 100
            cout << "YAYYY " << number << endl; 
        else
            cout << number << "C'mon bro. It's out of range\n";
            
    } else {
            cout <<"It's not an integer\n";
        
    }

    return 0;
}