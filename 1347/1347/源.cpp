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
		if (m & 1) /* 如果m 为奇数, 因为奇数的后面总有一个1,所以可以通过与1且一下来判断是否是偶数*/
		{
			if (n & 1) /* m,n都为奇数*/
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
		else /* m为偶数 */
		{
			if (n & 1) /*n 为奇数*/
			{
				m >>= 1; /*由于在这个过程中，m可能小于n ,所以要判断一下*/
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
				total++; /*记录缩小的倍数*/
			}
		}
	}

	m <<= total; /*还原大小*/

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