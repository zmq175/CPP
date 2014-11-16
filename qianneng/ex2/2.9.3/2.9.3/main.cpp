//==================================================================
//Program: Print all Narcissus numbers
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.3
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
using namespace std;
int main()
{
	unsigned int i;
	//define the number
	for (i=100;i<1000;i++)
	{
		//get the unit,the tens and the hundreds
		int hun=i/100;
		int ten=i/10-10*hun;
		int unit=i%10;
		if (i==hun*hun*hun+ten*ten*ten+unit*unit*unit)
		{
			cout<<i<<endl;
		}
	}
}