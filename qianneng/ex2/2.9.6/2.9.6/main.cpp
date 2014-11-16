//==================================================================
//Program: Monkeys Eat Peach Problem
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.6
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
	int peach=1;
	for (int i=10;i>1;i--)
	{
		peach=2*(peach+1);
	}
	cout<<peach<<endl;
}