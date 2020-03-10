//bank_account.h
#include <string>
//#ifndef BANK_ACCOUNT_H	// header guards
//#define BANK_ACCOUNT_H
#include <iostream>

class BankAccount
{
public:
	BankAccount()= default;	// default constructor
	explicit BankAccount(int b) : balance{ b } {}; // BankAccount is a Constructor
	int get_balance()const {return balance; }  // const protects balance
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() { return rate; }
	friend void display_balance(const BankAccount& b);	// pass bank account reference read only
	friend std::ostream& operator << (std::ostream& out, const BankAccount& b);
	friend std::istream& operator >>(std::istream& in, BankAccount& b);

protected:
	int balance{ 0 };	 // assign and create variable, direct initialization
private:
	
	const int min_balance_to_open{ 25 };
	static double rate;
	static double init_rate() { return .025; }
};


class InvalidAmount
{
public:
	InvalidAmount(std::string msg) : message{ msg }{}
	std::string get_message()const { return message; }
private:
	std::string message;


};
//double BankAccount::rate = init_rate();

//#endif // !BANK_ACCOUNT_H