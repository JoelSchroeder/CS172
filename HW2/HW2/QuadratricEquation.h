#ifndef QUADRATICEQUATION_H_
#define QUADRATICEQUATION_H_

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

		double getDescriminant()
		{

		}





};

#endif
