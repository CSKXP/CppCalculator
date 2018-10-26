/*
Created by CSKXP
Repository: https://github.com/CSKXP/CppCalculator
*/

#include <iostream>

using namespace std;

int main () {
	
	int operation = 0; // Declare a variable to store the operation ID.
	
	// Loops the Introduction until a valid operation ID is entered.
	while (operation == 0 | operation >= 5) {
		
		cout << "CppCalculator" << endl;
		cout << "github.com/CSKXP/CppCalculator" << endl << endl;
	
		cout << "Select the operation:" << endl;
		cout << "1. Sum" << endl;
		cout << "2. Substract" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Divide" << endl;
	
		// Program asks for user input
		cout << endl << "Operation ID: ";
		cin >> operation;
	}
	
	// Declare variables to store the numbers.
	
	double numberone;
	double numbertwo;
	double answer;
	string operationsymbol;
	
	// Store in operationsymbol the symbol of the operation v:
	if(operation==1) {
		operationsymbol = " + ";
	} else if (operation == 2){
		operationsymbol = " - ";
	} else if (operation == 3){
		operationsymbol = " × ";
	} else if (operation == 4) {
		operationsymbol = " ÷ ";
	}
	
	// Ask for numbers
	 system("cls");
	cout << "Enter a number: ";
	cin >> numberone;
	system("cls");	
	cout << numberone << operationsymbol << endl << endl;
	cout << "Enter a number: ";
	cin >> numbertwo;
	system("cls");
		
	// Do the operation

	 if(operation==1) {
		answer = numberone + numbertwo;
	} else if (operation == 2){
		answer = numberone - numbertwo;
	} else if (operation == 3){
		answer = numberone * numbertwo;
	} else if (operation == 4) {
		answer = numberone / numbertwo;
	}
	
	// Show the answer
	cout << numberone << operationsymbol << numbertwo << " = " << answer << endl << endl;
	numbertwo = 0;
	while (numbertwo += 1) {
		cout << "Enter a number (enter 0 to finish): ";
		cin >> numbertwo;
		numberone = answer;
		if(operation==1) {
			answer = numberone + numbertwo;
		} else if (operation == 2){
			answer = numberone - numbertwo;
		} else if (operation == 3){
			answer = numberone * numbertwo;
		} else if (operation == 4) {
			answer = numberone / numbertwo;
		}
		system("cls");
		cout << numberone << operationsymbol << numbertwo << " = " << answer << endl << endl;
	}
	return 0;
}