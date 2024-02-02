#include<iostream>
#include<cstring>
using namespace std;

const int N = 100010;
int h[N],e[N],ne[N],idx;
int q[N],in[N],hh,tt=-1;
int n,m;

void add(int a,int b){
	e[idx] = b,ne[idx] = h[a],h[a] = idx++;
}

bool topsort(){
	// 将所有入度为0的点入队
	for(int i=1;i<=n;i++)
		if(!in[i]) q[++tt] = i;
	
	while(hh <= tt){
		int t = q[hh++];
		for(int i=h[t];i!=-1;i=ne[i]){
			int j =e[i];
			// 去一条边 入度-1
			in[j]--;
			// 入度为0 入队
			if(!in[j]) q[++tt] = j; 
		} 
	} 
	return tt == n-1;
}

int main(){
	cin>>n>>m;
	
	memset(h,-1,sizeof h);
	
	while(m--){
		int a,b;
		cin>>a>>b;
		add(a,b);
		// 点b的入度+1
		in[b]++; 
	}
	if(topsort()){
		// 拓扑序列就是队列的顺序
		for(int i=0;i <= tt;i++) 
			cout<<q[i]<<' ';
		cout<<endl; 
	}else{
		cout<<-1;
	}
	return 0;
}
