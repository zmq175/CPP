//==================================================================
//Program: combinatorial number
//this code is written for homework of Qianneng's book
//exercise 4 page.130 no.3
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
using namespace std;
//==================================================================
double Factorial(int n)
{
	double j=1;
	for(int i=1;i<=n;i++)
	{
		j*=i;
	}
	return j;
}
int ComNum(int a,int b)
{
	int result=0;
	double up=Factorial(a);
	double down=(Factorial(b))*(Factorial(a-b));
	result=static_cast<int>(up/down);
	return result;
}
int main()
{
	cout<<ComNum(18,13)<<endl;
}