#include<bits/stdc++.h>
using namespace std;

string p,q,r;

long long change(string s,int num){
	int r = s.length();
	long long sum = 0;
	for(int i=0;i<r;i++){
		sum += (s[i] - '0') * pow(num,r-i-1);
	}
	return sum;
}

int get_max(string s){
	char m = '0';
	for(int i=0;i<s.length();i++){
		m = max(s[i],m);
	}
	return m-'0';
}

int main(){
	cin>>p>>q>>r;
	int h=1;
	int m = max(get_max(p),max(get_max(q),get_max(r)));
	for(int i=m+1;i<=16;i++){
		long long p1 = change(p,i);
		long long q1 = change(q,i);
		long long r1 = change(r,i);
		if(p1 * q1 == r1){
			cout<<i;
			h = 0;
			break;
		}
	}
	if(h)
		cout<<0;
	return 0;
}
