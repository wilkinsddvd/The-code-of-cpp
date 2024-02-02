#include<bits/stdc++.h>
using namespace std;

bool vis[25][25];
long long step[25][25];

int main(){
	step[1][1] = 1;
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	n++;
	m++;
	x++;
	y++;
	
	vis[x][y] = 1;
	vis[x-2][y-1] = 1;
	vis[x-2][y+1] = 1;
	vis[x+2][y-1] = 1;
	vis[x+2][y+1] = 1;
	vis[x-1][y+2] = 1;
	vis[x-1][y-2] = 1;
	vis[x+1][y+2] = 1;
	vis[x+1][y-2] = 1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if((i!=1||j!=1) && !vis[i][j])
				step[i][j] = step[i-1][j] + step[i][j-1];
	cout<<step[n][m];
	return 0;				
}
