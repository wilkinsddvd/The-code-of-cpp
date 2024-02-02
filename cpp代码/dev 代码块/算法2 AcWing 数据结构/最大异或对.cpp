#include<iostream>
#include<algorithm>

using namespace std;

const int N = 100010,M = 31*N;

int a[N],son[M][2];
int n,idx;

void insert(int x){
	int p = 0;
	for(int i=31;i>=0;i--){
		int u = x>>i&1;
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u];
	}
}

int query(int x){
	int p = 0,ret = 0;
	for(int i = 31;i>=0;i--){
		int u = x>>i&1;
		
		// 找对应位不一样的数，如果有则继续查找 
		if(son[p][!u]){
			p = son[p][!u];
			ret = ret * 2 + !u;
		// 退而求其次 
		}else{
			p = son[p][u];
			ret = ret * 2 + u; 
		}
	}
	return ret;
}

int main(){
	cin>>n;
	int res = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		insert(a[i]);
		int t = query(a[i]);
		res = max(res,t^a[i]);
		// ^是异或运算符 
	}
	cout<<res<<endl;
	return 0;
}
