//
#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector {

public:
	Vector(size_t sz);
	Vector(const Vector& v); // copy constructor RULE OF 3
	Vector& operator =(const Vector& v);//copy assignment RULE OF 3
	Vector(Vector&& v); //move contructor RULE of 5
	Vector& operator = (Vector&& v); // move assignment - RULE of 5
	size_t Size()const { return size; }
	//void set_size(size_t s) { size = s; }
	int& operator[](int i) { return nums[i]; } //assign
	int& operator[](int i) const{ return nums[i]; } // retrive
	size_t Capacity() const { return space; }
	void Resize(size_t new_size);
	void Push_Back(int value);
	void Reserve(size_t new_allocation);
	~Vector(); //destructor RULE OF 3
	
private:
	/*
	size tracks space ready to use
	*/
	size_t size;
	/*
	tracks reserved space
	*/
	size_t space{0};

	/*
	Initial reseve default size
	*/
	const int RESERVE_DEFAULT_SIZE{ 8 };
	/*
	size multiplier
	*/
	const int RESERVE_SIZE_MULTIPLIER{ 2 };
	int* nums;
};
void use_vector();
Vector get_vector();

#endif  //!MY_VECTOR_H
