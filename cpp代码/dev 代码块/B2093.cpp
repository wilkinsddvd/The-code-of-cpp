#include<bits/stdc++.h>
using namespace std;

int n,a[10001]={0},x;

int main(){
	bool flag = false;
	cin>>n;
	for(int i=0;i<=n-1;i++)
		cin>>a[i];
	cin>>x;
	for(int i=0;i<=n-1;i++){
		if(a[i]==x){
			cout<<i;
			flag = true;
			break;
		}
	}
	if(flag == false)
		cout<<-1;
	return 0;
}
