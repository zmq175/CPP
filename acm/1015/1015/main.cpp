#include<cstdio>
using namespace std;

long long int  Factorial(int n);//��n�Ľ׳�

int main(void)
{
 int n,m;
 int i;
 long long int Tmp;

 while(scanf("%d%d", &n, &m) == 2)
 {
  Tmp = 1;

  for (i=0; i<m; i++)
  {
   Tmp *= (n - i);
  }
  printf("%lld\n", Tmp / Factorial(m));
 }
 return 0;
}

long long int  Factorial(int n)//��n�Ľ׳�
{
 int i;
 long long int Result = 1;

 for (i=2; i<=n; i++)
 {
  Result *= i;
 }

 return Result;
}