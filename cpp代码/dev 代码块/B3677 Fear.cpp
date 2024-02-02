#include<bits/stdc++.h>
using namespace std;

bool jiou(int x){
	if(x%2!=0) return 1;
	return 0;
}

bool zhengfu(int x,int y){
	if(x<0 && y%2==0){
		return 0;
	}else if(x<0 && y%2!=0){
		return 1;
	}
	if(x>=0){
		return 0;
	}
}

int main(){
	int y0,t,ans;
	cin>>y0>>t;
	ans = y0; 
	if(t==0){
		y0 = 1;
	}
	if(t==1){
		y0 = y0;
	}
	if(zhengfu(y0,t) == 1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	if(jiou(abs(y0))) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;;
	return 0;
}

