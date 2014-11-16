#include <iostream>
using namespace std;
int search(int arr[],int n,int x)
{
	int low,mid,high;
	low=0;
	high=n-1;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (x>arr[mid])
		{
			low=mid+1;
		}
		else if (x<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[]={1,20,15,-4,22,19,83,99,6};
	int temp=0;
	int n=9,x;
	for (int i=0;i<9;i++)
	{
		for (int j=0;j<9-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cin>>x;
	int i=search(arr,n,x);
	cout<<i<<endl;
}