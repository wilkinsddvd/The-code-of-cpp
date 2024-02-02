#include<bits/stdc++.h>
using namespace std;

int a;
double b,c;

int main()
{
	cin>>a;
	b=a/1.2;
	c=a/3.0+27.0+23.0;
	if(c>b)
		cout<<"Walk";
	else if(b>c)
		cout<<"Bike";
	else
		cout<<"All";
	return 0;
}
