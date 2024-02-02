#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

int a[N],b[N];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	bool flag = 0;
	for(int i=0,j=0;i<n;i++,j++)
		if(j>=m)
			flag = 1;
	if(flag) 
		cout<<"No";
	else
		cout<<"Yes";
}
