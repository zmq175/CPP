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
//}    // C++ 输入 密码 回显 * 的小程序段   
#include <iostream>  
#include<conio.h>  
#include<string>  
using namespace std;
class Password//用一个类实现，其实也可以不用这么麻烦，练习一下  
{
public:
	Password()//构造函数，这里主要用于初始化密码，使之为空  
	{
		psw = "";//初始化密码为空"";  
		length = 0; //初始化密码长度  
	}
	void inputPassword()//用于输入并回显*为密码  
	{
		char temp_c;
		cout << "please input password:";
		while (true)
		{
			temp_c = _getch();  //输入一个字符  
			if (temp_c != char(13))  //判断该字符是不为回车，如果是则退出while  
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
					cout << "*"; //可用用你喜欢的任意字符，如改为cout<<"";则无回显  
					psw += temp_c;//连成字符串；  
					length++;
					break;
				}
			}
			else break;
		}
	}
	string getPassword()//返回一个密码字符串，其实可以把密码再次加密，存在数据库中。  
	{
		return psw;
	}
private:
	string psw;//用于存密码的字符串；  
	int length;//密码长度  
};


//测试  
int main()
{
	Password psw1;
	psw1.inputPassword();
	cout << endl << "Your password is:" << psw1.getPassword() << endl;
	_getch();
	return 0;
}