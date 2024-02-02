#include<bits/stdc++.h>
using namespace std;

int n,a[20010],num[110];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]++;
		if(num[a[i]]<2)
			cout<<a[i]<<" ";
	}
	return 0;
}
