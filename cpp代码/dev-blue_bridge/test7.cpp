//第八题 



//0,H       W,H




//0,0       W,0


#include<bits/stdc++.h>
using namespace std;

#define W 101
#define H 101

int a[W][H];

int main(){
	int n,m,times,r1,r2,c1,c2,cnt;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[W][H]=a[i][j]=1; 
			cin>>times;
			for(int k=1;k<=times;k++){
				cin>>r1>>c1>>r2>>c2;
				for(int p=r1;p<=r2;p++){
					for(int q=c1;q<=c2;q++){
						a[p][q]=0;
					}
				}	
			}
		}
	}
	for(int x=1;x<=n;x++){
		for(int y=1;y<=m;y++){
			if(a[x][y]=1){
				cnt++; 
			}
		}
	}
	cout<<cnt;
}
//第八题 
