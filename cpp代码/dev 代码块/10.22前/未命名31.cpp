#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int h,r,a;
int main()
{
	cin>>h>>r;
	a=20000/(3.14*r*r*h)+1;
	cout<<a;
	return 0;	
} 
