
#include <iostream>
using namespace std;

int main()
{
    string firstname = "John";
    string lastname = "Doe";
    
 
    
    cout << "First name: " << endl;
    //cin >> firstname; //stores user input in firstname
    
    cout << "Last name: " << endl;
    //cin >> lastname; //stores user input in lastname
    
       string fullname = firstname + " " + lastname; // ??
        cout << "Full name: " << fullname << endl;
        
    fullname +=" Jr."; // jr will be added at the end. fullname + " Jr."
    cout << "Full name with suffix: " << fullname << endl;
    
    fullname.insert(0,"Dr. ");
        cout << "Full name with Prefix: " << fullname << endl;
    return 0;
}