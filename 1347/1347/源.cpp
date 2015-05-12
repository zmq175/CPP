#include <iostream>
using namespace std;
int stein_gcd(int m, int n)
{
	int temp, total = 0;
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}

	if (n == 0)
		return 0;

	while (m != n)
	{
		if (m & 1) /* ���m Ϊ����, ��Ϊ�����ĺ�������һ��1,���Կ���ͨ����1��һ�����ж��Ƿ���ż��*/
		{
			if (n & 1) /* m,n��Ϊ����*/
			{
				temp = m;
				m = (m + n) >> 1;
				n = (temp - n) >> 1;
			}
			else
			{
				n >>= 1;
			}
		}
		else /* mΪż�� */
		{
			if (n & 1) /*n Ϊ����*/
			{
				m >>= 1; /*��������������У�m����С��n ,����Ҫ�ж�һ��*/
				if (m < n)
				{
					temp = m;
					m = n;
					n = temp;
				}
			}
			else
			{
				m >>= 1;
				n >>= 1;
				total++; /*��¼��С�ı���*/
			}
		}
	}

	m <<= total; /*��ԭ��С*/

	return m;
}
int main()
{
	int n=0;
	int *a;
	int *b;
	int *max;
	while (cin>>n)
	{
		a = new int[n];
		b = new int[n];
		max = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i] >> b[i];
			max[i] = stein_gcd(a[i], b[i]);
		}
		for (int i = 0; i < n; i++)
		{
			cout << "Case " << i+1 << ": " << max[i] << endl;
		}
	}
}