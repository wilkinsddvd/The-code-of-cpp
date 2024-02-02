#include<iostream>
#include<iomanip>
using namespace std;

float n;

int main()
{
	cin>>n;
	if(n<0)
		cout<<fixed<<setprecision(2)<<-n;
	else
		cout<<fixed<<setprecision(2)<<n;
	return 0;
} 
