class Pizza
{
public:
	Pizza(char ifavor,int isize,float inumber):favor(ifavor),size(isize),number(inumber),price(20){}
	void show();
	void sale();
private:
	char favor;
	unsigned int size;//�ߴ�
	float number;//����
	unsigned int price;
};