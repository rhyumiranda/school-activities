#include <iostream>
using namespace std;

int main() {
  double codeLength;
  double transmission;

  cout << "Enter code length: ";
  cin >> codeLength;
  cout << "Enter transmission: ";
  cin >> transmission;

  if (codeLength < 300 && transmission < .05){
    cout << "Requirements are met";
  } else {
    cout << "Requirements are not met";
  }

  return 0;
}