#include "bank_account.h"
//bank_account.cpp
#include <iostream>

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		// usually writen to a file
		throw InvalidAmount("\nAmount must be greater than 0\n");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0\n");
	}
	else if (balance - amount < 0)
	
	{
		throw InvalidAmount("\nNegative balance\n");
	}
	else 
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (balance > 0)
	{
		throw InvalidAmount("account already open");
	}
	if (amount >= min_balance_to_open)
	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("Not enough $$ to open account");
	}
}
double BankAccount::rate = init_rate();

void display_balance(const BankAccount & b)
{
	std::cout << "\nBalance is: " << b.balance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b)
{
	out << "\nBalance is : " << b.balance << "\n";


	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	// TODO: insert return statement here
	int amount;
	std::cout << "Enter deposit: ";
	in >> amount;
	b.deposit(amount);
	return in;
}
