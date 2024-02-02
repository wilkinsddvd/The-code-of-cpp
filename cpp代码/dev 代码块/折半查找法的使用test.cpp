#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[N];
const int N = 100010;

int quick_sort(int q[],int left,int right,int k){
	int mid = (left+right)>>1;
	while(left<right){
		if(k==q[mid]) cout<<mid<<'\n'<<k; return;
		if(k<q[mid]) cout<<q[mid];right = mid-1; quick_sort(q[],left,right,k);
		if(k>q[mid]) cout<<q[mid];left = mid+1; quick_sort(q[],left,right,k);
	}
	return -1;
}

bool check(i)
	if(i==-1){
		cout<<"no"; 
	}
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>k;
	quick_sort(a[],0,)
	
	
}
