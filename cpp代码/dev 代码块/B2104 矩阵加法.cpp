#include<bits/stdc++.h>
using namespace std;

int A[101][101],B[101][101];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>A[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>B[i][j];
			A[i][j]+=B[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<A[i][j]<<" ";
			if(j==m)cout<<endl;
		}
	}
	return 0;
}
