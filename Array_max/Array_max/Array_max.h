class Array_max
{
public:
	Array_max(int size=10,int value=0);
	void set_value();             //������Ԫ������ֵ
	void find_max();             //�ҳ������е����Ԫ��
	void find_value(int num,const char way);//������ڻ�С��num��Ԫ��
	void show_max();            //������ֵ
	void sorted(const int way=0,int l=0,int r=100);//����ʽ����
private:
	int *array;                //��������
	int max;                   //max����������ֵ
	int count;                  //����Ԫ�صĸ���
};