#include "checking_account.h"
#include "savings_account.h"	//include this now
#include <iostream>
#include <vector>
#include <functional>
#include <memory>
#include "atm.h"

using std::cout; 
using std::vector;
using std::unique_ptr; using std::make_unique;
//using std::reference_wrapper;
int main()
{
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(100);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);

	vector <unique_ptr<BankAccount>> acts;
	acts.push_back(std::move(s));
	acts.push_back(std::move(c));	//polymorphism
	
	Customer cust(acts);
	ATM atm(cust);

	cout << atm;
									
									
									/*
	BankAccount* a = new BankAccount();	// pointer creates dynamic memory
	a->get_balance();

	delete a;	// need to delete when using pointer
	



	// declare uniqueptr		create the instance w make unique
	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(100);
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);

	vector <unique_ptr<BankAccount>> acts;
	acts.push_back(std::move(s));
	acts.push_back(std::move(c));	//polymorphism
	for (auto &account : acts)
	{
		cout << account -> get_balance() << "\n";
	}
	*/
	
	/*
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