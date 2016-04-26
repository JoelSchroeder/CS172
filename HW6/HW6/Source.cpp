#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Vector.h"
using namespace std;


void EX6_01();//12.2
template< typename T > 
int LinearSearch(const T list[], T key, int size);//linear search modified with templates to use any inpute type.

void EX6_02();//12.4
template<typename T>
bool IsSorted(const T list[], int size);//takes any type of array and checks if the values are in numerical order 

void EX6_03();//12.8

void EX6_04();//12.20
template<typename T>
void shuffle(vector<T>& v);//shuffles a vector

void EX6_05();//12.25



int main()
{
	EX6_01();//12.2
	EX6_02();//12.4
	EX6_03();//12.8  
	EX6_04();//12.20

}

/////////////////////////////////////////////////////// 6_01 ////////////////////////////////////////////////////////////////
void EX6_01()//12.2
{
	int ints[] = { 1,2,3,4,5,6,7,8 };
	double nums[] = { 1.2,1.3,-9.7,4.5,6,5,3.4,6.9 };
	string words[] = { "the","apple","bob","fire" };
	cout << LinearSearch(ints, 5, 8) << endl;//should return 4
	cout << LinearSearch(ints, 10, 8) << endl;//should return -1
	cout << LinearSearch(nums, 4.5, 8) << endl;//should return 3
	cout << LinearSearch(nums, 70.45, 8) << endl;//should return -1
	cout << LinearSearch(words, string("bob"), 4) << endl;//should return 2
	cout << LinearSearch(words, string("albert"), 4) << endl;//should return -1
}

template< typename T > 
int LinearSearch(const T list[], T key, int size)//linear search modified with templates to use any inpute type.
{
	for (int i = 0; i < size;i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}


/////////////////////////////////////////////////////// 6_02 ////////////////////////////////////////////////////////////////
void EX6_02()//12.4
{
	int ints[] = { 1,2,3,4,5,6,7,8 };
	int UOints[] = { 7,2,3,4,10,6,7,1 };
	double nums[] = { 1.1,1.2,1.3,2.2,2.3,2.4,3.3,4.4};
	double UOnums[] = { 1.2,1.3,-9.7,4.5,6,5,3.4,6.9 };
	string words[] = { "apple","bob","cat","dog", };
	string UOwords[] = { "the","apple","bob","fire" };
	cout << IsSorted(ints, 8) << endl;//should return true
	cout << IsSorted(UOints, 8) << endl;//should return false
	cout << IsSorted(nums, 8) << endl;//should return true
	cout << IsSorted(UOnums, 8) << endl;//should return false
	cout << IsSorted(words, 4) << endl;//should return true
	cout << IsSorted(UOwords, 4) << endl;//should return false
}

template<typename T>
bool IsSorted(const T list[], int size)//takes any type of array and checks if the values are in numerical order 
{
	for (int i = 0;i < size-1; i++)//checks each variable in the array exept the last one
	{
		if (list[i] > list[i+1])//compares each variable to the next variable to see if it is larger
			return false;//if they current variable has a higher value then the one after it, the function returns false
	}
	return true;//if the array is sorted the function returns true
}


/////////////////////////////////////////////////////// 6_03 ////////////////////////////////////////////////////////////////
void EX6_03()//12.8
{
	//the below code is to test the vector class
	Vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	Vector<int> v2;
	v2.push_back(4);
	v2.push_back(3);
	v2.push_back(2);
	v2.push_back(1);
	v1.swap(v2);
	v1.pop_back();
	cout << v1.at(0);
	cout << v2.at(0);
	cout << v1.size();
}


/////////////////////////////////////////////////////// 6_04 ////////////////////////////////////////////////////////////////
void EX6_04()//12.20
{
	vector<int> v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
	}
	shuffle(v1);
	for (int i = 0;i < 10;i++)
	{
		cout << v1.at(i) << endl;
	}

}

//shuffles a vector
template<typename T>
void shuffle(vector<T>& v)
{
	srand(time(NULL));
	int tempSize = v.size();//holds the size of v
	T* tempList = new T[tempSize];//this will hold the contents of the vector while it is shuffled

	for (int i = 0;i < tempSize;i++)//cycles through each element in v
	{
		tempList[i] = v.at(i);//copies each element of v into tempList
	}
	v.clear();//cleares v

	//this randomly push values from tempList back into v

	int* list= new int[tempSize];//this will hold the index of each item in tempList as it is pushed into v, the loop will check against the values in this array to make sure there are no repeats

	for (int i = 0;i < tempSize;i++)
	{
		int r = 0;//will hold random number
		bool isSame;//flag will be true if rand has already been used
		do {//generates a random number and then makes sure that it has not already been used
			r = rand() % tempSize;
			isSame = false;

			for (int j = 0;j <= i;j++)//checks each int in list to make sure the random number has not already been used
			{
				if (r == list[j])//checks if random number matches
					isSame = true;
			}

		} while(isSame == true);//will continue looping until a random number that has not already been used is generated
		list[i] = r;//adds new random number to list so it cannot be used agian
		v.push_back(tempList[r]);//pushes the element at random index to v
	}

}//PS: I know there is a much simpler way of doing this but I enjoyed this method more...

