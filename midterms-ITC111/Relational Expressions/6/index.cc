#include <iostream>
using namespace std;

int main() {
  double length;

  cout << "Enter code length: ";
  cin >> length;

  if (length <= 8){
    cout << "True";
  } else {
    cout << "False";
  }

  return 0;
}