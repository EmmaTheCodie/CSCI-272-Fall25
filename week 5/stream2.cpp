#include <iostream>
#include <string>
#include <sstream> //string stream
using namespace std;

class person {
public:
	string name;
	int age;


};

int main() {
//	string inputString = "Alice 30";

//	istringstream input(inputString);

//	person person1;

//	input >> person1.name >> person1.age;

//	cout << "Name: " << person1.name << endl;
//	cout << "Age: " << person1.age << endl;

//	return 0;
///}


const int SIZE = 80;
char buffer[SIZE];

cout << "Enter a sentence: \n";
cin.read(buffer, 20);

cout << "\nThe sentence entered: \n";
cout.write(buffer,cin.gcount());
cout << endl;
cout << "Input # of char: " << cin.gcount()<<endl;
return 0;}



