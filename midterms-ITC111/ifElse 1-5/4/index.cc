/*
If the frequency is above 60, display the message the “The
frequency is too high.”
*/

#include <iostream>
using namespace std;

int main() {
	int frequency;

	cout << "Enter Frequency: ";
	cin >> frequency;

	if (frequency > 60) {
    	cout << "The frequency is too high" << endl;
	} else {
    	cout << "The frequency is too low" << endl;
	}

	return 0;
}
