// 这题有坑，得用递归，暴力不行

#include<bits/stdc++.h>
using namespace std;

int f(int n){
	if(n==1) return 1;
	return f(n-1)+n;
}

int main(){
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
} 
