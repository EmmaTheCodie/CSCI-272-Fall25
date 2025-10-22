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
	string inputString = "Alice 30";

	istringstream input(inputString);

	person person1;

	input >> person1.name >> person1.age;

	cout << "Name: " << person1.name << endl;
	cout << "Age: " << person1.age << endl;

	return 0;
}