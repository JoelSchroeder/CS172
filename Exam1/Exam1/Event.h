/*
Author: Joel Schroeder
Class: CS172 - 2
I affirm that all code given below was written solely by me, Joel Schroeder, and that any help I received adhered to the rules stated for this exam.
*/
#ifndef EVENT_H_
#define EVENT_H_
#include <iostream>


//this is a class called event which will be used by the venue class to keep track of schedualed events.
class Event
{
	private:
		int time;//the time of the event
		std::string title;//the events name
	public:
		Event();//creates a defualt Event with the title "free" amd the time -1.
		Event(int time, std::string name);//creates an event with the specified name and time.
		int getTime()const;// returns the time
		std::string getTitle()const;//returns the title
		void setTime(int t);//sets the time equal to the number given in a parameter
		void setTitle(std::string name);//sets the title equal to a string given in the paramater
};




#endif