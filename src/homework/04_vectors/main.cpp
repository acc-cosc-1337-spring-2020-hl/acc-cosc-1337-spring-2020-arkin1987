#include <iostream>
#include "vectors.h"


using std::cout;
using std::cin;
using std::vector;



/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int user_option;
	do {


		vector <int> given_vector{ 8, 4, 20, 88, 66, 99 }; //directions are a little different from blackboard. I tried to follow directions in main.cpp
		cout << "Here is a vector of integers\n{8, 4, 20, 88, 66, 99}\n";
		cout << "Input 1 to get the max value in this vector \nInput 2 to pick your own number and see the prime numbers it contains\n"
			"Input 3 to end the program\n";
		
		cin >> user_option;




		if (user_option == 1) {
			cout << "The max value of the vector is: " << get_max_from_vector(given_vector)<<"\n";
		}
		else if (user_option == 2) {
			cout << "Input an integer: \n";
			int user_number;
			cin >> user_number;
			cout << "Prime numbers in your integer: ";
			vector_of_primes(user_number);
		}
		else {
			cout << "You have chosen to end the program";
			break;
		}


	} while (user_option == 1 || user_option == 2);


	return 0;
}