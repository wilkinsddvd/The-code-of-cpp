#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>PII;

const int N = 100010;

int h[N],e[N],ne[N],w[N],idx;
int d[N];
bool st[N];
int n,m;

void add(int a,int b,int c){
	e[idx] = b,w[idx] = c,ne[idx] = h[a],h[a] = idx++;
}

int dijkstra(){
	memset(d,0x3f,sizeof(d));
	d[1] = 0;
	priority_queue<PII,vector<PII>,greater<PII>>heap;
	// 第一关键字为距离，默认以第一关键字排序
	
	heap.push({0,1});
	
	while(heap.size()) {
		auto t = heap.top();
		heap.pop();
		int v = t.second;
		// 找未被访问的点
		
		if(st[v]) continue;
		st[v] = true;
		
		for(int i=h[v];i!=-1;i=ne[i]){
			int j = e[i];
			// 更新最短路径
			if(d[j]>d[v]+w[i]){
				d[j] = d[v]+w[i];
				heap.push({d[j],j});
			} 
		} 
	}
	return d[n] == 0x3f3f3f3f ? -1 : d[n];
}

int main(){
	cin>>n>>m;
	memset(h,-1,sizeof h);
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		add(a,b,c);
	}
	cout<<dijkstra()<<endl;
	return 0;
	
}
