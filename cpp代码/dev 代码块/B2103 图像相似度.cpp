#include<bits/stdc++.h>
using namespace std;

int a[105][105],m,n;
double ans;

int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			int b;
			cin>>b;
			if(a[i][j]==b)
				ans++;
		}
	cout<<fixed<<setprecision(2)<<ans/(m*n)*100;
	return 0;
}
