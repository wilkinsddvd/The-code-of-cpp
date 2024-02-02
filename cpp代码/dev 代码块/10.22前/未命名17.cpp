#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double pi = 3.14159;
	double r;
	double jing,chang,mian;
	cin>>r;
	if(r>0&&r<=10000)
	{
		jing = 2*r;
		chang = 2*r*pi;
		mian = pi*r*r;
		cout<<fixed<<setprecision(4)<<jing<<" "<<chang<<" "<<mian<<endl;
	}
	return 0;
}
