#include <iostream>
#include<stack>
#include <string>
#include "RegularPolygon.h"
using namespace std;


void EX301();//10.5
void EX302();//10.13
bool isPalindrome(const string& s);

int main()
{
	EX301();
	EX302();
}


void EX301()//10.5
{
	string s;
	cin >> s;//gets the word
	switch (isPalindrome(s))//calls the isPalindrome function to test if the word is a palindrome
	{
	case true:
		cout << s << " is a palindrome" << endl;//printed if isPalindrome returns true
		break;
	case false:
		cout << s << " is not a palindrome" << endl;//printed if isPalindrome returns false
		break;
	}

}

bool isPalindrome(const string& s)
{
	stack <char> sStack;//a stack to hold all of the chars in s
	int length = s.size();//gets the length of the string so we know how many times to iterate the loop.

	string sLower;//will be an all lower case version of s
	for (int i = 0;i < length;i++)//a loop to populate sLower with lower case chars from s
	{
		char tempChar = s.at(i);//gets a char from s
		tempChar=tolower(tempChar);//converts it to lower case
		sLower.push_back(tempChar);//puts it in sLower
	}

	for (int i = 0;i < length;i++)//a loop to push all of the characters in s into a stack callad sc
	{
		sStack.push(sLower.at(i));//pushes each chareacter into the stack
	}


	bool flag = true;//a flag that will become false if s fails the palindrome test

	for (int i = 0;i < length;i++)//a loop which will check to see if the string s is a palindrome by comparing eachy character of sLower to each character of sStack
	{
		char tempChar = sStack.top();//retrives the top char and puts it in tempChar
		sStack.pop();//destroys top char

		if (tempChar != sLower.at(i))//checks to see if the top charcater of sStack matches the current charcater of sLower. If they do not, the flag will be turned to false, indicationg s is not a palindrome
		{
			flag = false;
		}
	}

	return flag;

}

void EX302()//10.13
{
	RegularPolygon pol1;
	RegularPolygon pol2(6,4);
	RegularPolygon pol3(10,4,5.6,7.8);
	cout << "pol1 perimiter = " << pol1.getPerimeter() << endl;
	cout << "pol1 area = " << pol1.getArea() << endl;
	cout << "pol2 perimiter = " << pol2.getPerimeter() << endl;
	cout << "pol2 area = " << pol2.getArea() << endl;
	cout << "pol3 perimiter = " << pol3.getPerimeter() << endl;
	cout << "pol3 area = " << pol3.getArea() << endl;

}