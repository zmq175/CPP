#include <string>
using namespace std;
class Pizza
{
public:
	Pizza(char ifavor='f',int isize=4,float inumber=1);
	Pizza(const string &str);
	void show();
	void sale();
private:
	char favor;
	unsigned int size;//�ߴ�
	float number;//����
	unsigned int price;
};