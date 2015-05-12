#include <iostream>
#include "Array_max.h"
using namespace std;
int main()
{
	Array_max  arr1, arr2(10), arr3(10, 100);

	//arr1默认构造10个元素，初始值为0；
	//arr2指定元素个数为10；
	//arr3指定初始值为100的10个元素；

	arr1.set_value();                //为数组中的元素指定用户输入值

	arr1.show_max();             //显示数组中的最大值

	arr2.find_value(60, '>');    //输出数组中大于60的数据

	arr3.sorted(0);                 //将数据按照升序排序后输出
	cout <<endl<< arr1 << arr3 << endl;

	return 0;
}