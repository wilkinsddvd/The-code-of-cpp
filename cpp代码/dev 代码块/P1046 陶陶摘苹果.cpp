#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[11],n,cnt=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>n;
	n = n+30;
	for(int i=0;i<10;i++){
		if(a[i]<=n){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
