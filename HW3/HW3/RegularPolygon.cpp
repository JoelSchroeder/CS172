#include "RegularPolygon.h"
#include <ctgmath>
RegularPolygon::RegularPolygon()//defualt constructor sets 3 and 1 and 0 and 0
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int nn, double nside)// takes an input for n and side coordinates are 0 0 
{
	n = nn;
	side = nside;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int nn, double nside, double nx, double ny)//takes an input for all values
{
	n = nn;
	side = nside;
	x = nx;
	y = ny;
}

int RegularPolygon::getN() const//returns n
{
	return n;
}

double RegularPolygon::getSide() const//returns side
{
	return side;
}

double RegularPolygon::getX() const//returns x
{
	return x;
}

double RegularPolygon::getY() const//returns y
{
	return y;
}

void RegularPolygon::setN(int nn)//sets n to nn
{
	n=nn;
}

void RegularPolygon::setSide(double nside)//sets side to nside
{
	side = nside;
}

void RegularPolygon::setX(double nx)//sets x to nx
{
	x=nx;
}

void RegularPolygon::setY(double ny)//sets y to ny
{
	y =ny;
}

double RegularPolygon::getPerimeter() const//returns the perimiter of the RegularPolygon
{
	return (n*side);//calculates the parimiter
}

double RegularPolygon::getArea() const//returns the area
{
	return ((n*(side*side))/(4*tan(3.14/n)));//calulates the area of the RegularPolygon
}

