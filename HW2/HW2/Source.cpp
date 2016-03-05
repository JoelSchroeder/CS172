#include <iostream>
#include "fan.h"
#include "QuadraticEquation.h"
#include "EvenNumber.h"
using namespace std;


void EX201();//9.2
void EX202();//9.6
void EX203();//9.11

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

	cout << fan1.getSpeed() << endl << fan1.getOn() << endl << fan1.getRadius() << endl << fan2.getSpeed() << endl << fan2.getOn() << endl << fan2.getRadius() << endl;//outputs all of both fans' properties.
}



void EX202()
{
	double a, b, c;								//Derek - this is good Joel, only thing is that we needed a overload constructor as well the setters will work, and is effective, but also needed the																constructor - 3
	QuadraticEquation quad;
	cout << "enter a, b, and c\n";
	cin >> a >> b >> c;//gets values for a, b, and c
	quad.setA(a);//sets a
	quad.setB(b);//sets b
	quad.setC(c);//sets c
	if ((quad.getRoot1() == 0)&(quad.getRoot2() == 0))//checks if both functions return zero, indicating that the descriminant was negative
	{
		cout << "The equation has no real roots\n";
	}
	else if ((quad.getRoot2() == 0))//checks if only the second function returns zero, indicating that the descriminant was 0; outputs the first root only.
	{
		cout << quad.getRoot1();
	}
	else//if neither function returns zero then the descriminant is positive and both roots are displayed.
	{
		cout << quad.getRoot1() << endl << quad.getRoot2()<<endl;
	}



}



void EX203()
{
	EvenNumber a(16);//creates an EvenNumber with value 16
	EvenNumber b = a.GetNext();//creates an EvenNumber and sets to next even number after a
	EvenNumber c = a.GetPrevious();//creates an EvenNumber and sets it to the previous even number before a
	cout << a.GetValue()<<endl << b.GetValue() << endl << c.GetValue() << endl;//outpus the values for all three EvenNumbers
}