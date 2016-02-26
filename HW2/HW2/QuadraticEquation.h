#ifndef QUADRATICEQUATION_H_
#define QUADRATICEQUATION_H_
#include <cmath>

class QuadraticEquation
{
	private:
		double a;
		double b;
		double c;

	public:
		QuadraticEquation()
		{
			a = 0;
			b = 0;
			c = 0;
		}

		void setA(double na)//takes a double and sets the value of a
		{
			a = na;
		}

		void setB(double nb)//takes a double and sets the value of b
		{
			b = nb;
		}

		void setC(double nc)//takes a double and sets the value of c
		{
			c = nc;
		}

		double getA()//returns the double a
		{
			return a;
		}

		double getB()//returns the double b
		{
			return b;
		}

		double getC()//returns the double c
		{
			return c;
		}

		double getDescriminant()//returns the descriminant of the quadratic equation; computes b^2-4ac
		{
			return ((b*b) - (4 * (a*c)));
		}

		double getRoot1()//returns the first solution of the quadratic equation if the descriminant is greater than 0
		{
			if (getDescriminant() >= 0)
			{
				return (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			}
			else
			{
				return 0;
			}
		}

		double getRoot2()//returns the second solution of the quadratic equation if the descriminant is greater than 0
		{
			if (getDescriminant() > 0)
			{
				return (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			}
			else
			{
				return 0;
			}
		}





};

#endif
