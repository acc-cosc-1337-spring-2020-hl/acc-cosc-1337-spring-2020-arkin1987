#include "vector.h"
#include <iostream>

Vector::Vector(size_t sz)
	: size {sz}, nums{new int [sz]} // how much memory to allocate
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;// initialize values to 0
	}
}

Vector::Vector(const Vector& v)
	: size{v.size}, nums{new int[v.size]}
{
	for (size_t i = 0; i < size; ++i) {

		nums[i] = v[i];
	}
}

Vector& Vector::operator=(const Vector& v)
{
	if (this == &v) // prevent self copy
	{
		return *this;
	}

	if (v.size <= space) // enough space; no need to create new memory
	{
		for (size_t i = 0; i < v.size; i++)
		{
			nums[i] = v.nums[i];
		}
		size = v.size;
		
		return *this;
	}
	
	int* temp = new int[v.size];

	for (size_t i = 0; i < v.size; ++i) 
	{
		temp[i] = v[i];
	}
	delete[] nums;

	nums = temp;
	size = v.size;

	return *this;
}
/*
Use move source pointer
point move source pointer to nothing
*/
Vector::Vector(Vector&& v)
	: size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;

}

Vector& Vector::operator=(Vector&& v)
{
	delete [] nums;
	nums = v.nums;
	size = v.size;
	v.nums = nullptr; 
	v.size = 0;

	return *this;
}

/*

*/
void Vector::Resize(size_t new_size)
{
	Reserve(new_size);

	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;

	}
}

void Vector::Push_Back(int value)
{
	if (space == 0)
	{
		Reserve(RESERVE_DEFAULT_SIZE);
	}
	else if (size == space)
	{
		Reserve(space * RESERVE_SIZE_MULTIPLIER);
	}
	nums[size] = value;
	++size;
}

/*
Compare space to new allocation
if allocation < size return???
create temp dynamic memory of new allocation size
copy all current elements to temporary array
delete current nums
set nums to new temporary dynamic array
set size to new allocation
*/
void Vector::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	int* temp = new int[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}
	delete[] nums;
	nums = temp;

	space = new_allocation;
}

Vector::~Vector()
{
	std::cout << "release memory";
	delete[] nums;
}

void use_vector()
{
	Vector v(3);
}

Vector get_vector()
{
	Vector v = Vector(3);
	return v;
}
