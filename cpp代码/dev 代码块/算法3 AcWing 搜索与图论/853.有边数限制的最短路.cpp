#include<bits/stdc++.h>
using namespace std;

const int N = 510,M = 100010;

int d[N],backup[N];
struct Edge{
	int a,b,w;
}edges[M];

int n,m,k;
bool f;

int bellman_ford(){
	memset(d,0x3f,sizeof d);
	d[1] = 0;
	
	for(int i=0;i<k;i++){
		memcpy(backup,d,sizeof d);
		for(int j=0;j<m;j++){
			int a = edges[j].a,b = edges[j].b,w = edges[j].w;
			d[b] = min(d[b],backup[a]+w); 
		}
	}
	if(d[n]>0x3f3f3f3f/2) f = true;
	return d[n];
}

int main(){
	cin>>n>>m>>k;
	
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		edges[i] = {x,y,z};
	}
	int t = bellman_ford();
	if(f) 
		puts("impossible");
	else
		cout<<t<<endl;
	return 0;
}
