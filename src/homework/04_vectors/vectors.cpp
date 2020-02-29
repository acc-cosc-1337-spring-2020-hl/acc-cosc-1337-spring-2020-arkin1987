#include "vectors.h"
#include <iostream>
using std::vector;
/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/



int get_max_from_vector(const vector<int>& nums)
{
	int max = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] > max) {
			max = nums[i];
		}
	}
	return max;
}

/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
bool is_prime(int num)
{
	bool status = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			status = false;
			break;
		}
	}
	return status;
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
vector<int> vector_of_primes(int value)  
{
	vector <int> prime_holder;
	for (int i = 2; i <= value; i++) {
		if (is_prime(i)) {
			prime_holder.push_back(i); // use pushback here

		}

	}

	return prime_holder;
}
/*
I have written a function called get_primes_from_vector
with a const referece vector of ints parameter that returns
a vector containing all the prime numbers in the given vector.
Wrote this because I misread the problem, but it works so I'm just going to leave it.
*/
vector<int> get_primes_from_vector(const vector<int>& nums)
{
	vector <int> prime_holder;
	int prime_int_test = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (is_prime(nums[i]))  {
			prime_int_test = nums[i];
			prime_holder.push_back(prime_int_test);
		}
	}

	return prime_holder;
}







