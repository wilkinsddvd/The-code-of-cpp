#include<iostream>
#include<cstdio>
#include<cstring>
#define re register
#define FOR(i,l,r) for(re int i=l;i<=r;++i)
using namespace std;

int a[100001],ans[100001],tag[100001],m,n,k,l,t,cnt,x,y;

inline int in(){  
    char ch;  
    int a=0;  
    while(!(((ch=getchar())>='0')&&(ch<='9')));  
    a*=10;a+=ch-'0';  
    while(((ch=getchar())>='0')&&(ch<='9'))a*=10,a+=ch-'0';  
    return a;  
}

inline void out(int a){
    if(a>=10)out(a/10);
    putchar(a%10+'0');
}

inline int ls(int ss){
    return ss<<1;
}

inline int rs(int ss){
    return (ss<<1)|1;
}

inline void push_up(int k){
    ans[k]=ans[ls(k)]+ans[rs(k)];
}

inline void push_down(int i){
    if(tag[i]){
        tag[i]=0;
        tag[ls(i)]=1;
        tag[rs(i)]=1;
        ans[ls(i)]=0;
        ans[rs(i)]=0;
    }
}

inline void build(int p,int l,int r){
    if(l==r){
        ans[p]=1;
        return;
    }
    int mid=(l+r)>>1;
    build(ls(p),l,mid);
    build(rs(p),mid+1,r);
    push_up(p);
}

inline void update(int nl,int nr,int l,int r,int p){
    if(nl<=l&&r<=nr){
        tag[p]=1;
        ans[p]=0;
        return;
    }
    push_down(p);
    int mid=(l+r)>>1;
    if(nl<=mid) update(nl,nr,l,mid,ls(p));
    if(nr>mid) update(nl,nr,mid+1,r,rs(p));
    push_up(p);
}

int main(){
    n=in(),m=in();
    build(1,1,n+1);
    FOR(i,1,m){
        x=in(),y=in();
        update(x+1,y+1,1,n+1,1);
    }
    out(ans[1]);
    puts("");
}
