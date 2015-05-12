#include <iostream>
#include <iomanip>
#include "ring.h"
using namespace std;
Ring::Ring(int n)
{       //链表建立
	pBegin = new Boy;
        pivot = pBegin;
		int i;
	for(i=1;i<n;i++)
	{		
		pivot->code=i;
		
	        pCurrent= new Boy;
		pivot->next= pCurrent;
		pivot=pivot->next;
			
	}
        //环链表
        pivot->code=i;
	pivot->next=pBegin;
        pCurrent=pBegin;
		leave = new Boy*[n+1];
		num = n;
		tot = n;
		for (int i = 0; i <= tot; i++)
		{
			leave[i] = NULL;
		}
	cout << endl;
	
}

void Ring::Count(int m)
{
	for(int i=0;i<m;i++)
	{
	    pivot = pCurrent;
	    pCurrent = pCurrent->next;
	    cout << pCurrent->code<<"  ";
	}
	cout << endl;
}

void Ring::PutBoy()
{
	static int numInLine=0;
	if(numInLine++ %5==0)
		cout << endl;
	cout << "boy:" << setw(4) << pCurrent->code ;
	cout << endl;
}

void Ring::ClearBoy()
{
	leave[pCurrent->code] = pCurrent;
	pivot->next=pCurrent->next;
	pivot=pCurrent;
	num--;
}
void Ring::AddBoy()
{
	for (int m = 0; m < tot+1; m++)
	{
		if (leave[m]!=NULL)
		{
			cout << leave[m]->code << " ";
		}
	}
	cout << endl<<endl;
	int i;
	cin >> i;
	if (i!=0&&leave[i]!=NULL)
	{
		for (int k = 0; k < num; k++)
		{
			pivot = pCurrent;
			pCurrent = pCurrent->next;
			if (pCurrent->code<i&&pCurrent->next->code>i)
			{
				leave[i]->next = pCurrent->next;
				pCurrent->next = leave[i];
				leave[i] = NULL;
			}
		}
		num++;
	}
	else if (i == 0)
	{
		cout << "您选择了不插入小孩，游戏将继续进行！" << endl<<endl;
	}
	else
	{
		cout << "您的输入不合法！游戏将以不插入小孩的方式继续！" << endl<<endl;
	}
}
void Ring::ShowNum()
{
	cout << "现在总共有" << num << "名小孩参加游戏！" << endl;
}
Ring::~Ring()
{
	delete[]pBegin;
}
