#include<bits/stdc++.h>
using namespace std;

int main(){
	bool a[1001]={0};
	int n,i,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[x]=1;
	}
	n=0;
	for(i=1;i<=1000;i++){
		if(a[i]==1) n++;
	}
	cout<<n<<endl;
	for(i=1;i<=1000;i++){
		if(a[i]==1) cout<<i<<" ";
	}
	return 0;
} 
