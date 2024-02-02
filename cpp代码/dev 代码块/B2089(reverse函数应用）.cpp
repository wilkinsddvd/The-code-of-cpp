#include<bits/stdc++.h>

using namespace std;

int a[150];
int length;

int main(){
	cin>>length;
	for(int i=1;i<=length;i++){
		cin>>a[i];
	} 
	for(int i=length;i>=1;i--){
		cout<<a[i]<<" ";
	}
	return 0;
} 
