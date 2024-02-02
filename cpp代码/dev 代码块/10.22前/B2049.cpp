#include<bits/stdc++.h>
using namespace std;

int a,b,c,ans;

int main()
{
	cin>>a>>b>>c;
	ans=max(a,b);
	ans=max(ans,c);
	cout<<ans;
	return 0;
}
