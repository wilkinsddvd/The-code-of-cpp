#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,sum=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		sum += i;
		cout<<sum<<'\n';
	}
	return 0;
}
