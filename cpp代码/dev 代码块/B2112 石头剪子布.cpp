#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		if(a[0]==b[0]) cout<<"Tie\n";
		else if(a[0]=='R'){
			if(b[0]=='P') cout<<"Player2\n";
			else cout<<"Player1\n";
		}	
		else if(a[0]=='P'){
			if(b[0]=='S') cout<<"Player2\n";
			else cout<<"Player1\n";
		}
		else if(a[0]=='S'){
			if(b[0]=='R') cout<<"Player2\n";
			else cout<<"Player1\n";
		}
	}
	return 0;
}
