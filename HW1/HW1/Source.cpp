#include <iostream>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

void ex02();
void ex03();
void ex04();
int doubleInt(int);//takes an integer and returns the double

int main() 
{
	//ex02();
	//ex03();
	ex04();
}

void ex02()
{
	//////////////////////_a
	bool hasPassedTest = true;

	//////////////////////_b
	int x = (rand() % 100);
	int y = (rand() % 100);

	if (x > y)//testing which is greater of x and y
	{
		cout << "x is greater than y\n";
	}
	else if (y>x)
	{
		cout << "y is greater than x\n";
	}
	else
	{
		cout << "x and y are the same\n";
	}


	/////////////////////_c
	int numberOfShares = 0;
	cin >> numberOfShares;
	if (numberOfShares >= 100)//testing if numberOfShares is less than 100
	{
		cout << "numberOfShares is greater than 100\n";
	}
	else
	{
		cout<< "numberOfShares is less than 100\n";
	}

	//////////////////////_d
	int boxWidth = 0;
	int bookWidth = 0;
	cout << "please enter a box width and a book width\n";
	cin >> boxWidth >> bookWidth;//gets values
	if ((boxWidth%bookWidth) == 0)//tests if boxWidth is divisible evenly by bookWidth
	{
		cout << "box width is evenly divisible by book width\n";
	}
	else
	{
		cout << "box width is not divisible by book width\n";
	}

///////////////////////_e
	int boxLife = 0;
	int temp = 0;
	cout << "please enter the shelf life of the box of chocolates and the outside temperature:\n";
	cin >> boxLife >> temp;//gets values
	if (temp > 90)//tests if temp is greater than 90 and decreases shelf life by 4 if true.
	{
		boxLife -= 4;
		cout << "Shalf life is " << boxLife << endl;
	}
	else
	{
		cout << "Shalf life is " << boxLife << endl;
	}

}

void ex03()
{
	////////////////_a
	int area = 0;
	cout << "please enter the area of a square:\n";
	cin >> area;//gets value for area of square
	double side = sqrt(area);//calulates the length of one side of the square
	double hypot = (sqrt((side*side)+(side*side)));//uses the pythagorean theorum to find hypotenous
	cout << hypot<<endl;


	////////////////_b
	char response = 0;
	cout << "enter y or n:\n";
	cin >> response;
	switch (response)//analyzes the input and provides the apropriate output.
	{
	case 121:
		cout << "yes\n";
		break;
	case 110:
		cout << "no\n";
		break;
	default:
		cout << "invalid\n";
	}

	/////////////////_c
	char tab = 9;//9 is the ascii code for the tab character

	/////////////////_d
	string mailingAddress;
	cout << "enter your mailing address\n";
	getline(cin, mailingAddress);//puts the whole line into mailingAdress

	//////////////////_e
	string thisString = "";//declares thisString to empty variable
}

void ex04()
{
	/////////////////_a
	int num = 0;
	do {
		cout << "enter a number between 1 and 10:\n";
		cin >> num;//gets the number
	} while (num < 1 | num>10);//asks again if the number is not between 1 and 10

	//////////////////_b
	int sum = 0;
	for (int i = 0;i <= num;i++)
	{
		sum += ((i*i)*i);//cubes the number
		cout << sum<<endl;
	}

	/////////////////_c
	int count = 1;
	do {
		cout << "*";
		count++;
	} while (count < num);

	////////////////_d
	for (int i = 0;i <= 40;i+2)
	{
		cout << i;
	}

	/////////////////_e




}

int doubleInt(int num)
{
	num += num;
	return num;
}


