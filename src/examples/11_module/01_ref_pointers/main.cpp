#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int& r_ref = r;
	int* p_ptr = &p;

	cout << "Address of r: " << &r << "\n";
	cout << "Address of r_ref:" << &r_ref << "\n";
	cout << "Address r_ref points to:" << &r_ref << "value ref:" << r_ref << "\n";

	cout << "Address of p: " << &p << "\n";
	cout << "Address of p_ptr:" << &p_ptr << "\n";
	cout << "Address p_ptr points to:" << p_ptr << "value pointed to:" << *p_ptr << "\n";
	
	return 0;
}