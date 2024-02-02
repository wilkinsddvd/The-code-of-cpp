#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans;
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			if(j<=i){
				ans = i*j;
				cout<<j<<"*"<<i<<"="<<ans<<" ";
			}

		}
	cout<<endl;}
}
