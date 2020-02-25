//bank_account.h
class BankAccount
{
public:
	BankAccount(int b) : balance{ b } {}; // BankAccount is a Constructor
	int get_balance()const {return balance; }  // const protects balance
	void deposit(int amount);
	void withdraw(int amount);
private:
	int balance;  // assign and create variable, direct initialization
};