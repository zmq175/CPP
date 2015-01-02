#include<stdio.h>

double rate[10][102];//������ά���飬rate[i][j]��ʾ���ַ���i����ͷ�ҳ���Ϊj�Ľ����ַ�ռ����Ϊj���ַ��ı���
//����rate[2][2]��ʾ�ԡ�2����ͷ���ַ������ҳ���Ϊ2���ַ�ռ����Ϊ2���ַ��ı��ʣ���Щ�ַ���21,22,23

void CountRate(int k,int n)//������Ӧ���ʣ����������ȫ�ֱ���rate������
{
	int i,j;
	for(i = 0;i <= k;i++)//������Ϊ1ʱ����Ӧ����Ϊ1.0/(k+1)
	{
		rate[i][1] = 1.0 / (k + 1 );
	}
	for(j = 2;j <= n;j++)
	{
		for(i = 0;i <=k ;i++)
		{
			//�㷨���ģ����ַ���i����ͷ�ҳ���Ϊj�Ľ����ַ�ռ����Ϊj���ַ��ı���Ϊ1.0/(k+1) *��( rate[i��1][j-1] +rate[i][j-1]+ rate[i��1][j-1])
			//����1.0/(k+1)Ϊ���ַ���i����ͷ�ĸ��ʣ�( rate[i��1][j-1] +rate[i][j-1]+ rate[i��1][j-1])Ϊ�����������ĳ���Ϊj-1���ַ����ı���
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
	int k,n;//��Ӧ��Ŀ���k��n
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