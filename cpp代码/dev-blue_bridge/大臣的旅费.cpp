#include<bits/stdc++.h>
using namespace std;

const int N = 100010;
int n;

struct edge{
	int id,w;
};

vector<edge> h[N];

int dist[N];

void dfs(int u,int father,int distance){
	dist[u] = distance;
	for(auto node:h[u]){
		if(node.id!=father){
			dfs(node.id,u,distance+node,w);
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b,c;
		cin>>a>>b>>c;
		h[a].push_back({b,c});
		h[b].push_back({a,c});
	}
	dfs(1,-1,0);
	int u=1;
	for(int i=1;i<=n;i++){
		if(dist[i]>dist[u]){
			u=i;
		}
	}
	int s = dist[u];
	printf("%lld",10*s+s*(s+111)/2);
	return 0;
}
