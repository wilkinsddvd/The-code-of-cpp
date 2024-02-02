#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

double n,xa,ya,xb,yb;

int main()
{
	cin>>xa>>ya>>xb>>yb;
	n=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("%.3lf",n);
	return 0; 
}
