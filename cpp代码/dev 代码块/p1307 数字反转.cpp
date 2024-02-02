#include<bits/stdc++.h>
using namespace std;

int n,k;
int turn(int n);

int turn(int n){
	while(n){
		k = k*10+n%10;
		n/=10;
	}
	return 0;
}

int main(){
	cin>>n;
	turn(n); 
	cout<<k<<endl;
	return 0;
}
