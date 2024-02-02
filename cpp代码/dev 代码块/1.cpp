#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2==0){
		n=n*3;
	}
	if(n%2!=0){
		n=n*2;
	}
	cout<<n;
}
