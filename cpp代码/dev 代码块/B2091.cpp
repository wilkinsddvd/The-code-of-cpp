#include<bits/stdc++.h>
using namespace std;

int length;
int a[1001];
int b[1001];
int ans;

int main(){
	cin>>length;
	for(int i=1;i<=length;i++){
		cin>>a[i];
	}
	for(int i=1;i<=length;i++){
		cin>>b[i];
	}
	for(int i=1;i<=length;i++){
		ans+=a[i]*b[i];
	}	
	cout<<ans<<endl;
	return 0;
}
