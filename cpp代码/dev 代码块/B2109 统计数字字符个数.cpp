#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt=0;
	string s;
	getline(cin,s);
	for(int i=0;i<=s.length()-1;i++){
		if(s[i]<='9'&& s[i]>='0')
			cnt++; 
	}
	cout<<cnt<<endl;
	return 0;
}
