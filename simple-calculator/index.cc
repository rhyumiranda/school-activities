#include <iostream>
#include <cmath>

using namespace std;
int main() {
    
    for(int i= 0; i <5; i++){

    //Declaration of variables
        float firstNumber, secondNumber;
        char operationSymbol;
    
        cout << "\n------------------------------------------------";
        cout << "\nHere are the available operators you can as of the moment: ";
        cout << "\nMultiplication: *";
        cout << "\nDivision: /";
        cout << "\nAddition: +";
        cout << "\nSubtraction: -";
        cout << "\nExit";
        cout << "\n------------------------------------------------";
        
        //Get values for the variables
        cout << "\nEnter value for the first number: ";
        cin >> firstNumber;
        cout << "\nEnter value for the second number: ";
        cin >> secondNumber;
        
        //Determine the operation user is gonna use
        cout << "\nWhat operation are you gonna use? (Enter the symbol): ";
        cin >> operationSymbol;
        
        //Conditional statement for addition
        if (operationSymbol == '+'){
            int addNumber = firstNumber + secondNumber;
            cout << "If you add " << firstNumber << " and " << secondNumber << " the result is: ";
            cout << addNumber;

        }
        
        if (operationSymbol == '-'){ // -- for substraction
            int subtractNumber = firstNumber - secondNumber;
            cout << "If you subtract " << firstNumber << " and " << secondNumber << " the result is: ";
            cout << subtractNumber;
            
        } else if (operationSymbol == '/'){ // -- for division
            double divideNumber = firstNumber / secondNumber;
            cout << "If you divide " << firstNumber << " and " << secondNumber << " the result is: ";
            cout << divideNumber;

        }
        else if (operationSymbol == '*'){ // -- for multiplication
            double multiplyNumber = firstNumber * secondNumber;
            cout << "If you multiply " << firstNumber << " and " << secondNumber << " the result is: ";
            cout << multiplyNumber;
        }
    }
    return 0; //exit
}