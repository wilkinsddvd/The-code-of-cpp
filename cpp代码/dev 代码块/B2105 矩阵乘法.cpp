#include<bits/stdc++.h>
using namespace std;

int a[110][110],b[110][110],c[110][110],m,n,k;
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=k;j++) 
			cin>>b[i][j];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=k;j++)
			for(int l=1;l<=m;l++)
				c[i][j]+=a[i][l]*b[l][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++)
			cout<<c[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
