#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		int ans=0;
		for(int j=1;j<=m;j++){
			int input;
			cin>>input;
			ans+=input;
		} 
		cout<<ans<<endl;
	}
}
