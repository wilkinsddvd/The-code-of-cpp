#include<iostream>
#include<cstring>
using namespace std;

typedef pair<int,int>PII;

const int N = 110;

int g[N][N],d[N][N];
int hh,tt=-1,n,m;
PII q[N*N];

int bfs(){
	q[++tt] = {0,0};
	d[0][0] = 0;
	
	int dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1};
	
	while(hh <= tt){
		PII t = q[hh++];
		for(int i=0;i<4;i++){
			int x = t.first + dx[i], y = t.second + dy[i];
			// 防止越界 当前位置距离为-1 无障碍时 更新距离
			if(x >= 0 && x<n && y>=0 && y<m && g[x][y] == 0 && d[x][y] == -1){
				d[x][y] = d[t.first][t.second] + 1;
				q[++tt] = {x,y};
			} 
		}
	}
	return d[n-1][m-1];
}

int main(){
	cin>>n>>m;
	
	memset(d,-1,sizeof d);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>g[i][j];
	
	cout<<bfs()<<endl;
	return 0;
}
