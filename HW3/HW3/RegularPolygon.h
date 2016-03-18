#ifndef REGULARPOLYGON_H_
#define REGULARPOLYGON_H_

class RegularPolygon
{
	private:
		int n;//number of sides
		double side;//length of side
		double x;//x coordinate of center
		double y;//y coordinate of center
	public:
		RegularPolygon();//defualt constructor sets 3 and 1 and 0 and 0
		RegularPolygon(int, double);// takes an input for n and side coordinates are 0 0 
		RegularPolygon(int, double, double, double);//takes an input for all values
		double getPerimeter() const;//returns the perimeter
		double getArea() const;//returns the area
		int getN() const;//returns n
		double getSide() const;//returns side
		double getX() const;//returns x
		double getY() const;//returnss y
		void setN(int);//sets n
		void setSide(double);//sets side
		void setX(double);//sets x
		void setY(double);//sets y
};


#endif 

