#include <iostream>
#include "Array_max.h"
using namespace std;
int main()
{
	Array_max  arr1, arr2(10), arr3(10, 100);

	//arr1Ĭ�Ϲ���10��Ԫ�أ���ʼֵΪ0��
	//arr2ָ��Ԫ�ظ���Ϊ10��
	//arr3ָ����ʼֵΪ100��10��Ԫ�أ�

	arr1.set_value();                //Ϊ�����е�Ԫ��ָ���û�����ֵ

	arr1.show_max();             //��ʾ�����е����ֵ

	arr2.find_value(60, '>');    //��������д���60������

	arr3.sorted(0);                 //�����ݰ���������������
	cout <<endl<< arr1 << arr3 << endl;

	return 0;
}