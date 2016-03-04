/*
Author: Joel Schroeder
Class: CS172 - 2
I affirm that all code given below was written solely by me, Joel Schroeder, and that any help I received adhered to the rules stated for this exam.
*/
#include "Event.h"
#include <iostream>

using namespace std;

//creates a defualt Event with the title "free" amd the time -1.
Event::Event()
{
	title = "free";
	time = (-1);
}

//creates an event with the specified name and time.
Event::Event(int time, std::string name)
{

}

// returns the time
int Event::getTime() const
{
	return time;
}

//returns the title
std::string Event::getTitle() const
{
	return title;
}

//sets the time equal to the number given in a parameter
void Event::setTime(int t)
{
	time = t;
}

//sets the title equal to a string given in the paramater
void Event::setTitle(std::string name)
{
	title = name;
}
