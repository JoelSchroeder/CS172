#include <iostream>
#include"Rectangle2D.h"
#include "Course.h"
using namespace std;


void EX5_01();//11.1
int * createArray(int);//will create an array of the size given as an argument, then populate it using getNumber;
int getNumber(); //prompts the user for a number and returns it
double getAverage(int*, int);//calculates and returns the average of all the numbers in the array
int countOverAvg(int*, int, double);//counts how many of the numbers int list are above the average, returns the count.

void EX5_02();//11.3
int*doubleCapacity(const int* list, int size);//takes an array as a parameter and then returns an array of double the size witht he same informatin.

void EX5_03();//11.5
int findSmallest(int*, int);//finds the smallest integer in the given array of integers.

void EX5_04();//11.9

void EX5_05();//11.13

int main()
{
	//EX5_01();//11.1
	//EX5_02();//11.3
	//EX5_03();//11.5
	//EX5_04();//11.9
	EX5_05();//11.13
}


/////////////////////////////////////////////////////////EX5_01///////////////////////////////////////////////////////////////////////
void EX5_01()//11.1
{
	int size = 0;//will store the size
	cout << "enter a size for the array: ";//calls for a size of the array
	cin >> size;//gets the size
	int* list = createArray(size);//creates and populates an array of the given size
	double average = getAverage(list, size);//gets the average of the numbers in list
	cout << "There are " << countOverAvg(list, size, average)<< " numbers over the average\n";//prints the number of numbers above average
}

//will create an array of the size given as an argument
int * createArray(int size)
{
	int* pArray = new int[size];//creates the array

	for (int i = 0;i < size;i++)//populates the array with numbers promted from the user
	{
		pArray[i] = getNumber();
	}

	return pArray;//returns a pointer to the array
}

//prompts the user for a number and returns it
int getNumber()
{
	int num;
	cout << "\nplease enter a number: ";//prompts for number
	cin >> num;//gets number
	return num;//returns number
}

//calculates and returns the average of all the numbers in the array
double getAverage(int* list, int size)
{
	int sum = 0;
	for (int i = 0;i < size;i++)//adds all of the numbers in the array and stores the sum in sum;
	{
		sum += list[i];
	}
	double average = (sum / size);//computes the average by deviding sum by size and stares the result in average;
	return average;
}

//counts how many of the numbers int list are above the average, returns the count
int countOverAvg(int* list, int size, double average)
{
	int count = 0;//stores the number of numbers above average

	for (int i = 0;i < size;i++)//adds all of the numbers in the array and stores the sum in sum;
	{
		if (list[i] > average)//checks if the number is above the average
		{
			count++;//increments count if the number is above average.
		}
	}
	return count;
}



/////////////////////////////////////////////////////////EX5_02///////////////////////////////////////////////////////////////////////
void EX5_02()//11.3
{
	int nums[4] = { 1,2,3,4 };
	int* list = nums;
	list = doubleCapacity(list, 4);

}

//takes an array as a parameter and then returns an array of double the size witht he same informatin.
int* doubleCapacity(const int* list, int size)
{
	int* newList = new int[(size*2)];//creates the new array

	for (int i = 0;i < size;i++)//populates the array 
	{
		newList[i] = list[i];
	}

	return newList;//returns a pointer to the array
}



/////////////////////////////////////////////////////////EX5_03///////////////////////////////////////////////////////////////////////
void EX5_03()//11.5
{
	int nums[8] = { 1,2,4,5,10,100,2,-22 };//creates the test array
	int* list = nums;//makes a pointer to the test array
	cout << "the smallest number is " << findSmallest(list, 8) << endl;

}

//finds the smallest integer in the given array of integers.
int findSmallest(int* list, int size)
{
	int small = list[0];//sets the small variable equal to the first number in the array

	for (int i = 0;i < size;i++)//goes through the array and checks to see if each number is smaller than the small variable, if it is then that number is the new small.
	{
		if (list[i]<small)//checks if the current number is less than small
		{
			small = list[i];//sets small equal to the current number if it is smaller
		}
	}
	return small;//returns the smallest number
}



/////////////////////////////////////////////////////////EX5_04///////////////////////////////////////////////////////////////////////
void EX5_04()//11.9
{
	Rectangle2D r1(2,2,5.5,4.9);
	Rectangle2D r2(4,5,10.5,3.2);
	Rectangle2D r3(3,5,2.3,5.4);
	cout << "r1's perimiter is: "<<r1.getPerimiter()<<endl;
	cout << "r1 contains 3,3 is: " << r1.contains(3, 3) << endl;
	cout << "r1 contains r2 is: " << r1.contains(r2) << endl;
	cout << "r1 overlaps r3 is: " << r1.contains(r3) << endl;
}


/////////////////////////////////////////////////////////EX5_05///////////////////////////////////////////////////////////////////////
void EX5_05()//11.13
{
	Course myCourse("MyCourse", 2);
	myCourse.addStudent("Joe");
	myCourse.addStudent("Alex");
	myCourse.addStudent("Tina");
	myCourse.dropStudent("Alex");
	string* students = myCourse.getStudents();
	for (int i = 0;i < (myCourse.getNumberOfStudents());i++)
	{
		cout << students[i]<<endl;
	}
}