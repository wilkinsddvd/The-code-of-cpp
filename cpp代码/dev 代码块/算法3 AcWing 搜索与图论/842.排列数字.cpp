#include<iostream>
using namespace std;

int vis[10],a[10];

void dfs(int step,int n){
	if(step == n+1){
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			a[step] = i;
			vis[i] = 1;
			dfs(step+1,n);
			vis[i] = 0;
		}
	}
}

int main(){
	int n;
	cin>>n;
	dfs(1,n);
	return 0;
}
