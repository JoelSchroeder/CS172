#ifndef FAN_H_
#define FAN_H_

class fan
{
	private:
		int speed;
		bool on;
		double radius;

	public:
		fan()
		{
			speed = 1;
			on = false;
			radius = 5;
		}

		void changeSpeed(int nSpeed)//takes an int and changes speed to new int
		{
			speed = nSpeed;
		}

		int getSpeed()//returns the speed int
		{
			return speed;
		}

		void changeOn(bool nOn)//takes a bool and changes the on variable
		{
			on = nOn;
		}

		bool getOn()//returns the on bool
		{
			return on;
		}

		void changeRadius(double nRadius)//takes a double and changes the radius to the new double
		{
			radius = nRadius;
		}

		double getRadius()//returns the radious double
		{
			return radius;
		}

};
#endif
