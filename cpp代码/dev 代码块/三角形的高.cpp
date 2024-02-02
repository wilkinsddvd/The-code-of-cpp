#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int s,p;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c))*2;
	int ans;
	ans = s/c;
	cout<<ans;
	return 0;
}
