#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,a;
	cin>>s;
	int l = s.length();
	s += s[0];
	for(int i=0;i<l;i++){
		a[i]=s[i]+s[i+1];
	}
	for(int i=0;i<l;i++){
		cout<<a[i];
	}
	return 0; 
}
