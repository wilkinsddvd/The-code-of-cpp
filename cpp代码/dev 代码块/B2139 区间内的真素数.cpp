#include<bits/stdc++.h>
using namespace std;

int a,b,c[10005];

int ck(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

int cz(int n){
	int result = 0;
	while(n) result = result * 10 + n%10,n/=10;
	return result;
}

int main(){
	int count = 0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(ck(i) && ck(cz(i))) c[++count] = i;
	}
	for(int i=1;i<=count;i++){
		cout<<c[i];
		if(i!=count) cout<<",";
	}
	if(count == 0) cout<<"No";
	return 0;
}
