#include <iostream>
#include <vector>
using namespace std;
/* define micro element
#define pow3(x) ((x)*(x)*(x))
will do replace
*/
typedef vector<int> Mat;
void BubbleSort (Mat &a,int len)
{
	int temp=0;
	for (int i=0;i<len;i++)
	{
		for (int j=0;j<len-1-i;j++)
		{
			if (a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void QuickSort(Mat &a,int l,int r)
{
	int i=l,j=r,x=a[l];
	while (i<j)
	{
		while (i<j&&a[j]>=x)
		{
			j--;
		}
		if(i<j)
		{
			a[i++]=a[j];
		}
		while (i<j&&a[i]<x)
		{
			i++;
		}
		if (i<j)
		{
			a[j--]=a[i];
		}
	}
	a[i]=x;
	if (l!=0&&r!=0)
	{
		QuickSort(a,l,i-1);
		QuickSort(a,i+1,r);
	}
}
int Search(Mat a,int n,int x)
{
	int low,mid,high;
	low=0;
	high=n-1;
	while (low<=high)
	{
		mid=(low+high)/2;
		if (x>a[mid])
		{
			low=mid+1;
		}
		else if (x<a[mid])
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
	Mat arr;
	int a;
	while (cin>>a&&a!=0)
	{
		arr.push_back(a);
	}
	int len=arr.size();
	cout<<"The orignal array are:"<<endl;
	for (int k=0;k<len;k++)
	{
		cout<<arr[k]<<',';
	}
	cout<<endl;
	QuickSort(arr,0,len-1);
	//BubbleSort(arr,len);
	cout<<"The sorted array are:"<<endl;
	for (int i=0;i<len;i++)
	{
		cout<<arr[i]<<',';
	}
	cout<<endl;
	int s;
	cin>>s;
	int result=Search(arr,len,s);
	cout<<result<<endl;
}