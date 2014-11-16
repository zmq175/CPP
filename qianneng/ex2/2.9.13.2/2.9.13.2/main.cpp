//==================================================================
//Program: Print 9*9 table 2
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.13.2
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j;
	//print header
	cout<<setw(5)<<setfill(' ')<<"*";
	for (i=1;i<=9;i++)
	{
		cout<<setw(5)<<setfill(' ')<<i;
	}
	cout<<endl;
	cout<<setw(50)<<setfill('-')<<'-'<<endl;
	//print content
	for (i=1;i<=9;i++)
	{
		cout<<setw(5)<<setfill(' ')<<i;
		for (j=1;j<=9;++j)
		{
			if(j<i)
			{
				cout<<setw(5)<<setfill(' ')<<' ';
			}
			else
			{
				cout<<setw(5)<<setfill(' ')<<i*j;
			}
		}
		cout<<endl;
	}
}