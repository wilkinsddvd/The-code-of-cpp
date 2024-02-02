#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
#include<algorithm>
#define re register
#define FOR(i,l,r) for(re int i=l;i<=r;++i)
#define IT set<node>::iterator
using namespace std;

int n,m,x,y;

inline void in(re int &x){
    x=0;char c=getchar();
    while(c<'0'||c>'9'){
        c=getchar();
    }
    while(c<='9'&&c>='0'){
        x=(x<<1)+(x<<3)+(c^'0');
        c=getchar();
    }
}

inline void out(re int a){
    if(a>=10)out(a/10);
    putchar(a%10+'0');
}

struct node{
    int l,r;
    mutable int v;
    node(int L,int R=-1,int V=0):l(L),r(R),v(V) {}
    bool operator <(const node &o)const{
        return l<o.l;
    }
};

set<node> s;

inline IT split(re int pos){
    IT it=s.lower_bound(node(pos));
    if(it!=s.end()&&it->l==pos)
      return it;
    --it;
    int L=it->l;
    int R=it->r;
    int V=it->v;
    s.erase(it);
    s.insert(node(L,pos-1,V));
    return s.insert(node(pos,R,V)).first;
}

inline void assign_val(re int l,re int r,re int val=0){
    IT itr=split(r+1),itl=split(l);
    s.erase(itl,itr);
    s.insert(node(l,r,val));
}

inline int query(re int l,re int r){
    int res=0;
    IT itr=split(r+1),itl=split(l);
    for(;itl!=itr;++itl)
      res+=(itl->r-itl->l+1)*(itl->v);
    return res;
}

int main(){
    in(n),in(m);
    s.insert(node(0,n,1));
    FOR(i,1,m){
        in(x),in(y);
        assign_val(x,y,0);
    }
    out(query(0,n));
    puts("");
}
