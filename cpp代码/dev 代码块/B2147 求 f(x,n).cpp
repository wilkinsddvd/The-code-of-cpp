#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,n;
	cin>>x>>n;
	double ans = x;
	for(int y=1;y<=n;y++)
	ans = sqrt(y+ans);
	cout<<fixed<<setprecision(2)<<ans;
	return 0;
}
