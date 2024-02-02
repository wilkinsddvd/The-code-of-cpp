#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	s = "hello world";
	int l;
	l = s.length();
	for(int i=0;i<l;i++){
		int ans;
		ans = (int)s[i];
		ans = ans+1;
		
		cout<<(char)ans;
	}
}
