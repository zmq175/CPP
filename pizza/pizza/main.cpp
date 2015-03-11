#include <iostream>
#include "Pizza.h"
#include "round.h"
using namespace std;
//===================================
int main(int argc, char *argv[])
{
	char ifavor;
	unsigned int isize;//³ß´ç
	float inumber;//¸öÊý
	cin>>ifavor>>isize>>inumber;
	Pizza bb(ifavor,isize,inumber);
	bb.show();
	system("pause");
	bb.sale();
}