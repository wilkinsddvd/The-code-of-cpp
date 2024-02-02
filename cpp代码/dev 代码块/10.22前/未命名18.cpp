#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double r1,r2;
	double R;
	cin>>r1>>r2;
	R = 1/(1/r1+1/r2);
	cout<<fixed<<setprecision(2)<<R<<endl;
	return 0;
}
