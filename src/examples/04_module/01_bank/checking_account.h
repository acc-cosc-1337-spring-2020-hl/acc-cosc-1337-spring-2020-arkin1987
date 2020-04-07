//checking_account.h
#include "bank_account.h"
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount	//inheritance
{
public:
	CheckingAccount() = default;
	explicit CheckingAccount(int b) :BankAccount(b) {};	// balance is private in BankAccount class, this send balance to BankAccount constructor to intialize balance
	int get_balance() { return balance * (1 + get_rate()); }  // override bank account get balance

};

#endif //!BANK_ACCOUNT_H
