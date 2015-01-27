//==================================================================
//Program: Print matrix(2)
//this code is written for homework of Qianneng's book
//exercise 2 page63 no.12.2
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
#include <iomanip>
using namespace std;
//==================================================================
int main()
{
	for(int i=1;i<7;i++)
	{
		for(int j=1;j<8;++j)
		{
			cout<<setw(7)<<setfill(' ')
				<<"("<<i<<","<<j<<")";
		}
		cout<<endl;
	}
}