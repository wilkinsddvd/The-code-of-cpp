#include<iostream>
using namespace std;

typedef unsigned long long ull;

const int N = 100005,p=131;
ull h[N],p[N];
//h[k] 存储字符串前k个字母的哈希值
//p[k] 存储p^k mod 2^64

char str[N];
int n,m;

//计算子串 str[l~r] 的哈希值

ull get(int l,int r){
	return h[r] - h[l-1]*p[r-l+1];
} 

int main(){
	cin>>n>>m>>str+1;
	//初始化
	p[0] = 1;
	for(int i=1;i<=n;i++){
		h[i] = h[i-1] * p + str[i];
		p[i] = p[i-1] * p;
	} 
	while(m--){
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(get(l1,r1) == ger(l2,r2)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
