#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double xa,xb,xc,ya,yb,yc,a,b,c,full,result;

int main()
{
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	a=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	b=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
	c=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	full=(a+b+c)/2;
	result=sqrt(full*(full-a)*(full-b)*(full-c));
	cout<<fixed<<setprecision(2)<<result<<endl;
	return 0;		
} 
