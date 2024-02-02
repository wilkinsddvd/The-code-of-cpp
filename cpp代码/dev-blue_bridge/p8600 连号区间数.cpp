#include<bits/stdc++.h>
using namespace std;

inline int read(){
	int x = 0,f = 1;
	char ch = getchar();
	while(!isdigit(ch)){
		if(ch == '-')
			f = -1;
			ch = getchar();
	}
	while(isdigit(ch)){
		x = x*10 + ch - 48;
		ch = getchar();
	}
	return x*f;
}

int n,a[300050];

struct Seg_Tree
{
	int l,r;
	int tag,val,minv;
}t[1200050];

inline void Push_Up(int id){
	t[id].minv = min(t[id<<1].minv,t[id<<1|1].minv);
	t[id].val = (t[id].minv == t[id<<1].minv?t[id<<1].val:0) +(t[id].minv == t[id<<1|1].minv?t[id<<1|1].val:0);
}

inline void Build(int id,int l,int r)
{
	t[id].l = l;
	t[id].r = r;
	if(l == r){
		t[id].minv = l;
		t[id].val = 1;
		return;
	}
	int mid = (l+r)>>1;
	Build(id<<1,l,mid);
	Build(id<<1|1,mid+1,r);
	Push_Up(id);
}

inline void Push_Down(int id){
	if(t[id].tag){
		t[id<<1].tag += t[id].tag;
		t[id<<1|1].tag += t[id].tag;
		t[id<<1].minv += t[id].tag;
		t[id<<1|1].minv += t[id].tag;
		t[id].tag = 0;
	}
}

inline void Change(int id,int l,int r,int val){
	if(l <= t[id].l && t[id].r <= r){
		t[id].tag += val;
		t[id].minv += val;
		return;
	}
	Push_Down(id);
	int mid = (t[id].l + t[id].r)>>1;
	if(r <= mid)
		Change(id<<1,l,r,val);
	else if(l > mid)
		Change(id<<1|1,l,r,val);
	else{
		Change(id<<1,l,mid,val);
		Change(id<<1|1,l,mid+1,val);
	}
	Push_Up(id);
}

int st1[300050],st2[300050],top1,top2;

long long ans;

int main(){
	n = read();
	for(int i=1;i<=n;i++)
		a[i] = read();
	Build(1,1,n);
	for(int i=1;i<=n;i++){
		int p = 1;
		while(top1 && a[i] < a[st1[top1]]){
			Change(1,st1[top1-1]+1,p-1,a[st1[top1]]-a[i]);
			p = st1[top1];
			top1--;
		}
		p = i;
		while(top2 && a[i] > a[st2[top2]]){
			Change(1,st2[top2-1]+1,p-1,-a[st2[top2]]+a[i]);
			p = st2[top2];
			top2--;
		}
		st1[++top1] = st2[++top2] = i;
		ans += t[1].val;
	}
	cout<<ans<<endl;
	return 0;
}
