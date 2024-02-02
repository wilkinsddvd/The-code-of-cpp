#include<iostream>
using namespace std;

const int N = 100010;
int n,k;
int a[N];

int quick_select(int l,int r,int k){
	if(l>=r) return a[l];
	int x = a[l];
	int i=l-1,j=r+1;
	while(i<j){
		while(a[++i]<x);
		while(a[--j]>x);
		if(i<j) swap(a[i],a[j]);
	} 
	int sl = j-1+1;
	if(k<=sl) return quick_select(l,j,k);
	else return quick_select(j+1,r,k-sl);
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	cout<<quick_select(0,n-1,k)<<endl;
	return 0;
}
