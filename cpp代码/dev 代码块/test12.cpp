#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[205],i,n,max;
	cin>>n;
	max = a[0];
	for(i=0;i<n-1;i++){
		sort(a[i],a[i+1]);
	}
	cout<<a[n];
	
	return 0;
}

void sort(int a,int b){
	int temp;
	if(b>a){
		temp = b;
		b = a;
		a = temp;
	}else{
		a = a;
		b = b;
	}
}
