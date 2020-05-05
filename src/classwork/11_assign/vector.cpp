#include "vector.h"
#include <iostream>
template<typename T>

Vector<T>::Vector()
	: size{0}, nums{nullptr}, space{0}
{
}
template<typename T>
Vector<T>::Vector(size_t sz)
	: size{ sz }, nums{ new T[sz] }, space{ sz } // how much memory to allocate
{
	for (size_t i = 0; i < sz; ++i)
	{
		nums[i] = 0;// initialize values to 0
	}
}
template<typename T>
Vector<T>::Vector(const Vector<T>& v)
	: size{v.size}, nums{new T[v.size]}
{
	for (size_t i = 0; i < size; ++i) {

		nums[i] = v[i];
	}
}
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
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
	
	T* temp = new T[v.size];

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
template<typename T>
Vector<T>::Vector(Vector<T>&& v)
	: size{v.size}, nums{v.nums}
{
	v.size = 0;
	v.nums = nullptr;

}
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
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
template<typename T>
void Vector<T>::Resize(size_t new_size)
{
	Reserve(new_size);

	for (size_t i = size; i < new_size; ++i)
	{
		nums[i] = 0;

	}
}
template<typename T>
void Vector<T>::Push_Back(T value)
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
template<typename T>
void Vector<T>::Reserve(size_t new_allocation)
{
	if (new_allocation <= space)
	{
		return;
	}
	T* temp = new T[new_allocation];

	for (size_t i = 0; i < size; ++i)
	{
		temp[i] = nums[i];
	}
	delete[] nums;
	nums = temp;

	space = new_allocation;
}
template<typename T>

Vector<T>::~Vector()
{
	std::cout << "release memory";
	delete[] nums;
}
template class Vector<int>;
template class Vector<double>;



void use_vector()
{
	Vector<int> v(3);
}

Vector<int> get_vector()
{
	Vector<int> v(3);
	return v;
}
