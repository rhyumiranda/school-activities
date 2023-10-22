/*
2. Rewrite the following if-else chain using a switch statement.

If (facet == 1)
coercion = 25.0
Else if (facet == 2)
coercion = 40.0
Else if (facet == 3)
coercion = 55.0
Else if (facet == 4) || (facet == 5) || (facet == 6)
coercion = 67.0
*/

#include <iostream>
using namespace std;

int main() {
  int facet;
  float coercion;

  cout << "Enter a numerical value: ";
  cin >> facet;

  switch(facet){
    
    case 1:
    coercion += 25.0;
    cout << "The new value of coercion is: " << coercion;
    break;

    case 2:
    coercion += 40.0;
    cout << "The new value of coercion is: " << coercion;
    break;

    case 3:
    coercion += 55.0;
    cout << "The new value of coercion is: " << coercion;
    break;

    case 4:
    coercion += 67.0;
    cout << "The new value of coercion is: " << coercion;
    break;

    case 5:
    coercion += 67.0;
    cout << "The new value of coercion is: " << coercion;
    break;

    case 6:
    coercion += 67.0;
    cout << "The new value of coercion is: " << coercion;
    break;
  }
  return 0;
}