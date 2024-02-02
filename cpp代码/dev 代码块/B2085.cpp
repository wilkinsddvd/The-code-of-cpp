#include<bits/stdc++.h>
using namespace std;

int n,now=1;

bool check(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return 0;
	}
	return 1;
}

int main(){
	cin>>n;
	while(n!=0){
		now++;
		if(check(now)){
			n--;
		}
	}
	cout<<now;
	return 0;
}
