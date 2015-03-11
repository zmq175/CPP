class Pizza
{
public:
	Pizza(char ifavor,int isize,float inumber):favor(ifavor),size(isize),number(inumber),price(20){}
	void show();
	void sale();
private:
	char favor;
	unsigned int size;//³ß´ç
	float number;//¸öÊý
	unsigned int price;
};