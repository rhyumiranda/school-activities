#include <iostream>
using namespace std;

int main() {
  char letter;

  cout << "Enter letter of your choice: ";
  cin >> letter;

  if(letter == 'A'){
    cout << "The character input is A";
  } else{
    cout << "The character input is not A";
  }


  return 0;
}