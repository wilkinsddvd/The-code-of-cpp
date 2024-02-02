#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		int x[40];
		x[1]=x[2]=1;
		for(int i=3;i<=a;i++)
			x[i]=x[i-1]+x[i-2];
		cout<<x[a]<<endl;
	}
	return 0;
}
