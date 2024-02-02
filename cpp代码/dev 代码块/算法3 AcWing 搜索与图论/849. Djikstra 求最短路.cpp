#include<iostream>
#include<cstring>
using namespace std;

const int N = 510;
int g[N][N];
bool vis[N];
int d[N],n,m;

int dijkstra(){
	memset(d,0x3f,sizeof d);
	
	d[1] = 0;
	
	for(int i=1;i<=n;i++){
		int t = -1;
		for(int j=1;j<=n;j++){
			if(!vis[j] && (t == -1 || d[t] > d[j])) 
				t = j;
		} 
		vis[t] = true;
		
		for(int j=1;j<=n;j++)
			d[j] = min(d[j],d[t] + g[t][j]);
	}
	return d[n] == 0x3f3f3f3f ? -1 : d[n];
}

int main(){
	cin>>n>>m;
	memset(g,0x3f,sizeof g);
	
	while(m--){
		int x,y,z;
		cin>>x>>y>>z;
		// »•÷ÿ±ﬂ
		g[x][y] = min(g[x][y],z); 
	}
	cout<<dijkstra()<<endl;
	
	return 0;
}
