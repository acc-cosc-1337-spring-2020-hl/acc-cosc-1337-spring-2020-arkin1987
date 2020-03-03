//bank_account.h
#include <string>

class BankAccount
{
public:
	BankAccount()= default;	// default constructor
	BankAccount(int b) : balance{ b } {}; // BankAccount is a Constructor
	int get_balance()const {return balance; }  // const protects balance
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);

private:
	int balance{ 0 }; // assign and create variable, direct initialization
	const int min_balance_to_open{ 25 };
};


class InvalidAmount
{
public:
	InvalidAmount(std::string msg) : message{ msg }{}
	std::string get_message()const { return message; }
private:
	std::string message;


};