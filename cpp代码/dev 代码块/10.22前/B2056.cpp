#include<iostream>
#include<iomanip>
using namespace std;

double n;
double average;
int c,s;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		s+=c;
		average = s/n;
	}
	cout<<s<<" ";
	cout<<fixed<<setprecision(5)<<average;
	return 0;
}
