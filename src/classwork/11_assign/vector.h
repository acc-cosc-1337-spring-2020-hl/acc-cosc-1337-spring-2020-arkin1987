//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector {

public:
	Vector(size_t sz);
	Vector(const Vector& v); // copy constructor
	size_t Size()const { return size; }
	//void set_size(size_t s) { size = s; }
	int& operator[](int i) { return nums[i]; } //assign
	int& operator[](int i) const{ return nums[i]; } // retrive
	~Vector(); //destructor
	
private:
	size_t size;
	int* nums;
};
void use_vector();

#endif  //!MY_VECTOR_H
