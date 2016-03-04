/*
Author: Joel Schroeder
Class: CS172 - 2
I affirm that all code given below was written solely by me, Joel Schroeder, and that any help I received adhered to the rules stated for this exam.
*/
#ifndef VENUE_H_
#define VENUE_H_
#include "Event.h"
#include <iostream>

class Venue 
{
	private:
		Event scheduledEvents[12];//an array of events to hold all of the scheduled events
		int numEvents;//counts the number of events
		bool validTime(int time);//checks to see if the proposed time is already taken
	public:
		Venue();//a defualt constructor that sets numEvents to 0;
		void addEvent(int time, std::string name);//adds an event if possible
		Event findEvent(int time);//finds an event by time and returns the name
		Event findEvent(std::string name);//finds an event by name and returns the time

};

#endif
