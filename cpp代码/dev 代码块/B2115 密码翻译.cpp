#include<bits/stdc++.h>
using namespace std;
string s;
int n;

int main(){

	getline(cin,s);
	n = s.length();
	for(int i = 0;i < n;i++){
		if((s[i]>='b'&& s[i]<='z')||s[i]>='B'&&s[i]<='Z')
			s[i]--;
		else if(s[i]=='a')
			s[i]='z';
		else if(s[i]=='A')
			s[i]='Z';
		else if(s[i]<'a'||s[i]>'Z')
			s[i] = s[i];
		cout<<s[i];
	}
	return 0;
}
