#include<iostream>
#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;
double a,b,c;

int main()
{
	cin>>a>>b>>c;
	double delta=b*b-4*a*c;
	if(delta>0)
	{
		double x1=(-b+sqrt(delta))/(2*a);
		double x2=(-b-sqrt(delta))/(2*a);
		if(x1>x2)
		{
			swap(x1,x2);
		} 
		cout<<fixed<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2; 
	}
	else if(delta==0)
	{
		double x1=(-b+0)/(2*a);
		double x2=(-b-b)/(2*a);
		cout<<"x1=x2="<<x1<<endl;
	} 
	else
	{
		cout<<"No answer!";
	}
	return 0;
}
