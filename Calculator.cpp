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
	
	// If the operator ID is 1, then do a sum
	if (operation = 1) {
		system("cls");
		cout << "Enter a number: ";
		cin >> numberone;
		system("cls");
		cout << numberone << " +" << endl << endl;
		cout << "Enter a number: ";
		cin >> numbertwo;
		system("cls");
		answer = numberone + numbertwo;
		cout << numberone << " + " << numbertwo << " = " << answer << endl << endl;
		numbertwo = 0;
		while (numbertwo += 1) {
			cout << "Enter a number (enter 0 to finish): ";
			cin >> numbertwo;
			numberone = answer;
			answer = numberone + numbertwo;
			system("cls");
			cout << numberone << " + " << numbertwo << " = " << answer << endl << endl;
		}
	}
	return 0;
}