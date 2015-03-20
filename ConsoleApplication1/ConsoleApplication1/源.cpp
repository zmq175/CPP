#include<iostream>
#include<vector>
using namespace std;
void quickSort(vector <int> &arr, int l, int r);
int main()
{
	vector <int> arr;
	int a;
	while (cin >> a&&a != 0)
	{
		arr.push_back(a);
	}
	int k;
	int len = sizeof(arr) / sizeof(int);
	cout << "The orginal array are:" << endl;
	for (k = 0; k<len; k++)
		cout << arr[k] << ",";
	cout << endl;
	quickSort(arr, 0, len - 1);
	cout << "The sorted array are:" << endl;
	for (k = 0; k<len; k++)
		cout << arr[k] << ",";
	cout << endl;
	system("pause");
	return 0;
}

void quickSort(vector <int> &arr, int l, int r)
{
	if (l< r)
	{
		int i = l, j = r, x = arr[l];
		while (i < j)
		{
			while (i < j && arr[j] <= x) // 从右向左找第一个小于x的数  
				j--;
			if (i < j)
				arr[i++] = arr[j];
			while (i < j && arr[i]> x) // 从左向右找第一个大于等于x的数  
				i++;
			if (i < j)
				arr[j--] = arr[i];
		}
		arr[i] = x;
		quickSort(arr, l, i - 1); // 递归调用  
		quickSort(arr, i + 1, r);
	}
}