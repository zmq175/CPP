#include <iostream>
#include <string>
#include <vector>
using namespace std;
//===================================
struct User
{
	long int uid;
	string UserName;
};
int main()
{
	User doc[6] =
	{
		{1,"Alice"},
		{2,"Buddy"},
		{3,"Cindy"},
		{4,"Dicky"},
		{5,"Frank"},
		{6,"Gucci"}
	};
	for (int i=0;i<(sizeof(doc)/sizeof(User));i++)
	{
		cout<<"UID:"<<doc[i].uid
			<<" "
			<<"UserName:"<<doc[i].UserName
			<<"\n";
	}
}