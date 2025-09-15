
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool caseinsensitivecompare(const string& str1, const string& str2){ //string& refrences the variable
    if(str1.length() != str2.length()){
        return false;
    }
    for(size_t i = 0; i < str1.length(); i++){
        if(tolower(str1[i]) != tolower(str2[i])){
            return false;
        }
        
    }
    return true;
}

int main(){
    string str1 = "Hello";
    string str2 = "hallo";
    
    if(caseinsensitivecompare(str1,str2)){
        cout << "Strings are case-insensitive equal" << endl;
    } else {
        cout << "Strings are NOT case-insensitive equal" << endl;
    }
}
