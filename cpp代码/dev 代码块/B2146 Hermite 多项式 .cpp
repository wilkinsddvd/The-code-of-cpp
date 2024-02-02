#include<bits/stdc++.h>
using namespace std;

int x;

int h(int n){
	if(n==0) return 1;
	else if(n==1) return 2*x;
	else return 2*x*h(n-1)-2*(n-1)*h(n-2);
}

int main(){
	int n;
	cin>>n>>x;
	cout<<h(n);
	return 0;
}
