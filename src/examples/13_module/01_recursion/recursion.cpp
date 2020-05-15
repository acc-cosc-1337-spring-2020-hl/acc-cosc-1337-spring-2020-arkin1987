#include "recursion.h"
#include<iostream>
//

void display(int n)
{
	if (n == 0) 
	{
		std::cout << "base case\n";
		return;
	}

	std::cout << "load on stack\n";
	display(n-1);
	std::cout << "unload stack\n";
}

int factorial(int n) 
{
	int f = 1;

	if (n == 0) 
	{
		std::cout << "base case \n";
		return f;
	}

	std::cout << "load stack"<<n<<"\n";
	f = n * factorial(n - 1);
	std::cout << "unload stack"<< f<<"\n";
	return f;
}