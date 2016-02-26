#ifndef EVENNUMBER_H_
#define EVENNUMBER_H_

class EvenNumber
{
	private:
		int value;

	public:
		EvenNumber()//constructor sets value to 0
		{
			value = 0;
		}

		EvenNumber(int n)//sets value to the specified number
		{
			value = n;
		}

		int GetValue()//returns the int value
		{
			return value;
		}

		EvenNumber GetNext()//returns an EvenNumber with the value incremented by 2
		{
			return EvenNumber(value + 2);
		}

		EvenNumber GetPrevious()//returns an EvenNumber with the value decremented by 2
		{
			return EvenNumber(value - 2);
		}
};

#endif
