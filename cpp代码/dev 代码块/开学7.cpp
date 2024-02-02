#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b;
	cin>>a>>b;
	int sum;
	sum = a+b;
	int ans;
	ans = sum%7;
	if(ans == 0)
	{
		cout<<"7";
		return 0;
	}
	cout<<ans;
	return 0;
}
