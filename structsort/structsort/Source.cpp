#include <iostream>
#include <string>
using namespace std;
//================================================
struct Student
{
	string name;
	int a, b, c;
	int total = 0;
};
int main()
{
	Student stu[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> stu[i].name;
		cin >> stu[i].a >> stu[i].b >> stu[i].c;
		stu[i].total = stu[i].a + stu[i].b + stu[i].c;
	}
	Student temp;
	temp.total = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (temp.total<stu[j].total)
			{
				temp = stu[j + 1];
				stu[j + 1] = stu[j];
				stu[j] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << stu[i].name << " " << stu[i].a <<" "<< stu[i].b <<" "<< stu[i].c << endl;
	}
}