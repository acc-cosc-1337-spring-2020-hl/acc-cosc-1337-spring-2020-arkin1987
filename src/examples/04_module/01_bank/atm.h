//atm.h
#include <vector>
#include<iostream>
#include "savings_account.h"
#include "checking_account.h"
#include "customer.h"

#ifndef ATM_H
#define ATM_H


class ATM
{
public: 
	ATM(Customer & c): customer {c}
	{
		
	}
	friend std::ostream& operator << (std::ostream& out, const Customer& c);
private:
	Customer customer;


};






#endif // !ATM_H
