#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,a[110],sum=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<=m)
			m-=a[i];
		else
			sum++;
	}
	cout<<sum<<endl;
	return 0;
} 
