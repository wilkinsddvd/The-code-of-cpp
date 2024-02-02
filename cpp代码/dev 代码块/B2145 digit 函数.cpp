#include<bits/stdc++.h>
using namespace std;

string s;
int k;

int main(){
	cin>>s>>k;
	int length = s.length();
	for(int i=length;i>0;i--){
		if(i==k){
			cout<<s[length-k];
		}
	}
	return 0;
}
