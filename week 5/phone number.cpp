#include <sstream>
#include <iostream>
#include <string>
using namespace std;

// Function declaration
bool IsValPhoneNum(const string& input);

int main() {
    string input;

    do {
        cout << "Enter a U.S Phone number (e.g. (800)222-4455): ";
        getline(cin, input);

        if (!IsValPhoneNum(input)) {
            cout << "Invalid, try again.\n";
        }

    } while (!IsValPhoneNum(input));

    cout << "Valid\n";
    return 0;
}

// Function definition
bool IsValPhoneNum(const string& input) {
    istringstream iss(input);
    char openParen, closeParen, dash;
    int areaCode, firstPart, secondPart;

    if (iss >> openParen >> areaCode >> closeParen >> firstPart >> dash >> secondPart) {
        if (openParen == '(' && closeParen == ')' && dash == '-' &&
            areaCode >= 100 && areaCode <= 999 &&
            firstPart >= 100 && firstPart <= 999 &&
            secondPart >= 1000 && secondPart <= 9999) {
            return true;
        }
    }
    return false;
}


















