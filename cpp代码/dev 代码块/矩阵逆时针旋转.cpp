#include<bits/stdc++.h>
using namespace std;

int a[4][4],b[4][4];

int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cin>>a[i][j];
			b[j][i] = a[i][j];
		}
	}
	for(int i=4;i>=1;i--){
		for(int j=1;j<=4;j++){
			cout<<b[i][j]<<" "; 
		} 
		cout<<endl;
	}
	return 0;
}
