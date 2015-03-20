#include <iostream>
#include <algorithm>
#include "Array_max.h"
using namespace std;
Array_max::Array_max(int size,int value)
{
	array = new int[size];
	memset(array, 0, size);
	count=size;
}
void Array_max::set_value()
{
	int i;      
	for (i=0;i<count;i++)
		cin>>array[i];
}
void Array_max::find_max()
{
	max=array[0];
	for(int i=0;i<count;i++)
	{
		(max<array[i])? max=array[i]:max=max;
	}
}
void Array_max::find_value(int num, const char way)
{
	if (way=='>')
	{
		for (int i = 0; i < count; ++i)
			if (array[i]>num)
			{
				cout << array[i] << endl;
			}
	}
	if (way=='<')
	{
		for (int i = 0; i < count; ++i)
			if (array[i]<num)
			{
				cout << array[i] << endl;
			}
	}
}
void Array_max::show_max( )
{
	find_max();              //回答：这句话是否必要？有
    cout<<"max="<<max;
}
void Array_max::sorted(const int way,int l,int r)
{
	l = 0, r = count;
	if (way==0)
	{
		int temp = 0;
		for (int i = 0; i < count; i++)
		{
			for (int k = 0; k < count-1-i; k++)
			{
				if (array[k]>array[k + 1])
				{
					temp = array[k + 1];
					array[k + 1] = array[k];
					array[k] = temp;
				}
			}
		}
	}
	if (way==1)
	{
		int temp = 0;
		for (int i = 0; i < count; i++)
		{
			for (int k = 0; k < count - 1 - i; k++)
			{
				if (array[k]<array[k + 1])
				{
					temp = array[k + 1];
					array[k + 1] = array[k];
					array[k] = temp;
				}
			}
		}
	}
}