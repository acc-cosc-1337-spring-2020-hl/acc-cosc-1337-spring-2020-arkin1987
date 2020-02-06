#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.



int gross_pay(int hours, int hourly_rate)
{
	if (hours >= 40)
	{
		return hourly_rate * 1.5 * (hours - 40) + (40 * hourly_rate);
	
	}
	else
	{
		return hourly_rate * hours;

	}
	
	
	return hours * hourly_rate;
}
