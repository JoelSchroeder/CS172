#ifndef VECTOR_H_
#define VECTOR_H_

template<typename T>
class Vector
{
private:
	T* list;//this will point to the main array
	int currentSize;//number of itme currently in the array
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

//doubles tha array
template<typename T>
void Vector<T>::doubleArray()
{
	T* newList = new T[maxSize * 2];//creates the new array
	for (int i = 0;i < currentSize;i++)//populates the array 
	{
		newList[i] = list[i];//copies each element from the old array
	}
	list = newList;//replaces the old array with the new one
	maxSize *= 2;
}

//defualt constructor
template<class T>
Vector<T>::Vector() : currentSize(0), maxSize(2)
{
	list = new T[2];//creates array
}

//constructor with specified size
template<typename T>
Vector<T>::Vector(int size) : currentSize(size), maxSize(size)
{

	list = new T[size];//creates array
	for (int i = 0;i < size;i++)//populates the array with 0s
	{
		list[i] = 0;
	}
}

//constructor with specified size and defualt value
template<typename T>
Vector<T>::Vector(int size, T defualtValue) : curentSize(size), maxSize(size)
{
	list = new T[size];//creates array
	for (int i = 0;i < size;i++)//populates the array with specified types
	{
		list[i] = defualtValue;
	}
}

//appends the element in this vector
template<typename T>
void Vector<T>::push_back(T element)
{
	if (currentSize >= maxSize)
		doubleArray();
	currentSize++;
	list[currentSize] = element;
}

//removes the last element from this vector
template<typename T>
void Vector<T>::pop_back()
{
	currentSize--;
}

//returns the size of this vector
template<typename T>
const int Vector<T>::size()
{
	return currentSize;
}

//returns the element at this location
template<typename T>
const T Vector<T>::at(int index)
{
	return list[index];
}

//returns true if the vector is empty
template<typename T>
void Vector<T>::empty()
{
	if (currentSize == 0)
		return true;
	else
		return false;
}

//removes all elements from this vector
template<typename T>
void Vector<T>::clear()
{
	currentSize = 0;
}

//swaps the contents of this array with the specified array
template<typename T>
void Vector<T>::swap(Vector v2)
{
	int tempSize = 0;//stores the size of the larger Vector
					 //finds the size of the larger vector
	if (v2.size() > currentSize)
		tempSize = v2.size();
	else
		tempSize = currentSize;

	while (currentSize < tempSize)//makes this array larger if it is to small
	{
		doubleArray();
	}

	T* tempArray= new T[v2.size()];//this will hold the contents of v2 after v2 is cleared
	int v2Size = v2.size();//this will hold the size of v2 after it is cleared
						   //this loop will populate tempArray with the elements v2
	for (int i = 0;i < tempSize;i++)
	{
		tempArray[i] = v2.at(i);//copies each element from v2 into tempArray
	}

	v2.clear();//clears v2 so elements from this array can be pushed in

			   //this loop will repopulate both vectors
	for (int i = 0;i < tempSize;i++)
	{
		v2.push_back(list[i]);//puts the element at i in this vector at i in v2
		list[i] = tempArray[i];//puts the element that was at i in v2 at i in this vector
	}
	currentSize = v2Size;//sets the size of this array
}













