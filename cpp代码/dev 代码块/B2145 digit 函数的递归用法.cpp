#include<iostream>
#include<cmath>

using namespace std;

int digit(int n,int k){
	return n/int(pow(10,k-1))%10;
}

int n,k;

int main(){
	cin>>n>>k;
	cout<<digit(n,k);
}
