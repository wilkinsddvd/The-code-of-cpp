#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	double x1,x2,y1,y2;
	cin>>x1>>x2>>y1>>y2;
	double result;
	result=sqrt(pow(abs(x1-x2),2)+pow(abs(y1-y2),2));
	cout<<fixed<<setprecision(3)<<result;
	return 0;	
} 

