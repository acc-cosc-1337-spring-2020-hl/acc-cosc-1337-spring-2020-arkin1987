#include "checking_account.h"
#include "savings_account.h"	//include this now
#include <iostream>
#include <vector>
#include <functional>

using std::cout; 
using std::vector;
using std::reference_wrapper;
int main()
{
	SavingsAccount s(100);
	CheckingAccount c(100);

	vector <reference_wrapper <BankAccount>> acts{ s,c };	//polymorphism
	for (auto account_ref : acts)
	{
		cout << account_ref.get().get_balance() << "\n";
	}

	/*
	CheckingAccount c;
	CheckingAccount a(50), b(10);
	display_balance(a); 
	cout << a;	//Overloading << operator
	std::cin >> a; // overloading >> operator
	display_balance(a);
	vector<BankAccount> accounts{ BankAccount(100),
	BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}


	BankAccount account(500);
	int balance = account.get_balance();
	cout << "\nbalance: " << balance;

	try 
	{
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout << e.get_message();
	}
	*/
	return 0;
}