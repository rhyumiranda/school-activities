/*
If the slope is less than 1.00 set the variable flag to zero, else set it to 1
*/

#include <iostream>
using namespace std;

int main() {
double slope; 	
int flag; 	
cout << "Enter slope: ";
	cin >> slope;

	if (slope < 1.00) {
    	flag = 0;
	} else {
    	flag = 1;
	}

  cout << slope << endl;

	cout << "The value of flag is " << flag << endl;

	return 0;
}
