#include<bits/stdc++.h>
using namespace std;

const int maxN = 105;

char sixt[20] = "0123456789ABCDEF";

int n;

string m;

bool hw(string a){
	string s = a;
	reverse(s.begin(),s.end());
	return s == a;
}

string add(int k,string b){
	string a = b;
	reverse(a.begin(),a.end());
	int numa[maxN],numb[maxN],numc[maxN];
	int len = a.length(),lenc = 1;
	string ans;
	for(int i=0;i<len;i++){
		if(isdigit(a[i])) numa[len-i] = a[i] - '0';
		else numa[len-i] = a[i] - 'A' + 10;
		if(isdigit(b[i])) numb[len-i] = b[i]-'0';
		else numb[len-i] = b[i] - 'A' + 10;
	}
	int x = 0;
	while(lenc <= len){
		numc[lenc] = numa[lenc] + numb[lenc] + x;
		x = numc[lenc]/k;
		numc[lenc] %= k;
		lenc++;
	}
	numc[lenc] = x;
	while(numc[lenc] == 0) lenc--;
	for(int i=lenc;i>=1;i--)
		ans += sixt[numc[i]];
	return ans;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<=30;i++){
		if(hw(m)){
			cout<<"STEP="<<i;
			return 0;
		}
		else
			m = add(n,m);
	} 
	cout<<"Impossible";
	return 0;
}
