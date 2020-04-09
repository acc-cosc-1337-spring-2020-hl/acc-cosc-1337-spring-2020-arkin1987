//customer.cpp
#include "customer.h"
/*
void Customer::add_account(BankAccount& act)
{
	accounts.push_back(act); //then call udate winner
}

void Customer::display_accounts() const
{
	for (auto account : accounts)
	{
		std::cout << account. 
	}
}
*/
std::ostream& operator << (std::ostream& out, const Customer& c)
{
	for (auto& bank_account : c.accounts)
	{
		out << *bank_account<< "\n"; // stuff for manager shit, * returns the value not the address
	}

	return out;
}