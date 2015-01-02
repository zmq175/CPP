#include<stdio.h>

double rate[10][102];//建立二维数组，rate[i][j]表示以字符‘i’开头且长度为j的紧凑字符占长度为j的字符的比率
//例如rate[2][2]表示以‘2’开头的字符，并且长度为2的字符占长度为2的字符的比率，这些字符有21,22,23

void CountRate(int k,int n)//计算相应比率，将结果存在全局变量rate数组中
{
	int i,j;
	for(i = 0;i <= k;i++)//当长度为1时，对应概率为1.0/(k+1)
	{
		rate[i][1] = 1.0 / (k + 1 );
	}
	for(j = 2;j <= n;j++)
	{
		for(i = 0;i <=k ;i++)
		{
			//算法核心：以字符‘i’开头且长度为j的紧凑字符占长度为j的字符的比率为1.0/(k+1) *　( rate[i－1][j-1] +rate[i][j-1]+ rate[i＋1][j-1])
			//其中1.0/(k+1)为以字符‘i’开头的概率，( rate[i－1][j-1] +rate[i][j-1]+ rate[i＋1][j-1])为能满足条件的长度为j-1的字符串的比率
			rate[i][j] = rate[i][j-1] * (1.0 / (k + 1));
			if(i - 1 >= 0)
			{
				rate[i][j] += rate[i - 1][j-1] * (1.0 / (k + 1));
			}
			if(i + 1 <= k)
			{
				rate[i][j] += rate[i + 1][j-1] * (1.0 / (k + 1));
			}
		}
	}
}

int main()
{
	int k,n;//对应题目里的k和n
	int i,j;
	double result=0.0;
	while(scanf("%d%d",&k,&n) == 2)
	{
		result = 0.0;
		CountRate(k,n);
		for(i=0;i<=k;i++)
		{
			result += rate[i][n];
		}
		printf("%.5lf\n",result*100);
	}
	return 0;
}