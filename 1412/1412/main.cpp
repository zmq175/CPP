#include <iostream>
#include <string>
using namespace std;
//==================================
int main(){
	int m, n;
	while (cin >> n >> m&&n <= 30 && n >= 3 && m <= 30 && m >= 3)
	{
		cout << string(m, '#') << endl;
		for (int i = 0; i < n-2; i++)
		{
			cout << '#' << string(m - 2, ' ') << '#' << endl;
		}
		cout << string(m, '#') << endl;
		cout << endl;
	}
}