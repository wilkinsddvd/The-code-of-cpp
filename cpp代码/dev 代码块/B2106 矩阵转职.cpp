#include<bits/stdc++.h>
using namespace std;

int a[101][101];
int n,m;
int main(){
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			a[j][i]=a[i][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			cout<<a[j][i]<<" ";
			if(j==n){
				cout<<endl;
			} 
		}
	return 0;
}
