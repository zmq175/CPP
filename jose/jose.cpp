#include <iostream>
#include "ring.h"
#include "jose.h"
using namespace std;
void Jose::Initial()
{
	int num,begin,m;
	cout << "please input the number of boys,"
		"beginning position,interval per count :\n";
	cin >> num >> begin >>m;
	if(num<2)
	{
		cerr << "bad number of boys" <<endl;
		return;
	}
	if(begin<0)
	{
		cerr << "bad beginning position" << endl;
		return;
	}
	if(m<1||m>num)
	{
		cerr << "bad interval number" << endl;
		return;
	}
	numOfBoys=num;
	beginPos=begin;
	interval=m;
}

void Jose::GetWinner()
{
	Ring x(numOfBoys);
	x.Count(beginPos);
	for(int i=1;i<numOfBoys;i++)
	{
		x.Count(interval);
		x.PutBoy();
		x.ClearBoy();
		cout <<endl<< "�Ƿ���Ҫ����С���������Ҫ�������λ����ѡ����Ҫ����С����λ��,����Ҫ������\"0\"" << endl;
		x.AddBoy();
		x.ShowNum();
	}
	cout << "\n the winner is ";
	x.PutBoy();
}

