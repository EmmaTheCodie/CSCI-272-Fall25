#include <iostream>
using namespace std;


double average (int scores[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += scores[i];
        
    }
    return (double) sum/size; 
}



int main() {
    int userInput;
    cout << "Enter the size of an array: " << endl;
    cin >> uerInput;
    
  int scores [userInput] = {90,85,70,95,100}; //array of 5 elements 

cout << "Average = " << average(scores, 5) << endl;

return 0;
}