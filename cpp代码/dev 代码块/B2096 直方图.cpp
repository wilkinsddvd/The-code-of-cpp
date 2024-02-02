#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int n,fmaxx,x;
int f[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		f[x]++;
		fmaxx = max(fmaxx,x);
	}
	for(int i=0;i<=fmaxx;i++){
		cout<<f[i]<<endl;
	}
	return 0;
}
