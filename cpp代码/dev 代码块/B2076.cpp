#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double height,hh;
	cin>>n;
	height = hh = n;
	for(int i=2;i<=10;i++){
		hh/=2;
		height+=hh*2;
	}
	cout<<height<<endl;
	cout<<hh/2<<endl;
	return 0;
}
