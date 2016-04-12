#include "Rectangle2D.h"

//defualt constructor
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

//constructs a rectangle with specified data;
Rectangle2D::Rectangle2D(double nx, double ny, double nWidth, double nHeight)
{
	x = nx;
	y = ny;
	width = nWidth;
	height = nHeight;
}

//gets x
double Rectangle2D::getX() const
{
	return x;
}

//sets x
void Rectangle2D::setx(double nx)
{
	x = nx;
}

//gets y
double Rectangle2D::getY() const
{
	return y;
}

//sets y
void Rectangle2D::setY(double ny)
{
	y = ny;
}

//gets width
double Rectangle2D::getWidth() const
{
	return width;
}

//sets width
void Rectangle2D::setWidth(double nWidth)
{
	width = nWidth;
}

//gets height
double Rectangle2D::getHeight() const
{
	return height;
}

//sets height
void Rectangle2D::setHeight(double nHeight)
{
	height = nHeight;
}

//calculates and returns the area
double Rectangle2D::getArea() const
{
	return (width*height);
}

//calculates and returns the perimiter
double Rectangle2D::getPerimiter() const
{
	return ((width*2)+(height*2));
}

//checks if the rectangle contains the given coordinates.
bool Rectangle2D::contains(double X, double Y) const
{
	if (((Y >= (y - (height / 2))) || (Y <= (y + (height / 2)))) && ((X >= (x - (width / 2))) || (X <= (x + (width / 2)))))//this algorithm checks if the given coordinates are inside the rectangle.
	{
		return true;//true if coords are inside rectangle
	}
	else
	{
		return false;//false if not
	}

}

//checks if the rectangle contains the given rectangle.
bool Rectangle2D::contains(const Rectangle2D  &r) const
{
	double minY = (r.getY() - (r.getHeight() / 2));//finds bottom edge 
	double maxY = (r.getY() + (r.getHeight() / 2));//finds top edge
	double minX = (r.getX() - (r.getWidth() / 2));//finds left edge
	double maxX = (r.getX() + (r.getWidth() / 2));//finds right edge

	if (((minY >= (y - (height / 2))) && (maxY <= (y + (height / 2)))) && ((minX >= (x - (width / 2))) && (maxX <= (x + (width / 2)))))//this algorithm checks if the max and min coordinates of the other rancatngle are inside this rectangle.
	{
		return true;//true if the rectangle is inside rectangle
	}
	else
	{
		return false;//false if not
	}
}

//checks of the rectangle overlaps with the given rectangle
bool Rectangle2D::overlaps(const Rectangle2D & r) const
{
	double minY = (r.getY() - (r.getHeight() / 2));//finds bottom edge 
	double maxY = (r.getY() + (r.getHeight() / 2));//finds top edge
	double minX = (r.getX() - (r.getWidth() / 2));//finds left edge
	double maxX = (r.getX() + (r.getWidth() / 2));//finds right edge

	if (((minY >= (y + (height / 2))) || (maxY <= (y - (height / 2)))) || ((minX >= (x + (width / 2))) || (maxX <= (x - (width / 2)))))//this algorithm checks if any of the sides overlap
	{
		return true;//true if rectangles overlap
	}
	else
	{
		return false;//false if not
	}
}
