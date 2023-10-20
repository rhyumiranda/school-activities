/*
1. Each android p h o n e s manufacturer contains respective
code/s for easy identification. Below is the tabulated Codes with its
respective manufacturer.

Code Brand
1 = Vivo
2 = Oppo
3 = Samsung
4 = Huawei

Your task isto write a C++ program that acceptsthe code number as an
input and based on the value entered displays the correct mobile phone
company.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  
  for(int i = 0; i < 5; i ++){
    int identificationCode;
    cout << "Here are the list of Identification Code, kindly provide one" << endl;
    cout << "1. Vivo\n2. Oppo\n3. Samsung\n4. Huawei" << endl;
    cout << "Enter the code: ";
    cin >> identificationCode;

    switch(identificationCode){

      case 1:
        cout << "Vivo" << endl;
        cout << "-------------------" << endl;
        break;
      case 2:
        cout << "Oppo" << endl;
        cout << "-------------------" << endl;
        break;
      case 3:
        cout << "Samsung" << endl;
        cout << "-------------------" << endl;
        break;
      case 4:
        cout << "Huawei" << endl;
        cout << "-------------------" << endl;
        break;
      }
  }
  return 0;
}