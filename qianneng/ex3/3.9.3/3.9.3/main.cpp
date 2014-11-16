//==================================================================
//Program: standard deviation
//this code is written for homework of Qianneng's book
//exercise 3 page101 no.3
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//==================================================================
int main()
{
	int arr[]={6,3,7,1,4,8,2,9,11,5};
	double average=0,tot=0;
	vector <int> varr(arr,arr+10);
	for (int i=0;i<10;i++)
	{
		tot+=varr[i];
	}
	average=tot/10;
	tot=0;
	for (int i=0;i<10;i++)
	{
		tot+=(varr[i]-average)*(varr[i]-average);
	}
	double s=sqrt((tot/10));
	cout<<s<<endl;
}