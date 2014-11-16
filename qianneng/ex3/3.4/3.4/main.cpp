//==================================================================
//Program: count days
//this code is written for homework of Qianneng's book
//exercise 3 page 101 no.4
//written by Liu Yuanqi
//student number:201426811417
//College of Computer Science and Technology,College of Software
//Zhejiang university of Techonology
//written in VS2010
//==================================================================
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
//==================================================================
int main()
{
	ifstream in ("abc.txt");
	int n=0,sum=0;
	for (string s;getline(in,s);)
	{
		cout<<s<<endl;
		if(s.find("25")!=-1)
		{
			if(s.find("*")!=-1)
			{
				n=2;
			}
			else
			{
				n=1;
			}
		}
		sum+=n;
	}
	cout<<sum<<endl;
}