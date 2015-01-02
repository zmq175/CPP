#include <iostream>
#include <iomanip>
using namespace std;
//===================================
int main()
{
	const int n=9;
	int yh[n][n];
	int i,j;
	//define line and row
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==0||i==j)
				yh[i][j]=1;
			else
				yh[i][j]=yh[i-1][j]+yh[i-1][j-1];
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			cout<<setw(4)<<setfill(' ')<<yh[i][j];
		}
		cout<<"\n";
	}
}