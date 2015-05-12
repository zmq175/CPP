#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	string s1;
	while (cin>>str)
	{
		if (str == "0")
		{
			break;
		}
		else
		{
			s1 = str;
			reverse(s1.begin(), s1.end());
			cout << (str == s1 ? "Yes" : "No")<<endl;
		}
	}
}