#include<bits/stdc++.h>
using namespace std;

string s[205],a,b;

char c;

int cur = 1;

int main(){
	cin>>s[1];
	while(getchar() == ' ')
		cin>>s[++cur];
	cin>>a>>b;
	for(int i=1;i<=cur;i++){
		if(s[i] == a)
			cout<<b;
		else
			cout<<s[i];
		cout<<' ';
	}
	return 0;
}
