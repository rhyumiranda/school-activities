#include <iostream>
using namespace std;

int main() {
  double speed;

  cout << "Enter letter of your choice: ";
  cin >> speed;

  if(speed == 300.0){
    cout << "A speed of 300 Kilometer per hour";
  } else{
    cout << "The speed is not 300 Kilometer per hour";
  }

  return 0;
}