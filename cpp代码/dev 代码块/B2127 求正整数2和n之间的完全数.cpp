#include<bits/stdc++.h>
using namespace std;

int n,i;

int anyu(int s){
	int g = 0,i;
	for(i=1;i<s;i++){
		if(s%i==0){
			g+=i;
		}
	}
	return g;
}

int main(){
	cin>>n;
	for(i=6;i<=n;i++){
		if(anyu(i) == i)
			cout<<i<<endl; 
	}
	return 0;
}
