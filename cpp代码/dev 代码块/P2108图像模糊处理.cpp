#include<bits/stdc++.h>
using namespace std;

int n,m;
double a[101][101],b[101][101];

int floorb(int i,int j){
	return floor((a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1]+a[i][j])*1.0/5+0.5);
}


int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int i=2;i<n;i++){
		for(int j=2;j<m;j++){
			b[i][j]=floorb(i,j);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
