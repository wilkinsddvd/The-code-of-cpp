// n-皇后问题
// 第一种搜索顺序

#include<iostream>
using namespace std;

const int N = 20;
bool col[N],dg[N],udg[N];
int n;
char g[N][N];

void dfs(int u){
	if(u == n){
		for(int i=0;i<n;i++) puts(g[i]);
		puts("");
		return;
	}
	for(int i=0;i<n;i++){
		if(!col[i] && !dg[i+u] && !udg[n+i-u]){
			g[u][i] = 'Q';
			col[i] = dg[i+u] = udg[n+i-u] = true;
			dfs(u+1);
			col[i] = dg[i+u] = udg[n+i-u] = false;
			g[u][i] = '.';
		}
	}
} 

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			g[i][j] = '.';
			
	dfs(0);
	return 0;
}
