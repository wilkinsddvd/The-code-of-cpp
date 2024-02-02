#include<bits/stdc++.h>
using namespace std;

int a[10001];

int main(){
	int n,min;
	cin>>n;
	for(int i=2;i<=n;i++){
		cin>>a[i];
		min=min(a[i-1],a[i]);
		min=a[i];
		min=min(a[i],a[i+1]);
		cout<<min;
	}
	cout<<" ";
}
