#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	b = a;
	reverse(a.begin(),a.end());
	
	if(a==b) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
