#include <iostream>
#include <cmath>
using namespace std;
//=====================================================
void print(int I);
int main()
{
	//f0403 start
	/*double d1=123456789.9*9;
	double d2=1111111109.1;
	cout<<(d1==d2?"same\n":"not same\n");
	cout<<(abs(d1-d2)<1e-05?"same\n":"not same\n");
	cout.precision(9);
	cout<<fixed<<d1<<"\n"<<d2<<"\n";*/
	//f0403 end
	//f0407 start
	for (int I=0;I<32;++I)
	{
		bool A=I&16,B=I&8,C=I&4,D=I&2,E=I&1;
		if(A&&!B)
			continue;
		if(!D&&!E)
			continue;
		if(B==C)
			continue;
		if(C!=D)
			continue;
		if(E&&!(A&&B))
			continue;
		print(I);
	}
}
//=====================================================
void print(int I)
{
	cout<<(I&16?" A ":"~A ")
		<<(I&8?" B ":"~B ")
		<<(I&4?" C ":"~C ")
		<<(I&2?" D ":"~D ")
		<<(I&1?" E ":"~E ")<<"\n";
}