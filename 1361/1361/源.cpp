#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	double a, b, c, d, s;
	while (scanf_s("%lf %lf %lf %lf", &a, &b, &c, &d) != EOF)
	{
		s = sqrt((a - c)*(a - c) + (b - d)*(b - d));
		printf("%.2lf\n", s);
	}
}