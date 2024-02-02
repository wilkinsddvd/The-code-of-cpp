#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			ans = pow(i,j); 
			if(i>=j){
				cout<<i<<" ^ "<<j<<" = "<<ans<<" ";
			}	
		}
		cout<<endl;
	}
	return 0;
	
}
