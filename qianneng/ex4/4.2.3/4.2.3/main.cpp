#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<(a=2,b=5,a++,b++,a+b)<<endl;
	/*a=2,b=5;
	a++;
	b++;
	cout<<a+b<<endl;*/
}