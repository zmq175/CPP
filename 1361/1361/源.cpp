//#include <stdio.h>
//#include <math.h>
//using namespace std;
//int main()
//{
//	double a, b, c, d, s;
//	while (scanf_s("%lf %lf %lf %lf", &a, &b, &c, &d) != EOF)
//	{
//		s = sqrt((a - c)*(a - c) + (b - d)*(b - d));
//		printf("%.2lf\n", s);
//	}
//}    // C++ ���� ���� ���� * ��С�����   
#include <iostream>  
#include<conio.h>  
#include<string>  
using namespace std;
class Password//��һ����ʵ�֣���ʵҲ���Բ�����ô�鷳����ϰһ��  
{
public:
	Password()//���캯����������Ҫ���ڳ�ʼ�����룬ʹ֮Ϊ��  
	{
		psw = "";//��ʼ������Ϊ��"";  
		length = 0; //��ʼ�����볤��  
	}
	void inputPassword()//�������벢����*Ϊ����  
	{
		char temp_c;
		cout << "please input password:";
		while (true)
		{
			temp_c = _getch();  //����һ���ַ�  
			if (temp_c != char(13))  //�жϸ��ַ��ǲ�Ϊ�س�����������˳�while  
			{
				switch (temp_c)
				{
				case 8:
					if (length != 0)
					{
						cout << "/b /b";
						psw = psw.substr(0, length - 1);
						length--;
					}
					else;
					break;
				default:
					cout << "*"; //��������ϲ���������ַ������Ϊcout<<"";���޻���  
					psw += temp_c;//�����ַ�����  
					length++;
					break;
				}
			}
			else break;
		}
	}
	string getPassword()//����һ�������ַ�������ʵ���԰������ٴμ��ܣ��������ݿ��С�  
	{
		return psw;
	}
private:
	string psw;//���ڴ�������ַ�����  
	int length;//���볤��  
};


//����  
int main()
{
	Password psw1;
	psw1.inputPassword();
	cout << endl << "Your password is:" << psw1.getPassword() << endl;
	_getch();
	return 0;
}