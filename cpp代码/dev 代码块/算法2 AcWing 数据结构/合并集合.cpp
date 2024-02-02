#include<iostream>
using namespace std;

const int N = 100005;
int p[N];
int n,m;

//查询祖宗节点 
int find(int x){
	// 路径压缩
	if(p[x] != x) p[x] = find(p[x]);
	return p[x]; 
}

//合并集合
void merge(int a,int b){
	//同一个祖先 不需要合并 
	if(find(a) == find(b)) return;
	p[find(a)] = find(b);
} 

int main(){
	cin>>n>>m;
	//初始化并查集
	for(int i = 1;i<=n;i++) p[i] = i;
	
	while(m--){
		char op[2];
		int a,b;
		
		cin>>op>>a>>b;
		if(op[0] == 'M') merge(a,b);
		else cout<<(find(a) == find(b)?"Yes":"No")<<endl;
	}
}
