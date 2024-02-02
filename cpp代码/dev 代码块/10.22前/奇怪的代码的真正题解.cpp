#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a;
	cin>>a;
	if(a<=150)
	{
		cout<<setprecision(1)<<fixed<<a*0.4463<<endl;
	}
	else if(a>150 && a<=400)
	{
		cout<<setprecision(1)<<fixed<<150.0*0.4463+(a-150)*0.4663<<endl;
	}
	else
	{
		cout<<setprecision(1)<<fixed<<150.0*0.4463+(400-150)*0.4663+(a-400)*0.5663<<endl;
	}
	return 0;
}
