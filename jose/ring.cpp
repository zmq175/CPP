#include <iostream>
#include <iomanip>
#include "ring.h"
using namespace std;
Ring::Ring(int n)
{       //������
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
        //������
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
		cout << "��ѡ���˲�����С������Ϸ���������У�" << endl<<endl;
	}
	else
	{
		cout << "�������벻�Ϸ�����Ϸ���Բ�����С���ķ�ʽ������" << endl<<endl;
	}
}
void Ring::ShowNum()
{
	cout << "�����ܹ���" << num << "��С���μ���Ϸ��" << endl;
}
Ring::~Ring()
{
	delete[]pBegin;
}
