#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,s1;
	getline(cin,s);
	reverse(s.begin(),s.end());
	for(int i=1;i<=s.length();i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i] += 32;
	}
	cout<<s;
}
