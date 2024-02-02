#include<iostream>
#include<iomanip>
using namespace std;

double a,total;
int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		total+=a;
	}
	cout<<fixed<<setprecision(2)<<total/n;
	return 0;
}
