#ifndef VECTOR_H_
#define VECTOR_H_

template<typename T>
class Vector
{
private:
	T* list;//this will point to the main array
	int curentSize;//number of itme currently in the array
	int maxSize;//max size of the array to check the current size against to determine if the array needs to be doubled.
	void doubleArray();//doubles the array
public:
	Vector<T>();//defualt constructor
	Vector<T>(int size);//constructor with specified size
	Vector<T>(int size, T defualtValue);//constructor with specified size and defualt value
	void push_back(T element);//appends the element in this vector
	void pop_back();//removes the last elemnt form this vector
	const int size();//returns the size of this vector
	const T at(int index);//returns the element at this location
	void empty();//returns true if the vector is empty
	void clear();//removes all elements from this vector
	void swap(Vector v2);//swaps the contents of this array with the specified array
};
#endif












