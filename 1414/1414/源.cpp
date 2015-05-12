#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int *arr;
	while (cin>>n&&n>=1&&n<=20)
	{
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			int temp = 0;
			cin >> temp;
			arr[i] = temp;
		}
		int temp = 0;
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<n - 1 - i; j++)
			{
				if (arr[j]>arr[j + 1])
				{
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			(i != n - 1 ? cout << arr[i] << ' ' : cout << arr[i]);
		}
		cout << endl;
	}
}