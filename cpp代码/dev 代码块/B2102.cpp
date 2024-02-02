#include<bits/stdc++.h>
using namespace std;

int mapp[6][6];

int main(){
	int ans=0;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>mapp[i][j];
		}
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			bool flag = 0;
			for(int x=1;x<=5;x++){
				if(mapp[x][j]<mapp[i][j]){
					flag=1;
					break;
				}
			}
			for(int x=1;x<=5;x++){
				if(mapp[i][x]>mapp[i][j]){
					flag=1;
					break;
				}
			}
			if(!flag){
				ans++;
				cout<<i<<" "<<j<<" "<<mapp[i][j]<<"\n";
			}
		}
	}
	if(ans==0){
		cout<<"not found";
	}
	return 0;
}
