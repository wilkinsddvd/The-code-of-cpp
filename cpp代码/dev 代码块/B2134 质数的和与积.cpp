#include<bits/stdc++.h>
using namespace std;

int ip(int x){
	if(x==1) return false;
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;	 
}

int main(){
	int n;
	cin>>n;
	for(int i=n/2-1;;i++){
		if(ip(i) && ip(n-i)){
			cout<<i*(n-i);
			return 0;
		}
	} 
	return 0;
}
