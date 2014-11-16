//==================================================================
//Program: Print all perfect numbers less than 1000
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.4
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
	int num=2;
	for (num=2;num<=1000;num++)
	{
		int sum=0;
		for (int i=1;i<=num/2;i++)
		{
			if (num%i==0)
			{
				sum+=i;
			}
			if(sum==num)
			{
				cout<<num<<endl;
				break;
			}
		}
	}
}