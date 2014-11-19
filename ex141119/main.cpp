#include <iostream>
using namespace std;
int array1[5]={1,2,3};
int array2[5];
int main()
{
	////f0313 start
	//int iArray[6];
	//for(int i=0;i<6;++i)
	//{
	//	iArray[i]=2*i;
	//}
	//for(int* iP=iArray;iP<iArray+6;iP+=1)
	//	cout<<iP<<": "<<*iP<<endl;
	////f0313 end
	//int n;
	//cin>>n;
	//int *pn=new int[n];
	////create a new area of a array which size is n
	//for (int i=0;i<n;i++)
	//{
	//	*(pn+i)=9*i;
	//}
	//for (int i=0;i<n;i++)
	//{
	//	cout<<(pn+i)<<": "<<*(pn+i)<<endl;
	//}
	//delete []pn;
	////delete the array area in cache
	////f0308 start
	//int array3[5]={2};
	//int array4[5];
	//cout<<"array1:";
	//for (int i=0;i<5;i++)
	//{
	//	cout<<array1[i]<<" ";
	//}
	//cout<<"\narray2:";
	//for (int i=0;i<5;i++)
	//{
	//	cout<<array2[i]<<" ";
	//}
	//cout<<"\narray3:";
	//for (int i=0;i<5;i++)
	//{
	//	cout<<array3[i]<<" ";
	//}
	//cout<<"\narray4:";
	//for (int i=0;i<5;i++)
	//{
	//	cout<<array4[i]<<" ";
	//}
	//cout<<"\n";
	////f0308 end
	//swap biggest to first and smallest to last
	int arr[10];
	for (int i=0;i<10;i++)
	{
		int n;
		cin>>n;
		arr[i]=n;
	}
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int *pmax=arr,*pmin=arr;
	int *p=arr;
	for (p;p<arr+10;p++)
	{
		if (*p>*pmax)
		{
			pmax=p;
		}
		if (*p<*pmin)
		{
			pmin=p;
		}
	}
	p=arr;
	int temp=*p;
	*p=*pmax;
	*pmax=temp;
	temp=*(p+9);
	*(p+9)=*pmin;
	*pmin=temp;
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}