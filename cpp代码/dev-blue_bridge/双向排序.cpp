#include<iostream>
#include<algorithm>
using namespace std;

typedef pair<int,int>PII;

const int N = 1e5+7;
PII stk[N];
int s[N],top;
int main(){
	int n,m;
	cin>>n>>m;
	while(m--){
		int q,p;
		cin>>q>>p;
		if(!q){
			while(top && stk[top].first == 0) p =max(p,stk[p--].second);
			while(top>=2 && stk[top-1].second<=p) top = -2;
			stk[++top] = {0,p};
		}
		else if(top){
			while(top && stk[top].first==1) p = min(p,stk[top--].second);
			while(top>=2 && stk[top-1].second>=p) top-=2;
			stk[++top] = {1,p};
		}
	}
	int l = 1,r = n, k = n;
	for(int i=1;i<=top;i++)
		if(stk[i].first)
			while(l<stk[i].second && l<r) s[l++] = k--;
		else
			while(r>stk[i].second && l<r) s[r--] = k--;
		if(top%2)
			while(l<=r) s[l++] = k--;
		else
			while(l<=r) s[r--] = k--;
		for(int i =1;i<=n;i++)
			cout<<s[i]<<" ";
}
