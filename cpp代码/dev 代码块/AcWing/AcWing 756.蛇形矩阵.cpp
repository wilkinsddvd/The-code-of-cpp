#include<iostream>
using namespace std;

int main(){
	int N = 110;
	int q[N][N];
	int n,m,x=0,y=0,d=1;
	int dy[] = {0,1,0,-1};
	int dx[] = {-1,0,1,0};
	cin>>n>>m;
	
	for(int i=1;i<n*m;i++){
		q[x][y] = i;
		int a=x+dx[d],b = y+dy[d];
		if(a<0 || a>=n || b<0 || b>=m || q[a][b]){
			d = (d+1)%4;
			a = x+dx[d],b = y+dy[d];
		}
		x=a,y=b;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<q[i][j]<<" ";
		cout<<endl;
	}
	return 0;
} 
