#include <iostream>
#include "Pizza.h"
using namespace std;
//===================================
int main()
{
	char ifavor;
	unsigned int isize;//³ß´ç
	float inumber;//¸öÊý
	/*cin>>ifavor>>isize>>inumber;
	Pizza bb(ifavor,isize,inumber);
	bb.show();
	system("pause");
	bb.sale();*/
	Pizza cc("f-4-0.25");
	cc.show();
	system("pause");
	cc.sale();
}