/*
1. Create and design your own program using the C++ language. The
program prompts the user to input two numbers. If the first number entered is
greater than the second number, the program should display the message “The
first number is greater,” else it will display “The first number is smaller.”
*/

#include <iostream>
using namespace std;

int main(){
  float firstNumber;
  float secondNumber;

  cout << "Input the first number: ";
  cin >> firstNumber;
  cout << "Input the second number: ";
  cin >> secondNumber;

  if(firstNumber == secondNumber){
    cout << "Both numbers are equal in value";
  } else if( firstNumber > secondNumber){
    cout << "The first number is greater";
  } else {
    cout << "The first number is smaller";
  }

return 0;
}