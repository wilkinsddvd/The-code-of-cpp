#include<bits/stdc++.h>
using namespace std;

long long n;

bool isprime(int num){
	if(num == 2)
		return true;
	if(num%2 == 0|| num<2)
		return false;
	else{
		for(int i=3;i*i <= num;i+=2){
			if(num%i == 0){
				return false;
			}
		}
		return true;
	}
}

int main(){
	int x;
	cin>>x;
	int a[n];
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<a[x];j++){
			if(isprime(j)==1){
				cnt++;
			}
		}
	} 
	cout<<cnt;
	return 0;
}
