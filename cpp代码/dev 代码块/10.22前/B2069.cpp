#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double a=1,b=1,c,s=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		c=a+b;
		a=b;
		b=c;
		s=s+b/a;
	}
	cout<<fixed<<setprecision(4)<<s;
	return 0; 
}
