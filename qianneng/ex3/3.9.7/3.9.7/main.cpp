//==================================================================
//Program: from pointers to references
//this code is written for homework of Qianneng's book
//exercise 3 page101 no.7
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
using namespace std;
//==================================================================
void mySwap(int &a,int &b);
int main()
{
	int a = 16, b = 48;
	cout<<"a = "<<a<<", b = "<<b<<endl;
	mySwap(a,b);
	cout<<"After Being Swapped:\n";
	cout<<"a = "<<a<<", b = "<<b<<endl;
}
void mySwap(int &a,int &b)
{
	int temp = a;
	a=b;
	b=temp;
}