//======================================
#include <iostream>
#include <cmath>
using namespace std;
//======================================
//³Ë·½
//======================================
int MyPow(int x,int y)
{
	int i;
	int result = 1;
	for(i = 0;i < y;i++)
	{
		result *= x;
	}
	return result;
}
//=======================================
//findk
//=======================================
int FindK(int n,int x)
{
	int k=2,temp=0;
	for(k=2;;k++)
	{
		temp=MyPow(x,k);
		if(temp==n)
			return k;
		if(temp>n)
			return 0;
	}
}
//==========================================
//main function
//==========================================
int main()
{
	int n=0,x=0;
	for(;cin>>n;)
	{
		if(n==0)
			break;
		if(n==1)
		{
			cout<<"1 2"<<endl;
			continue;
		}
		for(x=static_cast<int>(sqrt(n*1.0));x>1;x--)
		{
			int k=FindK(n,x);
			if(k!=0)
			{
				cout<<x<<" "<<k<<endl;
				break;
			}
		}
		if(x==1)
		{
			cout<<"0 0"<<endl;
		}
	}
}