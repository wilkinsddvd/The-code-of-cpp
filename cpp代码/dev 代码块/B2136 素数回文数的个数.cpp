#include<bits/stdc++.h>
using namespace std;

bool Isprime(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i == 0) return false;
	return true;
}

bool Isreverse(int n){
	int tmp = n,NEW = 0;
	while(tmp){
		NEW = NEW*10 + tmp %10;
		tmp /= 10;
	}
	return NEW == n;
}

int main(){
	int n,cnt = 0;
	cin>>n;
	for(int i=11;i<=n;i++)
	if(Isprime(i)&&Isreverse(i)) cnt++;
	cout<<cnt<<endl;
	return 0;	
} 
