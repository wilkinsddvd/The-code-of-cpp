#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(!(i%7==0||i%10==7||i/10%10 == 7))
			ans+=i*i;
	}
	cout<<ans;
}
