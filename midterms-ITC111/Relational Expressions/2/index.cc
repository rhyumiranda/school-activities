#include <iostream>
using namespace std;

int main() {
  double temperature;

  cout << "Enter letter of your choice: ";
  cin >> temperature;

  if(temperature == 37.5){
    cout << "The temperature is 37.5";
  } else{
    cout << "The temperature is not 37.5";
  }

  return 0;
}