#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>

using namespace std;

int main()
{
	double a,b,r;
	int k;
	cin>>a>>b;
	k = a/b;
	r = a - k * b;
	cout<<r; 
	return 0;
}
