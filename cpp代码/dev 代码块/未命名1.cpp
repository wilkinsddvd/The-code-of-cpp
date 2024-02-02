#include<bits/stdc++.h>
#define Rg register
#define IL inline

using namespace std;

const int N = 3e4+5;

int n,tot,sum,col[N],dfn[N],low[N],top,sta[N],pos[N],block;

vector<int> v[N];

bool In[N];

struct node{
	int whe,id;
}a[N];

bool cmp(node A,node B){
	return A.whe<B.whe;
} 

IL void add(Rg int x,Rg int y){
	v[x].push_back(y);
}

IL int op(Rg int x){
	return x%2 == 0 ? x-1 : x+1;
}

IL int Sch(Rg int Val){
	Rg int l = 1, r=(n<<1),mid,Ans=0;
	if(Val <= a[l].whe) return l;
	if(Val >= a[r].whe) return r;
	while(l <= r){
		mid = l+r >> 1;
		if(Val <= a[mid].whe) Ans = mid, r= mid-1;
		else
			l = mid + 1;
	}
	return Ans;
}

IL void tarjan(Rg int x){
	In[x] = 1;
	dfn[x] = low[x] = ++tot;
	sta[++top] = x;
	for(Rg int i=0;i<v[x].size();i++){
		int u = v[x][i];
		if(!dfn[u]) tarjan(u),low[x] = min(low[x],low[u]);
		else if(In[u]) low[x] = min(low[x],dfn[u]);
	}
	if(dfn[x] == low[x]){
		sum++;
		int per = sta[top];
		while(per!=x)
			col[per] = sum,In[per] = 0,per = sta[--top];
		col[x] = sum,In[x] = 0,top--;
	}
}

void Build(int fro,int x,int y){
	if(x>y) return; 
	int l = pos[x],r = pos[y];
	if(l == r){
		for(Rg int i = x;i <= y;i++) 
			add(fro,op(a[i].id));
		return ;
	}
	for(Rg int i = x;i<=l*block;i++) add(fro,op(a[i].id));
	for(Rg int i = l+1;i<r;i++) add(fro,i+(n<<1));
	for(Rg int i = (r-1)*block+1;i<=y;i++) add(fro,op(a[i].id));
}

bool check(int H){
	for(Rg int i = 1;i<=(n<<1)+pos[n];i++) 
		col[i] = dfn[i] = low[i] = 0;
	for(Rg int i = 1;i<=(n<<1)+pos[n];i++) 
		v[i].clear();
	for(Rg int i=1;i<=(n<<1);i++)
		v[(n<<1) + pos[i]].push_back(op(a[i].id));
	tot = sum = top = 0;
	int l,r;
	for(Rg int i =1;i<=(n<<1);i++){
		l = Sch(a[i].whe-H+1);
		r = Sch(a[i].whe+H);
		Build(a[i].id,l,i-1);
		Build(a[i].id,i+1,r-1);
	}
	for(Rg int i=1;i<=(n<<1);i++) if(!dfn[i]) tarjan(i);
	for(Rg int i=1;i<=n;i++) 
		if(col[a[i].id] == col[op(a[i].id)])
			return 0;
	return 1;		
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(Rg int i=1;i<=n;i++){
		cin>>a[(i<<1)-1].whe >> a[i<<1].whe;
			a[(i<<1)-1].id = (i<<1)-1,a[i<<1].id = (i<<1);
	}
	sort(a+1,a+(n<<1),cmp);
	block = sqrt(n<<1);
	for(Rg int i=1;i<=(n<<1);i++)
		pos[i] = (i-1)/block+1;
	Rg int l =1,r = a[n<<1].whe -a[1].whe,mid,Ans=0;
	while(l <= r){
		mid = l + r >> 1;
		if(check(mid)) 
			Ans = mid, l = mid +1;
		else
			r = mid - 1;
	}
	cout<<Ans<<'\n';
	return 0; 
}
