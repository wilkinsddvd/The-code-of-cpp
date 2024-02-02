#include<bits/stdc++.h>
using namespace std;

double x;

inline double f(int n)
{
	if(n==1) return x/(1+x);
	return x/(n+f(n-1));
}

int main(){
	int n;
	cin>>x>>n;
	cout<<fixed<<setprecision(2)<<f(n);
	return 0;
}
