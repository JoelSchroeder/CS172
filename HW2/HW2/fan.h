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
		void changeSpeed(int nSpeed)
		{
			speed = nSpeed
		}

		void changeOn(bool nOn)
		{
			on = nOn
		}

		void changeRadius(double nRadius)
		{
			radius = nRadius
		}

};
#endif
