//atm.h
#include <vector>
#include<iostream>
#include "savings_account.h"
#include "checking_account.h"
#include "customer.h"
#include <memory>

#ifndef ATM_H
#define ATM_H


class ATM
{
public: 
	ATM(Customer & c): customer {std::move(c)}
	{
		
	}
	friend std::ostream& operator << (std::ostream& out, const ATM& b);
private:
	Customer customer;

};






#endif // !ATM_H
