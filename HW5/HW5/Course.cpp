#include "Course.h"
#include <iostream>

Course::Course(const string & courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;
}

//a copy constructor that performs a deep copy
Course::Course(const Course & course)
{
	numberOfStudents = course.numberOfStudents;
	this->courseName = course.courseName;
	this->capacity = course.capacity;
	students = course.students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string & name)
{
	if (numberOfStudents >= capacity)//checks if the course is full
	{
		string* newStudents = new string[capacity+1];//creates the new array
		for (int i = 0;i < capacity;i++)//populates the array 
		{
			newStudents[i] = students[i];
		}	
		students = newStudents;//replaces the old array with the new one
		capacity++;
	}
	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string & name)
{
	
	for (int i = 0;i <= (numberOfStudents-1);i++)//searches each entry
	{
		if(name==students[i])//finds the location with the specified name
		{
			for (int j = i;j < (numberOfStudents-1);j++)//shifts each name in the list down one in order to fill the gap created by the droped student
			{
				students[j] = students[j + 1];//shifts each name down by one
			}
			students[numberOfStudents-1] = "empty";//marks the last shifted spot as empty
			numberOfStudents--;//decrements the number of students
		}
	}
}

string * Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

//removes all students form the course
void Course::clear()
{
	for (int i = 0;i <= numberOfStudents;i++)//goes through each entry
	{
		students[i] = "empty";//marks each spot as empty
	}
	numberOfStudents = 0;//sets the number of students to zero
}


