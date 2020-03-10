//checking_account.h
#include "bank_account.h"
class CheckingAccount : public BankAccount	//inheritance
{
public:
	CheckingAccount() = default;
	CheckingAccount(int b) :BankAccount(b) {}	// balance is private in BankAccount class, this send balance to BankAccount constructor to intialize balance
	//int get_balance() { return balance * (1 + get_rate()); }  // override bank account get balance

};