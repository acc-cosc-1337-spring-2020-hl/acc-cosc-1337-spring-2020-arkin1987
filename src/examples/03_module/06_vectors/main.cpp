#include "vec.h"
#include<iostream>
using std::cout;
int main() 
{
	vector<int> nums{ 9, 10, 99, 5, 67};

	loop_vector_w_index(nums);
	cout << "\n";
	loop_vector_w_index_ref(nums);
	

	vector <int> num1;
	num1.push_back(9);

	vector <int> num2(5, 10);
	cout << "\n";
	cout << num2.at(2)<< "\n" ;
	cout << num2.size() << "\n";
	cout << num2.max_size() << "\n";
	


	return 0;

}