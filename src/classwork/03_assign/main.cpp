#include "loops.h"
#include<iostream>

using std::cout; using std::cin;

//write using statements for cin and cout


/*
Use a do while loop to prompt the user for
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main()
{
	int num, choice;

	do
	{
		cout << "Enter number: ";
		cin >> num;

		int sum = factorial(num);
		cout << "Number is: " << sum << "\n";
		cout << "Enter 1 to continue...";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
