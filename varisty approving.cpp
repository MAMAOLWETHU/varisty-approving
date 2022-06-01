// varisty approving.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>


int main() {
	int marks, salary;
	char Grade;

	cout << " Enter your marks in percntage";
	cout << " Enter the amount of salary you earned during school hoilday" << endl;
	cin >> marks >> salary;

	if (marks >= 90) {
		Grade; 'A';
	}
	else if (marks >= 75 && 89) {
		Grade; 'B';
	}
	else if (marks >= 60 &&  75 ) {
		Grade; 'C';
	}
	else if (marks < 60) {
		Grade; 'D';
	}

	switch (Grade) {
	case 'A':
		cout << " You can go to university of your choice and will get a car" << endl;
		break;


	case 'B':
		if (salary > 5000)
			cout << " You can go to university of your choice and will get a car" << endl;
		break;

	case 'C':
		cout << " You can go to nearest university" << endl;
		break;

	case 'D':
		cout << " You cant go to unviversty" << endl;
		break;

	default:
		cout << " Enter your marks between 0 and 100";

		return 0;


	}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
