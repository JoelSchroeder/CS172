#ifndef Rectangle2D_H_
#define Rectangle2D_H_

class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D();//defualt constructor
	Rectangle2D(double nx, double ny, double nWidth, double nHeight);//constructs a rectangle with specified data;
	double getX() const;//gets x
	void setx(double nx);//sets x
	double getY() const;//gets y
	void setY(double ny);//sets y
	double getWidth() const;//gets width
	void setWidth(double nWidth);//sets width
	double getHeight() const;//gets height
	void setHeight(double nHeight);//sets height
	double getArea() const;//calculates and returns the area
	double getPerimiter() const;//calculates and returns the perimiter
	bool contains(double X, double Y) const;//checks if the rectangle contains the given coordinates.
	bool contains(const Rectangle2D &r) const;//checks if the rectangle contains the given rectangle.
	bool overlaps(const Rectangle2D &r) const;//checks of the rectangle overlaps with the given rectangle
};
#endif
