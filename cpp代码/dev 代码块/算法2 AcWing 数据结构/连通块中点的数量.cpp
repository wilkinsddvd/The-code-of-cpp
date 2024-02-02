#include<iostream>
using namespace std;

const int N = 100005;
int p[N],cnt[N];
int n,m;

//查询祖宗节点
int find(int x){
	//路径压缩
	if(p[x] != x) p[x] = find(p[x]);
	return p[x]; 
} 

//合并集合
void merge(int a,int b){
	//同一个祖先 不需要合并 
	if(find(a) == find(b)) return;
	// a的祖先的祖先是b的祖先 操作可以互换
	cnt[find(b)] += cnt[find(a)];
	p[find(a)] = find(b); 
} 

int main(){
	cin>>n>>m;
	
	//初始化并查集
	for(int i=1;i<=n;i++) p[i] = i,cnt[i] = 1;
	
	while(m--){
		char op[5];
		int a,b;
		cin>>op;
		if(op[0] == 'C'){
			cin>>a>>b;
			merge(a,b);
		}else if(op[1] == '1'){
			cin>>a>>b;
			cout<<(find(a) == find(b)?"Yes\n":"No\n");
		}else{
			cin>>a;
			cout<<cnt[find(a)]<<endl;
		}
	} 
	return 0;
}
