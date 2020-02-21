//write include statements
#include <iostream>
#include "dna.h"
//write using statements
using std::cout;
using std::cin;
using std::string;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice;
	do {
		cout << "Enter 1 to Get GC Content \nEnter 2 to Get DNA Complement \n";
		int option;
		cin >> option;
		menu(option);
		cout << "Enter DNA \n";

		string dna;
		cin >> dna;

		if (option == 1)
			cout << "The GC Content for the DNA is " << get_gc_content(dna)<< "\n";
		else if (option == 2)
			cout << "The DNA Complement is " <<get_dna_complement(dna)<< "\n";
		else
			cout << "error";

		cout << "Continue? \n";
		
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	return 0;
}