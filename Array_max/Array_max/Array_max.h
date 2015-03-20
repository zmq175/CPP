class Array_max
{
public:
	Array_max(int size=10,int value=0);
	void set_value();             //对数组元素设置值
	void find_max();             //找出数组中的最大元素
	void find_value(int num,const char way);//输出大于或小于num的元素
	void show_max();            //输出最大值
	void sorted(const int way=0,int l=0,int r=100);//按方式排序
private:
	int *array;                //整型数组
	int max;                   //max用来存放最大值
	int count;                  //数组元素的个数
};