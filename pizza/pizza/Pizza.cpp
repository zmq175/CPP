#include <iostream>
#include <iomanip>
#include "Pizza.h"
using namespace std;
//======================================
void Pizza::show()
{
	int complete_num=number;
	if (favor!='c'&&favor!='f'&&favor!='l'&&favor!='v'&&size!=4&&size!=6&&size!=8)
	{
		cout<<"没有您需要的比萨种类！"<<endl;
	}
	else
	{
		if (number != complete_num + 0.25&&number != complete_num + 0.5&&number != complete_num + 0.75&&number != complete_num)
		{
			cout<<"您输入的个数不合法！"<<endl;
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
			cout<<"您选择购买的比萨如下："<<endl;
			switch(favor)
			{
			case'c':
				cout<<"芝士";
				break;
			case'f':
				cout<<"水果";
				break;
			case'l':
				cout<<"黑胡椒";
				break;
			case'v':
				cout<<"蔬菜";
				break;
			default:
				cout<<"错误";
				break;
			}
			cout<<"口味比萨 "<<size<<"寸"<<number<<"份"<<endl;
			cout<<"小计："<<(price*number)<<"元"<<endl;
		}
	}
}
void Pizza::sale()
{
	system("cls");
	cout<<"您的比萨已下单！"<<endl;
}