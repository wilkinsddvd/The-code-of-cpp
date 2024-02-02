#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	double ans;
	cin>>a>>b>>c;
	double p = (a+b+c)/2.0;
	ans = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<fixed<<setprecision(1)<<ans;
	return 0;
}
