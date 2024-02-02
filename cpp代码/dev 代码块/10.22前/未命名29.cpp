#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	double pi = 3.14;
	double V;
	double r;
	cin>>r;
	if(r>=1&&r<=100)
	{
		cout<<fixed<<setprecision(5)<<r*r*r*pi*4/3<<endl;
	}
}
