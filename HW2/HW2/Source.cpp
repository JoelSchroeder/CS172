#include <iostream>
#include "fan.h"
using namespace std;


void EX201();
void EX202();
void EX203();

int main()
{
	EX201();
	EX202();
	EX203();
}

void EX201()
{
	fan fan1;//creates a fan called fan1

	fan1.changeSpeed(3);//sets speed to 3
	fan1.changeOn(true);//turns fan on
	fan1.changeRadius(10);//sets radius to 10

	fan fan2;//creates a fan called fan2
	fan2.changeSpeed(2);//sets sepped to 2
	fan2.changeOn(false);//turns it off
	fan2.changeRadius(5);//sets the radius to 5

	cout << fan1.getSpeed() << endl << fan1.getOn() << endl << fan1.getRadius() << endl << fan2.getSpeed() << endl << fan2.getOn() << endl << fan2.getRadius() << endl;//outputs all of both fans properties.
}

void EX202()
{

}
