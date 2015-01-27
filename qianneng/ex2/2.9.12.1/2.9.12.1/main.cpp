//==================================================================
//Program: Print matrix(1)
//this code is written for homework of Qianneng's book
//exercise 2 page63 no.12.1
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
	for(int i=0;i<6;++i)
	{
		cout<<setw(3)<<i+1
			<<setw(4)<<setfill(' ')<<" ";
		//==========================================================
		for(int j=i;j<i+7;++j)
		{
			cout<<setw(4)<<j%7<<" ";
		}
		//==========================================================
		cout<<endl;
	}
}