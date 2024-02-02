#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,ans;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			ans = n/i;
			cout<<ans;
			break; 
		}
	}
}
