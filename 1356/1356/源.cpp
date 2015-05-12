#include <iostream>
using namespace std;
int main()
{
	int a, b;
	while (cin>>a>>b)
	{
		if (a <= 10000 && b <= 10000)
		{
			int sum = ((a + b) % 10);
			cout << sum<<endl;
		}
		else
			break;
	}
}