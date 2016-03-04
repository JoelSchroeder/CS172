/*
Author: Joel Schroeder
Class: CS172 - 2
I affirm that all code given below was written solely by me, Joel Schroeder, and that any help I received adhered to the rules stated for this exam.
*/
#include "venue.h"
#include "Event.h"
#include <iostream>

using namespace std;

//a defualt constructor that sets numEvents to 0;
Venue::Venue()
{
	numEvents = 0;
}

//checks to see if the proposed time is already taken and returns true if it is valid, and false if it is not or if the venue is full.
bool Venue::validTime(int time)
{
	if (numEvents >= 12)//checks if the venue is full
	{
		return false;//returns false if the venue is full
	}
	else
	{
		for (int i = 0;i <= numEvents;i++)//loops acording to the number of events, so as to check each one
		{
			if (scheduledEvents[i].getTime() == time)//checks if the current event has a time that conflicts with the proposed time.
			{
				return false;//returns false if there is a conflict
			}
			
		}
		return true;//returns true if the time is valid
	}
}

//attempts to add an event by setting the title and time of the next event in the array, if the time is valid.
void Venue::addEvent(int time, std::string name)
{
	bool valid = validTime(time);
	switch (valid)//if the time is valid, an event will be added; if the time is not valid an error will be printed and no event will be added
	{
	case true://creates an event by chenging the name and time of the next free event to those specified.
		scheduledEvents[numEvents].setTime(time);
		scheduledEvents[numEvents].setTitle(name);
		numEvents++;//incremnts the number of evnts each time new event is created
		cout << "Event scheduled!\n";
		break;
	case false:
		cout << "Couldn't schedule event :(\n";//prints an error if the event cannot be scheduled
		break;
	}
}


//searches for an event by time and returns the event if it exists
Event Venue::findEvent(int time)
{
	for (int i = 0;i < numEvents;i++)//searches to see if there is an event with the specified time
	{
		if (scheduledEvents[i].getTime() == time)//checks if the time matches
		{
			return scheduledEvents[i];
		}
	}
	Event defualt;
	return defualt;//returns the defualt event if the requested one does not exist
}

//searches for an event by name and returns the event if it exists
Event Venue::findEvent(std::string name)
{
	for (int i = 0;i < numEvents;i++)//searches to see if there is an event with the specified name
	{
		if (scheduledEvents[i].getTitle() == name)//chacks if the name matches
		{
			return scheduledEvents[i];
		}
	}
	Event defualt;
	return defualt;//returns the defualt event if the requested one does not exist
}
