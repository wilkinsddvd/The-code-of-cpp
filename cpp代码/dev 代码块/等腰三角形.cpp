#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int l;
	l = 180-n-m;
	if(n==l||n==m||l==m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
