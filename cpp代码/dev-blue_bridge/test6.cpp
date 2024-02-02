#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,ans;
	cin>>n>>m;
	while(m>7){
		m-=7;
	}
	if(m<7&&n+m>7){
		ans=m+n-7;
	} 
	if(m<7&&n+m<7){
		ans=m+n;
	}
	cout<<ans;
}
