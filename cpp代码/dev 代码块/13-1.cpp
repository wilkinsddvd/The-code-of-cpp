#include<iostream>
#define MAXN 1000010
using namespace std;

int a[MAXN],m,n,q;
int find(int x){
	int l=1,r=n;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == x) return mid;
		else if(a[mid]>x) r=mid-1;
		else l = mid+1;
	}
	return -1;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i)
		cin>>a[i];
	for(int i=0;i<m;++i){
		cin>>q;
		cout<<find(q)<<" ";
	}
	return 0; 
}
//输出不太对    1 3 -1
// 要求的输出是 1 2 -1 
