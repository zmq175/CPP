//==================================================================
//Program: Print all three-digit symmetrical primes
//this code is written for homework of Qianneng's book
//exercise 2 page61 no.5
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{
	int sqt=sqrt(num*1.0);
	for(int i=2;i<=sqt;++i)
	{
		if(num%i==0)
		{
			return false;
		}
		if(i>=sqt)
		{
			return true;
		}
	}
}
int main()
{
	for(int num=100;num<1000;num++)
	{
		if(isprime(num)&&num%10==num/100)
		{
			cout<<num<<endl;
		}
	}
}