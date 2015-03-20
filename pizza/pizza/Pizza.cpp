#include <iostream>
#include <iomanip>
#include <string>
#include "Pizza.h"
using namespace std;
//======================================
Pizza::Pizza(char ifavor,int isize,float inumber)
{
		favor=ifavor;
		size=isize;
		number=inumber;
}
Pizza::Pizza(const string &str)
{
	favor = str[0];
	size = str[2];
	number = atof(str.substr(4, str.length()-4).c_str());
}
void Pizza::show()
{
	int complete_num=number;
	if (favor!='c'&&favor!='f'&&favor!='l'&&favor!='v'&&size!=4&&size!=6&&size!=8)
	{
		cout<<"û������Ҫ�ı������࣡"<<endl;
	}
	else
	{
		if(number!=complete_num+0.25&&number!=complete_num+0.5&&number!=complete_num+0.75)
		{
			cout<<"������ĸ������Ϸ���"<<endl;
		}
		else
		{
			for(int i=0;i<complete_num;i++)
			{
				cout<<setw(5)
					<<setfill(' ')
					<<"*"<<endl
					<<setw(5)
					<<setfill(' ')
					<<"* *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*   *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"* *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*"<<endl;
			}
			if(number==(complete_num+0.25))
			{
				cout<<setw(5)
					<<setfill(' ')
					<<setw(5)
					<<setfill(' ')<<"*"<<endl
					<<setw(5)
					<<setfill(' ')<<"* *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*****"<<endl;
			}
			if(number==(complete_num+0.5))
			{
				cout<<setw(5)
					<<setfill(' ')
					<<"*****"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*"<<endl;
			}
			if(number==(complete_num+0.75))
			{
				cout<<setw(5)
					<<setfill(' ')
					<<"*"<<endl
					<<setw(5)
					<<setfill(' ')<<"* *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*****"<<endl;
				cout<<setw(6)
					<<setfill(' ')
					<<"*****"<<endl
					<<setw(5)
					<<setfill(' ')<<"*  *"<<endl
					<<setw(5)
					<<setfill(' ')<<"*"<<endl;
			}
			cout<<"��ѡ����ı������£�"<<endl;
			switch(favor)
			{
			case'c':
				cout<<"֥ʿ";
				break;
			case'f':
				cout<<"ˮ��";
				break;
			case'l':
				cout<<"�ں���";
				break;
			case'v':
				cout<<"�߲�";
				break;
			default:
				cout<<"����";
				break;
			}
			cout<<"��ζ���� "<<size<<"��"<<number<<"��"<<endl;
			cout<<"С�ƣ�"<<(price*number)<<"Ԫ"<<endl;
		}
	}
}
void Pizza::sale()
{
	system("cls");
	cout<<"���ı������µ���"<<endl;
}