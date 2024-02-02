#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int n,ans;
	cin>>n>>a>>b>>c;
	if(n<=3){
		ans = min(a,b);
		ans = min(ans,c);
		if(ans == a){
			cout<<"library";
		}
		if(ans == b){
			cout<<"comprehensive";
		}
		if(ans == c){
			cout<<"art";
		}
	}
	if(n>3 && n<= 5){
		ans = min(b,c);
		if(ans == b){
			cout<<"comprehensive";
		}
		if(ans == c){
			cout<<"art";
		}
	}
	if(n>5 && n<=9){
		cout<<"art";
	}
	return 0;
}
